/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 23, 2014, 11:33 PM
 * CSC 5 42450 | Midterm | Problem 3
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    string accNum;
    float balance;
    //Assignment called to assign these as unsigned shorts but not sure how cents will be calculated
    //Unsigned type only allows positive entries, therefore account beginning balance cannot be entered as a negative.
    unsigned short begBal, totChk, totDep;
    cout<<"\n";
    cout<<"Enter your six digit account number: ";
    cin>>accNum;
    if (accNum.length()!=6){//From Savitch 8th Ed, Chapter 8 (Pages 470-472)
        do{
        cout<<"\n";   
        cout<<"Error: You did not enter a six digit account number.\n";
        cout<<"Try again please. Only a six digit account number will be accepted. \n\n";
        cout<<"Account Number: ";
        cin>>accNum;
        cout<<"\n";
        }while (accNum.length()!=6);
    }
    cout<<"\n";
    cout<<"Please enter this month's beginning balance: $";
    cin>>begBal;
    cout<<"\n";
    cout<<"Enter the total amount of all checks written this month: $";
    cin>>totChk;
    cout<<"\n";
    cout<<"Enter the total amount of all deposits this month: $";
    cin>>totDep;
    cout<<"\n";
    //Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output Results
    balance=begBal-totChk+totDep;
    if(balance<0){
        balance=balance-12.50;
        cout<<"        ***You account has become overdrawn***\n";
        cout<<"A $12.50 overdraft fee has been accessed to your account.\n\n";
        cout<<"Your account balance is $";
        cout<<balance;
        cout<<"\n";
    }else if (balance>=0){
        cout<<"Your account balance is $";
        cout<<balance;
        cout<<"\n";
    }
    //Exit Stage Right
    return 0;
}

