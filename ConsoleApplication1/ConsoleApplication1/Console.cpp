#include <stdio.h>
#include <conio.h>
#include "console.h"
#include <string>
#include <iostream>
#include <Windows.h>
using namespace std;

#define MAUNEN 159
#define MAUCHU 7
#define SCREEN_W  120
#define SCREEEN_H 30

int inputKey()
{
	if (_kbhit())
	{
		int key = _getch();

		if (key == 224)	// special key
		{
			key = _getch();
			return key + 1000;
		}

		return key;
	}
	else
	{
		return key_none;
	}

	return key_none;
}
//-------------------------Screen-------------------------
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;
	HANDLE	hConsoleOut;
	COORD	Home = { 0,0 };
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut, ' ', csbiInfo.dwSize.X * csbiInfo.dwSize.Y, Home, &dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
}
//screen: goto [x,y]
void gotoXY(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//screen: get [x]
int whereX()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.X;
	return -1;
}


//screen: get [y]
int whereY()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.Y;
	return -1;
}
void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void SetScreenBufferSize1(int width, int height)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD NewSize;
	NewSize.X = width;
	NewSize.Y = height;

	SetConsoleScreenBufferSize(hStdout, NewSize);
}

void SetWindowSize(int width, int height)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	SMALL_RECT WindowSize;
	WindowSize.Top = 0;
	WindowSize.Left = 0;
	WindowSize.Right = width;
	WindowSize.Bottom = height;

	SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}

enum class keypressed { UP, DOWN, ENTER, EXCEPT };
void vevien(int x, int y, int w, int h) {
	
}
keypressed key(int z)
{
	if (z == 224) {
		char k = _getch();
		if (k == 72) return keypressed::UP;
		if (k == 80) return keypressed::DOWN;
		else return keypressed::EXCEPT;
	}
	else if (z == 13) return keypressed::ENTER;
	else return keypressed::EXCEPT;
}
int menu0(wstring* s, int n, int vt)
{
	int tt = vt;
	int* color = new int[n];
	while (1) {
		for (int i = 0; i < n; i++) //update color
			if (i == tt) color[i] = MAUNEN; else color[i] = MAUCHU;
		vevien(0, 0, 120 / 2, 30); //render
		for (int i = 0; i < n; i++) {
			gotoXY(2, i + 1);
			TextColor(color[i]);
			wcout << s[i];
		}
		int z = _getch();
		keypressed k = key(z);
		switch (k) { //get key
		case keypressed::UP: {
			if (tt > vt) tt--; else tt = n - 1;  break;
		}
		case keypressed::DOWN: {
			if (tt < n - 1) tt++; else tt = vt; break;
		}
		case keypressed::ENTER: {
			if (tt == n - 1) TextColor(0);
			return tt - vt + 1;
		}
		case keypressed::EXCEPT: break;
		}
		clrscr();
	}
	return 0;
}

