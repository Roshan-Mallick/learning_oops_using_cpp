#include<iostream>
using namespace std;

int main () {

 int num ;
 cout << "Enter a number : ";
 cin >> num;

 int temp = num ;

 int rev = 0;

 while (num != 0) {
  
	 rev = rev * 10 + (num % 10);
	 num = num / 10;
 
 }

 if (temp == rev) cout << "it is a palindrome "<< temp << endl;
 else cout << "not a palindorme "<< temp << endl;

 




  return 0;
}
