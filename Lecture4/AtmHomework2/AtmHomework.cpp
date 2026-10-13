#include <iostream>

enum class ATMOperation
{
    Withdraw = 1,
    Balance,
    TopUp
};

int main()
{
    //Info received via network from bank acquirer after reading your card
    unsigned int accountBalance = 10'000;

    //Internal ATM info
    unsigned int ATMCashBalance = 30'000;
    unsigned int banknoteAvailable = 100;  //Only banknotes of 100 is available in this lame ATM

    std::cout << "Select operation: \n";
    std::cout << "1 - Withdraw\n";
    std::cout << "2 - Balance\n";
    std::cout << "3 - Top-up\n";

    int userChoice;
    std::cin >> userChoice;
    
    //WARNING: valid input validation is needed here
    ATMOperation operation = static_cast<ATMOperation>(userChoice);

    switch (operation)
    {
    case ATMOperation::Withdraw:
        //#TODO, students
        //read value to withdraw
        //validate with logical operators and if statements if value is valid
        //if valid -> decrease accountBalance, decrease ATMCashBalance
        //if not valid -> output Error message
        break;
    case ATMOperation::Balance:
        //#TODO, students
        //just output current balance value
        break;
    case ATMOperation::TopUp:
        //#TODO, students: read value to add to the account;
        //increase balance value;
        //increase ATM Cash Balance
        break;
    default:
        break;
    }
}
