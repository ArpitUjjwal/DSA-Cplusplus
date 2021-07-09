#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int num=n;

    while(n>0){
        int dig=n%10;
        sum += pow(dig,3);
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"Armstrong num";
    }
    else{
        cout<<"Not armstrong";
    }
    


    cout<<endl;
    return 0;
}
