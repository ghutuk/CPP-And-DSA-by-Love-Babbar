/*
Problem Description:  Sum of all natural number from 1 to N
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int sum_of_first_n_natural_number(int number) {
    int sum  =  0;
    for(int i=1 ;i<=number ; i++) sum+= i ;
    return sum ;
}

int main(void) {
    cout << "Sum of first ten natural number is " << sum_of_first_n_natural_number(10) << endl ;
    cout << "Sum of first twenty natural number is " << sum_of_first_n_natural_number(20) << endl ;
    return 0 ;
}