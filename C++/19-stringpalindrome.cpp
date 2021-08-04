#include<iostream>
#include<string>
using namespace std;

bool fun(string str,int s,int e){
    if(s==e){
        return true;
    }
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    return fun(str,s+1,e-1);
}

int main(){
    string str;
    cin>>str;
    int e , s = 0;
    e = str.length()-1;
    if(fun(str,s,e)){
        cout<<"palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
}