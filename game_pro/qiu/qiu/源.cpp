#include <graphics.h>

#include <iostream>

int main() {

	initgraph(1280, 720);
	int x = 300;
	int y = 300;
	BeginBatchDraw();//˫����
	while (true)
	{
		ExMessage msg;  // ����¼�
		while (peekmessage(&msg)) // ��ȡ�����Ϣ
		{
			if (msg.message==WM_MOUSEMOVE)  // ������ƶ��¼�
			{
				x = msg.x;  //����x��y
				y = msg.y;
			}
		}
		cleardevice();//��մ���
		solidcircle(x, y, 100); //x,y,r,�����µ�Բ��
		FlushBatchDraw(); //˫����
	}
	EndBatchDraw(); //˫����
	return 0;
}