#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintPattern(int n){
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    int n1=(n/2);
    for(int i=0;i=n1;i++){
        for(int j=1;j<=n1-i;i++){
            cout<<"*";
        }
        for(int l=1;i<=2*i;l++){
            cout<<"";
        }
        for(int k=1;k<=n1-i+1;i++){
            cout<<'*';
        }
        cout<<endl;
    }
     for(int i=n1-1;i>=1;i--){
        for(int j=1;j<=n1-i+1;j++){
            cout<<"*";
        }
        for(int l=1;i<=2*i;l++){
            cout<<"";
        }
        for(int k=1;i<=n1-i+1;k++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<'*';
    }


}
int main(){
    int n;
    cin>>n;
    int ans=PrintPattern(n);
    cout<<ans;
}