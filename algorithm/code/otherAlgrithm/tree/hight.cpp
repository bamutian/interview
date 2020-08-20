#include <iostream>
#include <vector>
#include <map>

using namespace std;
struct node
{
    int val;
    node *lchild;
    node *rchild;

    node(int val) : val(val)
    {
        lchild = NULL;
        rchild = NULL;
    }
};

void createTree(node *root, int father, int child)
{
    if (root == NULL)
        return;
    if (root->val == father)
    {
        if (root->lchild == NULL)
            root->lchild = new node(child);
        else if (root->rchild == NULL)
            root->rchild = new node(child);
        return;
    }
    createTree(root->lchild, father, child);
    createTree(root->rchild, father, child);
}

int getHeight(node *root)
{
    if (root == NULL)
        return 0;
    int l = getHeight(root->lchild);
    int r = getHeight(root->rchild);
    return l > r ? (l + 1) : (r + 1);
}

int main()
{

    int n;
    int father, child;
    while (cin >> n)
    {
        cin >> father >> child;
        node *root = new node(father);
        createTree(root, father, child);
        for (int i = 1; i < n - 1; i++)
        {
            cin >> father >> child;
            createTree(root, father, child);
        }

        cout << getHeight(root) << endl;
    }
    return 0;
}