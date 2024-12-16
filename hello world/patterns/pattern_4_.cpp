

// #include<iostream>
// //floyds triangle pattern
// using namespace std ;

// int main(){
//   int n=6;
//   int num=1;
//   for(int i=0;i<n;i++){
//     for(int p=i+1;p>0;p--){
//         cout<<num;
//         num=num +1;
//     }
//     cout<<endl;
//   }
// return 0;
// }
#include<iostream>
using namespace std;
int main (){
    int n=5;
    char ch='A';
     for(int i=0;i<n;i++){
     for(int p=i+1;p>0;p--){
        cout<<ch;
        ch=ch+1;

     }
     cout<<endl;
     }
}