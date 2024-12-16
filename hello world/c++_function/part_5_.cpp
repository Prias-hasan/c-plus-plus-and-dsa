//decimal to binary

// #include<iostream>
// using namespace std;
 

//  int decmltobin (int n){
//     int ans=0,pow=1;
//     while(n>0){
//         int rem=n%2;
//         n=n/2;
//         ans+=(rem*pow);
//         pow*=10;
//     } 
//     return ans;
//  }



// int main(){
// cout<<decmltobin (50)<<endl;

// }


#include<iostream>    //decimal to binary 1 to 10
using namespace std;
 

 int decmltobin (int n){
    int ans=0,pow=1;
    while(n>0){
        int rem=n%2;
        n=n/2;
        ans+=(rem*pow);
        pow*=10;
    } 
    return ans;
 }



int main(){
    for(int i=1;i<=10;i++){

    
cout<<decmltobin (i)<<endl;

}
}
