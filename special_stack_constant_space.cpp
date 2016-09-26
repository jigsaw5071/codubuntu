/*
-By Shubham Sharma
:17-08-2016
*/
/*
Time complexity: O(1)
space complexity:O(1)

*/

#include<bits/stdc++.h>
using namespace std;



/*
class Blueprint of special stack with getMin() in O(1)  and space O(1)
*/
class _special_stack{
  private:
  stack<int> S;
  int _minElement;
  public:
  void _push(int);
  void _pop();
  int _getMin();
};

/*
utility function for the minimum element in o(1) extra space
*/
void _special_stack::_push(int _key){
    if(S.size()==0){
        S.push(_key);
        _minElement=_key;
    }
    else{
        if(_key> _minElement){
            S.push(_key);
        }
        else{
            S.push(2*_key - _minElement);
            _minElement=_key;
        }
    }
}

/*
utility function for the pop operation in the stack in O(1) extra space 
*/
void _special_stack::_pop(){
    if(S.size()==0){
        cout<<"The stack is already empty !"<<endl;
        return ;
    }
    int _top=S.top();
    if(_top> _minElement){
        S.pop();
    }
    else{
        _minElement=2*_minElement -_top;
    }
    
}

/*
utility function to get the minimum
*/
int _special_stack::_getMin(){
    if(S.size()==0){
        cout<<"The stack is already empty!"<<endl;
        return -1;
    }
    else {
        return _minElement;
    }
}

int main(void){
    /*
    this is to make the cin and cout as fast as printf and scanf
    */
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    _special_stack S;
    S._push(3);
    S._push(5);
    cout<<S._getMin()<<endl;
    S._push(2);
    S._push(1);
    cout<<S._getMin();
    
    
    
    return 0;
}
