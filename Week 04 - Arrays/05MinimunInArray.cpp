/*
Problem Description: WAP to find minimum number of an array of size n.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
#include<limits.h>
using namespace std ;

int minimum_number(int number_list[] , int size) {
    int minNumber = INT_MAX ;
    for( int i=0 ;i<size ; i++)
        if(minNumber > number_list[i])
            minNumber = number_list[i] ;
    return minNumber ;
}

int main(void) {
    int number[] = {1, 2, 3 ,4 ,5, 6 ,7 ,8 ,-23} ;
    cout << "Minimun number in array is : " << minimum_number(number , 9) << endl;
    return 0 ;
}