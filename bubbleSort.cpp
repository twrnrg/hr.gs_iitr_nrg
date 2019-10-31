#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &a, int n){
    if(n == 1)
        return;

    int flag = 0; 
    for(int i = 0; i < n-1; i++){
        if (a[i] > a[i+1]){
            swap(a[i], a[i+1]);
            flag = 1;
        }
    }
    if(flag == 1) // Atleast one swap happened
        bubbleSort(a, n-1);
}
int main(){
    vector<int> a;
    a.push_back(10);
    a.push_back(5);
    a.push_back(9);
    a.push_back(4);
    a.push_back(1);
    a.push_back(3);
    bubbleSort(a, a.size());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}