#include<iostream>
using namespace std;
int main(){

int n=5;
for(int i=n; i>=1; i--){
    char ch='A';
    for(int j=1; j<=i; j++){
        cout<<ch<<" ";
        ch=ch+1;
    }
    cout<<endl;
}

return 0;

}