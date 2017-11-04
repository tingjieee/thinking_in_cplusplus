#include <iostream>
using namespace std;

class stj{
public:
	int i;
	stj(int ii = 0) : i(ii) { }
	int geti() {return i;}
	~stj();
};

int main()
{
	stj *fp = new stj(1);
	cout << fp->i <<endl;
	return 0;
}
