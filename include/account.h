#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include "general.h"

class Account{
public:
    Account(string _name, string _pass);
    bool authenticate(string _pass);
    virtual ~Account();
protected:
    string name;
    string pass;
};

#endif // ACCOUNT_H_