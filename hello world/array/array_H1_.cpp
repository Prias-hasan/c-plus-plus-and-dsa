//smallest and largest number in an array also its index
#include<iostream>
using namespace std;
int main(){

int numb[9]={33,55,66,-44,44,33,99,77,4858,};
int smallest=INT_MAX,largest=INT_MIN;
int smallestindex,largestindex;
    

for(int i=0;i<9;i++){

if(numb[i]<smallest){
smallest=numb[i];
smallestindex=i;
}
if(numb[i]>largest){
    largest=numb[i];
    largestindex=i;

}
}
    cout<<"smallest number is="<<smallest<<"at index="<<smallestindex<<endl;
    cout<<"largest number is ="<<largest<<"ai index="<<largestindex<<endl;

}

