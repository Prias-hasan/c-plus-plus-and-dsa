
// Question: Write a C++ program to print a matrix of uppercase alphabets, starting from 'A' and incrementing across each row. The alphabet should reset to 'A' at the beginning of each row. For example, if n = 4, the program should print the following 4x4 matrix:






#include<iostream>
  using namespace std;
  int main(){
    int n=4;
    for(int i =0;i<n;i++){
        char ch ='A';
        for(int j=0;j<n;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }


    
  }