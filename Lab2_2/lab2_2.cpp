#include <iostream>
#include <iomanip>
using namespace std;

int lab_2_2(void) {
    double year1, year2, year3;
    char cer1[9], cer2[9], cer3[9];
    double dim1, dim2, dim3;
    double sq1, sq2, sq3;
    cout<<"1.Vvedit: Rik, Naykovogo kerivnuka, Diametr antenu, Robota chastota >\n";
    cin >> year1>>cer1>>dim1>>sq1;
    cout<<"2.Vvedit: Rik, Naykovogo kerivnuka, Diametr antenu, Robota chastota >\n";
    cin >> year2>>cer2>>dim2>>sq2;
    cout<<"3.Vvedit: Rik, Naykovogo kerivnuka, Diametr antenu, Robota chastota >\n";
    cin >> year3>>cer3>>dim3>>sq3;
    /*вивід таблиці*/
    cout<<"-------------------------------------------------------\n";
    cout<<"|           Proektu poshyky pozazemnux sugnaliv       |\n";
    cout<<"|-----------------------------------------------------|\n";
    cout<<"|  Rik   | Kerivnuk |   Diametr   |  Robocha chastota |\n";
    cout<<"|        |          |  antenu(m)  |       (MGu)       |\n";
    cout<<"|--------|----------|-------------|-------------------|\n";
    /* виведення рядків фактичних даних */
    cout<<"|"<<setw(8)<<left<<year1<<"|"<<setw(10)<<left<<cer1<<"|"<<setw(13)<<left<<dim1<<"|"<<setw(19)<<left<<sq1<<"|"<<endl;
    cout<<"|"<<setw(8)<<left<<year2<<"|"<<setw(10)<<left<<cer2<<"|"<<setw(13)<<left<<dim2<<"|"<<setw(19)<<left<<sq2<<"|"<<endl;
    cout<<"|"<<setw(8)<<left<<year3<<"|"<<setw(10)<<left<<cer3<<"|"<<setw(13)<<left<<dim3<<"|"<<setw(19)<<left<<sq3<<"|"<<endl;
    /* висновок приміток */
    cout<<"|-----------------------------------------------------|\n";
    cout<<"|         Prumitka: sposterigalusa ob`ektu vid        |\n";
    cout<<"|               2 zirok do kilkoh halaktuk            |\n";
    cout<<"-------------------------------------------------------\n";

    return 0;
}