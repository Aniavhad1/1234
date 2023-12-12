#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
int data;
struct node *left;
struct node *right;
};
node *insert(node *root, int val){
if (root == NULL){
node *temp; //new node temp
temp=new node;
temp->data=val;
temp->left=temp->right=NULL; //left and right is NULL bcz only one
node create;
return temp; // return single node
}
if (val < root->data){
root->left = insert(root->left, val);
}
else{
//val>root->data
root->right = insert(root->right, val);
}
return root;
}
void inorder(node *root)
{
if (root == NULL){
return;
}
inorder(root->left);
cout << root->data << " ";
inorder(root->right);
}
node* inorderSucc(node* root){
node* curr=root;
while(curr && curr->left!=NULL){
curr=curr->left;
}
return curr;
}
node *copy(node *root){
node *temp=NULL;
if(root!=NULL){
temp=new node();
temp->data=root->data;
temp->left=copy(root->left);
temp->right=copy(root->right);
}
return temp;
}
int main()
{
node *root=NULL, *temp; //initially tree is NULL
int ch;
while (1){
cout<<"\n\n\t1)Insert" << endl;
cout<<"\t2)Create the copy "<<endl;
cout<<"\t3)Exit"<<endl;
cout<<"\nEnter your choice: ";
cin>>ch;
switch (ch){
case 1:
cout << "Enter the element to be insert: ";
cin >> ch;
root= insert(root, ch);
cout << "*****Elements in BST are*****: ";
inorder(root);
break;
case 2:
cout<<"The copy of the tree is: ";
root=copy(root);
inorder(root);
break;
case 3:
return 0;
default:
cout<<"\nInvalid choice !! Please enter your choice again";
}
}
return 0;
}