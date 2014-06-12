/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 11, 2014, 7:12 PM
 * CSC 5
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

//Global Constant
const int COLS=6;

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
//Functions for Problems
void fllVec(vector<int>& , vector<int>& , int );//Problem 3
void prntVec(vector<int>& , vector<int>& , int );//Problem 3
int pickNum(int [], int);//Problem 4
void read(string a[], int n, ifstream& infile);//Problem 5
void swap(string& a, string& b);//Problem 5
void prntAry(string a[],int n,int perLine);//Problem 5
void sort(string a[],int n);//Problem 5
void lstSmal(string a[],int n,int pos);//Problem 5
void read(int [][COLS],int,ifstream&,ofstream&,int);//Problem 6
void add(int [][COLS], int );//Problem 6

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
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
        case 7:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6); 
    //Exit Stage Right
    return 0;
}
void Menu(){
    cout<<endl;
    cout<<"Menu for the Final"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6 | Non-functional"<<endl;
    cout<<"Type anything else to exit"<<endl;
}
int getN(){
        int inN;
        cout<<"Selection: ";
        cin>>inN;
        return inN;
}
void problem1(){
        //Declare Variable
     unsigned short number;
     unsigned short nuNum;
     int digits;
     cout<<"Reverse the order of your number.\n";
     cout<<"According to The Microsoft Developer Network an unsigned short value range of 0-65,535.\n\n";
     cout<<"Enter a number between 0 and 65,535\n";
     cout<<"Number: ";
     cin>>number;
      if(number>0&&number<=65535){   
          digits=((log10(number))+1); //Tells us how many digits are in the number
             nuNum=0;
             for (int i=0;i<digits;i++){
                  nuNum=nuNum*10; //Makes room for the next digit
                  nuNum=nuNum+(number % 10); //adds in the next digit
                  number=number/10; //Shift the digits to the right
             }  
             if(nuNum>65535){
                 cout<<"Your conversion is not possible.";
             }else if(nuNum<=65535){             
             cout<<"Your number has been reversed to: ";
             cout<<nuNum;
             }
      }else if(number>65535){
          cout<<"Your conversion is not possible.";
      }
     cout<<endl;
    //Exit Stage Right
}

void problem2(){
    srand(time(0));
    int rndNum, num, count;
    char ans;
    //Guess the Number
    rndNum=rand()%1000+1;
    cout<<endl;
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
    cout<<endl;
    //Exit Stage Right
}

void problem3(){
    //Declare Variables
        int size, number;
        vector<int> even;
        vector<int> odd;
        //Request Vector Size
        cout<<endl;
        cout<<"Please enter the size of the vectors: ";
        cin>>size;
        fllVec(even, odd, size);
        prntVec(even, odd, size);
        cout<<endl;
    //Exit Stage Right
}

void problem4(){
    //Declare Variables
    srand(time(0));
    const int N=5, NTIMES=10000;
    int freq[]={0,0,0,0,0};
    int rndSeq[]={9,51,78,181,208};
    int rndm;
    cout<<endl;
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
    cout<<endl;
    //Exit Stage Right
}

void problem5(){
    //Declare Variables
    ifstream infile;
    ofstream outfile;
    int SIZE=10;
    string array[SIZE];
    
    //Opens Files Being Utilized
    infile.open("input.dat");
    outfile.open("output.dat");
    cout<<endl;
    read(array,SIZE,infile);
    prntAry(array,SIZE,1);
    sort(array,SIZE);
    prntAry(array,SIZE,1);
    
    //Closes Files Being Utilized
    infile.close();
    outfile.close();
    cout<<endl;
    //Exit Stage Right
}

void problem6(){
    //Utilized a lot of help from the web to try to develop this program.
    //Unfortunately, I would not get it to work.
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
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
//Function Definitions for Problems
//Problem 3
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
        cout<<endl;
}
//Problem 4
int pickNum(int rndSeq[], int num){
    num;
    num = rand() % 5;
    return rndSeq[num];
}
//Problem 5
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
//Problem 6
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