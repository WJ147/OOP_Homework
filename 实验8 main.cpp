/*//example3_17.cpp�ļ�: ���õ�ʹ��ʾ��������ͷ�ļ�Date4.h

#include "Date4.h"

//---------------------------------------------------------------------
//�������ι��캯��������������
Date DateA( 2010, 1, 1 ), DateB( 2010, 5, 1 );

//pDateΪ����DateA�ı�������ʼ�����ò������ù��캯��
Date &pDate;
pDate=DateA;

//----------------�������DateA��DateB������pDate��ֵ------------------
void f( )
{
     DateA. Display ( );
	 DateB. Display ( );

	 pDate. Display ( );
}
//--------------------����������----------------------------------------
int main()
{
	cout<<"original DateA,DateB,pDate:"<<endl;
    f( );

    pDate = DateB;  //�൱��DateA=DateB��pDate����DateA�ı�����δ�ı�ΪDateB�ı���
    cout<<"after pDate=DateB,  DateA,DateB,pDate:"<<endl;

    f( );                        //�˴������DateA��DateB��pDateֵһ�����
    pDate = Date(2010, 10, 1) ;  //������pDate��ֵ�����޸ģ��൱�� DateA = Date(100,200);
    cout<<"after pDate=Date(2010, 10, 1),  DateA,DateB,pDate:"<<endl;

    f( );                 	     //�˴������DateA��pDateֵһ����ȣ���DateB����ԭֵ

    return 0;
}*/
// li3_21.cpp�ļ�������������Ϊ�����ķ���ֵʹ��ʾ��������ͷ�ļ�Date5.h
/*
#include"Date5.h"
Date & Fun(Date &pDate)
{
    Date qDate;
    qDate.ModifyDate(2000, 10, 20);
    return qDate;
}

Date & Fun(Date  &pDate)     			//��ͨ����Fun()�Ķ��壬�����������βΣ�����������
{   Date qDate;                 		//����ֲ��Զ�����qDate
    qDate.ModifyDate(2011,  10,  20);
    return qDate;                 		//���÷���qDate������ȫ���и澯
}

int  main()
{   Date DateA(2011),tDate;
    cout<<"Before right Fun, DataA:\n";
    DateA.Display();
    cout<<"Before right Fun, tDate:\n";
    tDate.Display();
    tDate=Fun(DateA);
	cout<<"After right Fun, DateA:\n";
	DateA.Display( );
	cout<<"After right Fun, tDate:\n";
	tDate.Display( );
    Fun(tDate)=Date(1998,10,5);
    cout<<"After left Fun, DateA:\n";
    DateA.Display();
	cout<<"After left Fun, tDate:\n";
    tDate.Display();
    return 0;
}*/
//answer3-3-1
/*
#include <iostream>
using namespace std;
class B
{
    int x , y ;
public :
    B()
    {
        x=y=0;
        cout<<"con1\t";
    }
    B(int i)
    {
        x=i;
        y=0;
        cout<<"con2\t";
    }
    B(int i,int j)
    {
        x=i;
        y=j;
        cout<<"con3\t";
    }
    ~B()
    {
        cout<<"Des\t";
    }
};
int main()
{
    B *ptr;
    ptr=new B[3];
    ptr[0]=B();
    ptr[1]=B(1);
    ptr[2]=B(2,3);
    delete [ ]ptr;
    return 0;
}
*/
//answer 3-3-2
/*
#include <iostream>
#include <string>
using namespace std;
class Student
{
    int age;    //������ı���
    char *name;
public:
    Student(int m,char *n);//�����вκ���

    friend void disp(Student&);//������disp()����Ϊ�Լ�����Ԫ����
    ~Student()                 //�����������
    {
        cout<<"delete it."<<name<<endl;
        delete [ ] name;
    }
};
void disp(Student & p)        //ȫ�ֺ���
{
    cout<<"Student name is "<<p.name<<",age is "<<p.age<<endl;
}
Student::Student(int m,char *n)//�вκ���������
{
        age=m;
        name=n;

}
int main()
{
    Student A(18,"wujiang");
    Student B(19,"xiayu");
    disp(A);
    disp(B);
    return 0;
}*/
//answer3-3-3
/*
#include<iostream>
using namespace std;
class Sample
{
    int x;
public:
    void setx(int i)
    {
        x=i;
    }
    int getx()
    {
        return x;
    }
};
int main()
{
    Sample a[3], *p;
    int i=0;
    for(p=a;p<a+3;p++)
        p->setx( i++);
    for(i=0;i<3;i++)
    {
        p=&a[i];
        cout<<p->getx()<<"  "<<endl;
    }
    return 0;
}*/
//answer3-3-4

#include<iostream>
using namespace std;
class base
{
    int n;
public:
    base(int i)
    {
        n=i;
    }
    friend int add(base &s1,base &s2);
};
int add(base &s1,base &s2)
{
    return s1.n+s2.n;
}
int main( )
{
    base A(29),B(11);
    cout<<add(A,B)<<endl;
    return 0;
}












