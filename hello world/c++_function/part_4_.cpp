#include<iostream>
using namespace  std;



int sumofdigit( int num){
    int digsum=0;

     while(num>0){
     int lastdig=num%10;
     num/=10;
digsum+= lastdig;
    }
    return digsum;
}


int main (){

cout<< "sum of digit is "<<sumofdigit(6383638)<<endl;
  
}