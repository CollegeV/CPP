#include<iostream>
using namespace std;

struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;

void insertNew(int data){
   struct node *newNode = (struct node*) malloc(sizeof(struct node));
   newNode->data = data, newNode->next = head;
   head = newNode;
}

int main(){
   insertNew(12);
   insertNew(22);
   insertNew(30);
   insertNew(44);
  
   cout << "Linked List: \n";
   while(head != NULL) {
     cout << head->data << "\t";
     head = head->next;
  }
}