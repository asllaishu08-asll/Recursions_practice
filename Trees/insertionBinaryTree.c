#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct node* queue[100];
int front=0, rear=-1; 
// enqueue
void enqueue(struct node* temp){
queue[++rear]=temp;
}
// dequeue
struct node* dequeue(){
    return queue[front++];
}
struct node* insert(struct node* root, int data){
    struct node* newNode=createNode(data);
    if(root==NULL){
        return newNode;
    }
    front=0;
    rear=-1;
    enqueue(root);
    while(front<=rear){
        struct node*temp=dequeue();
        // check left
        if(temp->left==NULL){
            temp->left=newNode;
            return root;
        }
        else{
            enqueue(temp->left);
        }
        // check right
        if(temp->right==NULL){
            temp->right=newNode;
            return root;
        }
        else{
            enqueue(temp->right);
        }
    }
    return root;
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
int main(){
    struct node* root=NULL;
    root=insert(root,10);
    insert(root,20);
    insert(root,30);
    insert(root,40);
    insert(root,50);
    insert(root,60);
    insert(root,70);
    insert(root,80);
    insert(root,90);

    printf("\n Inorder: ");
    inorder(root);
    printf("\n Preorder: ");
    preorder(root);
    printf("\n Postorder: ");
    postorder(root);
    return 0;
}