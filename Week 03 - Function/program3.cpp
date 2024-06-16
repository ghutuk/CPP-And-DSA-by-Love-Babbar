/*
Problem Description: Check whether a given number is prime or not 
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

bool is_prime(int number) {
    int i ;
    if(number<=1) return false ; // if the number is <= 1, that is not a prime number
    for(i =2 ; i<number ;i++) 
        if(number%i == 0) return false ; // when divided by other number
    if(i == number) return true ; // number is prime
}

int main(void) {
    cout << is_prime(10) << endl ;
    cout << is_prime(71) << endl ;
    cout << is_prime(97) << endl ;
    return 0 ;
}