#include <fstream>
using namespace std;

ofstream out("trace.out");

class Obj {
	char c;
public:
	Obj(char cc) : c(cc) {
		out << "Obj::Obj() for " << c << endl;
	}
	~Obj() {
		out << "Obj::Obj() for " << c << endl;
	}
};

Obj a('a');
void f() {
	static Obj b('b');
}
void g() {
	static Obj c('c');
}

int main()
{
	out<<"inside main"<<endl;
	f();
	out<<"leave main"<<endl;
}
