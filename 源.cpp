#include<iostream>
using namespace std;
#include"circle.h"

#include"point.h"
//class Point
//{
//public:
//
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//	int m_R;
//};
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setCenter(int x, int y)
//	{
//		m_Center.setX(x);
//		m_Center.setY(y);
//	}
//	Point gerCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//
//};
//判断2点和圆的关系
void isIncircle(Circle& c, Point& p)
{
	//判断两点之间距离的平方
	int a, b;
	a = (c.gerCenter().getX() - p.getX()) * (c.gerCenter().getX() - p.getX()) + (c.gerCenter().getY() - p.getY()) * (c.gerCenter().getY() - p.getY());
	b = c.getR() * c.getR();
	if (a > b)
	{
		cout << "点在圆内" << endl;
	}
	if (a == b)
	{
		cout << "点在圆上" << endl;
	}
	if (a < b)
	{
		cout << "点在圆外" << endl;
	}
	return;
}
int main()
{

	Circle c;
	Point p;
	//设置圆
	c.setCenter(2, 3);
	c.setR(3);
	//设置点
	p.setX(3);
	p.setY(7);
	//判断
	isIncircle(c, p);
	system("pause");
	return 0;
}