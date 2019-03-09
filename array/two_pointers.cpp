#include<bits/stdc++.h>
using namespace std;
bool isTwoItemSumZero1(vector<int> A){
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            if(i!=j && A[i] + A[j] == 0)return true;
            if(A[i]+A[j] >0 )break;

        }
    }
}
bool isTwoItemSumZero2(vector<int> A){
    for(int i=0;i<A.size();i++){
        for(int j=A.size()-1;j>=0;j--){
            if(i!=j && A[i] + A[j] == 0)return true;
            if(A[i]+A[j] < 0 ) break;

        }
    }
}
bool isTwoItemSumZero3(vector<int> A){
    int j = A.size()-1;
    for(int i=0;i<A.size();i++){
        for(;j>i ;j--){
            if(i!=j && A[i] + A[j] == 0)return true;
            if(A[i]+A[j] < 0 ) break;

        }
    }
}

int main(){
    vector<int> A  = {-2,1,2,3,4};
    cout << isTwoItemSumZero3(A) << endl;

    return 0;
}