//simple inheritance
#include "useful.h"
#include <iostream>
using namespace std;

class Y : public X {
	int i;//diffrent from X`s i;
public:
	Y() { i = 0; }
	int change() {
		i = permute();//diffrent name call
		return i;
	}
	void set(int ii){
		i = ii;
		X::set(ii);
	}
};

int main()
{
	cout << "sizeof(X) = " << sizeof(X) <<endl;
	cout << "sizeof(Y) = " << sizeof(Y) <<endl;

	Y D;
	cout << "D.change : " << D.change() << endl;
	cout << "D.read : " << D.read() << endl;
	cout << "D.permute" << D.permute() << endl;
	D.set(12);
}
