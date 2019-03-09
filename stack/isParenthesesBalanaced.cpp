#include<bits/stdc++.h>
using namespace std;
bool opposite(char a, char b ){
    if( a == '[' && b == ']'){return true;}
    if( a == '(' && b == ')'){return true;}
    if( a == '{' && b == '}'){return true;}
    return false;
}


bool isBalanced(string str)
{
    stack<char> holder;
    for(int i=0;i<str.length();i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            holder.push(str[i]); //while openning insert into the stack
        }

        else{
            if(holder.empty())return false; // if closing but stack empty then error
            char temp = str[i];
            char comp = holder.top();
            if(!opposite(comp,temp) ){
                return false; // if not opposite braces then error
            }
            cout << comp << temp << endl;
            holder.pop();// pop each maching braces

        }

    }
    if(holder.size()>0){
        return false; // if stack contains still some elements then error
    }
    return true;// if no problem found then everything is balanced


}

int main(){
    string str = "[[(())]]()";
    if(isBalanced(str)){
        printf("Balanced\n");

    }else{
        printf("not balanced\n");
    }

    return 0;
}