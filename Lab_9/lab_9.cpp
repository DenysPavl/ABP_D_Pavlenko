#include<iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
#include <fstream>
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
int lab_9() {
    string path = "Lab_9.txt";
    ofstream fout;
    fout.open(path);
    if (!fout.is_open())
        cout<<"error";
    else {
        mon gg[n];
        for (i = 0; i < n; i++) {
            cout << i + 1 << ". Vvedit: Rik -" << i + 1 << "-go ychenoho\n";
            cin >> gg[i].year;
            if (gg[i].year == 0) break;
            cout << i + 1 << ". Vvedit: Name kerivnika -" << i + 1 << "-go ychenoho\n";
            cin >> gg[i].name;
            //if (!strcmp(gg[n].name, "***")) break;
            cout << i + 1 << ". Vvedit: Diametr antenu -" << i + 1 << "-go ychenoho\n";
            cin >> gg[i].dim;
            cout << i + 1 << ". Vvedit: Chastota robotu -" << i + 1 << "-go ychenoho\n";
            cin >> gg[i].sq;
            if (!strcmp(gg[n].name, "***")) break;
            fout << gg[i].year << "\t" << gg[i].name << "\t" << gg[i].dim << "\t" << gg[i].sq << endl;
        }
    }
    fout.close();
    cout << "------------------------------------------\n";
    cout << "|     Proektu poshyky pozazemnux sugnaliv |\n";
    cout << "|-----------------------------------------|\n";
    cout << "| Rik |Kerivnuk| Diametr |Robocha chastota|\n";
    cout << "|     |        |antenu(m)|     (MGu)      |\n";
    cout << "|-----|--------|---------|----------------|\n";
    /*вивід таблиці*/
    ifstream fin;
    fin.open(path);
    if(!fin.is_open()){
        cout<<"error";
    } else {
        char in;
        while (fin.get(in)){
            cout<<in;
        }
    }
    fin.close();
    /* висновок приміток */
    cout << "|-----------------------------------------|\n";
    cout << "|   Prumitka: sposterigalusa ob`ektu vid  |\n";
    cout << "|         2 zirok do kilkoh halaktuk      |\n";
    cout << "-------------------------------------------\n";

    return 0;
}