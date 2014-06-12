/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 11, 2014, 5:38 PM
 * Final: Problem 6
 * 
 * Utilized a lot of help from the web to try to develop this program.
 * Unfortunately, I would not get it to work.
 * 
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants
const int COLS=6;

//Function Prototypes
void read(int [][COLS],int,ifstream&,ofstream&,int);
void add(int [][COLS], int );

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream input;
    ofstream output;
    const int N=30;
    int numbers[N][COLS];
    input.open("table.dat");
    output.open("augtable.dat");
    
    read(numbers,N,input,output,6);
    add(numbers,N);
    
    
    input.close();
    output.close();
    //Exit Stage Right
    return 0;
}

void read(int b[][COLS], int n, ifstream& input, ofstream& output, int perLine){
    for(int rows=0;rows<n;rows++){
        input>>b[rows][COLS];
        cout<<b[rows][COLS]<<" ";
        if(rows%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void add(int b[][COLS], int n){
   int rowSum[COLS] = {0};
   int colSum[5] = {0};
   //Loop Through Sum
    for(int i=0;i<5;i++){
     for(int j=0;j<6;j++){
        rowSum[j] += b[i][j];
         colSum[i] += b[i][j];
      }
  }
   
 //Print Array
  for(int i=0;i!=5;++i){
      for(int j=0;j!=6;++j){
         cout << b[i][j] << " ";
      }
     cout << endl;
  }
   //print result
  for(int n = 0; n != 6; ++n){
	  cout <<rowSum[n] << " ";
  }
     for (int s=0;s!=5;++s){
           cout <<colSum[s]<<"";
     }
  cout << endl;
}