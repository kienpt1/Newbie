#include<iostream> 
#include<queue>
using namespace std; 

struct Node 
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data){
    Node* node=new Node;
    node->data=data;
    node->left=nullptr;
    node->right=nullptr; 
    return node;
}

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<< root->data;
    inorder(root->right);
}

void deletedeepest(Node* root, Node* d_node){
 queue<Node* > q;
 q.push(root);
 Node* temp; 
 while (!q.empty()){
    temp=q.front();
    q.pop();

    if(temp==d_node){
        temp=nullptr;
        delete(d_node);
        return;
    }
    if(temp->right){
        if(temp->right==d_node){
            temp->right=nullptr;
            delete(d_node);
            return;
        }
        else{
            q.push(temp->right);
        }
    }
    if(temp->left){
        if(temp->left==d_node){
            temp->left=nullptr;
            delete (d_node);
            return;
        }
        else 
        q.push(temp->left);
    }
 }  
}

Node* deletion(Node* root, int key){
    if(root==nullptr){
        return nullptr; 
    }
    
    if(root->left==nullptr&&root->right==nullptr){
        if(root->data==key){
            return nullptr;
        }else{
            return root;
        }
    }

    queue<Node*>q;
    q.push(root);

    Node* temp;
    Node* key_node=nullptr;
    while (!q.empty()) {
        temp = q.front();
        q.pop();

        if (temp->data == key)
            key_node = temp;

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }

    if (key_node != NULL) {
        int x = temp->data;
          key_node->data = x;
        deletedeepest(root, temp);
    }
    return root;
}
int main()
{
    struct Node* root = newNode(10);
    root->left = newNode(11);
    root->left->left = newNode(7);
    root->left->right = newNode(12);
    root->right = newNode(9);
    root->right->left = newNode(15);
    root->right->right = newNode(8);

    cout << "Inorder traversal before deletion: ";
    inorder(root);

    int key = 11;
    root = deletion(root, key);

    cout << endl;
    cout << "Inorder traversal after deletion: ";
    inorder(root);

    return 0;
}