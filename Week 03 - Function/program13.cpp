/*
Problem Description: WAF to Print all digits of an integer.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void print_all_digits(int number) {
    if(number<0) {
        cout << "-" << " ";
        number = -number;
    }
    while(number) {
        cout << number%10 << " " ;
        number /= 10 ;
    }
    cout << endl ;
}

int main(void) {
    print_all_digits(123456) ;
    print_all_digits(-54367) ;
    return 0 ;
}