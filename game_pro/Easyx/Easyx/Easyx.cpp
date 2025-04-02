// Easyx.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
#include <easyx.h>
#include <stdio.h>
#define PI 3.14

int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);

	POINT pts[] = { {50, 200}, {200, 200}, {200, 50} };
	polygon(pts, 3);
	getchar();
	closegraph();
	return 0;
	
}



