#include<iostream>
#include <ctime>
using namespace std;
int lab_4(){
    const int size = 3;
    int arr[size][size];
    for (int i = 0; i<size; i++)
    for (int j = 0; j<size; j++)
    cin >> arr[i][j];
    cout << " output" << endl;
    for (int i = 0; i<size; i++){
        for (int j = 0; j < size; j++)
        cout << "arr[" << i <<"," << j << "] = " << arr[i][j]<<" ";
        cout << endl;
    }
}
