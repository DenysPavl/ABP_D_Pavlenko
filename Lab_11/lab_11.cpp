#include<iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Bus {
protected:
       string name;
      int size, atp;
public:
    Bus();                                               //standart
  Bus(std::string name_ ,int size_,int atp_ );           // parametruchne
void Show(std::string name_ ,int size_,int atp_ );      //show
void sizek(int si);                                     //change
Bus(const Bus &bus):                                    //copy
    name(bus.name),size(bus.size),atp(bus.atp){}
void getname(std::string y,int s,int t);
~Bus(){                                                 //dekonsruktor
   // cout<<"hello"<<endl;
};
void Showatp(){
    cout<<"Show ATP:"<<atp<<endl;
}
};

class Bus_ : public Bus{                                   //dochirniu class
string tochka;
public:
    Bus_(Bus& a):Bus(a){}
void Get1(std::string x){
    cin>>x;
    tochka=x;
};

void Show1(){
    cout << "|" << setw(8)<< left <<name<< "|" << setw(10) << left<< size << "|" << setw(13) << left
         << atp
         << "|" << setw(19) << left << tochka << "|" << endl;
}
};

Bus::Bus() {}
Bus::Bus(std::string name_, int size_, int atp_) {
    name=name_;
    size=size_;
    atp=atp_;}

void Bus::Show(std::string name_, int size_, int atp_) {
    cout << "|" << setw(8)<< left <<name<< "|" << setw(10) << left<< size << "|" << setw(13) << left
         << atp
         << "|" <<endl;}
void start_(){
    cout << "-----------------------------------\n";
    cout << "|               BUS               |\n";
    cout << "|---------------------------------|\n";
    cout << "|  Name  | Size bus |     ATP     |\n";
    cout << "|--------|----------|-------------|\n";}

void Bus::sizek(int si){
    size =si;}
void Bus::getname(std::string y,int s,int t) {
    cout<<"Vvedit name,size,ATP:"<<endl;
    cin>>y>>s>>t;
    name=y;
size=s;
atp=t;
}
void start1() {
    cout << "-------------------------------------------------------\n";
    cout << "|                             Bus                     |\n";
    cout << "|-----------------------------------------------------|\n";
    cout << "|  name  |   size   |      ATP    |    Finish point   |\n";
    cout << "|--------|----------|-------------|-------------------|\n";
}
int lab_11(){
    string y;
    int s,t;
Bus a(y,s,t);
a.getname(y,s,t);
Bus b(y,s,t);
b.getname(y,s,t);
Bus c(y,s,t);
c.getname(y,s,t);
Bus d(c);
start_();
a.Show(y,s,t);
b.Show(y,s,t);
d.Show(y,s,t);
int siz;
cout<<"change Bus size For 1:"<<endl;
cin>>siz;
    cout<<"change Bus size For 2:"<<endl;
a.sizek(siz);
cin>>siz;
b.sizek(siz);
    cout<<"change Bus size For 1:"<<endl;
    cin>>siz;
d.sizek(siz);
start_();
    a.Show(y,siz,t);
    b.Show(y,siz,t);
    d.Show(y,siz,t);
    cout<<endl;
    cout<<"1";
    a.Showatp();
    cout<<"2";
    b.Showatp();
    cout<<"3";
    d.Showatp();
 //~Bus();
 string x;
Bus_ z(a) ;
z.Get1(x);
    start1();
z.Show1();
    return 0;
}