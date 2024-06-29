#include<iostream>
#include<queue>
using namespace std;
 
/* A binary tree node has data, pointer to left child
and a pointer to right child */
 
struct Node {
    int data;
    Node* left;
    Node* right;
};
 
// Function to create a new node
Node* CreateNode(int data)
{
    Node* newNode = new Node();
    
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insertnode(Node* root,int data){
    if(root==nullptr){
        root = CreateNode(data);
        return root;
    }
    //stack node root or leaf in other hand into FIFO type
    queue<Node* >q;
    q.push(root);
    // push root int to queue 


    // show out entire queue 
    // check null of root or leaf if pointer next is none push new node in 
    while (!q.empty())
    {   
        // add root that i just push to temp and pop it 
        Node* temp = q.front();
        q.pop();

        // if temps left is null then push it on else create new node and return 
        if(temp->left!=nullptr){
            q.push(temp->left);
        }else{
            temp->left=CreateNode(data);
            return root;
        }
        if (temp->right != nullptr)
            q.push(temp->right);
        else {
            temp->right = CreateNode(data);
            return root;
        }
    }
    
}   
void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}

int main()
{
    Node* root = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);
 
    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;
 
    int key = 12;
    root = insertnode(root, key);
 
    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
 
    return 0;
}