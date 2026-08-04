#include<iostream>
#include<string>

using namespace std;

class employee  {

 private : 
          string name;
          int id;
          double salary;
          
 public : 
         void set_data (string name , int id , double salary){
             this->name = name;
             this->id = id ;
             this->salary = salary;
         }
         
         void get_name () {
            cout << "name = " << name << endl;
         }
         
         void get_id () {
          cout << "id = " << id << endl;
         }
         
         void get_salary () {
          cout << "salary " << salary << endl;
         }
         
         void display () {
          
          cout << "\nEmployee Details" << endl;
          cout << "------------------" << endl;
          cout << "name    : " << name << endl;
          cout << "id      : " << id << endl;
          cout << "salary  : " << salary << endl;
         }
          
};




int main () {

   int n ;
   cout << "how many employee : ";
   cin >> n;
   cin.ignore();   // Clear leftover newline before getline().
   
   employee s[n];
   
   for (int i = 0 ; i < n ;i++) {
     string name ;
     int id ;
     double salary ;
     
     cout << "Enter details about the employee"<<endl;
     
     
     cout << "Enter name : ";
     getline (cin , name);
     
     cout << "Enter id : ";
     cin >> id ;
     
     cout << "Enter salary : " ;
     cin >> salary ;
     cin.ignore();   // Clear leftover newline before getline().
     
     s[i].set_data(name,id,salary);
   
   }
   
   
   for (int i = 0 ; i < n ; i++ ){
    
      s[i].display();
      cout << endl;
   
   }
  





  return 0;
}
