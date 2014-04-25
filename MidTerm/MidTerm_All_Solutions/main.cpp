/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 24, 2014, 12:50 AM
 * CSC 5 42450 | Midterm | Spring 2014
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Begin Execution Here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Midterm"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
    cout<<"\n";
    //Declare Variables
    int n;
    //Input number of lines desired
    cout<<"Enter how many lines would you like to output?\n";
    cin>>n;
    //Output lines and spaces to create diagonal
    for(int lines=1; lines<=n; lines++){
        for(int space=2; space<=lines; space++){
            cout<<" ";
        }
        cout<<lines;
        cout<<endl;
    }
    //Exit Stage Right
    cout<<"\n";
}

void problem2(){
    cout<<"\n"; 
    //Declare Variables
    int num, inNum;
    cout<<"\n";
   //Input amount of number you wish to graph
    cout<<"How many numbers would you like to input, up to five number only? ";
    cin>>num;
    if (num>=6){//Check to make sure that numbers requested are no more than 5
        do{
        cout<<"Enter up to five(5) numbers only: ";
        cin>>num;
        }while (num>=6);
    } 
    for (int k=0; k<num; k++){//Keep count of time program needs to loop
        cout<<"\n";
        //Enter selected number within range
        cout<<"Enter a number within the range of 3 and 27: \n";
        cin>>inNum;
        if (inNum<3||inNum>27){
        do{//Output numbers and *'s
        cout<<"Not within range enter a number within the range of 3 and 27: \n";
        cin>>inNum;
        }while(inNum<3||inNum>27);
        }
        for (int star=0; star<inNum; star++)
            cout<<"*";           
    }
    //Exit Stage Right
    cout<<"\n";
}

void problem3(){
    cout<<"\n";
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
    cout<<"\n";
}

void problem4(){
    cout<<"\n";
    //Declare Variables
    float payRate, hrsWrk, minWrk, grssPy, totHrs;
    //Output quick instructions
    cout<<"Calculate your gross pay.\n\n";
    cout<<"Round hours worked to the nearest 15 minutes.\n";
    cout<<"Hours and minutes worked will be entered separately.\n";
    //Input hours worked and pay rate.
    cout<<"\n";
    cout<<"Hours Worked: ";
    cin>>hrsWrk;
    cout<<"Minutes Worked: ";
    cin>>minWrk;
    totHrs=hrsWrk+(minWrk/60);
    cout<<"Pay Rate: ";
    cin>>payRate;
    //Set decimal accuracy
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output gross pay, determined by hours worked
    if (totHrs<=20){
        grssPy=totHrs*payRate;
        cout<<"Your gross pay is: $";
        cout<<grssPy;
    }if (totHrs>20&&totHrs<=40){
        grssPy=(((totHrs-20)*(payRate*1.5))+(payRate*20));
        cout<<"Your gross pay is: $";
        cout<<grssPy;
    }if (totHrs>40){
        grssPy=(20*payRate)+(20*(payRate*1.5))+((totHrs-40)*(payRate*2));
        cout<<"Your gross pay is: $";
        cout<<grssPy;
    }    
    //Exit Stage Right
    cout<<"\n";
}

void problem5(){
    cout<<"\n";
    //Declare Variables
    unsigned short select;
    char ans;
    do{
    //Output and Input Selections
    cout<<"Calculate your monthly bill";
    cout<<"Choose your subscription package. \n";
    cout<<"1. Package One:   $29.95 | 11 Hour Access \n";
    cout<<"2. Package Two:   $34.95 | 22 Hour Access \n";
    cout<<"3. Package Three: $42.95 | Unlimited Access \n";
    cout<<"4. Detailed description of the three packages\n";
    cout<<"Selection: ";
    cin>>select;
    //Output of selected ISP package
    switch(select){
        case 1:{
            //Package One
            float hrsUse, minUse, totHrs, moneDu;
            cout<<"\n";
            cout<<"Enter hours first then minutes; round minutes \n";
            cout<<"to the nearest 15th minutes.\n\n";
            cout<<"Enter the total hours of Internet use\n";
            cout<<"Hours: ";
            cin>>hrsUse;
            cout<<"Minutes: ";
            cin>>minUse;
            totHrs=hrsUse+(minUse/60);
            //Decimal Precision
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            //Output total due based on hours used
            if (totHrs<=11){
                cout<<"\n";
                cout<<"Your total due for this month is $29.95.";
                cout<<"\n";
            }if (totHrs>11&&totHrs<22){
                moneDu=((totHrs-11)*2.25)+29.95;
                cout<<"\n";
                cout<<"Your total due for this month is $";
                cout<<moneDu;
                cout<<"\n";
            }if (totHrs>22){
                moneDu=29.95+(11*2.25)+((totHrs-22)*4.95);
                cout<<"\n";
                cout<<"Your total due for this month is $";
                cout<<moneDu;
                cout<<"\n";
            }
            //End of Package One
            break;
        }
        case 2:{
            //Package Two
            float hrsUse, minUse, totHrs, moneDu;
            cout<<"\n";
            cout<<"Enter hours first then minutes; round minutes \n";
            cout<<"to the nearest 15th minutes.\n\n";
            cout<<"Enter the total hours of Internet use\n";
            cout<<"Hours: ";
            cin>>hrsUse;
            cout<<"Minutes: ";
            cin>>minUse;
            totHrs=hrsUse+(minUse/60);
            //Decimal Precision
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            //Output total due based on hours used
            if (totHrs<=22){
                cout<<"\n";
                cout<<"Your total due for this month is $34.95.";
                cout<<"\n";
            }if (totHrs>22&&totHrs<33){
                moneDu=((totHrs-22)*1.25)+34.95;
                cout<<"\n";
                cout<<"Your total due for this month is $";
                cout<<moneDu;
                cout<<"\n";
            }if (totHrs>33){
                moneDu=34.95+(11*1.25)+((totHrs-33)*2.25);
                cout<<"\n";
                cout<<"Your total due for this month is $";
                cout<<moneDu;
                cout<<"\n";
            }
           //End of Package Two
           break;
        }
        case 3:{
            //Package Three
            cout<<"\n";
            cout<<"Based on your selection you have unlimited access to the Internet.\n";
            cout<<"There is no need to enter hour usage.\n";
            cout<<"Your total due for this month is $42.95\n";
            cout<<"\n";
            //End of Package Three
            break;
        }
        case 4:{
            //Package Description
            cout<<"\n";
            cout<<"Package One: $29.95 per month, 11 hours access.  Additional hours\n";
	    cout<<"are $2.25 up to 22 hours then $4.95 for all additional hours.\n";
	    cout<<"\n";
            cout<<"Package Two: $34.95 per month, 22 hours access.  Additional hours\n";
            cout<<"are $1.25 up to 33 hours then $2.25 for each hour above this limit.\n";
	    cout<<"\n";
            cout<<"Package Three: $42.95 per month unlimited access";
            cout<<"\n";          
            //End of Package Description
            break;
        }
        default:{
            cout<<"Error: That was not an option.\n";
        }
    }
    cout<<"\n";
    cout<<"Would you like to recalculate your monthly bill?\n";
    cout<<"Enter y for yes, n or any other key for no: ";
    cin>>ans;
}while (ans=='y'||ans=='Y');
            
    //Exit Stage Right
    cout<<"\n";
}

void problem6(){
        cout<<"In problem # 6"<<endl<<endl;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}