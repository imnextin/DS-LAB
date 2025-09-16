#include <iostream>
using namespace std;
#define MAX 100
int stack[MAX],top=-1;
void push(int x){ if(top<MAX-1) stack[++top]=x; else cout<<"Overflow\n"; }
void pop(){ if(top>=0) cout<<"Popped "<<stack[top--]<<"\n"; else cout<<"Underflow\n"; }
bool isEmpty(){ return top==-1; }
bool isFull(){ return top==MAX-1; }
void display(){ for(int i=top;i>=0;i--) cout<<stack[i]<<" "; cout<<"\n"; }
void peek(){ if(top>=0) cout<<stack[top]<<"\n"; else cout<<"Empty\n"; }
int main(){
    int ch,x;
    do{
        cin>>ch;
        if(ch==1){cin>>x; push(x);}
        else if(ch==2) pop();
        else if(ch==3) cout<<(isEmpty()?"Yes":"No")<<"\n";
        else if(ch==4) cout<<(isFull()?"Yes":"No")<<"\n";
        else if(ch==5) display();
        else if(ch==6) peek();
    }while(ch!=0);
}
