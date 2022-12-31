#pragma once
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include "Line.h"
#include "Rect.h"
#include "Elliptic.h"
#include "FloodRect.h"
#include "FloodElliptic.h"
#define FILENAME "test.txt"
using namespace std;

class Canvas
{
private:
	Line l;

	ExMessage msg;  //��Ϣ�ṹ��

	int begx;  //��갴��ʱx����
	int begy;  //��갴��ʱy����

	bool isPress = false;  //����Ƿ���
	bool m_FileIsEmpty;  //��־�ļ��Ƿ�Ϊ��
	bool isMove = false;  //�Ƿ���Ҫ�ƶ�ͼ��

	vector<Line*> Shapes;  //�洢ͼ�Σ�ͬʱҲ�ǳ���ջ
	vector<Line*> Restore_stack;  //�ָ�ջ

public:
	Canvas();
	~Canvas();

	ExMessage* Get_message();

	void LMouseButtonDown(ExMessage* msg);
	void LMouseButtonUp(ExMessage* msg);
	void mouseMove(ExMessage* msg);

	void SetVector(Line* l); //��ͼ�δ������
	Line* GetVector(int i); //�õ�����һ��ͼ��
	int GetVectorSize(); //�õ������С

	void Init_Shapes(); //��ʼ������

	void SetReStack(Line* l);
	Line* GetReStack(int i);
	int GetReStackSize();

	void SetWindow();
	void HelpUser();
	void ShutDown();
	void saveToFile(); //�����ļ�
	void ClearFile(); //����ļ�
	void Undo_operation(); //����
	void Restore_operation();

	void painting();
};

