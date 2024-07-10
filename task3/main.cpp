/*
Observe the output and create a class named "TemperatureConverter" with a private attribute for
temperature in Celsius. Implement a getter method to retrieve the temperature in Fahrenheit. The
conversion formula is: F=9/5C+32.

*/
#include <iostream>
#include <cmath>
using namespace std;

class TemperatureConverter{
double celcius;
public:
    //getter
    void  fahrenheit(){
    cout<<"enter value in Celcius"<<endl;
    cin>>celcius;
    double Fahrenheit=(celcius*9/5)+32;
    cout<<"this value in farhenheight is : "<<ceil(Fahrenheit);
    }

};
int main()
{
  TemperatureConverter q;
  q.fahrenheit();
    return 0;
}
