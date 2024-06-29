#include<iostream>
using namespace std; 

struct tree
{
    int data; 
    tree* left;
    tree* right;
};

tree* newnode(int data){
    tree* newnode=new tree;
    newnode->data=data;
    newnode->left=nullptr;
    newnode->right=nullptr;
    return newnode;
}

//recursive find deepmax 
int maxdeep(tree* node){
    // start from leaf node to root 
    if(node==nullptr){
        return 0;
    }
    else{
        int ldepth=maxdeep(node->left);
        int rdepth=maxdeep(node->right);
        if(ldepth>rdepth){
            return (ldepth+1);
        }else{
            return (rdepth+1);
        }
    }

}

int main(){

    node* root = newNode(1);
 
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Height of tree is " << maxDepth(root);
    return 0;
}