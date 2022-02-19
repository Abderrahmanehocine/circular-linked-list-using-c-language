#include <stdio.h>
#include <stdlib.h>
#define sn struct node

/*declar a node of 2 part:
 - first part: contain data
 -second part: contain pointer to the next node*/
struct node{
  int a; 
  sn *next;
};

int main() {
  sn *head=(sn*)malloc(sizeof(sn)); // declare the first node 
  sn *temp=head; //declare temp to work with in the programme
  int num; // number of nodes
  printf("Enter a number: ");
  scanf("%d",&num);
  for(int i=0 ; i<num ; i++){
    printf("Enter data: ");
    scanf("%d",&temp->a); //take data from the user
    if(i != num-1){
      temp->next=(sn*)malloc(sizeof(sn)); //declare another node
      temp=temp->next; // temp take the adress of the next node
    }
    else if(i== num-1){
      temp->next=head; //the last next in the node take the adress of the first node
    }
  }
  temp=head; //temp take the adress of the first node
  // print the data in the linked list twice to confirm that it is a cirular linked list
  for(int i=0 ; i<num*2 ; i++){
    printf("%d\n",temp->a);
    temp=temp->next; // temp take the adress of the next node
  }
}
