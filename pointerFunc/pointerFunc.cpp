#include <iostream>

using namespace std;

void func(){
	cout<<"cout func ..."<<endl;
}

int main()
{
	void (*fp) ();//define a function pointer
	fp = func;
	(*fp)();

	return 0;
}
