/*
Problem Description: WAP to find maximum number of an array of size n.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
#include<limits.h>
using namespace std ;

int maximum_number(int number_list[] , int size) {
    int maxNumber = INT_MIN ;
    for( int i=0 ;i<size ; i++)
        if(maxNumber < number_list[i])
            maxNumber = number_list[i] ;
    return maxNumber ;
}

int main(void) {
    int number[] = {1, 2, 3 ,4 ,5, 6 ,7 ,8 ,-23} ;
    cout << "Minimun number in array is : " << maximum_number(number , 9) << endl;
    return 0 ;
}