/*
Problem Description: Print all prime number from 1 to N. Where n is a natural number.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

bool is_prime(int number) {
    if(number<=1) return false ;
    int i ;
    for(i =2 ;i<number ; i++)
        if(number%i == 0) return false ; // number is not prime 
    if(i == number ) return true ; // number is prime 
}

void print_primeNumber(int upper_limit) {
    for(int i=1 ; i <= upper_limit ; i++)  {
        if(is_prime(i)) {
            cout << i << " " ;
        }
    }
    cout << endl ;
}


int main(void) {
    print_primeNumber(100) ;
    return 0 ;
}