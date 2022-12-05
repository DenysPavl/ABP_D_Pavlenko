#include <iostream>
#include "Lab_1/lab_1.h"
#include "Lab_2_1/lab_2_1.h"
#include "Lab2_2/lab_2_2.h"
#include "Lab_3/lab_3.h"
#include "Lab_4/lab_4.h"
#include "Lab_5/lab_5.h"
#include "Lab_6//lab_6.h"
#include "Lab_7//lab_7.h"
#include "Lab_8//lab_8.h"
#include "Lab_9/lab_9.h"
#include "Lab_10/lab_10.h"
#include "Lab_11/lab_11.h"
#include "Lab_12/lab_12.h"
using namespace std;
int main(){
    int choice;
    cout << "Lab 1 = 1\nLab 2.1 = 2\nLab 2.2 = 3\nLab 3 = 4\nLab 4 = 5\nLab 5 = 6\nLab 6 = 7\nLab 7 = 8\nLab 8 = 9\nLab 9 = 10\nLab 10 = 11\nLab 11 = 12\nLab 12 = 13\nExit = 14\nPlease, chose your variant: ";
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
        case 8:lab_7();
            break;
        case 9:lab_8();
            break;
        case 10:lab_9();
            break;
        case 11:lab_10();
            break;
        case 12:lab_11();
            break;
        case 13:lab_12();
            break;
        case 14: exit(0);
        default: cout << "Error";
    }
    return 0;
}