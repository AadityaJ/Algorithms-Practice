#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
class TrieNode{
public:
	char Data;
	bool term;
	TrieNode* nxt[26];
	static TrieNode *getNode(char Data,bool term=0){
		TrieNode *x=new TrieNode();
		x->Data=Data;
		x->term=term;
		for(int i=0;i<26;i++) x->nxt[i]=NULL;
		return x;
	}
};
class Trie{
	TrieNode *root;

public:
	Trie(){
		root=TrieNode::getNode(' ',1);
	}
	bool search(string str){
		TrieNode *curr=root;
		for(int i=0;i<str.length();i++){
			int inx=(str[i]-'a');
			if(curr->nxt[inx]==NULL) return false;
			curr=curr->nxt[inx];
		}
		return curr->term;
	}
	void addString(string str){
		TrieNode *curr=root;
		for(int i=0;i<str.length();i++){
			int inx=(str[i]-'a');
			if(curr->nxt[inx]==NULL){
				curr->nxt[inx]=TrieNode::getNode(str[i],(i==str.length()-1));
			}
			curr=curr->nxt[inx];
		}
		curr->term=1;
	}
};
int main(int argc, char const *argv[]){
	Trie t;
	t.addString("abc");
	t.addString("abcd");
	cout<<t.search("abc")<<endl;
	cout<<t.search("ab")<<endl;
	return 0;
}
