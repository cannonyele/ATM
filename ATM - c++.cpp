#include<iostream>
using namespace std;

main(){
	int choice,pin,pine,withdraw,balancee;
	long balance=0,deposit=0;
	cout<< "WELCOME DEAR CUSTOMER:\n";
	cout<< "CREATE PIN: ";
	cin>>pin;
	me:
	cout<< "TO WHAT SERVICE WILL YOU PREFER.\n";
	cout<< "...............................................\n";
	cout<< "1.DEPOSIT\n";
	cout<< "2.CHECK-BALANCE\n";
	cout<< "3.WITHDRAW\n";
	cout<< "4.EXIT\n";
	cout<< "ENTER CHOICE: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<< "ENTER PIN:";
			cin>>pine;
			if(pine==pin){
				dpst:
				cout<< "ENTER DEPOSITED MONEY BTN 0-10000\n";
				cin>>deposit;
				if(deposit>0 && deposit<=10000 ){
					cout<< "YOU HAVE SUCCEFULLY DEPOSITED"<<" "<<deposit<<"\n";		
				}
				else{
					cout<< "YOU CANNOT DEPOSIT THIS!\n";
					goto dpst;
				}
				goto me;
			}
			else{
				cout<< "wrong pin";
				
			}	
			break;
		case 2: 
		    balance = balance+ deposit;
		    cout<< "YOUR BALANCE IS: "<<balance<<"\n";
		    goto me;
		    break;
		case 3: 
		 
				dpsti:
				cout<< "ENTER WITHDRAW MONEY\n";
				cin>>withdraw;
				if(withdraw<deposit){
					cout<< "YOU HAVE SUCCEFULLY withdraw"<<" "<<withdraw<<"\n";
					balancee =balance-withdraw;
					cout<< "AVAILABLE BALANCE IS: "<<balancee<<"\n";
						
				}
				else{
					cout<< "YOU CANNOT WITHDRAW THIS!\n";
					goto dpsti;
				}
				goto me;
			break;
		case 4:
			exit(1);
			break;	
		default:
			cout<< "wrong input!!\n";
			goto me;
	}
	return main();
}