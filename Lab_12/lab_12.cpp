#include <iostream>
#define N 3
#include<iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
using namespace std;

class Tabl2 {
private:
    int year, dim;
    double sim;
    string name;
public:
    void set(int y,string n, int d, double s);
    void get(int &y,string n, int &d, double &s);
    void show();
    friend ostream & operator<<(ostream &stream, Tabl2 &other);
    friend istream & operator>>(istream &stream, Tabl2 &other);
    friend void shapka(void);
    friend void linebuild(void);
    friend int isvalid(int y);
    Tabl2 operator =(Tabl2 &other){
        this->year=other.year;
        this->name=other.name;
        this->dim=other.dim;
        this->sim=other.sim;
        return *this;
    };
    int operator==(Tabl2 &other){
if(this->year==other.year && this->name==other.name &&this->dim==other.dim && this->sim==other.sim){
cout<<"1"<<endl;
}
else
    cout<<"0"<<endl;
    };
    Tabl2 operator+(Tabl2 &other){
int tr;
tr=this->year+other.year;
cout<<tr<<endl;
    };
    Tabl2(){
        year=0;
        dim=0;
        sim=0;
    }
    Tabl2(int &y, std::string n,int &d,double &s);

};
void Tabl2::set(int y,std::string n, int d, double s) {
    year = y;
    name=n;
    dim = d;
    sim = s;
}
Tabl2 tabl2;
void Tabl2::get(int &y,std::string n, int &d, double &s) {
    y = year;
    n = name;
    d = dim;
    s = sim;
}

void Tabl2::show() {
    cout << "|" << setw(8)<< left <<year<< "|" << setw(10) << left<< name << "|" << setw(13) << left
         << dim
         << "|" << setw(19) << left << sim << "|" << endl;
}
 void shapka(void){
     cout << "-------------------------------------------------------\n";
     cout << "|           Proektu poshyky pozazemnux sugnaliv       |\n";
     cout << "|-----------------------------------------------------|\n";
     cout << "|  Rik   | Kerivnuk |   Diametr   |  Robocha chastota |\n";
     cout << "|        |          |  antenu(m)  |       (MGu)       |\n";
     cout << "|--------|----------|-------------|-------------------|\n";
}
ostream & operator<<(ostream & stream, Tabl2 &other){
    stream<<other.year<<"\t"<<other.name<<"\t"<<other.dim<<"\t"<<other.sim;
    return stream;
}
istream & operator>>(istream &stream, Tabl2 &other){
    cout << "VVedit rik , name , diametr antenu , chastota doslidy " << endl;
stream>>other.year>>other.name>>other.dim>>other.sim;
    return stream;
}
int isvalid(int y){
if(y){
    cout<<"yes";
}

}
int lab_12(){
    cout << "VVedit rik , name , diametr antenu , chastota doslidy 1" << endl;
    int y,d;
    double s;
    string n;
    Tabl2 a;
    cin >> y >> n  >> d >>s ;
    a.set(y,n,d,s);
    a.get( y,n,d,s);
    Tabl2 b;
    cout << "VVedit rik , name , diametr antenu , chastota doslidy 2" << endl;
    cin >> y >> n  >> d >>s ;
    b.set(y,n,d,s);
    b.get( y,n,d,s);
    Tabl2 c;
    cout << "VVedit rik , name , diametr antenu , chastota doslidy 3" << endl;
    cin >> y >> n  >> d >>s ;
    c.set(y,n,d,s);
    c.get( y,n,d,s);
    a=b;
    shapka();
    a.show();
    b.show();
    c.show();
    cout<<"proverka na identuchnist 1 i 2 radka :  ";
    int result = a==b;
    cout<<"proverka na identuchnist 2 i 3 radka :  ";
    int result2 = c==b;
   cout<<"suma perchogo i ostannogo YEAR:  ";
   c+b;
    cout<<"vvid cheres frendli fire"<<endl;
   cin>>a;
   cin>>b;
   cin>>c;
   cout<<"vuvid cheres frendli fire"<<endl;
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
    return 0;
}
