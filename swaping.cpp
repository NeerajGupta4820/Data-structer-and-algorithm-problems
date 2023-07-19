#include<iostream>
using namespace std;
/*********************** swaping a string  using recursion *****************************/
void reversestringusingrecursion(int i,int j,string &s){
    //base case
    if(i>j) return ;
    swap(s[i],s[j]);
    i++;
    j--;
    reversestringusingrecursion(i,j,s);
}
int main(){
    string s;
    cin>>s;
    reversestringusingrecursion(0,s.size()-1,s);
    cout<<s;
}
