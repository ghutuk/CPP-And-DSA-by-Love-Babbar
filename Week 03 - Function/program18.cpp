/*
Problem Description: WAF to check given number is even or odd using bitwise operator.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

bool is_even_odd_bitwise(int number) {
    if(number&1 ==1 ) return false ;
    return true ;
}

int main(void) {
    cout << is_even_odd_bitwise(10) << endl ;
    cout << is_even_odd_bitwise(507) << endl ;
    return 0 ;
}