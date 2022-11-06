#include<iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int lab_5() {
    time(0);
    int size;
    int *ar;
    int max = 0;
    cout << "vvedit rozmir masuvy" << endl;
    cin >> size;
    ar = new int[size];
    max = size;
    for (int i = 0; i < size; ++i) {
        ar[i] = rand() % 101 - 50;
        cout << ar[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < size; ++i) {
        /*int j;
        for (j = max - 1; j < size; j++) {
            if (ar[i] >= 0 && ar[j] >= 0) {
                swap(ar[i], ar[j]);
            }*/
            if (ar[i] >= 0) {
                int n = 0;
                n++;
                // cout<<n;
                // cout<<endl;
                    swap(ar[i], ar[n]);
            }
        }

        for (int i = 0; i < size; ++i)
            cout << ar[i] << "\t";
        delete[] ar;
    }
