/*Given an array of unique elements, construct a Binary Search Tree and print the right-view of the tree. 
Right view of a Tree is the set of nodes visible when tree is viewed from right side.
Sample Input
3
5
1 2 3 4 5 
5
3 2 4 1 5 
7
4 5 15 0 1 7 17 

Sample Output
1 2 3 4 5 
3 4 5 
4 5 15 17 */

#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define readvector(a) for(int &i:a){cin>>i;}

long double pi = 3.14159265358979323;
const int mod = 1e9 + 7;

struct node{
    int data;
    node* left;
    node* right;
    node(int k){
        data=k;
        left=right=NULL;
    }
};

node* insert(node *root,int key){
    if(root==NULL){
        return new node(key);
    }
    if(root->data<key){
        root->right=insert(root->right,key);
    }
    else{
        root->left=insert(root->left,key);
    }
    return root;
}

void rightview(node *root){
    if(root==NULL){return;}
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            node *cur=q.front();
            q.pop();
            if(i==n-1){
                cout<<cur->data<<" ";
            }
            if(cur->left!=NULL){
                q.push(cur->left);
            }
            if(cur->right!=NULL){
                q.push(cur->right);
            }
        }
    }
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int x;
        node *root=NULL;
        for(int i=0;i<n;i++){
            cin>>x;
            root=insert(root,x);
        }
        rightview(root);
        cout<<endl;
    }
    return 0;
}