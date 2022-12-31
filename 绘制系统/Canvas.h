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

	ExMessage msg;  //消息结构体

	int begx;  //鼠标按下时x坐标
	int begy;  //鼠标按下时y坐标

	bool isPress = false;  //鼠标是否按下
	bool m_FileIsEmpty;  //标志文件是否为空
	bool isMove = false;  //是否需要移动图形

	vector<Line*> Shapes;  //存储图形，同时也是撤销栈
	vector<Line*> Restore_stack;  //恢复栈

public:
	Canvas();
	~Canvas();

	ExMessage* Get_message();

	void LMouseButtonDown(ExMessage* msg);
	void LMouseButtonUp(ExMessage* msg);
	void mouseMove(ExMessage* msg);

	void SetVector(Line* l); //将图形存进数组
	Line* GetVector(int i); //得到其中一个图形
	int GetVectorSize(); //得到数组大小

	void Init_Shapes(); //初始化数组

	void SetReStack(Line* l);
	Line* GetReStack(int i);
	int GetReStackSize();

	void SetWindow();
	void HelpUser();
	void ShutDown();
	void saveToFile(); //保存文件
	void ClearFile(); //清空文件
	void Undo_operation(); //撤销
	void Restore_operation();

	void painting();
};

