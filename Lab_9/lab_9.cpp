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
int n=4 ;
int i, j, k,t,l,w;
struct mon x ;
int m;

void initf () {
    string path = "Lab_9.txt";
    ofstream fout;
    fout.open(path);
    if (!fout.is_open())
        cout << "error";
}
void commit (){
    ofstream fout;
    fout.close();
    ifstream fin;
    fin.close();
}
void  f_add(mon*){
    string path = "Lab_9.txt";
    ofstream fout;
    fout.open(path,ofstream::app);
    if (!fout.is_open())
        cout << "error";
    else{
        mon gg[n];
        cout<<"hochene vvestu dodatkovi danni? Esli ni to vvedit '0'"<<endl;
        for (i = 0; i < n; i++) {
            cout << i + 1 << ". Vvedit: Rik -" << i + 1 << "-go ychenoho\n";
            cin >> gg[i].year;
            if (gg[i].year == 0) break;
            cout << i + 1 << ". Vvedit: Name kerivnika -" << i + 1 << "-go ychenoho\n";
            cin >> gg[i].name;
            cout << i + 1 << ". Vvedit: Diametr antenu -" << i + 1 << "-go ychenoho\n";
            cin >> gg[i].dim;
            cout << i + 1 << ". Vvedit: Chastota robotu -" << i + 1 << "-go ychenoho\n";
            cin >> gg[i].sq;
            if (!strcmp(gg[n].name, "***")) break;

            fout << gg[i].year << "\t" << gg[i].name << "\t" << gg[i].dim << "\t" << gg[i].sq << endl;
        }
    }
}
void fshow_1 (){
    int num,j=0;
    cout<<"vvedit ctroky"<<endl;
    cin>>num;
    ifstream fin;
    fin.open("Lab_9.txt");
    string ch;
    while (!fin.eof()){
        getline(fin,ch);
        if((ch=="")|| (num>4))
            break;
        if(j==(num-1)){
            cout<<ch<<endl;}
        j++;
    }
    cout<<endl;
}
void fdel_item () {
    int num=0, num_now = 0, j = 0;
    cout << "vvedit ctroky na ydalenia" << endl;
    cin >> num;
    ifstream fin;
    fin.open("Lab_9.txt");
    string line, line2;
    while (getline(fin, line)) {
        num_now++;
        if (!(num_now == num)) {
            line2.insert(line2.size(), line);
            line2.insert(line2.size(), "\r\n");
        }
    }
    fin.close();
    string path = "Lab_9.txt";
    ofstream fout;
    fout.open(path,ios::trunc|ios::binary);
    fout.write(line2.c_str(),line2.size());
    fout.clear();
}
void fshow_all (){
    cout << "------------------------------------------\n";
    cout << "|     Proektu poshyky pozazemnux sugnaliv |\n";
    cout << "|-----------------------------------------|\n";
    cout << "| Rik |Keriv| Diametr |Robocha chastota|\n";
    cout << "|     | nuk |antenu(m)|     (MGu)      |\n";
    cout << "|-----|-----|---------|----------------|\n";
    ifstream fin;
    fin.open("Lab_9.txt");
    if(!fin.is_open()){
        cout<<"error";
    } else {
        string str;
        while (!fin.eof()){
            str="";
            getline(fin,str);
            cout<<"|"<<str<<endl;
        }
    }
    cout << "|--------------------------------------|\n";
    cout << "| Prumitka: sposterigalusa ob`ektu vid |\n";
    cout << "|         2 zirok do kilkoh halaktuk   |\n";
    cout << "----------------------------------------\n";
}

int lab_9() {
    mon gg[n];
    initf ();
    commit ();
    f_add(gg);
    commit ();
    fshow_all ();
    commit ();
    fshow_1 ();
    commit();
    fdel_item ();
    fshow_all ();
    commit();
    return 0;
}