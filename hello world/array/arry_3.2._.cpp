//smallest and largest number ina an array#include<iostream>
#include<iostream>
using namespace std;
int main(){

int A[]={2,3,4,5,6,7,8,9,1,5,4,3,3,3,73};
int n=sizeof(A)/sizeof(A[0]);
int mx=A[0];
for(int i=1;i<n;i++){
    if(mx<A[i]){
    mx=A[i];
}
}
cout<<"maximum value is: "<<mx;



}