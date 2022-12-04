#include<iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
//#include <string>
using namespace std;

class Tabl {
private:
    int year, dim;
    double sim;
    string name;
public:
    void set(int y,string n, int d, double s);
    void get(int &y,string n, int &d, double &s);
    void show();
};

void Tabl::set(int y,std::string n, int d, double s) {
    year = y;
    name=n;
    dim = d;
    sim = s;
}

void Tabl::get(int &y,std::string n, int &d, double &s) {
    y = year;
    //delete n;
    n = name;
    d = dim;
    s = sim;
}

void Tabl::show() {
    cout << "|" << setw(8)<< left <<year<< "|" << setw(10) << left<< name << "|" << setw(13) << left
         << dim
         << "|" << setw(19) << left << sim << "|" << endl;
}


void start() {
    cout << "-------------------------------------------------------\n";
    cout << "|           Proektu poshyky pozazemnux sugnaliv       |\n";
    cout << "|-----------------------------------------------------|\n";
    cout << "|  Rik   | Kerivnuk |   Diametr   |  Robocha chastota |\n";
    cout << "|        |          |  antenu(m)  |       (MGu)       |\n";
    cout << "|--------|----------|-------------|-------------------|\n";
}

void end() {
    cout << "|-----------------------------------------------------|\n";
    cout << "|         Prumitka: sposterigalusa ob`ektu vid        |\n";
    cout << "|               2 zirok do kilkoh halaktuk            |\n";
    cout << "-------------------------------------------------------\n";
}

///////////////////////////////
int lab_10() {
    cout << "VVedit rik , name , diametr antenu , chastota doslidy 1" << endl;
    int y,d;
    double s;
    string n;
    Tabl a;
    cin >> y >> n  >> d >>s ;
    a.set(y,n,d,s);
    a.get( y,n,d,s);
    Tabl b;
    cout << "VVedit rik , name , diametr antenu , chastota doslidy 2" << endl;
    cin >> y >> n  >> d >>s ;
    b.set(y,n,d,s);
    b.get( y,n,d,s);
    Tabl c;
    cout << "VVedit rik , name , diametr antenu , chastota doslidy 3" << endl;
    cin >> y >> n  >> d >>s ;
    c.set(y,n,d,s);
    c.get( y,n,d,s);
    Tabl q;
    cout << "VVedit rik , name , diametr antenu , chastota doslidy 4" << endl;
    cin >> y >> n  >> d >>s ;
    q.set(y,n,d,s);
    q.get( y,n,d,s);
    start();
    a.show();
    b.show();
    c.show();
    q.show();
    end();
    return 0;
}
