#include <iostream>
using namespace std;
string convertnum1(int number1);
string convertnum2(int number2);
main()
{
    int number1;
    int number2;
    int number;
    string result;
    cout<<"enter number1";
    cin>>number1;
    number1=number/10;
    number2=number%10;
    result=convertnum1(int number1);
    result=convertnum2(int number2);
    cout<<"result";
}
   string convertnum1(int number1)
 {
    string numm;
    if(number1==2);
    {
        numm="twenty";
    }
    if(number1==3);
    { 
      numm="thirty";
    }
     if(number1==4);
    {
     numm="fourty";
    }
     if(number1==5);
     {
        numm="fifty";
     }
     if(number1==6);
     {
      numm="sixty";
     }
     if(number1==7);
     {
     numm="seventy";
     }
     if(number1==8);
     {
      numm="eighty";
     }
     if(number1==9);
     {
        numm="ninety";
     }   
      string numm2;
      int number2;
      if(number2==2);
      {
        numm2="two";
      }
      if(number2==3)
      {
        numm2="three";
      }
      if(number2==3);
      {
        numm2="three";
      }
      if(number2==4);
      {
        numm2="four";
      }
      if(number2==5);
      {
        numm2="five";
      }
      if(number2==6);
      {
        numm2="six";
      }
      if(number2==7);
       {
        numm2="seven";
       }
       if(number2==8);
       {
       numm2="eight";
       }
       if(number2==9);
       {
        numm2="nine";
       }
}
