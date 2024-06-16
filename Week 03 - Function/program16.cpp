/*
Problem Description: WAF to convert Fahrenheit to Celcius.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

float fahrenheit_to_celcius(float fahrenheit) {
    return (( fahrenheit -32)*5/9 );
}
int main(void) {
    cout << "The temperature in celcius is : " << fahrenheit_to_celcius(68) << endl;
    return 0 ;
}