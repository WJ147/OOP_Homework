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
//student类的函数实现
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
//school类的函数实现
char * school::getSchoolname()
{
    return schoolname;
}
void school::Input()
{
    cout<<"请输入学校名称:\n";
    cin>>schoolname;
}
void school::Output()
{
    cout<<"学校姓名"<<schoolname<<endl;
}
//date类的函数实现
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







