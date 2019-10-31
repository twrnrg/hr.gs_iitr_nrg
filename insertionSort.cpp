#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &a, int n){
    if(n <= 1)
        return;
    insertionSort(a, n-1);
    int last = n-1;
    int j = n - 2;
    while(j>=0 && a[last] < a[j]){
        int temp = a[last];
        a[last] = a[j];
        a[j] = temp;
        j--;last--;
        }
    }

int main(){
    vector<int> a;
    a.push_back(10);
    a.push_back(5);
    a.push_back(9);
    a.push_back(4);
    a.push_back(1);
    a.push_back(3);
    insertionSort(a, a.size());
    for(int i = 0; i < a.size(); i++){
        cout <<a[i] <<" ";
    }

}