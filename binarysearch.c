//Binary search tree
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

//structure 
struct bnode {
	struct bnode *left;
	int info;
	struct bnode *right;
};



// User defined function 
void tranverse_pre(struct bnode *rp){
	if (rp == NULL)
		return;
	printf("\t%d", rp->info);
	tranverse_pre(rp->left);
	tranverse_pre(rp->right);
}

void tranverse_post(struct bnode *rp){
	if(rp == NULL)
		return;
	tranverse_post(rp->left);
	printf("\t%d", rp->info);
	tranverse_post(rp->right);
}

void tranverse_infix(struct bnode *rp){
	if(rp == NULL)
		return;
	tranvers_infix(rp->left);
	tranvers_infix(rp->right);
	printf("\t%d", rp->info);
}

void insert(struct bnode *rp){
	struct bnode *temp, *nnode;
	int userInput;
	nnode = (struct bnode *)malloc(sizeof(struct bnode));
	printf("\nEnter the value to insert:\n");
	scanf("%d", &userInput);
	nnode->info = userInput;
	nnode->left = nnode->right = NULL;
	if(rp == NULL){
		rp = nnode;
		return;
	}
	temp = rp;
    Lab: if(temp->info > rp->info)
    {
        if(temp->left==NULL){
            temp->left=rp;
        }else{
            temp=temp->left;
            goto Lab;
        }
    }else
        {
            if(temp->right==NULL){
                temp->right= rp;
            }else {
                temp=temp->right;
                goto Lab;
            }
        }
}

int main(){
	int choice;
	struct bnode *root = NULL;
	printf("\n1.Insert \n2.Transvers Pre \n3.Tranverse Infix \n4.Tranverse Post\n");
	printf("Enter your choice:");
	scanf("%d", &choice);
	switch(choice){
		case 1: insert(root); break;
		case 2: tranverse_pre(root); break;
		case 3: tranverse_infix(root); break;
		case 4: tranverse_post(root); break;
		case 5: exit(0);
		default: printf("\nInvalid Choice\n");
	}
	return 0;
}
