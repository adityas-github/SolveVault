#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
        else{
            n*=3;
            n+=1;
            cout<<n<<" ";
        }
    }
    cout<<endl;

}