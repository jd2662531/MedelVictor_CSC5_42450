/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 23, 2014, 9:38 PM
 *  CSC 5 42450 | Midterm | Problem 5
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
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
    return 0;
}

