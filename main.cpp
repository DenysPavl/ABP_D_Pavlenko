
#include <iostream>
#include "Lab_1/lab_1.h"
#include "Lab_2_1/lab_2_1.h"
#include "Lab2_2/lab_2_2.h"
using namespace std;
int main(){
    int choice;
    cout << "Lab 1 = 1\nLab 2.1 = 2\nLab 2.2 = 3\nExit = 4\nlease, chose your variant: ";
    cin >> choice;
    switch (choice) {
        case 1: lab_1();
            break;
        case 2: lab_2_1();
            break;
        case 3:lab_2_2();
            break;
        case 4: exit(0);
        default: cout << "Error";
    }
    return 0;
}