#include<iostream>
#include<string>

using namespace std;

class Student  {

private :

   string name;
   int marks;
   
   public : 
   
      void SetData(string n , int m){
          name = n;
          marks = m;
      }
      
      void ShowData (){
          cout << "Name : " << name << endl;      
          cout << "Marks : "<< marks << endl;
      }
      
      
};


int main (){

   Student s1;
   
   s1.SetData("Roshan",85);
   s1.ShowData();

  return 0;
}
