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
        unsigned int n;//���ڴ������
        unsigned int m;//���ڴ��ʼ����
        person *head;//�����ͷ���
    public:
        ring(){m=0;n=0;head=NULL;}//���캯�����ѳ�Ա��������ֵ
        void create();//�������ĳ�Ա����
        void show();//���㲢����ĳ�Ա����
};
void ring::creat()//����Լɪ��
{
    cout<<"����������"<<endl;
    cin>>n;
    cout<<"������m�ĳ�ֵ"<<endl;
    cin>>m;
    person *p1,*p2;//����2����ʱָ��
    //forѭ�����ڳ�ʼ����
    for(int i=1;i<n;i++)

    {
        p1=new person;
        p1->num=i;//���
        cout<<"�������"<<i<<"���˶�Ӧ����";
        cin>>p1->key;//����
        if(i===1)//���ǰ����Ϊ�գ�ͷָ��ָ���һ����
        {
            head=p1;
            p2=p1;
        }
        else //����p2��Զָ��β��㣬�½����Ľ�㶼���뵽p2֮��
        {
            p2->next=p1;
            p2=p1;
        }
    }
    p2->next=head;//����������һ��ѭ������

}
void ring::show()//ִ�г�Ȧ����
{
    person *p1,*p2,*p;
    p1=head;
    //��n���ˣ�ִ��n��ѭ��
    for(int i=1;i<n;i++)
    {
        int count=1;
        //��count��λ����m���ˣ�ѭ����p1ָ������ˣ�p2ָ������˵���һ����
        while(count<m)
        {
            p2=p1;
            p1=p1->next;
            count ++;
        }
        cout<<p1->num<<"\t"<<<endl;//���뵱ǰ�˵ı��
        m=p1->key;//�ѵ�ǰ�ε�������λ��һ�α���������
        p=p1;//pָ��ǰ�����
        p2->next=p1->next;//����ǰ��Ȧ����ֱ��ǰ����ֱ�Ӻ����������
        p1=p1->next;//�´δӵ�ǰ�˵���һ���˿�ʼ��
        delete p;//�ͷ��ڴ�
    }
    cout<<endl;
}
void main(void)
{
    ring j;int select;
    do
    {
        cout<<"\n���˵����£�"<<endl;
        cout<<"select0:����Լɪ��"<<endl;
        cout<<"select1:Ԫ�س�Ȧ"<<endl;
        cout<<"select2:�˳�"<<endl;
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
                default:cout<<"��������ȡ��ѡ��"<<endl;
        }//end switch


    }while(select!=2);//end while
}
