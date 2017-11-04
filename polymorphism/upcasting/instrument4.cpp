//Extensibility in oop
#include <iostream>
using namespace std;
enum note { middleC, Csharp, Cflat };//Etc.

class Instrument {
public:
	virtual void play(note) const {
		cout << "Instrument::play" << endl;
	}
	virtual char* what() const {
		return "Instrument";
	}
	//assume this will modify the object
	virtual void adjust(int) {}
};

class Wind : public Instrument {
public:
	void play(note) const {
		cout << "Wind::play" << endl;
	}
	char* what() const { return "Wind";}
	void adjust(int) {}
};

class Percussion : public Instrument {
public:
	void play(note) const {
		cout << "Percussion::paly" << endl;
	}
	char* what() const { return "Percussion";}
	void adjust(int) {}
};

class Stringed : public Instrument {
public:
	void play(note) const {
		cout << "Stringed::play" << endl;
	}
	char* what() const {return "Stringed";}
	void adjust(int) {}
};

class Brass : public Wind {
public:
	void play(note) const {
		cout << "Brass::play" << endl;
	}
	char* what() const {return "Brass";}
	void adjust(int) {}
};

class Woodwind : public Wind {
public:
	void play(note) const {
		cout << "Woodwind::play" << endl;
	}
	char* what() const {return "Woodwind";}
	void adjust(int) {}
};

//Indentical function from before:
void tune (Instrument& i){
	i.play(middleC);
}

//new function
void f(Instrument& i) { i.adjust(1); }
/*
//upcasting during array initialization:
Instrument* A[] = {
	new Wind,
	new Percussion,
	new Stringed,
	new Brass,
};
*/
int main()
{
	Wind flute;
	Percussion drum;
	Stringed violin;
	Brass flugehore;
	Woodwind recorder;

	tune(flute);
	tune(drum);
	tune(violin);
	tune(flugehore);
	tune(recorder);

	f(flugehore);

	return 0;
}









