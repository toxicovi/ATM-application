#include <iostream>
using namespace std;

void showMenu(){
    cout<<"*********Menu*********"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"**********************"<<endl;
}

int main(){
    //checkBalance, deposit money, withdrawal, show menu
    int option;
    double balance= 500;
   
    do{
    showMenu();
    cout<<"Please choose an option: ";
    cin>>option;

    switch(option){
        case 1:cout<<"Your balance is "<<balance<<" BDT"<<endl; break;
        case 2:cout<<"Deposit amount: ";
            double depositAmount;
            cin>>depositAmount;
            balance+=depositAmount;
            break;
        case 3:cout<<"Withdraw amount: ";
            double withdrawAmount;
            cin>>withdrawAmount;
            if(withdrawAmount<=balance){
                balance-=depositAmount;
                }
            else{
                cout<<"You don't have enough money!"<<endl;
                }
            break;
    }
}while(option!=4);

if(option>4){
    cout<<"Invalid option!"<<endl;
}

}

