#include<iostream>
using namespace std;
int main(){

int n=6;
for(int i=1; i<=n; i++){
    int value=10;
    for(int j=1; j<=i; j++){
        cout<<value<<" ";
        value++;
    }
    cout<<endl;
}

return 0;

}