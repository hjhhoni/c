#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100
#define MAX_ISBN_LENGTH 20

// ����ͼ��ṹ��
typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char isbn[MAX_ISBN_LENGTH];
    int year;
} Book;

// ȫ��ͼ�������ͼ������
Book books[MAX_BOOKS];
int bookCount = 0;

// ���ư�ť
void drawButton(int x, int y, int width, int height, const char* text) {
    setfillcolor(LIGHTGRAY);
    fillrectangle(x, y, x + width, y + height);
    settextcolor(BLACK);
    settextstyle(20, 0, _T("����"));
    int tx = x + (width - textwidth(text)) / 2;
    int ty = y + (height - textheight(text)) / 2;
    outtextxy(tx, ty, text);
}

// ���ͼ�麯��
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        MessageBox(GetHWnd(), _T("ͼ����������޷���Ӹ���ͼ�顣"), _T("��ʾ"), MB_OK);
        return;
    }

    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char isbn[MAX_ISBN_LENGTH];
    int year;

    InputBox(title, MAX_TITLE_LENGTH, _T("����������:"));
    InputBox(author, MAX_AUTHOR_LENGTH, _T("����������:"));
    InputBox(isbn, MAX_ISBN_LENGTH, _T("������ ISBN:"));
    InputBox((char*)&year, sizeof(int), _T("������������:"));

    strcpy(books[bookCount].title, title);
    strcpy(books[bookCount].author, author);
    strcpy(books[bookCount].isbn, isbn);
    books[bookCount].year = year;
    bookCount++;

    MessageBox(GetHWnd(), _T("ͼ����ӳɹ���"), _T("��ʾ"), MB_OK);
}

// ��ʾͼ���б���
void displayBooks() {
    if (bookCount == 0) {
        MessageBox(GetHWnd(), _T("ͼ���Ϊ�ա�"), _T("��ʾ"), MB_OK);
        return;
    }

    char info[1024] = "";
    for (int i = 0; i < bookCount; i++) {
        char temp[256];
        sprintf(temp, "����: %s\n����: %s\nISBN: %s\n�������: %d\n------------------------\n",
            books[i].title, books[i].author, books[i].isbn, books[i].year);
        strcat(info, temp);
    }
    MessageBox(GetHWnd(), info, _T("ͼ���б�"), MB_OK);
}

// ����ͼ�麯��
void findBook() {
    char searchISBN[MAX_ISBN_LENGTH];
    InputBox(searchISBN, MAX_ISBN_LENGTH, _T("������Ҫ���ҵ�ͼ��� ISBN:"));

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].isbn, searchISBN) == 0) {
            char info[256];
            sprintf(info, "�ҵ�ͼ��:\n����: %s\n����: %s\nISBN: %s\n�������: %d",
                books[i].title, books[i].author, books[i].isbn, books[i].year);
            MessageBox(GetHWnd(), info, _T("���ҽ��"), MB_OK);
            return;
        }
    }

    MessageBox(GetHWnd(), _T("δ�ҵ���ͼ�顣"), _T("���ҽ��"), MB_OK);
}

// ɾ��ͼ�麯��
void deleteBook() {
    char deleteISBN[MAX_ISBN_LENGTH];
    InputBox(deleteISBN, MAX_ISBN_LENGTH, _T("������Ҫɾ����ͼ��� ISBN:"));

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].isbn, deleteISBN) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            MessageBox(GetHWnd(), _T("ͼ��ɾ���ɹ���"), _T("��ʾ"), MB_OK);
            return;
        }
    }

    MessageBox(GetHWnd(), _T("δ�ҵ���ͼ�飬�޷�ɾ����"), _T("��ʾ"), MB_OK);
}

// ������
int main() {
    initgraph(640, 480);  // ��ʼ��ͼ�δ���
    setbkcolor(WHITE);
    cleardevice();

    while (1) {
        // ���ư�ť
        drawButton(100, 100, 200, 50, "���ͼ��");
        drawButton(100, 200, 200, 50, "��ʾͼ���б�");
        drawButton(100, 300, 200, 50, "����ͼ��");
        drawButton(100, 400, 200, 50, "ɾ��ͼ��");

        // ���������Ϣ
        MOUSEMSG msg;
        while (MouseHit()) {
            msg = getmouse();
            if (msg.uMsg == WM_LBUTTONDOWN) {
                if (msg.x >= 100 && msg.x <= 300 && msg.y >= 100 && msg.y <= 150) {
                    addBook();
                }
                else if (msg.x >= 100 && msg.x <= 300 && msg.y >= 200 && msg.y <= 250) {
                    displayBooks();
                }
                else if (msg.x >= 100 && msg.x <= 300 && msg.y >= 300 && msg.y <= 350) {
                    findBook();
                }
                else if (msg.x >= 100 && msg.x <= 300 && msg.y >= 400 && msg.y <= 450) {
                    deleteBook();
                }
            }
        }
    }

    closegraph();  // �ر�ͼ�δ���
    return 0;
}