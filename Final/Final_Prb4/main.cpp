/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 11, 2014, 7:38 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants


//Function Prototypes
int pickNum(int [], int);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    srand(time(0));
    const int N=5, NTIMES=10000;
    int freq[]={0,0,0,0,0};
    int rndSeq[]={9,51,78,181,208};
    int rndm;
//Output randomize the number NTIMES and output their frequency    
 for(int i = 0; i<NTIMES; i++){
    rndm = pickNum(rndSeq, N);
        for(int j = 0; j<N ; j++){
            if(rndm == rndSeq[j]){
                freq[j]++;
             }  
         }
}
for(int i = 0; i<N; i++){
cout<<rndSeq[i]<<" occurred "<<freq[i]<<" times."<<endl;
}
    //Exit Stage Right
    return 0;
}
int pickNum(int rndSeq[], int num){
    num;
    num = rand() % 5;
    return rndSeq[num];
}
