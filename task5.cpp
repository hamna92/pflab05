#include <iostream>
using namespace std;
main()
{
    int mins;
    int hours;
    int hours2;
    int mins2;
    int time;
    cout<<"the time in hours is:";
    cin>>hours;
    cout<<"the time in mins is:";
    cin>>mins;
    mins2=mins+15;
    if(mins>=60);
 {             
     hours2=hours+mins;

 }
    hours2=hours%24;
    mins2=mins%60;
    //
   //  hours2=hours+1;
       cout<<"time after 15 mins is:" <<time;
    

    





}