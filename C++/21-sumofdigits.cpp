#include<iostream>
using namespace std;

int fun(int n){
    int sum;
    if(n<10){
        return n;
    }
    else{
        return fun(n/10)+n%10;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<fun(n);
}