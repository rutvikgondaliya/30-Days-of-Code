#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;
Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
int gethight(Node* root){
    if (root==NULL) {
        return -1;
    }
    int left = 1 + gethight(root->left);
    int right = 1 + gethight(root->right);

    if (right>left) {
        return right;
    }
    else {
        return left;
    }
}

void printgivenlevel(Node* root,int level)
{
    if (root==NULL) {
        return;
    }
    if (level==1) {
        printf("%d ",root->data);

    }
    else if (level>1) {
        printgivenlevel(root->left, level-1);
        printgivenlevel(root->right, level-1);
    }
}
void levelOrder(Node* root){
  //Write your code here
  for (int t=1; t<=gethight(root)+1; t++) {
      printgivenlevel(root, t);
  }
}

Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}
int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}