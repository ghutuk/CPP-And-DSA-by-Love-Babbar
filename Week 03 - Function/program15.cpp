/*
Problem Description: WAF to convert kilometer to miles.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

// Miles = kilometers X 0.621371
// Kilometers = Miles X 1.60934
float kilometers_to_miles(float kilometer) {
    return kilometer*0.621371 ;
}

int main(void) {
    cout << "10 kilometers in miles is " << kilometers_to_miles(10) << endl;
    return 0 ;
}