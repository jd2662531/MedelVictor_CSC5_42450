/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 11, 2014, 5:38 PM
 * Final: Problem 6
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes
void read(int [],int,ifstream&,ofstream&,int);


//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream input;
    ofstream output;
    const int N=30;
    int numbers[N];
    input.open("table.dat");
    output.open("augtable.dat");
    
    read(numbers,N,input,output,6);
    
    
    
    input.close();
    output.close();
    //Exit Stage Right
    return 0;
}

void read(int b[], int n, ifstream& input, ofstream& output, int perLine){
    for(int i=0;i<n;i++){
        input>>b[i];
        cout<<b[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void addrw(int b[], int n, int perLine){
    for(int i=0;i<n;i++){
        a[i]
    }
}