#include <iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=1; i<=n; i++){
        char value=1;
        for(int j=i; j<=n; j++){
            cout<<" ";
        }
        for(int j=1; j<i; j++){
            cout<<value++;
        }
        for(int j=1; j<=i; j++){
            cout<<value--;
        }
        cout<<endl;
    }
}