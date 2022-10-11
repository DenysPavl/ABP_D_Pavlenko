#include <iostream>
#include <math.h>
using namespace std;
int lab_2() {
    long n;
    double k1 = pow(-1, n), k2 = pow(2, n), sum, term;
    n = 0, sum = 0;
    const double eps = 0.000001;
    while (true) {
        term = k1 * (1 - (k2 / (k2 + 1)));
        if (abs(term) < eps && term != 0) {
            cout << "sum:" << sum << endl;
            break;
        }
        sum = sum + term;
        if (n==9) {
            cout << "sum 10: " << sum << endl;
        }
            n++,k1 = -k1, k2 = 2 * k2;
        }
        return 0;
}