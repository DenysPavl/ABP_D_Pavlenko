#include<iostream>
#include <stdlib.h>
#include <time.h>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int lab_5() {
    time(0);
    int size;
    int *ar;
    cout << "vvedit rozmir masuvy" << endl;
    cin >> size;
    ar = new int[size];
    for (int i = 0; i < size; ++i) {
        ar[i] = rand() % 101 - 50;
        cout << ar[i] << "\t";
    }
    int* l = ar, *r = ar + (size-1);
    for ( l , r ; l < r; ) {
        if (*l < 0)
            ++l;
        else if (*r < 0)
            --r;
        else
            swap(*l++, *r--);
    }

    cout<<endl;
    cout<<"vuhidnyu masuv"<<endl;

    for (int i = 0; i < size; ++i)
         cout << ar[i] << "\t";
        delete[] ar;
}

