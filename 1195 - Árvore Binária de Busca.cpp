#include <bits/stdc++.h>

using namespace std;

typedef struct bt{
    int info;
    struct bt *left;
    struct bt *right;
} binary_tree;

binary_tree* insert(binary_tree *root, long long int info){
    if (root == NULL){
        binary_tree *node = (binary_tree*) malloc(sizeof(binary_tree));
        node->info = info;
        node->left = NULL;
        node->right = NULL;
        return node;
    } else {
        if (info < root->info)
            root->left = insert(root->left, info);
        else
            root->right = insert(root->right, info);
    }
    return root;
}


void pre_ordem(binary_tree *root){
    if (root==NULL) return;
    cout << " " << root->info;
    pre_ordem(root->left);
    pre_ordem(root->right);
}

void in_ordem(binary_tree *root){
    if (root==NULL) return;
    in_ordem(root->left);
    cout << " " << root->info;
    in_ordem(root->right);
}

void pos_ordem(binary_tree *root){
    if (root==NULL) return;
    pos_ordem(root->left);
    pos_ordem(root->right);
    cout << " " << root->info;
    free(root);
}



int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    binary_tree *root=NULL;
    int C, N, X, caso;
    
    cin >> C;
    caso = 1;
    
    while (C--){
        root=NULL;
        cin >> N;
        for(int i=0; i<N; i++){
            cin >> X;
            root = insert(root, X);
        }
    
        cout << "Case " << caso++ << ":\n" ;
        cout << "Pre.:";
        pre_ordem(root);
        cout << "\n" ;
        cout << "In..:";
        in_ordem(root);
        cout << "\n" ;
        cout << "Post:";
        pos_ordem(root);//ja libera
        cout << "\n\n" ;
    
    }
    

    return 0;
}
