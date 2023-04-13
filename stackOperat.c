#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int top = -1;
int stack[MAX];

void push(int data) {
   if(top == MAX-1) {
      printf("Stack is full.\n");
   } else {
      top++;
      stack[top] = data;
   }
}

void pop() {
   if(top == -1) {
      printf("Stack is empty.\n");
   } else {
      printf("Popped element: %d\n", stack[top]);
      top--;
   }
}

void display() {
   if(top == -1) {
      printf("Stack is empty.\n");
   } else {
      printf("Stack elements are:\n");
      for(int i=top; i>=0; i--)
         printf("%d\n",stack[i]);
   }
}

int main() {
   int choice, data;

   while(1) {
      printf("\t1.Push\n");
      printf("\t2.Pop\n");
      printf("\t3.Display the top element\n");
      printf("\t4.Display all stack elements\n");
      printf("\t5.Quit\n");

      printf("\nEnter your choice : ");
      scanf("%d", &choice);

      switch(choice) {
         case 1:
            printf("Enter the item to be pushed : ");
            scanf("%d", &data);
            push(data);
            break;
         case 2:
            pop();
            break;
         case 3:
            if(top == -1)
               printf("Stack is empty.\n");
            else
               printf("Top element is %d.\n", stack[top]);
            break;
         case 4:
            display();
            break;
         case 5:
            exit(0);
         default:
            printf("Invalid choice.\n");
      }
   }

   return 0;
}
