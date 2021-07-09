#include<iostream>
using namespace std;

void factorial(int a){
    int fac=1;
    if(a==0){
        cout<<fac;
    }
    else{
        while(a>0){
            fac*=a;
            a--;
        }
        cout<<fac;
    }
}


int main()
{   
    int n;
    cout<<"Input a number:";
    cin>>n;

    factorial(n);

    cout<<endl;
    return 0;
}
