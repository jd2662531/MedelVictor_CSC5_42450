/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 11, 2014, 10:34 AM
 * Final: Problem 5
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes
void read(string a[], int n, ifstream& infile);
void swap(string& a, string& b);
void prntAry(string a[],int n,int perLine);
void sort(string a[],int n);
void lstSmal(string a[],int n,int pos);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream infile;
    ofstream outfile;
    int SIZE=10;
    string array[SIZE];
    
    //Opens Files Being Utilized
    infile.open("input.dat");
    outfile.open("output.dat");
    
    read(array,SIZE,infile);
    prntAry(array,SIZE,1);
    sort(array,SIZE);
    prntAry(array,SIZE,1);
    
    //Closes Files Being Utilized
    infile.close();
    outfile.close();
    //Exit Stage Right
    return 0;
}
void read(string a[], int n, ifstream& infile){
     for(int i=0;i<10;i++){
        infile>>a[i];        
    }
}
void sort(string a[],int n){
    for(int i=0;i<n-1;i++){
        lstSmal(a,n,i);
    }
}
void lstSmal(string a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]<a[i])swap(a[pos],a[i]);
    }
}
void swap(string& a, string& b){
    string temp=a;
    a=b;
    b=temp;
}
void prntAry(string a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}