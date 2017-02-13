#include <stdio.h>
#include <stdlib.h>

struct node
{
  int key_value;
  struct node *left;
  struct node *right;
};

struct node* root = NULL;

void destroy_tree(struct node *leaf)
{
  if( leaf != NULL )
  {
      destroy_tree(leaf->left);
      destroy_tree(leaf->right);
      free( leaf );
  }
}

insert(int key, struct node **leaf)
{
    if( *leaf == NULL )
    {
        *leaf = (struct node*) malloc( sizeof( struct node ) );
        (*leaf)->key_value = key;
        /* initialize the children to null */
        (*leaf)->left = NULL;
        (*leaf)->right = NULL;
    }
    else if(key < (*leaf)->key_value)
    {
        insert( key, &(*leaf)->left );
    }
    else
    {
        insert( key, &(*leaf)->right );
    }
}

struct node *search(int key, struct node *leaf)
{
  if( leaf != NULL)
  {
      if(key==leaf->key_value)
      {
          return leaf;
      }
      else if(key<leaf->key_value)
      {
          return search(key, leaf->left);
      }
      else
      {
          return search(key, leaf->right);
      }
  }
  else return NULL;
}
int Enter(){
    int n = 0;
    printf("Enter key: ");
    scanf("%d",&n);
    return n;
}

void main(){
    struct node* x;
    int i;
    while(1){
        printf("\n=======\n1. Insert\n2. Search node\n3. Destroy\n4. Exit\nChoose: ");
        if(scanf("%d",&i)<=0){
            printf("Enter an interger");
            //exit(0);
            return;
        }else{
            switch(i){
            case 1:
                insert(Enter(),&root);
                break;
            case 2:
                x = search(Enter(),root);
                if(x!=NULL){
                    printf("%d found",x->key_value);
                }
                break;
            case 3:
                if(root!=NULL)
                {

                    printf("Successful");
                }
                break;
            case 4:
                return;
            default: printf("No option");
            }

        }
    }
}
