#pragma once
class trapeze
{
public:
	trapeze(int a,int b,int c,int d, int h);
	~trapeze();
	void polet(int a,int b,int h);
	void obwodt(int a,int b, int c, int d);
private:
	int a = 0, b=0, c=0, d=0, h=0;
	int wynik;
};

