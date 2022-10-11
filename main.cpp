
#include <iostream>
#include "Lab_1/lab_1.h"
#include "Lab_2/lab_2_1.h"
using namespace std;
int main(){
    int choice;
    cout << "Lab 1 = 1\nLab 2 = 2\nExit = 3\nPlease, chose your variant: ";
    cin >> choice;
    switch (choice) {
        case 1: lab_1();
            break;
        case 2: lab_2_1();
            break;
        case 3: exit(0);
        default: cout << "Error";
    }
    return 0;
}