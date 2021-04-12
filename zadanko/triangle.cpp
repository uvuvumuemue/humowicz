#include "triangle.h"
#include <iostream>
using namespace std;
triangle::triangle(int wysokosc,int a,int b,int c) {
	this->wysokosc= wysokosc;
	this->a = a;
	this->b = b;
	this->c = c;
}
triangle::~triangle() {

}
void triangle::polet(int wysokosc, int a) {
	wynik = (a * wysokosc) / 2;
	cout << "pole wynosi: "<<wynik<<"cm^2";
}
void triangle::obwodt(int a, int b, int c) {
	wynik = a + b + c;
	cout << "\nobwod wynosi: " << wynik<<"cm\n";
}