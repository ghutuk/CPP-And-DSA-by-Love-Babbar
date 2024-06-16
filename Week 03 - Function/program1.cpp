/*  Problem Description: Find max of 3 number
    Code Author : Sarvesh Kushwaha
    EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int max_of_three_number(int first_number , int second_number , int third_number) {
    return max(max(first_number , second_number) , third_number) ;
}

int main(void) {
    cout << "Max of three number is : " << max_of_three_number(10,23,45) << endl ;
    return 0 ;
}