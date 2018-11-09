#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,5,6};
    //int n = 0;
    //int n = (int) sizeof(arr)/ sizeof(int) ;
    //cout << n << endl;
    int sum = 6 *(6+1) / 2;
//    cout << sum << endl;//
    for(int i=1;i<=6;i++){
        sum = sum - arr[i-1];
    }
    printf("sum: %d\n",sum);

    return 0;
}