#include <iostream>
#include "Lab_1/lab_1.h"
#include "Lab_2_1/lab_2_1.h"
#include "Lab2_2/lab_2_2.h"
#include "Lab_3/lab_3.h"
using namespace std;
int main(){
    int choice;
    cout << "Lab 1 = 1\nLab 2.1 = 2\nLab 2.2 = 3\nLab 3 = 4\nExit = 5\nPlease, chose your variant: ";
    cin >> choice;
    switch (choice) {
        case 1: lab_1();
            break;
        case 2: lab_2_1();
            break;
        case 3:lab_2_2();
            break;
        case 4:lab_3();
            break;
        case 5: exit(0);
        default: cout << "Error";
    }
    return 0;
}