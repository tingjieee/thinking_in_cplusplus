#include "useful.h"

class Y {
	int i;
public:
	X x;//embeded object
	Y() { i  = 0;}
	void f(int ii) { i = ii;}
	int g() const {return i;}
};

int main()
{
	Y y;
	y.f(47);
	y.x.set(37);
}
