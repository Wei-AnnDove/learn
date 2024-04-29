#include <iostream>
#include "H/test.h"

using namespace std;

int main()
{
    cout << "Beginning..." << endl;
    tt();

    int a[5] = { 1,2,3,4,5 };
    int* ptr = (int*)(a + 1);
    cout << *(a + 1) << " " << *(ptr - 1) << endl;
}


