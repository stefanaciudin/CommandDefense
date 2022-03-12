#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int width, int height)
{
	lines = height;
	columns = width;
	a = new char* [lines];
	for (int i = 0; i < lines; i++)
	{
		a[i] = new char[columns];
	}
	Clear();

}
void Canvas::SetPoint(int x, int y, char ch)
{
	a[x][y] = ch;
}
void Canvas::Print() const
{
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
			std::cout << a[i][j];
		std::cout << std::endl;
	}
}
void Canvas::Clear()
{
	for (int i = 0; i < lines; i++)
		for (int j = 0; j < columns; j++)
			a[i][j] = ' ';

}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for(int i=left;i<right;i++)
		for (int j = top; j < bottom; j++)
		{
			a[i][j] = ch;
		}
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i < right; i++)
	{
		a[i][bottom] = ch;
		a[i][top] = ch;
	}
	for (int i = top; i <= bottom; i++)
	{
		a[left][i] = ch;
		a[right][i] = ch;
	}
	
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	//x^2+y^2=r^2 -> ecuatia cercului
	//ray -> raza, (x,y) -> coord centrului
	for (int i = -ray; i <= ray; i++)
		for (int j = -ray; j <= ray; j++)
			if (i * i + j * j == ray * ray)
				SetPoint(x + j, y + i, ch);
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = -ray; i <= ray; i++)
		for (int j= -ray; j <= ray; j++)
			if (i * i + j * j <= ray * ray)
				SetPoint(x + j, y + i, ch);
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = x2 - x1;
	int dy = y2 - y1;
	int D = 2 * dy - dx;
	while (x1 <= x2)
	{
		if (D < 0)
		{
			x1++;
			D = D + 2 * dy;
		}
		else
		{
			x1++;
			y1++;
			D = D + 2 * (dy - dx);
		}
		SetPoint(x1, y1, ch);
	}
}