#include<iostream>

using namespace std;

int main () {


    int a , b , c ;
    
    cout << "Enter a b c : " ;
    
    cin >> a >> b >> c;
    
    if (a > b && a > c){
      cout << " a is largest among them  " << a << endl; 
    }  else if (b > c && b > a) {
      cout << "b is largest among them " << b << endl;
    } else {
       cout << "c is largest among them  " << c << endl;
    }


  return 0;
}
