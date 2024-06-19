/*
Problem Description: An array of size n , having only one and zero as its element.
    Sort the array in ascending order
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;


void sort_zero_one_counting(int number_list[] , int size_of_array) {
    // int count zero and one using a loop 
    int zero_count = 0, one_count = 0 ;
   
    for(int i =0 ;i<size_of_array ;i++) {
        if(number_list[i] == 0) {
            zero_count ++ ;
        }
        else {
            one_count ++ ;
        }
    }

    
}

void sort_zero_one(int number_list[] , int size_of_array) {
    // Two pointer approach 
    // Time Complexity : O(n) 
    // Space Complexity : O(1) 
    int lower_bound = 0 , upper_bound = size_of_array -1 ;
    while(lower_bound < upper_bound ) {
        if((number_list[lower_bound] ==1) && (number_list[upper_bound] == 0)) {
            swap(number_list[lower_bound] , number_list[upper_bound]) ;
            lower_bound ++ ;
            upper_bound -- ;
        }
        if(number_list[lower_bound] == 0) {
            lower_bound ++ ;
        }
        if(number_list[upper_bound] == 1)  {
            upper_bound--;
        }
    }
}

void display_array(int number[] , int size) {
    for(int i =0 ;i <size ;i++) {
        cout << number[i] << " " ;
    }
    cout << endl ;
}

int main(void) {
    int zero_one[] = {1,0,0,0,0,1,1,0,1,0,0,0,1} ;
    int size = 13 ;
    cout << "Before sorting array is : " ;
    display_array(zero_one , size) ;
    // calling function to sort the array
    sort_zero_one(zero_one , size) ;
    cout << "After sorting array is : " ;
    display_array(zero_one , size) ;
    return 0 ;
}

/*
    Before sorting array is : 1 0 0 0 0 1 1 0 1 0 0 0 1 
    After sorting array is : 0 0 0 0 0 0 0 0 1 1 1 1 1 
*/