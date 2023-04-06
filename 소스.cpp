#include<iostream>
using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x=0,int y=0):xpos(x),ypos(y){}
	void Show()const { cout << "[" << xpos << ", " << ypos << "]" << endl; }
	Point operator-()	//본인 스스로를 변경하기 않기 때문에 포인터를 쓰지 않는다.
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
	pos.Show();	//변경되지 않는 모습을 확인가능하다.
	return 0;
}