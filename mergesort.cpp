#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int l, int m, int r){
    int i, j, k;
    int n1 = m- l + 1;
    int n2 = r - m;

    //temp vector
    vector<int>L;
    vector<int>R;

    //copy data 

    for(i = 0; i < n1; i++)
        L.push_back(a[l+i]);
    for(j = 0; j < n2; j++)
        R.push_back(a[m + 1 + j]);

    // merge the temp arrays back
    i = 0; 
    j = 0;
    k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = R[j];
        j++;
        k++;
    }
    L.clear(); 
    R.clear();

}

void mergeSort(vector<int> &a, int l, int r){
   if(l < r)
   {
       int m = l + (r-l)/2;
       mergeSort(a, l, m);
       mergeSort(a, m+1, r);

       merge(a, l, m, r);
   } 
} 

int main(){
    vector<int> a;
    a.push_back(3);
    a.push_back(5);
    a.push_back(9);
    a.push_back(4);
    a.push_back(1);
    a.push_back(8);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
        cout<<endl;
    mergeSort(a, 0,  a.size() - 1);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}