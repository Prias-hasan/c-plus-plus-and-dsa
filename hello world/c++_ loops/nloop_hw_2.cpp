#include <iostream>

using namespace std;

int main(){
    int n=5;
    
    for(int i=0;i<n;i++){
        char ch ='a';
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
          
        }
        cout<<endl;
    }

return 0;
}