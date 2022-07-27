#include<iostream>
using namespace std;

void fun1(int n){
if(n>0)
{
    cout<<n<<" ";
    fun1(n-1);// tail recursion - 3 2 1
}
}

void fun2(int n){
    if(n>0){
        fun2(n-1);// head recursion - 1 2 3
        cout<<n<<" ";
    }
}
int main(){

    int n;
    cout<<"Enter a Number ";
    cin>>n;

    fun1(n);

    cout<<endl;

    fun2(n);

return 0;
}