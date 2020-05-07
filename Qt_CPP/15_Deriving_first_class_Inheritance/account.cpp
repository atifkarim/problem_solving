#include<iostream>
#include "account.h"
using namespace std;

Account::Account()
  :balance{100.5}, name{"An Account"}{

}

Account::~Account(){

}

void Account::deposit(double amount){
  cout<<"Account deposit called with: "<<amount<<endl;
}

void Account::withdraw(double amount){
  cout<<"Account withdraw called with: "<<amount<<endl;
}
