#include <easyx.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100
#define MAX_ISBN_LENGTH 20

// 定义图书结构体
typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char isbn[MAX_ISBN_LENGTH];
    int year;
} Book;

Book books[MAX_BOOKS];
int bookCount = 0;

// 绘制按钮
void drawButton(int x, int y, int width, int height, const char* text) {
    setfillcolor(LIGHTGRAY);
    fillrectangle(x, y, x + width, y + height);
    settextcolor(BLACK);
    settextstyle(20, 0, _T("宋体"));
    int tx = x + (width - textwidth(text)) / 2;
    int ty = y + (height - textheight(text)) / 2;
    outtextxy(tx, ty, text);
}

// 添加图书
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        MessageBox(GetHWnd(), _T("图书库已满，无法添加更多图书。"), _T("提示"), MB_OK);
        return;
    }
    Book newBook;
    InputBox(newBook.title, MAX_TITLE_LENGTH, _T("请输入书名:"));
    InputBox(newBook.author, MAX_AUTHOR_LENGTH, _T("请输入作者:"));
    InputBox(newBook.isbn, MAX_ISBN_LENGTH, _T("请输入ISBN:"));
    InputBox((char*)&newBook.year, sizeof(int), _T("请输入出版年份:"));
    books[bookCount++] = newBook;
    MessageBox(GetHWnd(), _T("图书添加成功！"), _T("提示"), MB_OK);
}

// 显示图书列表
void displayBooks() {
    if (bookCount == 0) {
        MessageBox(GetHWnd(), _T("图书库为空。"), _T("提示"), MB_OK);
        return;
    }
    char info[1024] = "";
    for (int i = 0; i < bookCount; i++) {
        char temp[256];
        sprintf(temp, "书名: %s\n作者: %s\nISBN: %s\n出版年份: %d\n------------------------\n",
                books[i].title, books[i].author, books[i].isbn, books[i].year);
        strcat(info, temp);
    }
    MessageBox(GetHWnd(), info, _T("图书列表"), MB_OK);
}

// 查找图书
void findBook() {
    char searchISBN[MAX_ISBN_LENGTH];
    InputBox(searchISBN, MAX_ISBN_LENGTH, _T("请输入要查找的图书的ISBN:"));
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].isbn, searchISBN) == 0) {
            char info[256];
            sprintf(info, "找到图书:\n书名: %s\n作者: %s\nISBN: %s\n出版年份: %d",
                    books[i].title, books[i].author, books[i].isbn, books[i].year);
            MessageBox(GetHWnd(), info, _T("查找结果"), MB_OK);
            return;
        }
    }
    MessageBox(GetHWnd(), _T("未找到该图书。"), _T("查找结果"), MB_OK);
}

// 删除图书
void deleteBook() {
    char deleteISBN[MAX_ISBN_LENGTH];
    InputBox(deleteISBN, MAX_ISBN_LENGTH, _T("请输入要删除的图书的ISBN:"));
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].isbn, deleteISBN) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            MessageBox(GetHWnd(), _T("图书删除成功！"), _T("提示"), MB_OK);
            return;
        }
    }
    MessageBox(GetHWnd(), _T("未找到该图书，无法删除。"), _T("提示"), MB_OK);
}

int main() {
    initgraph(640, 480);
    setbkcolor(WHITE);
    cleardevice();

    while (1) {
        drawButton(100, 100, 200, 50, "添加图书");
        drawButton(100, 200, 200, 50, "显示图书列表");
        drawButton(100, 300, 200, 50, "查找图书");
        drawButton(100, 400, 200, 50, "删除图书");

        MOUSEMSG msg;
        while (MouseHit()) {
            msg = getmouse();
            if (msg.uMsg == WM_LBUTTONDOWN) {
                if (msg.x >= 100 && msg.x <= 300 && msg.y >= 100 && msg.y <= 150) {
                    addBook();
                } else if (msg.x >= 100 && msg.x <= 300 && msg.y >= 200 && msg.y <= 250) {
                    displayBooks();
                } else if (msg.x >= 100 && msg.x <= 300 && msg.y >= 300 && msg.y <= 350) {
                    findBook();
                } else if (msg.x >= 100 && msg.x <= 300 && msg.y >= 400 && msg.y <= 450) {
                    deleteBook();
                }
            }
        }
    }

    closegraph();
    return 0;
}