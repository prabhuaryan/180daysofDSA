#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

     for(int i=1; i<=n; i++){
        char value='A';
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

    return 0;
}