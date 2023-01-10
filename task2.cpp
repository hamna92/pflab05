#include <iostream>
#include <cmath>
float positiveQuadratic(int a,int b,int c);
float negativeQuadratic(int a, int b,int c);
using namespace std;

main()
{
 int a=6;
 int b=4;
 int c=3;
 float positive_quad= positiveQuadratic(a,b,c);
 cout<<" positive quad is:"<< positive_quad;
 float negative_quad=negativeQuadratic(a,b,c);
 cout<<"negative quad is:"<<negative_quad;
 
}
 float positiveQuadratic(int a,int b,int c)
 {
 int bsquare;
 int ac4;
 int a2;
 float squareroot;
 float divide;
 float quad;
 float positiveQuadrant;
 bsquare =pow(b,2);
 ac4=a*c*4;
 a2= a*2;
 int sub =bsquare-a*c*4;
 squareroot= sqrt(bsquare-a*c*4 );
 quad= -b+sqrt(bsquare-a*c*4)/a*2;
 return positiveQuadrant;
}
 float negativeQuadratic(int a, int b,int c)
{
 int ac4;
 int a2;
 float squareroot;
 float divide;
 float quad;
 float bsquare =pow(b,2);
 ac4=a*c*4;
 a2= a*2;
 float negativeQuadrant;
 int sub= bsquare-a*c*4;
 squareroot =sqrt(bsquare-ac4 );
 quad= -b-sqrt(bsquare-ac4)/a2;
 return  negativeQuadrant;
 
} 





 
 

 
 