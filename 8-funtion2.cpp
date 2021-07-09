#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int x){
    for(int a=2;a<sqrt(x);a++){
        if(x%a==0){
            return false;
        }
        else{
            return true;
        }
    }
}


int main()
{
    int a,b;
    cout<<"Input 1st num:";
    cin>>a;
    cout<<"Input 2nd num:";
    cin>>b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }



    cout<<endl;
    return 0;
}
