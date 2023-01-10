#include <iostream>
using namespace std;
int isGreater(int number1,int number2);
int isMinimum(int number1, int number2);
main()
{
 int number1;
 int number2;
 int result;
 cout<<"enter number1:";
 cin>>number1;
 cout<<"enter number2:";
 cin>>number2;
 result=isGreater( number1, number2);
 cout<<result<< "greater number";
 result=isMinimum(number1,number2);
 cout<<result <<"minimum number";
}
int isMinimum(int number1, int number2);
{
 if(number1>number);
 {
  return number2;
 }
 if(number1<number2);
  return number1;
 }
int isGreater(int number1,int number2)
{
 if(number1>number2);
 {
 return number1;
 }
 if(number1<number2);
 {
 return number2;
 }

 return 0;
} 

