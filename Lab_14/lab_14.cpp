#include <iostream>
#include<iostream>
#include <algorithm>
#include <iomanip>
#include "list"
using namespace std;

class Vioid{
public:
    virtual void Show()=0;
};

struct Node
{
    int data;
    Node *next;
};

class Spusok: virtual Vioid{
private:
    Node *head;
public:

    Spusok(){
        head=NULL;
    }
    void addNode(int d);
    void Show();
    Spusok(int y);
    void Del();
    void Pidrahunok();
    void AllDell();
    ~Spusok(){
        if (head != nullptr) {
            delete head;
        }
    }
};
void Spusok::Show() {
    Node *current = head;
    while (current != NULL){
        cout<<current->data<<endl;
        current=current->next;
    }
}
void Spusok::addNode(int d) {

    Node *nd = new Node;
    nd->data = d;
    nd->next = NULL;
    if(head == NULL)
        head = nd;
    else
    {
        Node *current = head;
        while(current->next != NULL)
            current = current->next;
        current->next = nd;
    }

}
void Spusok::Del()
{
    if (head == NULL) {
        return;
    }
    if (head != NULL)
    {
        Node * newhead = head->next;
        head = newhead;                  // удаляет первый элемент
    }

}
void Spusok::Pidrahunok() {
    Node *current = head;
    int i=0;
    while (current != NULL){
        i++;
        current=current->next;
    }
    cout<<i<<endl;
}
void Spusok::AllDell() {
    while(head != nullptr) {
        if (head == 0) {
            cout << "Список пуст\n";
        }
        Node *delptr = head;
        head = head->next;
        delete delptr;
    }
}
int lab_14(){
    int q;
    cout<<"vvedit 5 elementiv y spusok"<<endl;
    Spusok a;
    cin>>q;
    a.addNode(q);
    cin>>q;
    a.addNode(q);
    cin>>q;
    a.addNode(q);
    cin>>q;
    a.addNode(q);
    cin>>q;
    a.addNode(q);
    cout<<"-----"<<endl;
    a.Show();
    cout<<"Pidrahunok kilkosti elementiv"<<endl;
    a.Pidrahunok();
    a.Del();
    cout<<"Spusok pisla vndalenna head"<<endl;
    a.Show();
    cout<<"Pidrahunok kilkosti elementiv"<<endl;
    a.Pidrahunok();
    cout<<"Delete all spusok"<<endl;
    a.AllDell();
    a.Show();
    return 0;
}
