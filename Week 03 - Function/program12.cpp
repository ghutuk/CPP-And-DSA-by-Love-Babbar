/*
Problem Description: WAF to reverse a given number.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int reverse_of_number(int number) {
    int reversed_number = 0;
    while(number) {
        reversed_number = reversed_number *10 + number%10 ;
        number /=10 ;
    }
    return reversed_number ;
}
int main(void) {
    cout << "Reversed of number 12345 is " << reverse_of_number(12345) << endl;
    return 0 ;
}