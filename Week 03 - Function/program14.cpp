/*
Problem Description: WAF to find the minimun number among three number.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;


int minimum_of_three(int first_num , int second_num , int third_num) {
    return (min(min(first_num , second_num) , third_num)) ;
}

int main(void) {
    cout << "Minimum of 2 ,4,-1 is  : " << minimum_of_three(2,4,-1) << endl;
    return 0 ;
}