#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Node
{
public:
    T data;
    Node *next;
    Node *back;
    Node(T data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }
    Node(T data)
    {
        this->data = data;
        next = nullptr;
        back = nullptr;
    }
};

Node<int>*arrToLL(vector<int>&arr){
    Node<int>*head=new Node<int>(arr[0]);
    Node<int>*prev=head;
    for(int i = 1;i<arr.size();i++){
        Node<int>*temp=new Node<int>(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void traverseForward(Node<int>*head){
    Node<int>*temp=head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void traverseBackward(Node<int>*head){

}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node<int> *head = arrToLL(arr);
    traverseForward(head);
    return 0;
}