#include <iostream>
using namespace std;
class student
{
    string name;
    bool gender;
    string id;
    double GPA;
public:
    static int total;
    student(){total++;}
    ~student(){total--;}
    student(string name,bool gender,string id,double GPA);

    string getName();
    bool getGender();
    string getId();
    double getGPA();
};
class school
{
    char *schoolname;
public:
    void Input();
    void Output();
    char* getSchoolname();

};
class date
{
    int year;
    int month;
    int day;
public:
    void Set(int y,int m,int d);
    int getYear();
    int getMonth();
    int getDay();
};
//student��ĺ���ʵ��
int student::total=0;

    student::student(string name,bool gender,string id,double GPA)
    {
        this->name=name;
        this->gender=gender;
        this->id=id;
        this->GPA=GPA;
        total++;
    }

string student::getName()
{
    return name;
}
bool student::getGender()
{
    return gender;
}
string student::getId()
{
    return id;
}
double student::getGPA()
{
    return GPA;
}
//school��ĺ���ʵ��
char * school::getSchoolname()
{
    return schoolname;
}
void school::Input()
{
    cout<<"������ѧУ����:\n";
    cin>>schoolname;
}
void school::Output()
{
    cout<<"ѧУ����"<<schoolname<<endl;
}
//date��ĺ���ʵ��
void date::Set(int y,int m,int d)
{
    year=y;
    month=m;
    day=d;
}
int date::getYear()
{
    return year;
}
int date::getMonth()
{
    return month;
}
int date::getDay()
{
    return day;
}


int main()
{
    cout<<"The number of all students:"<<student::total<<endl;


}







