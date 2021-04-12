#include "trapeze.h"
#include <iostream>
using namespace std;
trapeze::trapeze(int a,int b,int c,int d ,int h) {
	this->a = a;
	this->b= b;
	this->c = c;
	this->d = d;
	this->h = h;
}
trapeze::~trapeze() {

}
void trapeze::polet(int a,int b,int h) {
	wynik = (a + b) * h / 2;
	cout << "pole wynosi: " << wynik<<"cm^2";
}
void trapeze::obwodt(int a,int b, int c, int d) {
	wynik = a+b+c+d;
	cout << "\nobwod wynosi: " << wynik<<"cm";
}