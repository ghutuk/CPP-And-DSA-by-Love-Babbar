/*
Problem Description: WAP to reverse the elements of array of size n.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void reverse_array(int list_of_numbers[] , int size_of_array) {
    int lower_bound = 0 , upper_bound = size_of_array -1 ;
    while(lower_bound < upper_bound) {
        swap(list_of_numbers[lower_bound] , list_of_numbers[upper_bound]) ;
        lower_bound++ ;
        upper_bound-- ;
    }
}

void display_array(int number_list[] , int size) {
    for(int i=0 ;i<size ; i++)
        cout << number_list[i] << " " ;
    cout << endl;
}

int main(void) {
    int number[] = {10, 20 ,30, 40, 50, 60, 70 ,80 ,90, 100} ;
    int list[] = {1,2,3,4,5,6,7,8,9,10,11} ;
    reverse_array(number,10) ;
    display_array(number , 10 ) ;
    reverse_array(list , 11) ;
    display_array(list , 11 ) ;
    return 0 ;
}
/* 
    Output : 
        100 90 80 70 60 50 40 30 20 10 
        11 10 9 8 7 6 5 4 3 2 1 
*/