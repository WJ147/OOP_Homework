/*
#include <iostream>
#include <cmath>

using namespace std;


class Triangle//三角形类
{
public:
	double getA(void);//得到a的值
	double getB(void);//得到b的值
	double getC(void);//得到c的值
	void setA(double x);//设置a的值
	void setB(double y);//设置b的值
	void setC(double z);//设置c的值
	bool isTriangle(void);//取三边的值
	double Perimeter(void);//计算三角形的周长
	double Area(void);//计算并返回三角形的面积

private:
	double a, b, c; //三边为私有成员数据
};


int main()
{
	Triangle tri1;	//定义三角形类的一个实例（对象）

	double x, y, z;

	cout << "请输入三角形的三边：";
	cin >> x >> y >> z;

	//为三边置初值
	tri1.setA(x);
	tri1.setB(y);
	tri1.setC(z);

	if (tri1.isTriangle())
	{
		cout << "三条边为：" << tri1.getA() << ',' << tri1.getB() << ',' << tri1.getC() << endl;
		cout << "三角形的周长为：" << tri1.Perimeter() << '\t' << "面积为：" << tri1.Area() << endl;
	}
	else
	{
		cout << "不能构成三角形" << endl;
	}

	return 0;
}


void Triangle::setA(double x)//设置a的值
{
	a = x;
}

void Triangle::setB(double y)//设置b的值
{
	b = y;
}

void Triangle::setC(double z)//设置c的值
{
	c = z;
}

double Triangle::getA(void)//得到a的值
{
	return a;
}

double Triangle::getB(void)//得到b的值
{
	return b;
}

double Triangle::getC(void)//得到c的值
{
	return c;
}

bool Triangle::isTriangle(void)//判断三边能否构成三角形
{
	if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a - b >= c))
	{
		return false;
	}
	else
	{
		return true;
	}
}

double Triangle::Perimeter(void)//计算三角形的周长
{
	double sum = a + b + c;

	return sum;
}

double Triangle::Area(void)//计算并返回三角形的面积
{
	//使用海伦公式计算三角形的面积
	double p = (a + b + c) / 2;

	double q = p * (p - a)*(p - b)*(p - c);

	double s = sqrt(q);

	return s;
}*/

//Date1.h：完整的Date类定义,成员函数的定义放在类体外
/*
#include<iostream>
using namespace std;
class Date
{private:
    int year;
    int month;
    int day;
public:
    void SetDate(int ,int ,int );        	 	//对数据成员初始化的公有成员函数
    void Display( );                 	   	//执行显示功能的公有成员函数
    int GetYear( );                           //公有成员函数，提取year变量值
    int GetMonth( );                         //公有成员函数，提取month变量值
int GetDay( );                           //公有成员函数，提取day变量值
};                                         //此分号不能少，表示类定义结束
void Date::SetDate(int y,int m,int d)
{   year=y;
    month=m;
    day=d;
}
int Date::GetYear( )
{   return year;
}
int Date::GetMonth( )
{   return month;
}
int Date::GetDay( )
{   return day;
}
void Date::Display()
{   cout << year<< "-" << month << "-" << day << endl;
}*/
//example_3_5.cpp：圆点访问形式的应用举例
/*
#include<Date1.h>
using namespace std;
int main()
{
	Date today,*t;
    today.SetDate(2006,10,17);      		//通过对象以圆点形式访问成员函数
    cout<<"One day is:";
    cout<<today.yes<<"-"today.month<<"-"today.day<<endl;              			//输出日期的信息
    t=&today;
    (*t).SetDate(2007,12,18);       		//通过指针以圆点形式访问成员函数
    cout<<"the other day is:";
    (*t).Display();                			//输出日期的信息
	   return 0;
}*/
// example_3_6.cpp：指针访问形式的应用举例
/*
#include"Date1.h"
int main()
{
	Date today,*t;
	t->SetDate(2006,10,17);      			//通过对象以圆点形式访问成员函数
	cout<<"One day is:";
	t->Display();               			//输出日期的信息
	t=&today;
	t->SetDate(2007,12,18);       			    //通过指针以圆点形式访问成员函数
	cout<<"the other day is:";
	t->Display();                			    //输出日期的信息
	return 0;
}*/

//li3_8.cpp文件：this指针使用示例

#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	void  SetDate(int y,  int m,  int d);
    void  Display( );
};
void Date:: SetDate(int y,  int m,  int d)
{
	year=y;
    month=m;
    day=d;
}
void Date::Display( )
{   cout<<"调用该函数的对象的this指针是";
    cout<<this<<endl;                             	//输出当前主调对象的地址
    cout<<"当前对象year成员的起始地址: ";         	//输出当前对象的year成员的地址
    cout<<&this->year<<endl;
    cout<<"当前对象month成员的起始地址: ";        	//输出当前对象的month成员的地址
    cout<<&this->month<<endl;
    cout<<"year="<<this-year<<" ,month="<<this-month<<endl;  //输出this所指对象的数据成员值
}
int main()
{
    Date DateA, DateB;
    DateA.SetDate(2011,7,24);
    DateB.SetDate(2010,10,1);                        //定义两个对象
    cout<<"DateA地址:"<<&DateA<<endl;                //输出对象DateA的地址
    DateA.Display();
    cout<<"DateB地址:"<<&DateB<<endl;                //输出对象DateB的地址
    DateB.Display();
    return 0;
}
/*
void Date::Display( )
{
	cout<<"调用该函数的对象的this指针是";
    cout<<this<<endl;                             	//输出当前主调对象的地址
    cout<<"当前对象year成员的起始地址: ";         	//输出当前对象的year成员的地址
    cout<<&year<<endl;
    cout<<"当前对象month成员的起始地址: ";        	//输出当前对象的month成员的地址
    cout<<&month<<endl;
    cout<<"year="<<year<<" ,month="<<month<<endl;  //输出this所指对象的数据成员值
}
int main()
{
	Date DateA , DateB;
    DateA.SetDate(2011,7,24);
    DateB.SetDate(2010,10,1);    //定义两个对象
    cout<<"DateA地址:"<<&DateA<<endl ;              //输出对象DateA的地址
    DateA.Display();
    cout<<"DateB地址:"<<&DateB<<endl ;              	//输出对象DateB的地址
    DateB.Display();
	return 0;
}*/
