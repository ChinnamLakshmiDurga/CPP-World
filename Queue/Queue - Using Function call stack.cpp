#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int>s1;

    public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty()){
            cout<<"Noe element to pop"<<endl;
            return -1;
        }
        int topval=s1.top();
        s1.pop();
        if(s1.empty()){
            return topval;
        }
        int item = pop();
        s1.push(topval);
        return item;
    }

    bool empty(){
        return s1.empty();
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty();
    return 0;
}