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
    for (int i = 0; i <= n; ++i)
        arr2[i]=i+1;
    for (int i = 0; i <= m; ++i)
        arr3[i]=i+1 ;
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
    for (j = 0; j < r; j++) {
        for (i = r - j; i < j; i++)
        //if (i>j && i + j +1 < r)
            arr2[size++]= arr[i][j];

        for (i = j + 1; i < r - j - 1; i++)
       // if (i<j && i + j +1 > r)
            arr3[size++]=arr[i][j];

         swap(arr2[size++],arr3[size++]);
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < r; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}