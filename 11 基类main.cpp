#include <iostream>

using namespace std;

class base
{
private:
    int c;
protected:
    int b;
public:
    int a;
    static int count;
    void set(int x,int y,int z)
    {
        c=x;
        b=y;
        a=z;
    }

    void print()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
    };
    static int statistic();
};

class derived1:public base
{
    private:
        int c1;
    protected:
        int b1;

    public:
        int a1;
    void set1(int x,int y,int z)
    {
        c1=x;
        b1=y;
        a1=z;
    }
    void print1()
    {
        cout<<"a1="<<a1<<endl;
        cout<<"b1="<<b1<<endl;
        cout<<"c1="<<c1<<endl;
    }

};
class derived2:protected base
{
private:
    int c2;
protected:
    int b2;
public:
    int a2;
    void set2(int x,int y,int z)
    {
        c2=x;
        b2=y;
        a2=z;
    }
    void print2()
    {
        cout<<"a2="<<a2<<endl;
        cout<<"b2="<<b2<<endl;
        cout<<"c2="<<c2<<endl;
    }
};
class derived3:private base
{
private:
    int c3;
protected:
    int b3;
public:
    int a3;
    void set3(int x,int y,int z)
    {
        c3=x;
        b3=y;
        a3=z;
    }
    void print3()
    {
        cout<<"a3="<<a3<<endl;
        cout<<"b3="<<b3<<endl;
        cout<<"c3="<<c3<<endl;
    }
};
int main()
{
    derived1 obj;
    //derived2 obj;
    //derived3 obj;
    obj.set(1 ,2 ,3 );
    obj.set1(4 ,5 ,6 );
    //obj.set2(7 ,8 ,9 );
    //obj.set3(10 ,11 ,12);
    obj.print();
    obj.print1();
    //obj.print2();
    //obj.print3();
    return 0;
}
