#include<iostream>
using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x=0,int y=0):xpos(x),ypos(y){}
	void Show()const { cout << "[" << xpos << ", " << ypos << "]" << endl; }
	Point operator-()	//���� �����θ� �����ϱ� �ʱ� ������ �����͸� ���� �ʴ´�.
	{
		Point pos(-xpos, -ypos);
		return pos;
	}
	Point operator~()
	{
		Point pos(ypos, xpos);
		return pos;
	}
};

int main()
{
	Point pos(5, 10);
	pos.Show();
	Point Mpos = -pos;
	Mpos.Show();
	Point Npos = ~pos;
	Npos.Show();
	pos.Show();	//������� �ʴ� ����� Ȯ�ΰ����ϴ�.
	return 0;
}