/*
Problem Description: WAF to Create a number using digits 
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int make_number_using_digit(int number_of_digit) {
    int number = 0 , digit;
    for(int i =0 ;i<number_of_digit ; i++) {
        cout << "Enter Digit : " ;
        cin >>digit ;
        number = number*10 +digit ; 
        cout << "Number is : " << number << endl ;
    }
    return number ;
}

int main(void) {
    int number_of_digits ;
    cout << "Enter Number of digits : " ;
    cin >> number_of_digits ;
    int number = make_number_using_digit(number_of_digits) ;
    cout << "Number is : " << number << endl ;
    return 0 ;
}