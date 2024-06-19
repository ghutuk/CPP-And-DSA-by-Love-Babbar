/*
Problem Description: Rotate an array by one position in left direction of size n.
    Test Case : 1 2 3 4 5 6 7
    Output : 2 3 4 5 6 7 1
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void display_array(int number_list[] , int size) {
    for(int i=0 ;i<size ; i++)
        cout << number_list[i] << " " ;
    cout << endl;
}

void left_rotate(int number_list[] , int size) {
    int first_digit = number_list[0] ;
    for(int i=0 ;i<size-1 ;i++) {
        number_list[i] = number_list[i+1] ;
    }

    // inserting the first number 
    number_list[size-1] = first_digit ; 
}
int main(void) {
    int number_list[] = {1,2,3,4,5,6,7} ;
    int size = 7 ;
    cout << "Before rotating the array is : " ;
    display_array(number_list , size) ;

    // calling rotate function to rotate the array 
    left_rotate(number_list , size) ;

    cout << "After rotating the array is  : " ;
    display_array(number_list , size) ;
    return 0 ;
}

/*
    Output  :
        Before rotating the array is : 1 2 3 4 5 6 7 
        After rotating the array is  : 2 3 4 5 6 7 1 
*/