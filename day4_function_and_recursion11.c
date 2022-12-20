// Program to find number of BSTs with given nodes
#include <stdio.h>
#include <stdlib.h>
// number of possible binary tree are 2nCn/n+1
/*
void large_r(int a[], int b[], int b_location, int j, int size);
void small_r(int a[], int b[], int b_location, int j, int size);
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int BST(int a[], int size, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && a[left] < a[i])
    {
        swap(&a[left], &a[i]);
        BST(a, size, left);
    }
    else if (right < size && a[right] > a[i])
    {
        swap(&a[right], &a[i]);
        BST(a, size, right);
    }
    return 0;
} // 10 5 40 1 7 50
void large_r(int a[], int b[], int b_location, int j, int size)
{
    // small_r(a,b,b_location,j,size);
    int left = 2 * b_location + 1;
    int right = 2 * b_location + 2;
    for (int k = 0; k < size; k++)
    {
        if (right < size && a[k] > a[j])
        {
            b[right] = a[k];
            large_r(a, b, right, k, size);
        }
    }
    // small_r(a,b,b_location,j,size);
}
void small_r(int a[], int b[], int b_location, int j, int size)
{
    int left = 2 * b_location + 1;
    int right = 2 * b_location + 2;
    for (int k = 0; k < size; k++)
    {
        if (left < size && a[k] < a[j])
        {
            b[left] = a[k];
            small_r(a, b, left, k, size);
        }
    }
    // large_r(a,b,b_location,j,size);
}
int start(int a[], int size, int b[])
{
    int i = 1;
    b[0] = a[0];
    for (int j = 1; j < size; j++)
    {
        if (a[j] < a[0])
        {
            b[1] = a[j];
            small_r(a, b, 1, j, size);
            break;
        }
    }
    for (int j = 1; j < size; j++)
    {
        if (a[j] > a[0])
        {
            b[2] = a[j];
            large_r(a, b, 2, j, size);
            break;
        }
    }
}
*/
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *add_node(int a)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = a;
    p->left = NULL;
    p->right = NULL;

    return p;
}
/*
struct node* create_tree(struct node **tree,int size)
{
    int x;
    if (size==0)
    {
        return NULL;
    }
    struct node *p=NULL;
    scanf("%d",&x);
    p=add_node(x);
    (*tree)->right=p;
    create_tree(&p,size--);
    /*
    if (  x > (*tree)->left->data  && x < (*tree)->right->data )
    {
        p=add_node(x);
        //(*tree)->right=p;
        //create_tree(&p,size--);
        size--;
        if (size!=0)
        {
            (*tree)->left = create_tree(&p,size);
        }
        if(size!=0)
        {
            (*tree)->right = create_tree(&p,size);
        }
    }
    return p;
}*/
struct node *createNode(struct node *tree,int data, int min, int max, int iterate, int size)
{
    if (iterate >= size  || tree==NULL)
    {
        return NULL;
    }
    struct node *p=NULL;

    if (data > min && data < max)
    {
        p = add_node(data);
        iterate++;

        if (iterate < size)
        {
            scanf("%d", &data);
            (tree)->left = createNode(p,data, min, data, iterate, size);
        }
        if (iterate < size)
        {
            scanf("%d", &data);
            (tree)->right = createNode(p,data, data, max, iterate, size);
        }
    }

    return tree;
}
void inordertraversal(struct node *tree)
{
    if (tree != NULL)
    {
        inordertraversal(tree->left);
        printf("%d ", tree->data);
        inordertraversal(tree->right);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    struct node *root;
    int x, size;
    root = NULL;
    scanf("%d", &size);
    scanf("%d", &x);
    root = add_node(x);
    // createNode(root, x);
    createNode(root,x, INT_MIN, INT_MAX, 0, size--);
    inordertraversal(root);
    return 0;
}