#include <iostream>
#include <conio.h>
using namespace std;
struct link
{
    int data;
    link* next;
} ;


class Vuzol
{
private:
    link* first;
public:
    bool e;
    Vuzol( ){
        first = NULL; e=false;
    }
    void additem ( int d );
    void display ( );
    bool exist(int x);
    void Dell (int k );
    void display2 (int z);
};
void Vuzol::additem ( int d ) // добавление элемента
{
    link* newlink = new link;      // выделяем память
    newlink->data = d;             // запоминаем данные
    newlink->next = first;         // запоминаем значение first
    first = newlink;               // first теперь указывает на новый элемент
}
void Vuzol::display ( )
{
    link* current = first;
    if (!current) cout<<"\nlist is clear";
    while( current )
    {
        cout << current->data<<' ';
        current = current->next;
    }
}
void Vuzol::display2 (int z)
{
    link* current = first;
    if (!current) cout<<"Vuzol is clear";
    while ( current ){
        cout << current->data<<' ';
        current = current->next;
    }
}
void Vuzol::Dell (int k )
{
    link* current = first;           // начинаем с первого элемента
    link* deleted;
    while( current ){
        current = current->next;
        for(int i=0;i=k;i++){
            deleted=current;
            delete deleted;
        }
    }
}

bool Vuzol::exist (int x)
{
    link* current = first;
    if (!current) return 0;
    while( current )
    {
        /*if (current->data==x)
        {
            return 1;
            break;
        }*/
        current = current->next;
        if (current ==NULL)
            return 0;
    }
}


class Graph{
private:
    Vuzol adj[100];
public:
    Graph(){}
    void addedge ( int x, int y );
    void addvertex (int x );
    void display ( );
    void  Dell(int k){
        adj[k].e= false;
    }
    void display2 (int z ){
        adj[z].display();
    }
};

void Graph::addvertex (int x)
{
    if (adj[x].e==false)
        adj[x].e=true;
}
void Graph::addedge (int x, int y)
{
    if (adj[x].e==true&&adj[y].e==true&&adj[x].exist(y)==false&&adj[y].exist(x)==false&&(x!=y))
    {
        adj[x].additem(y);
        adj[y].additem(x);
    }
}
void Graph::display ()
{
    for (int i=1; i<100; i++)
    {
        if (adj[i].e==true)
        {
            cout<<i<<" - ";
            adj[i].display();
            cout<<endl;

        }
    }
}

int lab_13 ( )
{
    int x,y,n;
    char sw='y';
    Graph G;       // создаем переменную-список
    cout<<" Kilkist vershun "<<endl;
    cin>>n;

    while (n>0)
    {
        cout<<"VVedit vershuny - ";
        cin>>x;
        G.addvertex(x) ; // добавляем туда несколько чисел
        n--;
    }


    while (sw!='n')
    {
        cout<<"stvorenna par - (x,y)"<<endl;
        cin>>x;
        cin>>y;
        G.addedge(x,y) ; // добавляем туда несколько чисел
        cout<<"Hotite dobavutu sche paru (y/n)? "<<endl;
        sw=getch();
    }
    G.display ( );    // показываем список
    int c;
    cin>>c;
    G.Dell(c);
    G.display ();
    int v;
    cout<<"way";
    cin>>v;
    G.display2(v);
    return 0;
}