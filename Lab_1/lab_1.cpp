//
// Created by gaysu on 20.09.2022.
#include <iostream>
using namespace std;
int lab_1(){
    double x,y;
    cout <<"Lab1"<< endl;
cout<<"Enter the coordinates"<<endl;
cout<<"x=";
cin>>x;
cout<<"y=";
cin>>y;

  if (x*x+y*y<=1 && 1>=x && x>=-1 && y<=1 && y >=0 || x*x+y*y<=1 && x>=-1 && x<=0 && y>=-1 && y<=0 ){
    cout<<"The point is included"<<endl;}
    else {
        cout<<"The point is not included"<<endl;
    }
    return 0;
}

