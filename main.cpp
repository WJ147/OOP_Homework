/*
#include <iostream>
#include <cmath>

using namespace std;


class Triangle//��������
{
public:
	double getA(void);//�õ�a��ֵ
	double getB(void);//�õ�b��ֵ
	double getC(void);//�õ�c��ֵ
	void setA(double x);//����a��ֵ
	void setB(double y);//����b��ֵ
	void setC(double z);//����c��ֵ
	bool isTriangle(void);//ȡ���ߵ�ֵ
	double Perimeter(void);//���������ε��ܳ�
	double Area(void);//���㲢���������ε����

private:
	double a, b, c; //����Ϊ˽�г�Ա����
};


int main()
{
	Triangle tri1;	//�������������һ��ʵ��������

	double x, y, z;

	cout << "�����������ε����ߣ�";
	cin >> x >> y >> z;

	//Ϊ�����ó�ֵ
	tri1.setA(x);
	tri1.setB(y);
	tri1.setC(z);

	if (tri1.isTriangle())
	{
		cout << "������Ϊ��" << tri1.getA() << ',' << tri1.getB() << ',' << tri1.getC() << endl;
		cout << "�����ε��ܳ�Ϊ��" << tri1.Perimeter() << '\t' << "���Ϊ��" << tri1.Area() << endl;
	}
	else
	{
		cout << "���ܹ���������" << endl;
	}

	return 0;
}


void Triangle::setA(double x)//����a��ֵ
{
	a = x;
}

void Triangle::setB(double y)//����b��ֵ
{
	b = y;
}

void Triangle::setC(double z)//����c��ֵ
{
	c = z;
}

double Triangle::getA(void)//�õ�a��ֵ
{
	return a;
}

double Triangle::getB(void)//�õ�b��ֵ
{
	return b;
}

double Triangle::getC(void)//�õ�c��ֵ
{
	return c;
}

bool Triangle::isTriangle(void)//�ж������ܷ񹹳�������
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

double Triangle::Perimeter(void)//���������ε��ܳ�
{
	double sum = a + b + c;

	return sum;
}

double Triangle::Area(void)//���㲢���������ε����
{
	//ʹ�ú��׹�ʽ���������ε����
	double p = (a + b + c) / 2;

	double q = p * (p - a)*(p - b)*(p - c);

	double s = sqrt(q);

	return s;
}*/

//Date1.h��������Date�ඨ��,��Ա�����Ķ������������
/*
#include<iostream>
using namespace std;
class Date
{private:
    int year;
    int month;
    int day;
public:
    void SetDate(int ,int ,int );        	 	//�����ݳ�Ա��ʼ���Ĺ��г�Ա����
    void Display( );                 	   	//ִ����ʾ���ܵĹ��г�Ա����
    int GetYear( );                           //���г�Ա��������ȡyear����ֵ
    int GetMonth( );                         //���г�Ա��������ȡmonth����ֵ
int GetDay( );                           //���г�Ա��������ȡday����ֵ
};                                         //�˷ֺŲ����٣���ʾ�ඨ�����
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
//example_3_5.cpp��Բ�������ʽ��Ӧ�þ���
/*
#include<Date1.h>
using namespace std;
int main()
{
	Date today,*t;
    today.SetDate(2006,10,17);      		//ͨ��������Բ����ʽ���ʳ�Ա����
    cout<<"One day is:";
    cout<<today.yes<<"-"today.month<<"-"today.day<<endl;              			//������ڵ���Ϣ
    t=&today;
    (*t).SetDate(2007,12,18);       		//ͨ��ָ����Բ����ʽ���ʳ�Ա����
    cout<<"the other day is:";
    (*t).Display();                			//������ڵ���Ϣ
	   return 0;
}*/
// example_3_6.cpp��ָ�������ʽ��Ӧ�þ���
/*
#include"Date1.h"
int main()
{
	Date today,*t;
	t->SetDate(2006,10,17);      			//ͨ��������Բ����ʽ���ʳ�Ա����
	cout<<"One day is:";
	t->Display();               			//������ڵ���Ϣ
	t=&today;
	t->SetDate(2007,12,18);       			    //ͨ��ָ����Բ����ʽ���ʳ�Ա����
	cout<<"the other day is:";
	t->Display();                			    //������ڵ���Ϣ
	return 0;
}*/

//li3_8.cpp�ļ���thisָ��ʹ��ʾ��

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
{   cout<<"���øú����Ķ����thisָ����";
    cout<<this<<endl;                             	//�����ǰ��������ĵ�ַ
    cout<<"��ǰ����year��Ա����ʼ��ַ: ";         	//�����ǰ�����year��Ա�ĵ�ַ
    cout<<&this->year<<endl;
    cout<<"��ǰ����month��Ա����ʼ��ַ: ";        	//�����ǰ�����month��Ա�ĵ�ַ
    cout<<&this->month<<endl;
    cout<<"year="<<this-year<<" ,month="<<this-month<<endl;  //���this��ָ��������ݳ�Աֵ
}
int main()
{
    Date DateA, DateB;
    DateA.SetDate(2011,7,24);
    DateB.SetDate(2010,10,1);                        //������������
    cout<<"DateA��ַ:"<<&DateA<<endl;                //�������DateA�ĵ�ַ
    DateA.Display();
    cout<<"DateB��ַ:"<<&DateB<<endl;                //�������DateB�ĵ�ַ
    DateB.Display();
    return 0;
}
/*
void Date::Display( )
{
	cout<<"���øú����Ķ����thisָ����";
    cout<<this<<endl;                             	//�����ǰ��������ĵ�ַ
    cout<<"��ǰ����year��Ա����ʼ��ַ: ";         	//�����ǰ�����year��Ա�ĵ�ַ
    cout<<&year<<endl;
    cout<<"��ǰ����month��Ա����ʼ��ַ: ";        	//�����ǰ�����month��Ա�ĵ�ַ
    cout<<&month<<endl;
    cout<<"year="<<year<<" ,month="<<month<<endl;  //���this��ָ��������ݳ�Աֵ
}
int main()
{
	Date DateA , DateB;
    DateA.SetDate(2011,7,24);
    DateB.SetDate(2010,10,1);    //������������
    cout<<"DateA��ַ:"<<&DateA<<endl ;              //�������DateA�ĵ�ַ
    DateA.Display();
    cout<<"DateB��ַ:"<<&DateB<<endl ;              	//�������DateB�ĵ�ַ
    DateB.Display();
	return 0;
}*/
