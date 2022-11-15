#include<iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
using namespace std;
struct mon {
    char name[9];
    double year;
    double dim, sq;
};
int n = 4;
int i, j, k,t,l;
struct mon x ;
int m;
int lab_7() {
    mon gg[n];
    for (i = 0; i < n; i++) {
        cout << i+1<<". Vvedit: Rik -" << i + 1 << "-go ychenoho\n";
        cin >> gg[i].year;
        if(gg[i].year==0) break;
         cout << i+1<<". Vvedit: Name kerivnika -" << i + 1 << "-go ychenoho\n";
         cin >> gg[i].name;
          //if (!strcmp(gg[n].name, "***")) break;
         cout <<i+1<< ". Vvedit: Diametr antenu -" << i + 1 << "-go ychenoho\n";
         cin >> gg[i].dim;
         cout << i+1 <<". Vvedit: Chastota robotu -" << i + 1 << "-go ychenoho\n";
         cin >> gg[i].sq;
        if (!strcmp(gg[n].name, "***")) break;
    }

    /*вивід таблиці*/
    cout << "-------------------------------------------------------\n";
    cout << "|           Proektu poshyky pozazemnux sugnaliv       |\n";
    cout << "|-----------------------------------------------------|\n";
    cout << "|  Rik   | Kerivnuk |   Diametr   |  Robocha chastota |\n";
    cout << "|        |          |  antenu(m)  |       (MGu)       |\n";
    cout << "|--------|----------|-------------|-------------------|\n";

    /*sortirovka*/

    for ( l = i - 1; l > 0; l--) {
        for (j = n - 1; j > 0; j--) {
            if (gg[j].year > gg[ j -1 ].year) {
                k = gg[j].year;
                gg[j].year = gg[ j -1].year;
                gg[ j -1].year = k;
                m = gg[j].dim;
                gg[j].dim = gg[ j -1].dim;
                gg[ j -1].dim = m;
                strcpy(x.name,gg[j].name);
                strcpy(gg[j].name,gg[j-1].name);
                strcpy(gg[j-1].name,x.name);
                t=gg[j].sq;
                gg[j].sq=gg[j-1].sq;
                gg[j-1].sq=t;
            }
        }
    }
    /*вивід таблиці*/
    for (l = 0; l < i; l++) {
        /* виведення рядків фактичних даних */
        cout << "|" << setw(8) << left << gg[l].year << "|" << setw(10) << left << gg[l].name << "|" << setw(13) << left
             << gg[l].dim
             << "|" << setw(19) << left << gg[l].sq << "|" << endl;
    }
    /* висновок приміток */
    cout << "|-----------------------------------------------------|\n";
    cout << "|         Prumitka: sposterigalusa ob`ektu vid        |\n";
    cout << "|               2 zirok do kilkoh halaktuk            |\n";
    cout << "-------------------------------------------------------\n";

    return 0;
}


