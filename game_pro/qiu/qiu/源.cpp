#include <graphics.h>

#include <iostream>

int main() {

	initgraph(1280, 720);
	int x = 300;
	int y = 300;
	BeginBatchDraw();//双缓冲
	while (true)
	{
		ExMessage msg;  // 鼠标事件
		while (peekmessage(&msg)) // 拉取鼠标消息
		{
			if (msg.message==WM_MOUSEMOVE)  // 如果是移动事件
			{
				x = msg.x;  //更新x，y
				y = msg.y;
			}
		}
		cleardevice();//清空窗口
		solidcircle(x, y, 100); //x,y,r,绘制新的圆形
		FlushBatchDraw(); //双缓冲
	}
	EndBatchDraw(); //双缓冲
	return 0;
}