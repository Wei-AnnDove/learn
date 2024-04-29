#pragma once
class A {
	virtual void g();
private:
	virtual void f();
};

class B :public A {
	void g();
	virtual void h();
};

typedef void(*Fun)(void);

void _016_Virtual_Function();

