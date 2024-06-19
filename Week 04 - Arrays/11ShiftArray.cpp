/*
Problem Description: Rotate a given array by one elements in right direction of n size .
    Test Case : 10 20 30 40 50 60
    Output : 60 10 20 30 40 50 
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void rotate_by_one_element(int number_list[] , int size) {
    int last_element_of_array = number_list[size-1] ;
    for( int i = size-1 ; i >0 ; i--) {
        number_list[i] = number_list[i-1] ;
    }
    number_list[0] = last_element_of_array ;
}

void display_array(int number_list[] , int size) {
    for(int i=0 ;i<size ; i++)
        cout << number_list[i] << " " ;
    cout << endl;
}

int main(void) {
    int number_list[] = {10,20,30,40,50,60} ;
    int size = 6 ;
    cout << "Before rotating the array is : " ;
    display_array(number_list , size) ;

    // calling rotate function to rotate the array 
    rotate_by_one_element(number_list , size) ;

    cout << "After rotating the array is : " ;
    display_array(number_list , size) ;
    return 0 ;
}


/*
    Output :
        Before rotating the array is : 10 20 30 40 50 60 
        After rotating the array is : 60 10 20 30 40 50 
*/