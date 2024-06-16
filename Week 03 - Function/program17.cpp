/*
Problem Description: WAF to count all set bit of a number
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int total_count_set_bit(int number) {
    int count =0 ;
    while(number) {
        number &= (number-1) ; 
        count++ ;
    }
    return count ; // total set bit 
}

int count_set_bit(int number) {
    int count = 0;
    while(number) {
        count += (number&1) ;
        number >>= 1 ; // dividing number by two 
    }
    return count ;
}

int main(void) {
    cout << "The count set bit of 10 is : " << total_count_set_bit(10) << endl;
    cout << "The count set bit of 10 is : " << count_set_bit(14) << endl;
    return 0 ;
}