#include<iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

void fill(int **a, int S) {
    // int **a;
    int *C;
    C = new int[S];
    int size = 0;
    for (int i = 0; i < S * S; i++)
        C[i] = i + 1;
    for (int i = 0; i < S; i++) {
        for (int j = S - i; j < i; j++) {
            a[i][j] = C[size++];
        }
        for (int j = i + 1; j < S - i - 1; j++) {
            a[i][j] = C[size++];
        }
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            cout << "\t" << a[i][j];
        }
        cout << endl;
    }
}

void lab_6() {
    int **arr;
    int s, size, i;
    cout << "rozmirnist masuvy" << endl;
    cin >> s;
    if (s < 1 || s > 24) {
        cout << "ne mogy obrabotat" << endl;
    } else {
        arr = new int *[s];
        for (int i = 0; i < s; i++)
            arr[i] = new int[s];
        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                arr[i][j] = 0;
                //cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        fill(arr, s);
    }
}


