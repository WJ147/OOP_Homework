#include<iostream>
#include<stdlib.h>
struct person
{
    unsigned int num;
    unsigned int key;
    person *next;

};
class ring
{
    private:
        unsigned int n;//用于存放人数
        unsigned int m;//用于存初始密码
        person *head;//链表的头结点
    public:
        ring(){m=0;n=0;head=NULL;}//构造函数，把成员变量赋初值
        void create();//建立环的成员函数
        void show();//运算并输出的成员函数
};
void ring::creat()//创建约瑟夫环
{
    cout<<"请输入人数"<<endl;
    cin>>n;
    cout<<"请输入m的初值"<<endl;
    cin>>m;
    person *p1,*p2;//定义2个临时指针
    //for循环用于初始化环
    for(int i=1;i<n;i++)

    {
        p1=new person;
        p1->num=i;//编号
        cout<<"请输入第"<<i<<"个人对应密码";
        cin>>p1->key;//密码
        if(i===1)//如果前链表为空，头指针指向第一个人
        {
            head=p1;
            p2=p1;
        }
        else //否则，p2永远指向尾结点，新建立的结点都插入到p2之后
        {
            p2->next=p1;
            p2=p1;
        }
    }
    p2->next=head;//把链表连成一个循环链表

}
void ring::show()//执行出圈操作
{
    person *p1,*p2,*p;
    p1=head;
    //有n个人，执行n次循环
    for(int i=1;i<n;i++)
    {
        int count=1;
        //用count定位到第m个人，循环后，p1指向这个人，p2指向这个人的上一个人
        while(count<m)
        {
            p2=p1;
            p1=p1->next;
            count ++;
        }
        cout<<p1->num<<"\t"<<<endl;//输入当前人的编号
        m=p1->key;//把当前任的密码座位下一次报数的上限
        p=p1;//p指向当前这个人
        p2->next=p1->next;//将当前出圈的人直接前驱和直接后继连接起来
        p1=p1->next;//下次从当前人的下一个人开始数
        delete p;//释放内存
    }
    cout<<endl;
}
void main(void)
{
    ring j;int select;
    do
    {
        cout<<"\n主菜单如下："<<endl;
        cout<<"select0:创建约瑟夫环"<<endl;
        cout<<"select1:元素出圈"<<endl;
        cout<<"select2:退出"<<endl;
        cout<<"input your select(0-2):"<<endl;
        cin>>select;
        switch(select)
        {
            case 0:
            {
                j.creat();break;
            }
            case 1:
                {
                    j.show();break;
                }
                case 2:break;
                default:cout<<"请输入争取的选择！"<<endl;
        }//end switch


    }while(select!=2);//end while
}
