//:staticobjectinfunctions.cpp
#include <iostream>
#include <stdlib.h>
using namespace std;

class X {
	int i;
public:
	X(int ii = 0):i(ii) { }
	~X() { cout << "X::~X()" << endl;exit(0);}
};

void f(){
	static X x1(47);
	static X x2;
}

int main()
{
	f();

	return 0;
}
