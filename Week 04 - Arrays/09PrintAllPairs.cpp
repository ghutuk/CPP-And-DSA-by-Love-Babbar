/*
Problem Description: WAP to print all pairs of array of size n .
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;


void print_all_pairs(int number_list[] , int size_of_array) {
    int i , j ;
    for( i=0 ;i <size_of_array ;i++) {
        for(j = 0 ;j<size_of_array ;j++) {
            cout << "( " << number_list[i] << " " << number_list[j] << " ) " ;
        }
        cout << endl ;
    }
}

int main(void) {
    int numbers[] = {10, 20, 30 ,40 } ;
    int size = 4 ;
    print_all_pairs(numbers , size) ;
    return 0 ;
}

/*
    Output :
        ( 10 10 ) ( 10 20 ) ( 10 30 ) ( 10 40 ) 
        ( 20 10 ) ( 20 20 ) ( 20 30 ) ( 20 40 ) 
        ( 30 10 ) ( 30 20 ) ( 30 30 ) ( 30 40 ) 
        ( 40 10 ) ( 40 20 ) ( 40 30 ) ( 40 40 ) 
*/