/*
Problem Description: Create an array of size 5 , take input from user and print the sum of all elements.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int main(void) {
    int number[5] ;
    int total_sum =0 ;
    
    for(int i=0 ;i<5 ;i++) {
        cout << "Enter value at " << i+1 << " : " ;
        cin >> number[i] ; 
    }

    for(int i=0 ; i<5 ;i++) 
        total_sum+= number[i] ;

    cout << "Total sum of all element is : " << total_sum << endl ;
    
    return 0 ;
}