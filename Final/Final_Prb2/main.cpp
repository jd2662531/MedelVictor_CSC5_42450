/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 10, 2014, 2:36 PM
 * Final: Problem 2
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variable
    srand(time(0));
    int rndNum, num, count;
    char ans;
    //Guess the Number
    rndNum=rand()%1000+1;
    cout<<"I have a number between 1 and 1000\n";
    cout<<"Can you guess my number?\n";
    cout<<"You will be given a maximum of 10 guesses.";
    count=1;
    do{
        do{//Loop repeats and increases counter
            do{
                cout<<"\n\n";
                cout<<"Please type guess number "<<count<<":  " ;
                cin>>num;
                if(num>rndNum){
                  cout<<"Too High. Try again.";
                  count=++count;
                }else if(num<rndNum){
                    cout<<"Too Low. Try again.";
                    count=++count;
                }else if(num==rndNum){
                    cout<<"Congratulations, you guessed the number!\n";
                    count=1;
                    cout<<"Would you like to play again? (y or n): \n";
                    cin>>ans;
                }
            }while(ans=='y'||ans=='Y');
    }while (count<=10);
    cout<<"\n\n";
    cout<<"***Too Many Tries.***\n";  
    count=1;
    cout<<"Would you like to play again? (y or n): \n";
    cin>>ans;
    }while(ans=='y'||ans=='Y');
    //Exit Stage Right
    return 0;
}

