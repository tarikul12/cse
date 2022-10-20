#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n){

    if(m==n){
        return m;
    }

    else if(m>n){
        return gcd(m-n,n);

    }else{
        return gcd(m,n-m);
    }
}
int fib(int n){

    if(n<=1){

        return 1;
    }

    else{

        return fib(n-1)+fib(n-2);

    }

}
int fact(int n){

    if(n==0){

        return 1;
    }

    else{

        return n*fact(n-1);

    }

}

int main(){

cout<<gcd(8,52)<<endl;
cout<<fib(8)<<endl;
cout<<fact(10)<<endl;
return 0;
}

