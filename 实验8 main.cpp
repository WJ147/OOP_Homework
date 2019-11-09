/*//example3_17.cpp文件: 引用的使用示例，包含头文件Date4.h

#include "Date4.h"

//---------------------------------------------------------------------
//调用两次构造函数生成两个对象
Date DateA( 2010, 1, 1 ), DateB( 2010, 5, 1 );

//pDate为对象DateA的别名，初始化引用并不调用构造函数
Date &pDate;
pDate=DateA;

//----------------输出对象DateA、DateB和引用pDate的值------------------
void f( )
{
     DateA. Display ( );
	 DateB. Display ( );

	 pDate. Display ( );
}
//--------------------【主函数】----------------------------------------
int main()
{
	cout<<"original DateA,DateB,pDate:"<<endl;
    f( );

    pDate = DateB;  //相当于DateA=DateB，pDate仍是DateA的别名，未改变为DateB的别名
    cout<<"after pDate=DateB,  DateA,DateB,pDate:"<<endl;

    f( );                        //此处输出的DateA、DateB、pDate值一定相等
    pDate = Date(2010, 10, 1) ;  //对引用pDate的值进行修改，相当于 DateA = Date(100,200);
    cout<<"after pDate=Date(2010, 10, 1),  DateA,DateB,pDate:"<<endl;

    f( );                 	     //此处输出的DateA和pDate值一定相等，而DateB保持原值

    return 0;
}*/
// li3_21.cpp文件：对象引用作为函数的返回值使用示例。包含头文件Date5.h
/*
#include"Date5.h"
Date & Fun(Date &pDate)
{
    Date qDate;
    qDate.ModifyDate(2000, 10, 20);
    return qDate;
}

Date & Fun(Date  &pDate)     			//普通函数Fun()的定义，对象引用作形参，并返回引用
{   Date qDate;                 		//定义局部自动对象qDate
    qDate.ModifyDate(2011,  10,  20);
    return qDate;                 		//引用返回qDate，不安全，有告警
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
    int age;    //定义类的变量
    char *name;
public:
    Student(int m,char *n);//构造有参函数

    friend void disp(Student&);//将函数disp()声明为自己的友元函数
    ~Student()                 //构造解析函数
    {
        cout<<"delete it."<<name<<endl;
        delete [ ] name;
    }
};
void disp(Student & p)        //全局函数
{
    cout<<"Student name is "<<p.name<<",age is "<<p.age<<endl;
}
Student::Student(int m,char *n)//有参函数被调用
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












