/*
- By Shubham Sharma
:26-09-2016

*/

/*
This is a classical problem which asks you to design a special stack data 
structure such that getMin(),pop(),push() all takes O(1) time
Time Complexity : O(1)
Space Complexity:O(n)
*/

#include<bits/stdc++.h>
using namespace std;

class _special_stack{
    private:
    stack<int> S;
    stack<int> _aux;
    public:
    _special_stack(){}
    void _push(int);
    void _pop();
    int _getMin();
    
};

/*
utility function to get the push operation in the _special_stack
*/
void _special_stack::_push(int _key){
    S.push(_key);
    /* The main logic is to maintain repeated minimum upto the stack height*/
    if(_aux.size()==0){
        _aux.push(_key);
    }
    else{
        int _top=_aux.top();
        if(_key<_top){
            _aux.push(_key);
        }
        else{
            _aux.push(_top);
        }
    }
}

/*utility function to generate the pop operation
*/
void _special_stack::_pop(){
    if(S.size()==0){
        cout<<"The stack is already empty!"<<endl;
        return;
    }
    S.pop();
    _aux.pop();
}

/*
utiliy function to get the current min in o(1)
*/
int _special_stack::_getMin(){
    return _aux.top();
}


int main(void){
    _special_stack S;
    S._push(25);
    S._push(18);
    S._push(9);
    S._push(814);
    S._push(3);
    cout<<S._getMin();
return 0;    
}
