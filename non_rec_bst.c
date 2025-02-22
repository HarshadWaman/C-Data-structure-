// Binary search tree traversal
#include <stdio.h>
#include <malloc.h>
#define MAX 100
typedef struct node
{
    int info;
    struct node *left, *right;
} NODE;

typedef struct stack
{
    NODE *data[MAX];
    int top;
} STACK;

void init(STACK *s)
{
    s->top = -1;
}

int IsFull(STACK *s)
{
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}
int IsEmpty(STACK *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}
void push(STACK *s, NODE *temp)
{
    s->top++;
    s->data[s->top] = temp;
    s->data[s->top] = temp;
}
NODE *pop(STACK *s)
{
    return (s->data[s->top--]);
}

NODE *createBST(NODE *root)
{
    NODE *newnode, *temp;
    int n, i;
    printf("Enter no of nodes");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        printf("Enter data");
        scanf("%d", &newnode->info);
        newnode->left = newnode->right = NULL;
        if (root == NULL)
            root = newnode;
        else
        {
            temp = root;
            while (1)
            {
                if (newnode->info < temp->info)
                {
                    if (temp->left == NULL)
                    {

                        temp->left = newnode;
                        break;
                    }
                    else
                        temp = temp->left;
                } // if
                else
                {
                    if (temp->right == NULL)
                    {
                        temp->right = newnode;
                        break;
                    }
                    else
                        temp = temp->right;
                } // else
            } // while
        } // else
    } // for
    return root;
}

void nonrecinorder(NODE *root)
{
    NODE *temp = root;
    STACK s;
    init(&s);
    while (1)
    {
        while (temp != NULL)
        {
            push(&s, temp);
            temp = temp->left;
        }
        if (IsEmpty(&s))
            return;
        temp = pop(&s);
        printf("%d ", temp->info);
        temp = temp->right;
    }
}

void inorder(NODE *root)
{
    NODE *temp;
    temp = root;
    if (temp != NULL)
    {
        inorder(temp->left);
        printf("%d\t", temp->info);
        inorder(temp->right);
    }
}
void preorder(NODE *root)
{
    NODE *temp;
    temp = root;
    if (temp != NULL)
    {
        printf("%d\t", temp->info);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void postorder(NODE *root)
{
    NODE *temp;
    temp = root;
    if (temp != NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t", temp->info);
    }
}

int main()
{
    NODE *root = NULL;
    int ch;
    do
    {
        printf("\n1:craete BST");
        printf("\n2:NON recursive Inorder");
        printf("\n3:preorder");
        printf("\n4:postorder");
        printf("\nEnter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            root = createBST(root);
            break;
        case 2:
            printf("Inorder traversal\n");
            nonrecinorder(root);
            break;
        case 3:
            printf("\nPostorder Traversal\n");
            preorder(root);
            break;
        case 4:
            printf("\nPostorder traversal\n");
            postorder(root);
            break;
        }

    } while (ch != 0);
    return 0;
}
