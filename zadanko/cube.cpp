#include "cube.h"
#include <iostream>
using namespace std;
cube::cube(int a) {
	this->a = a;
}
cube::~cube() {
}
void cube::objc(int a) {
	wynik=a*a*a;
	cout << "objentosc wynosi: " << wynik<<"cm^3";
}
void cube::obwodc(int a) {
	wynik = 12 * a;
	cout << "\nobwod wynosi: " << wynik << "cm\n";
}