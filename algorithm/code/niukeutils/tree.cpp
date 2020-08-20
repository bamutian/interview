#include<bits/stdc++.h>
using namespace std;



struct Node
{
    int value;
    Node *left;
    Node *right;
};



int vec_left[100] = {0};
// 打印树
void Display(Node *root, int ident)
{
    if (ident > 0)
    {
        for (int i = 0; i < ident - 1; ++i)
        {
            printf(vec_left[i] ? "│   " : "    ");
        }
        printf(vec_left[ident - 1] ? "├── " : "└── ");
    }

    if (!root)
    {
        printf("(null)\n");
        return;
    }

    printf("%d\n", root->value);
    if (!root->left && !root->right)
    {
        return;
    }

    vec_left[ident] = 1;
    Display(root->right, ident + 1);
    vec_left[ident] = 0;
    Display(root->left, ident + 1);
}




int main()
{
    Node one;
    Node two;
    Node three;
    Node four;
    Node five;
    Node six;
    Node seven;
    one.value = 1;
    two.value = 2;
    three.value = 3;
    four.value = 4;
    five.value = 5;
    six.value = 6;
    seven.value = 7;

    one.left = &two;
    one.right = &three;
    two.left = &four;
    two.right = &five;
    three.left = NULL;
    three.right = &six;
    four.left = &seven;
    four.right = NULL;
    five.left = NULL;
    five.right = NULL;
    six.left = NULL;
    six.right = NULL;
    seven.left = NULL;
    seven.right = NULL;

    Display(&one,0);

    return 0;
}
