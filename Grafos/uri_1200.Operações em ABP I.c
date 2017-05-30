#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

typedef struct regNo{   
   struct regNo *left;
   char value;
   struct regNo *right;
}Node;

typedef struct{
   Node *root;
   int nNodes; 
}Tree;

void initTree(Tree *);
bool createNode(Node **, char);
void insertInTree(Tree *, char);
Node **findDad(Node *, int);
bool searchInTree(Node *, char);
Node *max(Node *);
void sprintPreOrder(Node *, char *out);
void sprintInOrder(Node *, char *out);
void sprintPosOrder(Node *, char *out);

int main(){
   Tree tree;
   Node node;
   char in[9], out[999999];

   initTree(&tree);

   while(fgets(in, 8, stdin) != NULL){
      switch(*(in+1)){
         case ' ':
            if(*in == 'I')
               insertInTree(&tree, *(in+2));
            else{
               if(searchInTree(tree.root, *(in+2)))
                  printf("%c existe\n", *(in+2));
               else 
                  printf("%c nao existe\n", *(in+2));
            }
            break;
         case 'N':
            *out = '\0';
            sprintInOrder(tree.root, out);
            printf("%s\b\n", out);
            break;
         case 'R':
            *out = '\0';
            sprintPreOrder(tree.root, out);
            printf("%s\b\n", out);
            break;
         case 'O':
            *out = '\0';
            sprintPosOrder(tree.root, out);
            printf("%s\b\n", out);
            break;
      }
   }

   return 0;
}

void initTree(Tree *p_tree){
   p_tree->root = NULL;
   p_tree->nNodes = 0;
}

bool createNode(Node **node, char value){

   *node = (Node *)malloc(sizeof(Node));

   if(*node == NULL)
      return false;

   (*node)->value = value;
   (*node)->left = NULL;
   (*node)->right = NULL;

   return true;
}

void insertInTree(Tree *p_tree, char value){
   Node **dad, *node;
   
   createNode(&node, value);

   dad = findDad(p_tree->root, value);
   if(dad == NULL)
      p_tree->root = node;
   else
      *dad = node;

   p_tree->nNodes++;
}

Node **findDad(Node *root, int value){
   if(root == NULL)
   /* Tree empty */
      return NULL;
   else
      if(value <= root->value)
      /* New node must go to the root left*/
         if(root->left == NULL)
            return &root->left;
         else
            return findDad(root->left, value);
      else
      /* New node must go to the root right*/
         if(root->right == NULL)
            return &root->right;
         else
            return findDad(root->right, value);
}

bool searchInTree(Node *root, char value){
   if(root == NULL)
      return false;
   else{
      if(root->value == value)
         return true;
      else if(root->value < value)
         return searchInTree(root->right, value);
      else
         return searchInTree(root->left, value);
   }
}

void sprintPreOrder(Node *root, char *out){
   char carac[3];  
   if(root != NULL){
      sprintf(carac, "%c ", root->value);
      strcat(out, carac);
      sprintPreOrder(root->left, out);
      sprintPreOrder(root->right, out);
   }
}

void sprintInOrder(Node *root, char *out){  
   char carac[3];  
   if(root != NULL){
      sprintInOrder(root->left, out);
      sprintf(carac, "%c ", root->value);
      strcat(out, carac);
      sprintInOrder(root->right, out);
   }
}

void sprintPosOrder(Node *root, char *out){
      char carac[3]; 
      if(root != NULL){
      sprintPosOrder(root->left, out);
      sprintPosOrder(root->right, out);
      sprintf(carac, "%c ", root->value);
      strcat(out, carac);
   }
}