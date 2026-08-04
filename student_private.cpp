// A setter method is a member function used to assign or update the value of private data members of a class.

#include<iostream>
#include<string>

using namespace std;

class student {


  private : 
             string name;       // Data member
             int id ;           // Data member
             long int number;   // Data member
             string email ;     // Data member
             
             void set_data (string name , int id , long int number , string email){  //// Member function
                
                // Use 'this' pointer to distinguish class members from function parameters.
                this->name = name ; 
                this->id = id ;
                this->number = number;
                this->email = email ;
             
             }
             
   public : 
            void call_set_data( string name , int id , long int number , string email ) { // Member function
              set_data(name,id,number,email);
            }
            
            void display () {
             cout << "\nStudent Details --------------------->" << endl;
             cout << "Name = " << name << endl;
             cout << "id = " << id << endl;
             cout << "number = "<< number << endl;
             cout << "email = "<< email << endl;
             
            
            }


};


int main  () {


  student s1;
  
  string name;
  int id ;
  long int number ;
  string email ;
  
  cout << "Enter name : ";
  getline ( cin , name);
  
  cout << "Enter id : ";
  cin >> id ;
  
  cout << "Enter mobile number : ";
  cin >> number ;
  
  cin.ignore (); //// Remove the leftover newline after cin >>
  
  cout << "Enter email : ";
  getline (cin , email);
  
  s1.call_set_data(name,id,number,email);
  
  s1.display();



  return 0;
}
