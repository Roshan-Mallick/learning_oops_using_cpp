#include<iostream>
using namespace std;

int main  () {

 int num ;
 int factorCount = 0; 
 cout << "Enter a number to check it is prime or not :  ";
 cin >> num;
 
 for (int i = 1 ; i <= num ; i++ ){
       if (num % i == 0 ){
          factorCount++;
       }
 }
 
 if (factorCount == 2 ) {
 cout << "Number is prime ";
 } else {
 cout << "Number is not prime ";
 }
 


  return 0;
}
