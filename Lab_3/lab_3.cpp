#include<iostream>
#include <ctime>
using namespace std;
int lab_3(){
    int arr[200];
    time(0);
    // задаєм масиви //
for ( int i=0; i<200;++i){
    arr[i]=rand()%201-100;
}
double n=0,s=0;
    for(int i=0;i<200;++i) {
        cout << arr[i]<< "  " ;
    }
    // шукаємо кількість та суму додатніх масивів //
    for(int i=0;i<200;++i){
        if(arr[i]>=0) {
            n++;
            s+=arr[i];
        }
    }
    cout<<""<<endl;
    cout<<"kilkist masuviv >0 :"<<n<<endl;
    cout<<"suma masuviv >0 :"<<s<<endl;
    // середнє арифметичне дод. масивів //
    float avig;
    avig=s/n;
    cout<<"seredne arufmatuchne:"<<avig<<endl;
    // заміна //
    for(int i=0;i<200;++i){
        if(arr[i]<0){
            arr[i]=avig;
        }
        cout<<arr[i]<<"  ";
    }
    return 0;
}
