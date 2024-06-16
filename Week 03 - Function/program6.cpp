/*
Problem Description: WAP a function to find sum of all even number form 1 to N.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int sum_of_even_term(int number ) {
    int even_sum = 0;
    for(int i=2 ; i<=number ; i+=2 ) even_sum+= i ;
    return even_sum ;
}

int main(void) {
    cout << "Sum of all even term fron 1 to n is : " << sum_of_even_term(10) << endl ;
    return 0 ;
}