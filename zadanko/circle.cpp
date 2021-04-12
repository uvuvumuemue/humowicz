#include "circle.h"
#include <iostream>
using namespace std;
circle::circle(int a) {
	this->a = a;
}
circle::~circle() {

}
void circle::polec(int a) {
	wynik = a*a;
	cout << "pole wynosi: " << wynik<<"pi";
}
void circle::obwodc(int a) {
	wynik = 2*a ;
	cout << "\nobwod wynosi: " << wynik<<"pi" << "\n";
}