#include <iostream>
#include "016Private_Virtual.h"

using namespace std;

void A::g() {
	cout << "A::g" << endl;
}
void A::f() {
	cout << "A::f" << endl;
}
void B::g() {
	cout << "B::g" << endl;
}
void B::h() {
	cout << "B::h" << endl;
}

void _016_Virtual_Function() {
	B b;
	Fun pFun;
	//for (int i = 0; i < 3; i++) {
	//	pFun = (Fun) * ((int*)*(int*)(&b) + i);
	//	pFun();
	//}
	long long* vTable = reinterpret_cast<long long*>(&b);
	long long* firstFunc = reinterpret_cast<long long*>(*vTable);

	for (int i = 0; i < 3; i++) {
		pFun = reinterpret_cast<Fun>(*(firstFunc + i));
		pFun();
	}
}