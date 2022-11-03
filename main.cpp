#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int sec,min,hour;
    cout<<"Enter football sec :";
    cin>>sec;
    hour=sec/3600;

    min=min*60;

    sec=sec*60;
    cout<<"game lasts :"<<endl<<hour<<"hour"<<endl<<min<<"min"<<endl<<sec<<"sec";



    getch();
    return 0;
}
