#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// A very good algorithm to implement and usage of stack and 
// Time complexity of this algorithm is O(N)

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector<int> V(N);
	    for(int i=0;i<N;++i){
	        cin>>V[i];
	    }
	    vector<int> result(N);
	    
	    stack<int> S;
	    S.push(0);
	    for(int i=1;i<N;++i){
	        int next=V[i];
	        int index=S.top();
	        
	        while(V[index]<V[i]){
	            result[index]=V[i];
	            S.pop();
	            if(S.empty()){
	            S.push(i);
	                break;
	            }
	            index=S.top();
	        }
	        if(V[index]>V[i]){
	            S.push(i);
	        }
	       }
	    while(!S.empty()){
	        int index=S.top();
	        result[index]=-1;
	        S.pop();
	    }
        for(int i=0;i<N;++i){
            cout<<result[i]<<" ";
        }
	    cout<<endl;
	    
	}
	return 0;
}
