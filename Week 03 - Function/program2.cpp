/*
Problem Description: Print counting from 1 to N.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void print_first_n_natural_number(int number) {
    for(int i=1 ;i<=number ; i++)
        cout << i << " ";
    cout << endl ;
}

int main(void) {
    print_first_n_natural_number(20) ;
    return 0 ;
}