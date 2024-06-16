/*
Problem Description: WAF to Print  Binary representation of Decimal number
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void print_binary_representation(int number) {
    cout << "Binary representation of " << number << " in reverse order is : " ;
    if(number<0) number = -number;
    while(number) {
        cout << number%2 << " " ;
        number >>= 1 ;// dividing by two 
    }
    cout << endl ;
}

int main(void) {
    print_binary_representation(17) ;
    print_binary_representation(10) ;
}