#include <iostream>
#include <string>
using namespace std;

class Base {
public:
	int f() const {
		cout << "Base::f()\n";
		return 1;
	}
	int f(string) const {return 1;}
	void g() {}
};

//inherint
class Derived1 : public Base {
public:
	void g() const {}
};

//inherint && redefined
class Derived2 : public Base {
public:
	//redefinition
	void f() const {
		cout << "Derived2::f()\n";
		return 2;
	}
};

//inherint && redefined & change return type
class Derived3 : public Base {
public:
	//change return type
	void f() const {cout << "Derived3::f()\n";}
};

class Derived4 : public Base {
public:
	int f() const {
		cout << "Derived4::f()\n";
		return 4;
	}
};

int main()
{
	string s("Hello");
	Derived1 d1;
	int x = d1.f();
	d1.f(s);
	Derived d2;
	x = d2.f();
	Derived d3;
	x = d3.f();
	Derived d4 ;
	x = d4.f(1);
}
