#include<iostream>
using namespace std;

int main(){
int A[]={2,3,4,5,6,7,8,9,0,5,4,3,3,3,73};
int n=sizeof(A)/sizeof(A[0]);
int x;
bool found= false; // flag to cheak if element is found
cout<<("enter target:");
cin>>x;
for(int i=0;i<n;i++){
 if (A[i]==x){
cout<<x<<" is present"<<endl;
found =true;

break;
 
    
 }
}
if(!found){
    cout<<x<<" is not present";
}
}