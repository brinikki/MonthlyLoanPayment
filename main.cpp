#include <iostream>
using namespace std;
#include <cmath>

int main() {

double rate;
int months;
int years;
float annual_int_rate;
float p; 
float mp = 0;

cout << endl;
cout << endl;
cout << endl;
  
  
cout << "Principal:" << endl; 
cin >> p;
cout << endl;
  
  
cout << "The annual interest rate:" << endl; 
cin >>  annual_int_rate;
cout << endl;


cout << "Number of Years:" << endl; 
cin >> years;
cout << endl;

  
rate = annual_int_rate / 1200; 

months = 12 * years;
  
mp = (rate + rate / ( pow ((1 + rate) , months) -1 )) * p;

cout << "The monthly payment is : $" << mp << endl; 

cout << endl;
  
return 0;
}