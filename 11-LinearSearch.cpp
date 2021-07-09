#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"At index="; return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter num of elements=";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<" =";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key=";
    cin>>key;

    cout<<linearSearch(arr,n,key)<<endl;

    return 0;
}