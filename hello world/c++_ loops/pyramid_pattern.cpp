#include<iostream>
using namespace std;
int main(){

int n=5;
for(int i=0;i<n;i++){
//spaces
for(int v=0;v<n-i-1;v++){
    cout<<" ";
}
//numb1
for(int v=1;v<=i+1;v++){
    cout<< v;
}
//numb2
for(int v=i;v>0;v--){

cout<< v;

}

cout<<endl;

}




}