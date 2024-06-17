/*
Problem Description: Check a given element is present in an given array of size n or not.
    / Linear Search
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int linear_search(int number_list[] , int size , int target_elements) {
    // return index if element is found 
    // return -1 if element is not found
    for(int i=0 ;i<size ; i++)
        if(number_list[i] == target_elements) 
            return i ;
    return -1 ;
}


int main(void) {
    int number[14] ;
    int target  ,result;
    for(int i=0 ;i<14 ;i++) {
        cout << "Enter element at " << i+1 << " : " ;
        cin >> number[i] ;
    }
    cout << "Enter target element to search : " ;
    cin >> target ;
    result = linear_search(number , 14, target) ;
    if(result != -1)
        cout << target << " is present at index " << result << endl ;
    else cout << target << " is not present " << endl;
    return 0 ;
}