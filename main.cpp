#include <iostream>
#include "Lab_1/lab_1.h"
#include "Lab_2_1/lab_2_1.h"
#include "Lab2_2/lab_2_2.h"
#include "Lab_3/lab_3.h"
#include "Lab_4/lab_4.h"
#include "Lab_5/lab_5.h"
#include "Lab_6//lab_6.h"
using namespace std;
int main(){
    int choice;
    cout << "Lab 1 = 1\nLab 2.1 = 2\nLab 2.2 = 3\nLab 3 = 4\nLab 4 = 5\nLab 5 = 6\nLab 6 = 7\nExit = 8\nPlease, chose your variant: ";
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
        case 5:lab_4();
            break;
        case 6:lab_5();
            break;
        case 7:lab_6();
            break;
        case 8: exit(0);
        default: cout << "Error";
    }
    return 0;
}