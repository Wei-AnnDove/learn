#include <iostream>
#include "008a_&a.h"

using namespace std;

void _008_arrayAddress() {
    int a[5] = { 1,2,3,4,5 };
    int* ptr = (int*)(&a + 1);
    cout << *(a + 1) << " " << *(ptr - 1) << endl;

    ptr = (int*)(a + 1);
    cout << *(a + 1) << " " << *(ptr - 1) << endl;
}