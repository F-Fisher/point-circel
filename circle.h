#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class Circle
{
public:
void setR(int r);
	
int getR();

void setCenter(int x, int y);
Point gerCenter();
	
private:
int m_R;
Point m_Center;

};