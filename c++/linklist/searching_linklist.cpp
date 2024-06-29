#include<iostream> 
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* Createnewnode(int data){
    Node* newnode = new Node;
    newnode->data=data;
    newnode->next=nullptr;
    return newnode;
}

void prindlist(Node* newnode){
    while(newnode!=nullptr){
        cout<<newnode->data<<" ";
        newnode=newnode->next;
        
    }
}

bool search(Node* newnode, int key ){
    int flag=0;
    while(newnode!=nullptr){
        if(newnode->data==key){
            flag++;
            return true;
        }
        newnode=newnode->next;
    }
}
void insert_node(Node* prev_node,float data){
    Node* newnode = new Node;
    newnode->data = data;
    newnode->next = prev_node->next;
    prev_node->next = newnode;
}
int main(){
    Node* head = Createnewnode(10);
    Node* middle = Createnewnode(11); 
    Node* last = Createnewnode(12); 

    head->next = middle;
    middle->next = last;
    

    Node* addfirst = Createnewnode(9);
    addfirst->next=head;
    
    head=addfirst;// update head = first note
   
    Node* addend= Createnewnode(13);
    last->next = addend;
    insert_node(middle,25);
    search(head,11) ? cout<< " yes " : cout << " no";
    prindlist(head); 
    }