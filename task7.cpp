#include <iostream>
#include <cmath>
using namespace std;
float pipe1(float flowrate1, float time);
float pipe2(float flowrate2, float time);
 float overflow(volumeofpool, float filled);
 float flowrate1;
 float flowrate2;
 float volumeofpool;
 float volume;
 float time;
 main()
 {
  float time;
  float result1;
  float result2;
  float pipe1;
  float pipe2;
  float totalfilled;

    cout<<"enter volume of pool is :";
    cin>>volumeofpool;
    cout<<"enter flow rate of pipe1";
    cin>>flowrate1;
    cout<<"flow rate of pipe2";
    cin>>flowrate2;
    cout<<"enter the time";
    cin>>time;
    result1=pipe1(flowrate1,time);
    result2=pipe2(flowrate2,time);
    float totalfilled;
    filled=result1+result2;
    totalfilled=filled/volumeofpool
 }
  float pipe1(float flowrate1, float time)
  {
   float flow1;
   float flowrate1;
   float per_rate;
   flow1=flowrate1*time;
   return flow1;
  }
  float pipe2(float flowrate2, float time)
  {
   float flowrate2;
   float per_rate2;
   flow2=flowrate2*time;
   return flow2;
  }
  float overflow(volumeofpool, float filled)
{
   if(filled>volumeofpool)
   {
    volume=filled-volumeofpool
    return volume;
   }
}





