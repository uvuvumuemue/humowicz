#pragma once
class triangle
{
public:
	triangle(int wysokosc, int a,int b,int c);
	~triangle();
	void polet(int wysokosc, int a);
	void obwodt(int a, int b, int c);
private:
	int wysokosc=0,a=0,b=0,c=0;
	int wynik;
};