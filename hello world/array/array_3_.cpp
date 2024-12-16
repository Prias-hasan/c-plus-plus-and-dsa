//smallest and largest number ina an array#include<iostream>
#include<iostream>
using namespace std;
int main(){
    int smallest=__INT_MAX__;
    int largest=INT_MIN;

int nums[6]={22,44,7,9,-4,-6};


for(int i=0;i<6;i++)
 {
{


smallest=min(nums[i],smallest) ;

}

largest=max(nums[i],largest);{
  
}


    // if(nums[i]<smallest){
    //     smallest=nums[i];

    // }
 }
cout<< "the smallest number :"<<smallest<<endl;
cout<<"the largest number is :"<<largest<<endl;









}
