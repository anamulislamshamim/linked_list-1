#include<bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;
    node* next;
};

class LinkedList
{
public:
    node* head;
    node* CreateNewNode(int value)
    {
        node* newnode= new node();
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }
    // constructor
    LinkedList()
    {
        head=NULL;
    };
    // insert new value at Head
    void insertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head=a;
            return;
        }
        else
        {
            a->next=head;
            head=a;
        }
    };
    // traverse all elements of linked list:
    void Traverse()
    {
        node* a=head;
        while(a!=NULL)
        {
            cout << a->data << " ";
            a=a->next;
        }
    };
    // search a value that does not exist in the linked list
    void SearchDistinctValue(int value)
    {
        node *ds= head;
        int idx=0;
        while(ds != NULL)
        {
            if(ds->data == value)
            {
                cout << "\n" << idx << "\n";
                break;
            }
            ds=ds->next;
            idx++;
        }
    };
    // search all the matches value
    void SearchAllValue(int value)
    {

    };
};

int main()
{
    LinkedList l;
    l.insertAtHead(10);
    l.insertAtHead(10);
    l.insertAtHead(20);
    l.insertAtHead(30);


    // traverse
    l.Traverse();

    // search distinct value
    l.SearchDistinctValue(30);

    // search all matches value;
    l.SearchAllValue(10);
    return 0;
}
