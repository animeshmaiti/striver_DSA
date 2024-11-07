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

Node<int> *convertArrToLL(vector<int> &arr)
{
    Node<int> *head = new Node<int>(arr[0]);
    Node<int> *mover = head;
    for (size_t i = 1; i < arr.size(); i++)
    {
        Node<int> *temp = new Node<int>(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int searchLL(Node<int>*head,int k){
    Node<int> *temp = head;
    while (temp)
    {
        if(temp->data==k) return 1;
        temp=temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 5};
    Node<int> *head = convertArrToLL(arr);
    // cout<<head->data;
    Node<int> *temp = head;
    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    cout<<searchLL(head,3);
    return 0;
}