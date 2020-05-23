#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "account.h"

class Savings_Account: public Account{
public:
  double interest_rate;
  Savings_Account();
  ~Savings_Account();

  void deposit(double amount);
  void withdraw (double amount);
};

#endif // SAVINGS_ACCOUNT_H
