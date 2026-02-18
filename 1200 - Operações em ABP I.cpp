#include <bits/stdc++.h>

using namespace std;

typedef struct bt {
	char info;
	struct bt *left;
	struct bt *right;
} binary_tree;

binary_tree* insert(binary_tree *root, char info) {
	if (root == NULL) {
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

binary_tree* search(binary_tree *root, char info) {
	if (root == NULL) return NULL;
	if (info == root->info) return root;
	if (info < root->info) return search(root->left, info);
	return search(root->right, info);
}


void pre_ordem(binary_tree *root, vector<char> &ans) {
	if (root==NULL) return;
	ans.push_back(root->info);
	pre_ordem(root->left, ans);
	pre_ordem(root->right, ans);
}

void in_ordem(binary_tree *root, vector<char> &ans) {
	if (root==NULL) return;
	in_ordem(root->left, ans);
	ans.push_back(root->info);
	in_ordem(root->right, ans);
}

void pos_ordem(binary_tree *root, vector<char> &ans) {
	if (root==NULL) return;
	pos_ordem(root->left, ans);
	pos_ordem(root->right, ans);
	ans.push_back(root->info);
}

void libera(binary_tree *root){
    if (root==NULL) return;
	libera(root->left);
	libera(root->right);
	free(root);
}



int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	binary_tree *root=NULL;

	string command;

	while (getline(cin, command)) {
	    vector<char> ans;
		if (command[1]==' ') {
			char info = command[2];
			if (command[0]=='I')
				root = insert(root, info);
			else {
				if (search(root, info))
					cout << info << " existe\n";
				else cout << info << " nao existe\n";
			}
			continue;
		} else if (command == "INFIXA") {
			in_ordem(root, ans);
		} else if (command == "PREFIXA") {
			pre_ordem(root, ans);
		} else {
			pos_ordem(root, ans);
		}
		
        cout << ans[0];
		for (int i=1; i<ans.size(); i++){
		    cout << ' ' << ans[i];
		    
		}
		cout << "\n";
	}
	
	libera(root);

	return 0;
}
