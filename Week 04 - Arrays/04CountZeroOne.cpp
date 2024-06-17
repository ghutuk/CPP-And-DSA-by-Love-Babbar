/*
Problem Description: An array contains only 0 and 1. WAP to count number of 0s and 1s present in it.
    Array can be of any size.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void count_zero_one(int zero_one_array[], int size_array) {
    int count_of_zero = 0, count_of_one = 0;
    for(int i=0 ; i<size_array ;i++ )
        if(zero_one_array[i] == 0)
            count_of_zero ++ ;
        else count_of_one ++ ;
    
    printf("Total number of zero present in an array is : %d\n" ,count_of_zero ) ;
    printf("Total number of one present in an array is : %d\n" ,count_of_one ) ;
}

int main(void) {
    int zero_one_array[13] = {1,0,0,0,1,1,1,1,1,0,0,0,0} ;
    count_zero_one(zero_one_array , 13) ;
    return 0 ;
}