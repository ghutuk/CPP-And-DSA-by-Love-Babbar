/*
Problem Description: Check given number is even or odd.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

bool is_even_modulos(int number) {
    if(number%2 ==0 ) return true ;
    return false ;
}

bool is_even_bitwise_and(int number) {
    if(number&1 == 1) return false ;
    return true ;
}

bool is_even_division(int number) {
    if((number/2)*2 == number) return true ;
    return false ;
}

int main(void) {
    cout << is_even_modulos(20) << endl;
    cout << is_even_modulos(19) << endl;
    cout << is_even_bitwise_and(20) << endl;
    cout << is_even_bitwise_and(19) << endl;
    cout << is_even_division(20) << endl;
    cout << is_even_division(19) << endl;
    return 0 ;
}