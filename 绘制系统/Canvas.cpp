#include "Canvas.h"

Canvas::Canvas()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	//�ļ������ڵ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;  //�������
		this->m_FileIsEmpty = true;  //��ʼ���ļ�Ϊ�ձ�־
		ifs.close();
		return;
	}

	//�ļ����ڣ���û�м�¼
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	Init_Shapes();
}

Canvas::~Canvas()
{
}

ExMessage* Canvas::Get_message()
{
	return &this->msg;
}

void Canvas::LMouseButtonDown(ExMessage* msg)
{
	//��¼��갴��ʱ������
	this->begx = msg->x;
	this->begy = msg->y;

	if (this->isMove)
	{
		this->isPress = false;
	}
	else
	{
		this->isPress = true;
	}

	cout << "mouseButtonDown" << endl;
}

void Canvas::LMouseButtonUp(ExMessage* msg)
{
	this->isPress = false;
	this->m_FileIsEmpty = false;
	this->isMove = false;

	if (l.GetType() == ShapeLine)
	{
		//����ֱ��
		Line* l = new Line(ShapeLine, this->begx, this->begy, msg->x, msg->y, this->l.GetColor(), this->l.Getline_Th());
		this->SetVector(l);
	}
	else if (l.GetType() == ShapeRect)
	{
		//���Ծ���
		Rect* r = new Rect(ShapeRect, this->begx, this->begy, msg->x, msg->y, this->l.GetColor(), this->l.Getline_Th());
		this->SetVector(r);
	}
	else if (l.GetType() == ShapeElliptic)
	{
		//������Բ
		Elliptic* e=new Elliptic(ShapeElliptic, this->begx, this->begy, msg->x, msg->y, this->l.GetColor(), this->l.Getline_Th());
		this->SetVector(e);
	}
	else if (l.GetType() == ShapeFloodRect)
	{
		//����������
		FloodRect* fr = new FloodRect(ShapeFloodRect, this->begx, this->begy, msg->x, msg->y, this->l.GetColor(), this->l.Getline_Th());
		this->SetVector(fr);
	}
	else if (l.GetType() == ShapeFloodElliptic)
	{
		//���������Բ
		FloodElliptic* fe = new FloodElliptic(ShapeFloodElliptic, this->begx, this->begy, msg->x, msg->y, this->l.GetColor(), this->l.Getline_Th());
		this->SetVector(fe);
	}

	cout << "mouseButtonUp" << this->Shapes.size() << endl;
}

void Canvas::mouseMove(ExMessage* msg)
{
	//�����������²��ƶ����Ϳ�ʼ����
	if (this->isPress)
	{

		setlinecolor(WHITE);
		setfillcolor(WHITE);
		fillrectangle(0, 70, 980, 750);


		switch(l.GetType())
		{
		case ShapeLine:
			//����ֱ��
			setlinecolor(this->l.GetColor());
			setlinestyle(PS_SOLID, this->l.Getline_Th());
			line(this->begx, this->begy, msg->x, msg->y);
			break;
		case ShapeRect:
			//���Ծ���
			setlinecolor(this->l.GetColor());
			setlinestyle(PS_SOLID, this->l.Getline_Th());
			rectangle(this->begx, this->begy, msg->x, msg->y);
			break;
		case ShapeElliptic:
			//������Բ
			setlinecolor(this->l.GetColor());
			setlinestyle(PS_SOLID, this->l.Getline_Th());
			ellipse(this->begx, this->begy, msg->x, msg->y);
			break;
		case ShapeFloodRect:
			//����������
			setfillcolor(this->l.GetColor());
			setfillstyle(BS_SOLID);
			fillrectangle(this->begx, this->begy, msg->x, msg->y);
			break;
		case ShapeFloodElliptic:
			//���������Բ
			setfillcolor(this->l.GetColor());
			setfillstyle(BS_SOLID);
			fillellipse(this->begx, this->begy, msg->x, msg->y);
			break;
		}
	}
	else if(this->isMove)
	{
		setlinecolor(WHITE);
		setfillcolor(WHITE);
		fillrectangle(0, 70, 980, 750);

		int x1_sub = 0, y1_sub = 0, x2_sub = 0, y2_sub = 0;
		int cur_type = 0;
		COLORREF cur_color = 0;
		int cur_lineTh = 0;

		for (int i = 0; i < this->GetVectorSize(); i++)
		{
			if (this->begx > this->GetVector(i)->GetX1() && this->begx < this->GetVector(i)->GetX2() && this->begy > this->GetVector(i)->GetY1() && this->begy < this->GetVector(i)->GetY2())
			{
				x1_sub = this->begx - this->GetVector(i)->GetX1();
				y1_sub = this->begx - this->GetVector(i)->GetY1();
				x2_sub = this->GetVector(i)->GetX2() - this->begx;
				y2_sub = this->GetVector(i)->GetY2() - this->begx;
				cur_type = this->GetVector(i)->GetType();
				cur_color = this->GetVector(i)->GetColor();
				cur_lineTh = this->GetVector(i)->Getline_Th();
				break;
			}
		}

		if (cur_type == ShapeRect)
		{
			setlinecolor(cur_color);
			setlinestyle(PS_SOLID, cur_lineTh);
			rectangle(msg->x - x1_sub, msg->y - y1_sub, msg->x + x2_sub, msg->y + y2_sub);
		}
	}

	cout << "mouseMove" << endl;
}

void Canvas::SetVector(Line* l)
{
	this->Shapes.push_back(l);
}

Line* Canvas::GetVector(int i)
{
	return this->Shapes[i];
}

int Canvas::GetVectorSize()
{
	return this->Shapes.size();
}

void Canvas::Init_Shapes()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int type;
	int x1;
	int y1;
	int x2;
	int y2;
	COLORREF color;
	int line_Th;
	while (ifs >> type && ifs >> x1 && ifs >> y1 && ifs >> x2 && ifs >> y2 && ifs >> color && ifs >> line_Th)
	{
		Line* shape = nullptr;
		if (type == ShapeLine)
		{
			shape = new Line(type, x1, y1, x2, y2, color, line_Th);
		}
		else if (type == ShapeRect)
		{
			shape = new Rect(type, x1, y1, x2, y2, color, line_Th);
		}
		else if (type == ShapeElliptic)
		{
			shape = new Elliptic(type, x1, y1, x2, y2, color, line_Th);
		}
		else if (type == ShapeFloodElliptic)
		{
			shape = new FloodElliptic(type, x1, y1, x2, y2, color, line_Th);
		}
		else if (type == ShapeFloodRect)
		{
			shape = new FloodRect(type, x1, y1, x2, y2, color, line_Th);
		}

		//�����������
		this->SetVector(shape);
	}
	ifs.close();
}

void Canvas::SetReStack(Line* l)
{
	this->Restore_stack.push_back(l);
}

Line* Canvas::GetReStack(int i)
{
	return this->Restore_stack[i];
}

int Canvas::GetReStackSize()
{
	return this->Restore_stack.size();
}

void Canvas::SetWindow()
{
	//��������
	initgraph(1080, 750, EX_SHOWCONSOLE);

	//���ñ���
	setbkcolor(RGB(150, 150, 150));
	cleardevice();

	//���ƻ�ͼ��
	setfillcolor(WHITE);
	fillrectangle(0, 70, 980, 750);

	//������ɫѡ������
	setfillcolor(RGB(195, 195, 195));
	fillrectangle(980, 70, 1072, 750);

	//����һ����
	setlinecolor(WHITE);
	line(0, 62, 1072, 62);
	line(1072, 62, 1072, 750);

	//��������
	settextcolor(WHITE);
	settextstyle(20, 0, _T("����"));
	outtextxy(1000, 100, _T("��"));
	outtextxy(1025, 100, _T("ɫ"));
	outtextxy(120, 10, _T("��"));
	outtextxy(120, 30, _T("��"));

	//������ɫѡ��ģ��
	setfillcolor(RED);
	fillcircle(1026, 170, 30);
	setfillcolor(BLACK);
	fillcircle(1026, 250, 30);
	setfillcolor(GREEN);
	fillcircle(1026, 330, 30);
	setfillcolor(BLUE);
	fillcircle(1026, 410, 30);
	setfillcolor(CYAN);
	fillcircle(1026, 490, 30);
	setfillcolor(YELLOW);
	fillcircle(1026, 570, 30);
	setfillcolor(WHITE);
	fillcircle(1026, 650, 30);

	//������
	setlinecolor(RGB(10, 10, 10));
	setlinestyle(PS_SOLID, 1);
	rectangle(155, 15, 205, 45); //����
	rectangle(215, 15, 265, 45); //ֱ��
	rectangle(275, 15, 325, 45); //Բ��
	rectangle(335, 15, 385, 45); //����
	rectangle(395, 15, 445, 45); //���
	rectangle(455, 15, 505, 45); //����
	rectangle(515, 15, 565, 45); //����
	rectangle(575, 15, 625, 45); //�ر�
	rectangle(635, 15, 735, 45); //������
	rectangle(745, 15, 845, 45); //�����Բ
	rectangle(862, 15, 882, 45); //�߿�Ϊ2
	rectangle(892, 15, 912, 45); //�߿�Ϊ5
	rectangle(922, 15, 952, 45); //�߿�Ϊ10
	rectangle(962, 15, 1012, 45); //����
	rectangle(1022, 15, 1072, 45); //�ָ�

	settextstyle(18, 11, _T("����"));
	outtextxy(160, 23, _T("����"));
	outtextxy(220, 23, _T("ֱ��"));
	outtextxy(280, 23, _T("Բ��"));
	outtextxy(340, 23, _T("����"));
	outtextxy(400, 23, _T("���"));
	outtextxy(460, 23, _T("����"));
	outtextxy(520, 23, _T("����"));
	outtextxy(580, 23, _T("�ر�"));
	outtextxy(640, 23, _T("������"));
	outtextxy(750, 23, _T("�����Բ"));
	outtextxy(867, 23, _T("2"));
	outtextxy(897, 23, _T("5"));
	outtextxy(927, 23, _T("10"));
	outtextxy(967, 23, _T("����"));
	outtextxy(1027, 23, _T("�ָ�"));

}

void Canvas::HelpUser()
{
	setlinecolor(RGB(150, 150, 150));
	rectangle(300, 200, 800, 450);
	setfillcolor(RGB(150, 150, 150));
	fillrectangle(300, 200, 800, 450);
	settextcolor(WHITE);
	settextstyle(20, 0, _T("����"));
	outtextxy(320, 220, _T("1.��ͼ���Ϊ���ߺ���ɫ������������"));
	outtextxy(320, 245, _T("2.�������й�ѡ������Ĺ��� ����ѡ��"));
	outtextxy(320, 270, _T("3.�������Ҳ���������ѡ��Ϊ�������"));
	outtextxy(320, 295, _T("4.��ɫѡ���ܵ������л�,Ĭ����ɫΪ��ɫ"));
	outtextxy(320, 320, _T("5.ѡ����ɫΪ����ɫ����Ϊ��Ƥ��"));
	outtextxy(320, 345, _T("6.�����ڡ�test.txt����Ĭ�ϼ��ء�test.txt��"));
	outtextxy(320, 370, _T("7.����ա�Ϊ���text.txt�ļ�,��ɾ��������������"));
	outtextxy(320, 395, _T("8.��ϵͳ�������һ�ε�����,����Ҫ���»��ƣ���"));
	outtextxy(320, 420, _T("  ��ѡ�����"));


	setlinecolor(RGB(10, 10, 10));
	setlinestyle(PS_SOLID, 1);
	rectangle(10, 15, 110, 45); //�رհ���
	settextstyle(18, 11, _T("����"));
	outtextxy(15, 23, _T("�رհ���"));

}

void Canvas::ShutDown()
{
	exit(0);
}

void Canvas::saveToFile()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->GetVectorSize(); i++)
	{
		ofs << this->GetVector(i)->GetType() << " "
			<< this->GetVector(i)->GetX1() << " "
			<< this->GetVector(i)->GetY1() << " "
			<< this->GetVector(i)->GetX2() << " "
			<< this->GetVector(i)->GetY2() << " "
			<< this->GetVector(i)->GetColor() << " "
			<< this->GetVector(i)->Getline_Th() << endl;
	}
	ofs.close();
}

void Canvas::ClearFile()
{
	ofstream ofs(FILENAME, ios::trunc);
	ofs.close();
	if (this->GetVectorSize())
	{
		vector<Line*>().swap(this->Shapes); //��ճ���ջ
		vector<Line*>().swap(this->Restore_stack); //��ջָ�ջ
		this->m_FileIsEmpty = true;
	}
	setfillcolor(WHITE);
	setlinecolor(WHITE);
	clearrectangle(0, 70, 980, 750);
	fillrectangle(0, 70, 980, 750);

	cout << "��ճɹ�" << endl;
}

void Canvas::Undo_operation()
{
	if (this->GetVectorSize())
	{
		cout << this->GetVectorSize() << " " << this->GetReStackSize() << endl;

		//��������ͼ��ѹ��ָ�ջ
		this->SetReStack(this->Shapes.back());

		cout << this->GetVectorSize() << " " << this->GetReStackSize() << endl;

		//��������ͼ�δӳ���ջ�е���
		this->Shapes.pop_back();

		cout << this->GetVectorSize() << " " << this->GetReStackSize() << endl;

		setfillcolor(WHITE);
		setlinecolor(WHITE);
		clearrectangle(0, 70, 980, 750);
		fillrectangle(0, 70, 980, 750);

		for (int i = 0; i < this->GetVectorSize(); i++)
		{
			this->GetVector(i)->line_draw();
		}

		cout << this->GetVectorSize() << " " << this->GetReStackSize() << endl;
	}
}

void Canvas::Restore_operation()
{
	if (this->GetReStackSize())
	{
		cout << this->GetVectorSize() << " " << this->GetReStackSize() << endl;

		//�����ָ�ͼ��ѹ�볷��ջ
		this->SetVector(this->Restore_stack.back());

		cout << this->GetVectorSize() << " " << this->GetReStackSize() << endl;

		//�����ָ�ͼ�δӻָ�ջ�е���
		this->Restore_stack.pop_back();

		cout << this->GetVectorSize() << " " << this->GetReStackSize() << endl;

		setfillcolor(WHITE);
		setlinecolor(WHITE);
		clearrectangle(0, 70, 980, 750);
		fillrectangle(0, 70, 980, 750);

		for (int i = 0; i < this->GetVectorSize(); i++)
		{

			this->GetVector(i)->line_draw();

		}

		cout << this->GetVectorSize() << " " << this->GetReStackSize() << endl;
	}
}

void Canvas::painting()
{
	BeginBatchDraw();  //˫���壬��ֹ����
	while (true)
	{
		//����
		for (int i = 0; i < this->GetVectorSize(); i++)
		{

			this->GetVector(i)->line_draw();

		}

		while (peekmessage(this->Get_message(), EX_MOUSE))
		{
			switch (this->Get_message()->message)
			{
				case WM_LBUTTONDOWN:
					//�����������
					if (this->Get_message()->x >= 155 && this->Get_message()->x <= 205 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->HelpUser();
					}
					//��ա�����������
					if (this->Get_message()->x >= 10 && this->Get_message()->x <= 110 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						//������ݼ�����
						setfillcolor(WHITE);
						setlinecolor(WHITE);
						clearrectangle(300, 200, 800, 450);
						fillrectangle(300, 200, 800, 450);

						//�����ť
						setfillcolor(RGB(150, 150, 150));
						setlinecolor(RGB(150, 150, 150));
						clearrectangle(10, 15, 110, 45);
						fillrectangle(10, 15, 110, 45);
					}
					//�����ֱ�ߡ�
					if (this->Get_message()->x >= 215 && this->Get_message()->x <= 265 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->l.SetType(ShapeLine);
					}
					//�����Բ�Ρ�
					if (this->Get_message()->x >= 275 && this->Get_message()->x <= 325 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->l.SetType(ShapeElliptic);
					}
					//��������Ρ�
					if (this->Get_message()->x >= 335 && this->Get_message()->x <= 385 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->l.SetType(ShapeRect);
					}
					//�������ա�
					if (this->Get_message()->x >= 395 && this->Get_message()->x <= 445 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->ClearFile();
					}
					//��������桰
					if (this->Get_message()->x >= 455 && this->Get_message()->x <= 505 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->saveToFile();
					}
					//��������ء�
					if (this->Get_message()->x >= 515 && this->Get_message()->x <= 565 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->Init_Shapes();
					}
					//������رա�
					if (this->Get_message()->x >= 575 && this->Get_message()->x <= 625 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->ShutDown();
					}
					//����������Ρ�
					if (this->Get_message()->x >= 635 && this->Get_message()->x <= 735 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->l.SetType(ShapeFloodRect);
					}
					//����������Բ��
					if (this->Get_message()->x >= 745 && this->Get_message()->x <= 845 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->l.SetType(ShapeFloodElliptic);
					}
					//������߿�
					if (this->Get_message()->x >= 862 && this->Get_message()->x <= 882 && this->Get_message()->y >= 20 && this->Get_message()->y <= 40)
					{
						this->l.Setline_Th(2);
					}
					if (this->Get_message()->x >= 892 && this->Get_message()->x <= 912 && this->Get_message()->y >= 20 && this->Get_message()->y <= 40)
					{
						this->l.Setline_Th(5);
					}
					if (this->Get_message()->x >= 922 && this->Get_message()->x <= 952&& this->Get_message()->y >= 20 && this->Get_message()->y <= 40)
					{
						this->l.Setline_Th(10);
					}
					//�����������
					if (this->Get_message()->x >= 962 && this->Get_message()->x <= 1012 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->Undo_operation();
					}
					//������ָ���
					if (this->Get_message()->x >= 1022 && this->Get_message()->x <= 1072 && this->Get_message()->y >= 15 && this->Get_message()->y <= 45)
					{
						this->Restore_operation();
					}
					//�������ɫ��
					if (this->Get_message()->x >= 996 && this->Get_message()->x <= 1056 && this->Get_message()->y >= 140 && this->Get_message()->y <= 200)
					{
						this->l.SetColor(RED);
					}
					//�������ɫ��
					if (this->Get_message()->x >= 996 && this->Get_message()->x <= 1056 && this->Get_message()->y >= 220 && this->Get_message()->y <= 280)
					{
						this->l.SetColor(BLACK);
					}
					//�������ɫ��
					if (this->Get_message()->x >= 996 && this->Get_message()->x <= 1056 && this->Get_message()->y >= 300 && this->Get_message()->y <= 360)
					{
						this->l.SetColor(GREEN);
					}
					//�������ɫ��
					if (this->Get_message()->x >= 996 && this->Get_message()->x <= 1056 && this->Get_message()->y >= 380 && this->Get_message()->y <= 440)
					{
						this->l.SetColor(BLUE);
					}
					//�������ɫ��
					if (this->Get_message()->x >= 996 && this->Get_message()->x <= 1056 && this->Get_message()->y >= 460 && this->Get_message()->y <= 520)
					{
						this->l.SetColor(CYAN);
					}
					//�������ɫ��
					if (this->Get_message()->x >= 996 && this->Get_message()->x <= 1056 && this->Get_message()->y >= 540 && this->Get_message()->y <= 600)
					{
						this->l.SetColor(YELLOW);
					}
					//�������ɫ"
					if (this->Get_message()->x >= 996 && this->Get_message()->x <= 1056 && this->Get_message()->y >= 620 && this->Get_message()->y <= 680)
					{
						this->l.SetColor(WHITE);
					}

					if (this->Get_message()->x >= 0 && this->Get_message()->x <= 980 && this->Get_message()->y >= 70 && this->Get_message()->y <= 750)
					{
						this->LMouseButtonDown(this->Get_message());
					}
					break;
				case WM_LBUTTONUP:
					if (this->Get_message()->x >= 0 && this->Get_message()->x <= 980 && this->Get_message()->y >= 70 && this->Get_message()->y <= 750)
					{
						this->LMouseButtonUp(this->Get_message());
					}
					break;
				case WM_MOUSEMOVE:
					if (this->Get_message()->x >= 0 && this->Get_message()->x <= 980 && this->Get_message()->y >= 70 && this->Get_message()->y <= 750)
					{
						this->mouseMove(this->Get_message());
					}
					break;
				case WM_RBUTTONDOWN:
					this->isMove = true;
					break;
			}
		}
		FlushBatchDraw();
	}
	EndBatchDraw();
}
