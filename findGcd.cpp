#include<iostream>

using namespace std;

int findGcdBF(int a , int b){

    // for loop choose whichever number is smaller.
    for(int i = min(a,b); i>1;i--){
        if(a%i==0 && b%i==0)
         return i;
    }
    // loop will return the ans even if it is 1 but since our func is int type therefore we will have 
    // to return something.Therefore i have removed = sign from condition in for loop.
    return 1;
}

int main()
{

    int a,b;
    cin>>a>>b;
   // 1. using brute force but in optimized way

    int BruteForce = findGcdBF(a, b);
    cout<<BruteForce;

   return 0;
}