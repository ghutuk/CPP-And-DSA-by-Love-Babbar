/*
Problem Description: WAP a function to find area of a circle.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;
double area_of_circle(float radius) {
    return 3.14*radius*radius ; // sq unit 
}

int main(void) {
    cout << "Area of circle is : " << area_of_circle(4) << endl ;
    return 0 ;
}