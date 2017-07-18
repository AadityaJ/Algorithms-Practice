#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
// 1 2 3 . . .
class Heap{
	vector<int> v;
	int parent(int x){return (x/2);}
	int left(int x){return x*2;}
	int right(int x){return (x*2)+1;}
	void maxHeapify(int i){
		int l=left(i);
		int r=right(i);
		int large=i;
		if(l<v.size()&&v[l]>v[i])
			large=l;
		if(r<v.size()&&v[r]>v[large])
			large=r;
		if(large!=i){
			swap(v[large],v[i]);
			maxHeapify(large);
		}
	}
public:
	Heap(){
		v.push_back(0);
	}
	void insert(int x){
		v.push_back(x);
		int k=v.size()-1;
		while(k!=1&&v[k]>v[parent(k)]){
			swap(v[k],v[parent(k)]);
			k=parent(k);
		}
	}
	int top(){
		if(v.size()==1){
			return -1;
		}
		return v[1];
	}
	void pop(){
		if(v.size()==1){
			return  ;
		}
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		maxHeapify(1);
	}
};
void sort_(int *arr,int n){
	Heap p;
	for(int i=0;i<n;i++){
		p.insert(arr[i]);
	}
	for(int i=n-1;i>=0;i--){
		arr[i]=p.top();
		p.pop();
	}

}
int main(int argc, char const *argv[]){
	Heap h;
	h.insert(10);
	h.insert(8);
	h.insert(13);
	h.insert(5);
	h.insert(18);
	cout<<h.top()<<endl;
	h.pop();
	h.pop();
	h.pop();
	cout<<h.top()<<endl;
	int arr[]={1,10,0,3,9,28,-10};
	int n=(sizeof(arr)/sizeof(arr[0]));
	sort_(arr,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
