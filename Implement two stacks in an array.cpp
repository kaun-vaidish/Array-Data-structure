/*
Your task is to implement  2 stacks in one array efficiently.
 You need to implement 4 methods.
push1 : pushes element into first stack.
push2 : pushes element into second stack.
pop1 : pops element from first stack and returns the popped element. 
If first stack is empty, it should return -1.
pop2 : pops element from second stack and returns the popped element. 
If second stack is empty, it should return -1
*/

#include<bits/stdc++.h>
using namespace std;

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
    public:
    
    twoStacks(int n=100)
    {
        size = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = size;
    }
 
    void push1(int x)
    {
        top1++;
        arr[top1] = x;
        
    }
    
    void push2(int x)
    {
        top2--;
        arr[top2] = x;
       
    }
    
    int pop1()
    {
        if(top1 == -1){
            return -1;
        }
        int temp = arr[top1];
        top1--;
        return temp;
    }
    
    int pop2()
    {
        if(top2 == size){
            return -1;
        }
        int temp = arr[top2];
        top2++;
        return temp;
    }
};


int main()
{

    twoStacks *sq = new twoStacks();

    int Q;
    cin>>Q;
    while(Q--){
    int stack_no;
    cin>>stack_no;
    int QueryType=0;
    cin>>QueryType;
    
    if(QueryType==1)
    {
        int a;
        cin>>a;
        if(stack_no ==1)
        sq->push1(a);
        else if(stack_no==2)
        sq->push2(a);
    }else if(QueryType==2){
        if(stack_no==1)
        cout<<sq->pop1()<<" ";
        else if(stack_no==2)
        cout<<sq->pop2()<<" ";

    }
    }
    cout<<endl;

}

/*
push1(2)
push1(3)
push2(4)
pop1()
pop2()
pop2()
Output:
3 4 -1
*/