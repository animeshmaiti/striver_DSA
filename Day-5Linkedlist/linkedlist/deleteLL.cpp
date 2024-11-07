#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node{
public:
    T data;
    Node * next;
    Node(T data){
        this->data = data;
        next = nullptr;
    }
};

Node<int>*arrToLL(vector<int>&arr){
    Node<int>*head=new Node<int>(arr[0]);
    Node<int>*mover=head;
    for(int i =1;i<arr.size();i++){
        Node<int>*temp=new Node<int>(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void traverse(Node<int>*head){
    Node<int>*temp=head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node<int>*deleteHead(Node<int> * head){
    Node<int>*temp=head;
    if(head==NULL) return head;
    head=head->next;
    delete temp;
    return head;
}

Node<int>* deleteTail(Node<int>*head){
    if(head==NULL || head->next->next==NULL) return head;
    Node<int>*temp=head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head; 
}

Node<int>*removeNthEle(Node<int>*head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node<int>*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node<int>*temp=head;
    Node<int>*prev=nullptr;
    while (temp!=NULL)
    {
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        // cnt++;//0 index
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node<int>*deleteValue(Node<int>*head,int k){
    if(head==NULL) return head;
    if(head->data==k){
        Node<int>*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node<int>*temp=head;
    Node<int>*prev=nullptr;
    while(temp!=NULL){
        if(temp->data==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int>arr={1,2,3,4,5};
    Node<int>*head= arrToLL(arr);
    // head=deleteHead(head);
    // head=deleteTail(head);
    // head=removeNthEle(head,2);
    head=deleteValue(head,4);
    traverse(head);
    return 0;
}