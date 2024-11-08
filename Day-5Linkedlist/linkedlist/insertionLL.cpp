#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Node
{
public:
    T data;
    Node *next;
    Node(T data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
    Node(T data)
    {
        this->data = data;
        next = nullptr;
    }
};

Node<int> *arrToLL(vector<int> &arr)
{
    Node<int> *head = new Node<int>(arr[0]);
    Node<int> *mover = head;
    for (size_t i = 1; i < arr.size(); i++)
    {
        Node<int> *temp = new Node<int>(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void traverse(Node<int> *head)
{
    Node<int> *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node<int> *pushHead(Node<int> *head, int val)
{
    if (head == NULL)
        return new Node<int>(val);
    return new Node<int>(val, head);
}

Node<int> *pushTail(Node<int> *head, int val)
{
    if (head == NULL)
        return new Node<int>(val);
    Node<int> *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node<int>(val);
    return head;
}

Node<int> *insertNthPos(Node<int> *head, int pos, int val)
{
    if (head == NULL)
    {
        if (pos == 1)
            return new Node<int>(val);
        return NULL;
    }
    if (pos == 1)
    {
        return new Node<int>(val, head);
    }
    int cnt = 0;
    Node<int> *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == pos - 1)
        {
            Node<int> *newNode = new Node<int>(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node<int> *insertBeforeVal(Node<int> *head, int valPos, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == val)
    {
        return new Node<int>(val, head);
    }
    Node<int> *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == valPos)
        {
            Node<int> *newNode = new Node<int>(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node<int> *head = arrToLL(arr);
    head = pushHead(head, 100);
    head = pushTail(head, 300);
    head = insertNthPos(head, 7, 400);
    head = insertBeforeVal(head, 5, 23);
    traverse(head);
    return 0;
}