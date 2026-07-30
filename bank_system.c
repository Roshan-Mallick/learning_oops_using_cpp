#include<iostream>
#include<string>

using namespace std;

class bank {

	private :

		string name = "Roshan Mallick";
		long int account_number = 123456789101112;
		long int balance = 10000;

	public:
		void deposit (int money){
			balance += money;
		}
		void check_balance(){
		   balance;
		   cout << "balance : "<< balance << endl;
		}
		void account_info(){

			 cout <<"\nAccount Information ------------------------------------------>" <<endl;
	                 cout<< "Account holder name : "<< name << endl;
			 cout<<"Account number : "<< account_number << endl;
			 cout<<"balance : "<< balance << endl;
		
		}

};

int main () {

	bank account;

	account.account_info();

	cout<< "Deposit : 5000 \n"<<endl;
	account.deposit(5000);
	account.check_balance();


return 0;
}
