#include "circle.h"

void Circle::setR(int r)
{
m_R = r;
}
int Circle::getR()
{
return m_R;
}
void Circle::setCenter(int x, int y)
{
m_Center.setX(x);
m_Center.setY(y);
}
Point Circle::gerCenter()
{
return m_Center;
}