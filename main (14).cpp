/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Stack {
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        arr=new int[size];
        this->size=size;
         top=-1;
    }
    //push 
    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"stack overflow";
        }}
    //pop
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
        }
        else
        {
          top--; 
        }}
    //gettop
    int getTop() {
                if(top == -1) {
                        cout << "There is not element in Stack " << endl;
                }
                else {
                        return arr[top];
                }}
    //getsize
    int getsize(){
        return top+1;
    }
    //isempty
    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }}};
int main()
{
   Stack s(10);
    s.push(45);
    s.push(48);
    s.push(36);
    s.push(23);
      cout<<s.getTop()<<endl;
      s.pop();
      cout<<s.getTop()<<endl;
    return 0;
}
