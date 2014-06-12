/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 11, 2014, 12:44 AM
 * Final: Problem 3
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Global Constants

//Function Prototypes
void fllVec(vector<int>& , vector<int>& , int );
void prntVec(vector<int>& , vector<int>& , int );


//Execution Starts Here
int main(int argc, char** argv) {
        //Declare Variables
        int size, number;
        vector<int> even;
        vector<int> odd;
        //Request Vector Size
        cout<<"Please enter the size of the vectors: ";
        cin>>size;
        fllVec(even, odd, size);
        prntVec(even, odd, size);
    //Exit Stage Right
    return 0;
}

void fllVec(vector<int>& even, vector<int>& odd, int size){
    srand(time(0));
    int number;
    while(even.size()<size){
    number=rand()%90+10;
        if(number%2==0)
        even.push_back(number);
    }
    while(odd.size()<size){
    number=rand()%90+ 10;
        if(number %2!=0)
        odd.push_back(number);
     }
}
void prntVec(vector<int>& even, vector<int>& odd, int col){
//Ask user how many columns to print
cout<<"Please type the amount of columns you would like to print: \n";
cout<<"Columns: ";
cin>> col;

    for(int i=0;i<col;i++){
        cout<<even[i]<<"  ";
    }
        cout<<endl;
    for(int j= 0;j<col;j++){
        cout<<odd[j]<<"  ";
    }
        cout<<endl<<endl;
}