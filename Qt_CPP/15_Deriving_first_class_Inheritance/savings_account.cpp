#include<iostream>
#include "savings_account.h"

using namespace std;

Savings_Account::Savings_Account()
  :interest_rate{3.0}{

}

Savings_Account::~Savings_Account(){

}

void Savings_Account::deposit(double amount){
  cout<<"Savings account deposit called with: "<<amount<<endl;
}

void Savings_Account::withdraw(double amount){
  cout<<"Savings account withdraw called with: "<<amount<<endl;
}
