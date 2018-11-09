#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> v1,v2;
    string str= "hello";
    for(int i=0;i<str.length();i++){
        v1.push_back(str[i]);
    }
    stack<char> s1;
    for(int i=0;i<v1.size();i++){
        s1.push(v1[i]);
    }

    while(!s1.empty()){
        v2.push_back(s1.top());
        s1.pop();
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i];
    }
    cout << endl;
    return 0;
}