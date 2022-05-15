#include<bits/stdc++.h>
using namespace std;

template<typename T>
class QueueUsingArray{
    public:
    T *data;
    int nextIndex;
    int firstIndex;
    int capacityl
    public:
    QueueUsingArray(int s){
        data=new T[s];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=s;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void enqueue(T element){
        if(size==capacity){
            cout<<"Queue Full !"<<endl;
            return ;
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex== -1){
            firstIndex=0;
        }
        size++;

    }
    T front(){
        if(isEmpty()){
            cout<<"Queue Full !"<<endl;
            return ;
        }
        T ans=data[firstIndex];
        firstIndex=(firstIndex + 1)% capacity;
        size--;
        if(size==0){
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;
    }

};
int main(){
    QueueUsingArray<int> q(5);

    


}