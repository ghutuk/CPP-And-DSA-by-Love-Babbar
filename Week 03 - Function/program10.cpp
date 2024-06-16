/*
Problem Description: WAP to find factorial of a Number.
Code Author : Sarvesh Kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<iostream>
using namespace std ;

int factorial(int number) {
    int product = 1 ;
    for(int i=1 ;i<number ;i++) product *= i ;
    return product ;
}
int main(void) {
    cout << "Factorial of 5 is : " << factorial(5) << endl ;
    cout << "Factorial of 10 is : " << factorial(10) <<endl;
    return 0 ;
}
/* By this code we can't find factorial of large number due to overflow in range of int data type.
    To overcome this issue , we can use the concept of array
*/