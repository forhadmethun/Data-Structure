#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 26

class Trie{
public:
    bool isLeaf;
    Trie* children[MAX_SIZE];
    Trie(){
        isLeaf =false;
        for(int i=0;i<MAX_SIZE;i++){
            children[i] = NULL;
        }
    }
};

Trie* getNewNode(){
    Trie *t = new Trie();
    return t;
}

class trie_t{
public:

};


void insert(Trie* root, char* name){
    int len = strlen(name);
    Trie* t = root;
    for(int i=0;i<len;i++){
        if(t->children[name[i] - 'a'] == NULL){
            t->children[name[i] - 'a'] = getNewNode();
        }
        t = t->children[name[i] - 'a'];
    }
    t->isLeaf = true;


}

bool search(Trie* root, char* name){
    int len = strlen(name);
    Trie* t = root;
    for(int i=0;i<len;i++){
        if(t->children[name[i] - 'a'] == NULL)return false;
        t = t->children[name[i] - 'a'];
    }
    return (t != NULL and t->isLeaf==true);//return true;

}

bool deleteNode(){

}

int main(){
    Trie *root = getNewNode();
    char keys[][8] = {"the", "a", "there", "answer", "any",
                      "by", "bye", "their"};
    for(int i=0;i<8;i++){
        insert(root,keys[i]);
    }
    char output[][32] = {"Not present\n","present\n"};
    printf("%s --- %s\n", "the", output[search(root, "the")] );
    printf("%s --- %s\n", "these", output[search(root, "these")] );
    printf("%s --- %s\n", "their", output[search(root, "their")] );
    printf("%s --- %s\n", "thaw", output[search(root, "thaw")] );
    printf("%s --- %s\n", "by", output[search(root, "by")] );



    return 0;
}