#include <graphics.h>
#include <Windows.h>

int main(void) {
	initgraph(600, 400);
	loadimage(0, _T("bg.png"));
	settextcolor(RGB(255, 255, 0));
	settextstyle(33, 0, _T("΢���ź�"));
	rectangle(300, 40, 550, 80);
	outtextxy(310, 45, _T("1.��վ404����"));
	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, _T("2.��վ�۸Ĺ���"));
	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, _T("3.��վ�޸�����"));
	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, _T("4.�鿴������¼"));
	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, _T("5.�˳�"));
	system("pause");
	closegraph();
	return 0;
} 