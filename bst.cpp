// BST implementation using pointers
// Supports insertion, search, traversal, and basic operations
// Implemented during university data structures exercises

#include <iostream>
using namespace std;

// Sample data type
struct Tdato {
    int val;
    Tdato(int v) : val(v) {}
};

// Binary Search Tree node
struct Tnodo {
    Tdato dato;
    Tnodo* parent; // optional, can simplify some algorithms
    Tnodo* left;
    Tnodo* right;

    // Constructor
    Tnodo(Tdato d) : dato(d), parent(nullptr), left(nullptr), right(nullptr) {}
};

// ---------------- Traversal functions ----------------

// Preorder traversal (visit node before children)
void preorder(Tnodo* node, void (*visit)(Tnodo*)) {
    if (!node) return;
    visit(node);
    preorder(node->left, visit);
    preorder(node->right, visit);
}

// Inorder traversal (visit left, node, right)
void inorder(Tnodo* node, void (*visit)(Tnodo*)) {
    if (!node) return;
    inorder(node->left, visit);
    visit(node);
    inorder(node->right, visit);
}

// Postorder traversal (visit children before node)
void postorder(Tnodo* node, void (*visit)(Tnodo*)) {
    if (!node) return;
    postorder(node->left, visit);
    postorder(node->right, visit);
    visit(node);
}

// ---------------- BST operations ----------------

// Insert a value in BST (maintains ordering)
Tnodo* ins_ord(Tnodo* root, Tdato x) {
    if (!root) return new Tnodo(x);
    if (x.val < root->dato.val)
        root->left = ins_ord(root->left, x);
    else
        root->right = ins_ord(root->right, x);
    return root;
}

// Search for a value in BST
Tnodo* tree_search(Tnodo* root, int k) {
    if (!root || root->dato.val == k) return root;
    if (k < root->dato.val) return tree_search(root->left, k);
    return tree_search(root->right, k);
}

// Find the minimum node in BST
Tnodo* tree_min(Tnodo* root) {
    if (!root) return nullptr;
    while (root->left) root = root->left;
    return root;
}

// Find the maximum node in BST
Tnodo* tree_max(Tnodo* root) {
    if (!root) return nullptr;
    while (root->right) root = root->right;
    return root;
}

// Count total nodes in BST
int count_nodes(Tnodo* root) {
    if (!root) return 0;
    return 1 + count_nodes(root->left) + count_nodes(root->right);
}

// Compute height of BST (-1 if empty)
int height(Tnodo* root) {
    if (!root) return -1;
    int hl = height(root->left);
    int hr = height(root->right);
    return 1 + max(hl, hr);
}

// ---------------- Example visit function ----------------
void print_node(Tnodo* node) {
    cout << node->dato.val << " ";
}

// ---------------- Example usage ----------------
int main() {
    Tnodo* root = nullptr;
    root = ins_ord(root, Tdato(5));
    root = ins_ord(root, Tdato(3));
    root = ins_ord(root, Tdato(7));
    root = ins_ord(root, Tdato(2));
    root = ins_ord(root, Tdato(4));

    cout << "Inorder traversal: ";
    inorder(root, print_node);
    cout << endl;

    cout << "BST height: " << height(root) << endl;
    cout << "Total nodes: " << count_nodes(root) << endl;

    return 0;
}
