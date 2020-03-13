//Divide your rate by the number of payments youll make in the year
//if your making monthly payments, divide by 12.2 Multiply it by the balance of your loan will vbe the first
///payment
#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;
using std::setprecision;
using std::ios;


double years, ir, aol, io, rate, interest, sum, a, b; // Ir= interest rate, aol= amount of loan, io= interest owed,  //
const float fee1 = 20, fee2 = 25; // fee 1 for between 100-500 fee2 for over 500
int fee = 0;
int main()
{
    cout << "Please enter how many years you will have the loan out for \n";
    cin >> years;
    cout << "Please enter desired interest rate \n";
    cin >> ir;
    cout << "Please enter the amount of the loan \n";
    cin >> aol;

    rate = ir / 100;w

    if (aol >= 100 && aol <= 1000)
    {
        cout << "Amount of loan:" << aol << endl;
    }
    else
    {
        cout << "Loan out of range try between $100-$1000 \n";
    }

    if (ir >= 1 && ir <= 18)
    {
        cout << "Interest rate:" << ir << "%" << endl;
    }
    else
    {
        cout << "Interest rate out of range. This loan has to be between 1% and 18%. \n";
    }

    if (aol >= 100 && aol <= 500)
    {
        fee = 20;
        cout << "Fee amount:" << "$" << fee << endl;
    }
    if (aol > 500)
    {
        fee = 25;
        cout << "Fee amount:" << "$" << fee << endl;
    }

    interest = aol * rate * 1;
    a = interest * years;
    b = a + fee;

    cout << "Interest on this loan per year: \n" << "$" << interest << endl;
    cout << "Total interest owed over the entirety of the loan \n" << "$" << a << endl;
    cout << "Total of interest and fees: \n" << "$" << b << endl;





   

    return 0;

}