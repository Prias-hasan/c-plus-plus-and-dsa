
#include<iostream>
using namespace std;
int main(){
int smallest,ssmalllest;
 int arr[]={2,44,6,7,8,3,5,9};
    int n=8;
    int largest=arr[0];
    int slargest=-1;
for(int i=1; i<n;i++){
if(arr[i]>largest){
    slargest=largest;
    largest=arr[i];


}
    else if(arr[i]<largest&& arr[i]>slargest){
        slargest =arr[i];
    }
}

if (slargest == -1) {
        cout << "No second largest element exists!" << endl;
    } else {
        cout << "Second largest: " << slargest << endl;
    }









    return 0;

}
