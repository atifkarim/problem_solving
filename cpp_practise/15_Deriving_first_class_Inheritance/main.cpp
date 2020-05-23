#include <iostream>
#include "account.h"
#include "savings_account.h"

using namespace std;

int main(){
  cout<<"----------- Account --------------"<<endl;

  Account acc {};
  acc.deposit(2000.54);
  acc.withdraw(452.5);

  cout <<endl;

  Account *p_acc{nullptr};
  p_acc = new Account();
  p_acc -> deposit(1000.45);
  p_acc -> withdraw(478.78);

  delete p_acc;

  cout<<"\n--------------- Saving account class -----------------\n"<<endl;
  Savings_Account sav_acc {};
  sav_acc.deposit(478.457);
  sav_acc.withdraw(89.78);

  cout<<endl;

  Savings_Account *p_sav_acc {nullptr};
  p_sav_acc = new Savings_Account();
  p_sav_acc->deposit(4587.4457);
  p_sav_acc->withdraw(78.787);
  delete p_sav_acc;

  cout<<"\n ********************** The End **********************n";


  return 0;
}
