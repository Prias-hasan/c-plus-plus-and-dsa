// #include<iostream>
// using namespace std; // calculate the sum of number 1 to n

// int sumn(int n) {
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         sum+= i;
//     }
//  return sum;


// }
//  int main(){
//     cout<<sumn(8)<<endl;
//     cout<<sumn(13)<<endl;


//     return 0;
//  }
  


  //factorial

#include<iostream>
using namespace std;
  int fact(int n){
    int fact=1;
    for( int i=1;i<=n;i++){
        fact*=i;

    }
    return fact;
  }

 int main(){
  cout<< fact(8);
 }