
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
}
