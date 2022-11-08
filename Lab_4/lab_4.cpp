#include<iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int lab_4(void) {
    int i, j;
    int size = 0;
    const int r = 9;
    int arr[r][r];
    const int n = 16;
    const int m = 16;
    int arr2[n];
    int arr3[m];
    //masuv
    /*for (int i = 0; i <= n; ++i)
        arr2[i]=i+1;
    for (int i = 0; i <= m; ++i)
        arr3[i]=i+1 ;*/
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < r; ++j)
            arr[i][j] = rand() % 100;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < r; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    // виділення масивів
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++) {
            if (i > j && i < r - 1 - j) swap(arr[i][j], arr[i][r - 1 - j]);
        }
    cout << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < r; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}