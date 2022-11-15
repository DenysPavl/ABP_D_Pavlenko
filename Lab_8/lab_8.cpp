#include <string.h>
#include <iomanip>
#include <algorithm>
#include<iostream>
#include <list>
using namespace std;
struct mon {
    char name[9];
    double year;
    double dim, sq;
    mon *dali;
};
mon *element , *persiu , *poperedniu , *noviu;
void StvorytySpisok();
void VyvestiNaEkran();
void StvorytyNovijElement();

int lab_8() {

    StvorytySpisok();
    cout << "-------------------------------------------------------\n";
    cout << "|           Proektu poshyky pozazemnux sugnaliv       |\n";
    cout << "|-----------------------------------------------------|\n";
    cout << "|  Rik   | Kerivnuk |   Diametr   |  Robocha chastota |\n";
    cout << "|        |          |  antenu(m)  |       (MGu)       |\n";
    cout << "|--------|----------|-------------|-------------------|\n";
    VyvestiNaEkran();
    cout << "|-----------------------------------------------------|\n";
    cout << "|         Prumitka: sposterigalusa ob`ektu vid        |\n";
    cout << "|               2 zirok do kilkoh halaktuk            |\n";
    cout << "-------------------------------------------------------\n";
    system("pause");
    cout << "|-----------------------------------------------------|\n";
    cout << "|         Prumitka: sposterigalusa ob`ektu vid        |\n";
    cout << "|               2 zirok do kilkoh halaktuk            |\n";
    cout << "-------------------------------------------------------\n";
}

void StvorytySpisok(void) {
    element = new(mon);
    persiu = element;
    do {
        poperedniu = element;
        cout << ". Vvedit: Rik -" << "-go ychenoho\n";
        cin >> element->year;
        if (element->year == 0) break;
        cout << ". Vvedit: Name kerivnika -"<< "-go ychenoho\n";
        cin >> element->name;
        cout <<  ". Vvedit: Diametr antenu -" <<  "-go ychenoho\n";
        cin >> element->dim;
        cout << ". Vvedit: Chastota robotu -" << "-go ychenoho\n";
        cin >> element->sq;
        element->dali = new(mon);
        element = element->dali;
    } while (poperedniu->year != 0 || poperedniu->dim != 0 || poperedniu->sq != 0);
    poperedniu->dali = NULL;
}
void VyvestiNaEkran(void) {
    element = persiu;
    while (element != NULL) {
        cout << "|" << setw(8) << left << element->year << "|" << setw(10) << left << element->name << "|" << setw(13)
             << left
             << element->dim
             << "|" << setw(19) << left << element->sq << "|" << endl;
        element= element->dali;
    }
}
