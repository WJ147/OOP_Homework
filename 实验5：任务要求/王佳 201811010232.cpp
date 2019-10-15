
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
}
