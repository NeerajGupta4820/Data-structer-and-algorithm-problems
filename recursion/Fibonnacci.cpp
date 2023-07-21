#include<iostream.h>
using namespace std;
//using recursion
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    cout<<fib(n);
    }
    return 0;
}
