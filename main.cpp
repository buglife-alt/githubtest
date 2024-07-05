#include <graphics.h>
#include <Windows.h>

int main(void) {
	initgraph(600, 400);
	loadimage(0, _T("bg.png"));
	settextcolor(RGB(255, 255, 0));
	settextstyle(33, 0, _T("Î¢ÈíÑÅºÚ"));
	rectangle(300, 40, 550, 80);
	outtextxy(310, 45, _T("1.ÍøÕ¾404¹¥»÷"));
	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, _T("2.ÍøÕ¾´Û¸Ä¹¥»÷"));
	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, _T("3.ÍøÕ¾ĞŞ¸´¹¤¾ß"));
	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, _T("4.²é¿´¹¥»÷¼ÇÂ¼"));
	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, _T("5.ÍË³ö"));
	system("pause");
	closegraph();
	return 0;
} 