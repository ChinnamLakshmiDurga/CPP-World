#include<iostream>
using namespace std;
#define n 100

class stack{
    int *arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop ";
            return;
        }
        top--;
    }
    int Top(){
        if(top==n-1){
            cout<<"There is no element";
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<endl;
    cout<<st.empty()<<endl;
    return 0;
}