#include<iostream>
#include<cmath>
using namespace std;
class Point
{
private:
    double x;
    double y;
public:
    Point();
    Point(double a,double b);
    Point(const Point&r);
    ~Point();
    double GetX();
    double GetY();
    void SetX(double ax);
    void SetY(double bx);

    friend double GetLength(Point& A, Point& B);
    void display();
};
Point::Point()
{
    x=1;
    y=3;
}
Point::Point(double a ,double b)
{
    this->x=a;
    this->y=b;
}
Point::Point(const Point&r)
{
    x=r.x;
    y=r.y;
}
Point::~Point()
{

}
double Point::GetX()
{
    return x;
}
double Point::GetY()
{
    return y;
}
void Point::SetX(double ax)
{
    this->x=ax;
}
void Point::SetY(double bx)
{
    this->y=bx;
}
double GetLength(Point&A,Point&B)
{
    double x=A.x-B.x;
    double y=A.y-B.y;
    return sqrt(x*x+y*y);
}
int main()
    {
        Point array_stack[10];
        Point *array_heap=new Point[10];
        Point A(1,1),B(2,2);
        cout<<"点A为：（"<<A.GetX()<<","<<A.GetY()<<"）"<<endl;
        cout<<"点B为：（"<<B.GetX()<<","<<B.GetY()<<"）"<<endl;
        cout<<"两点间距离为："<<GetLength(A,B)<<endl;
        return 0;
    }
