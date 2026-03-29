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
int heightl=0,heightr=0;
int height(struct node* root){
    struct node* temp=root;
    struct node*temp2=root;
if(root==NULL)
return -1;
while(temp->left!=NULL){
    heightl+=1;
    temp=temp->left;
}
while(temp2->right!=NULL){
    heightr+=1;
    temp2=temp2->right;
}
if(heightl>=heightr)
return heightl;
else
return heightr;
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
    // insert(root,80);
    // insert(root,90);

    int a=height(root);
    printf("%d ",a );
 return 0;
}