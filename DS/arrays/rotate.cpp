#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
    std::vector<int> v[10000];
    std::vector<int> v1[10000];
    int n;
    cin>>n;
    int arr[n],a[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int jack=0;
    int k,d;
    cin>>k>>d;
    for(int i=0;i<n;){
        int x;
        for(x=0;x<k&&(x+i)<n;x++){
            v[jack].push_back(arr[i+x]);
            v1[jack].push_back(arr[i+x]);
        }
        i+=x;
        jack++;
    }
    /*for(int i=0;i<jack;i++){
        cout<<i<<":: "<<v[i].size()<<endl;
        for(int j=0;j<v1[i].size();j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }*/
    for(int i=0;i<jack;i++){
        for(int j=0;j<v1[i].size();j++){
            int x=(j+d);
            if(x<0) x+=v1[i].size();
            v1[i][x%k]=v[i][j];
        }
    }
    int cnt=0;
    /*for(int i=0;i<jack;i++){
        cout<<i<<":: "<<v[i].size()<<endl;
        for(int j=0;j<v1[i].size();j++) cout<<v1[i][j]<<" ";
        cout<<endl;
    }*/
    for(int i=0;i<jack;i++){
        for(int j=0;j<v1[i].size();j++) arr[cnt++]=v1[i][j];
    }
    for(int i=0;i<cnt;i++) cout<<arr[i]<<" ";

    return 0;
}
/*
 * Following is the Node class that is already written.

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
*//*
#include <bits/stdc++.h>
using namespace std;
Node* rotateByBlocks(Node *head, int k, int d) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     *//*
     if(!head) return head;
    std::vector<int> v[1000000];
    std::vector<int> v1[1000000];
    std::vector<int> arr;
    Node *curr=head;
    while(curr){
        arr.push_back(curr->data);
        curr=curr->next;
    }
    int jack=0;
    int n=arr.size();
    for(int i=0;i<n;){
        int x;
        for(x=0;x<k&&(x+i)<n;x++){
            v[jack].push_back(arr[i+x]);
            v1[jack].push_back(arr[i+x]);
        }
        i+=x;
        jack++;
    }
    for(int i=0;i<jack;i++){
        for(int j=0;j<v1[i].size();j++){
            int x=(j+d);
            if(x<0) x+=v1[i].size();
            v1[i][x%k]=v[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<jack;i++){
        for(int j=0;j<v1[i].size();j++) arr[cnt++]=v1[i][j];
    }
    //for(int i=0;i<cnt;i++) cout<<arr[i]<<" ";
    //cout<<endl;
    Node *nw=new Node(arr[0]);
    curr=nw;
    for(int i=1;i<cnt;i++){
        Node *temp=new Node(arr[i]);
        curr->next=temp;
        curr=temp;
    }
    return nw;
}


*/
