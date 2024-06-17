/*
Problem Description: WAP to print extreme element of an array of size n.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

void print_extreme_elements(int list_of_numbers[] , int size_of_array) {
    int lower_bound = 0, upper_bound = size_of_array -1 ;
    while(lower_bound <= upper_bound) {
        // handling case of common element
        if(lower_bound == upper_bound) {
            cout << list_of_numbers[lower_bound] << " " ;
        }
        else {
            cout << list_of_numbers[lower_bound] << " " << list_of_numbers[upper_bound] << " ";
        }
        lower_bound ++ ;
        upper_bound -- ;
    }
    cout << endl;
}

int main(void) {
    int number_list[] = {10 ,20, 30 ,40 ,50,5, 4,3,2 ,1};
    int list[] = {1,2,3,4,5,6,7,8,9,10,11} ;
    print_extreme_elements(number_list , 10);
    print_extreme_elements(list , 11) ;
    return 0 ;
}

/*
    Output : 
        10 1 20 2 30 3 40 4 50 5 
        1 11 2 10 3 9 4 8 5 7 6 
*/