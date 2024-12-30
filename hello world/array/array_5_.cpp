// reverse array
#include<iostream>
using namespace std;

void reversearray(int arr[],int sz){
int start=0,end=sz-1;
while(start<end){
swap(arr[start],arr[end]);
start++;
end--;
}
}

int main(){
int arr[]={1,2,3,4,5,6,7,89,3,5,6,3};
int sz=12;
reversearray(arr,sz);
for(int i=0;i<sz;i++){
cout<<arr[i]<<" ";
}

}