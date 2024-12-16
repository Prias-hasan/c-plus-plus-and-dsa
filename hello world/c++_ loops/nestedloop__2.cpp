// Question: Write a C++ program to print a matrix of numbers where the numbers increment sequentially from 1, using nested loops. For example, if n = 4, the program should print the following 4x4 matrix:




#include <iostream>

using namespace std;

int main(){
    int n=4;
    int num =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num;cout<<"";
          num++;
        }
        cout<<endl;
    }

return 0;
}
