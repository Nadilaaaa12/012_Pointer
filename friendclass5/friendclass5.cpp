#include <iostream>
#include <string>
using namespace std;

class pelajar;

class manusia {
public:
	void showNilaiPelajar(pelajar&);
};

class pelajar {
private:
	int nilai;
public:
	pelajar() {
		nilai = 100;
	}
};