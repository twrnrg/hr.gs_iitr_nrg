#include <bits/stdc++.h>
using namespace std;

int party(int n){
   if(n == 1)
    return 0;
    return (n-1) + party(n-1);
}


int main(){
    int a = party(10);
    return a;
}