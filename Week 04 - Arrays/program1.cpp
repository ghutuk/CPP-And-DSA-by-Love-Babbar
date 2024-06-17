/*
Problem Description: Create an array of size 10 , take input from the user and double up each value of 
    that array.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void doubleUp_arrayValue(int number_list[] , int size) {
    for(int i=0 ;i<size ;i++) {
        number_list[i] *= 2 ;
    }
}

void display_array(int number_list[] , int size) {
    for(int i=0 ;i<size ; i++)
        cout << number_list[i] << " " ;
    cout << endl;
}

int main(void) {
    int number[10] ;
    
    for(int i=0 ;i<10 ;i++) {
        cout << "Enter value at : " << i << " " ;
        cin >> number[i] ; 
    }
    cout << "Before double up the array values are : " ;
    display_array(number, 10);
    doubleUp_arrayValue(number , 10) ;

    cout << "After double up the array values are : " ;
    display_array(number, 10);

    return 0 ;
}