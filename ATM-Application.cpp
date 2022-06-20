#include <iostream>

using namespace std;

void showmenu()
 {

     cout << "**********MENU**********" << endl;
     cout << "1. Check Balance" << endl;
     cout << "2. Deposit " << endl;
     cout << "3. Withdraw"  << endl;
     cout << "4. Exit"  << endl;
     cout << "************************" << endl;
 }

int main()
{

    ///check Balance, Deposit, Witdraw, Show Menu

    int option;
    double balance = 1500;

  do{
    showmenu();
    cout << "option: ";
    cin >> option;
    system("cls");
    switch(option)
    {
        case 1: cout << "balance is " << " R " << balance << endl;
        break;
        /// Adding money into the account
        case 2: cout << "Deposit Amount: ";
          double depositamount;
          cin >> depositamount;
          balance += depositamount;
        break;
        ///Subtracting Money from Account
        case 3: cout << "Withdraw Amount: ";
          double withdrawamount;
          cin >> withdrawamount;
          if(withdrawamount <= balance)
          balance -= withdrawamount;
          else
            cout << "Not enough money " << endl;
        break;

    }
    }while(option!=4);


    system("pause>0");
}
