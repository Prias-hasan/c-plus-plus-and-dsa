#include<iostream>
using namespace std;
int main(){
    int smallest=__INT_MAX__;
int nums[6]={22,44,7,9,-4,-6};
for(int i=0;i<=6;i++)
 {
    if(nums[i]<smallest){
        smallest=nums[i];

    }
 }
cout<<smallest<<endl;
}