//Creating a stack using linked list
#include<stdio.h>
#include<stdlib.h>


//creating a structure
struct node
    {
        int data;
        struct node* link;
    }  *top = NULL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Creating is-empty fuction to check the underflow
int isEmpty()
    {
        if (top == NULL)
            return 1;
        else
            return 0;
    }                                
///////////////////////////////////////////////////////////////////////////////////////////////////////////


//Creating a push function that is used to push data in the array 
 int push(int data)
    {
        struct node* newNode;
        newNode = malloc(sizeof(newNode));

        if(newNode == NULL)
            {
                printf("Stack Overflow");
                return 0;
            } 
        newNode -> data = data;
        newNode -> link = NULL;

        newNode -> link = top;
        top = newNode;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////


//Creating a pop function that is used to pop out 
int pop()
    {
        struct node* temp;
        int val;
        
        if(isEmpty())
            {
                printf("Stack Underflow");
                return 0;
            }

        temp = top;
        val = temp -> data;
        top = top -> link;
        free(temp);
        temp = NULL;
        return val;
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Creating a peek function that is used to print the top element of the array
int peek()
{
    if (isEmpty())
        {
            printf("Satck Undeflow");
            return 0;
        }
    return top -> data;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


//Creating a void print function to print all the elements in the array
int print()
{
    struct node* temp;
    temp = top;
    if(isEmpty())
        {
            printf("Stack Underflow");
            return 0;
        }
    printf("The stack elements are: ");
    while (temp)
        {
            printf("%d ", temp -> data);
            temp = temp -> link;
        }
    printf("\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////



int main()
 {
    int choice, data;
    //We can use any looping element (while switch or for) i choosed while(1) this means this loop is never ending 
    while(1)
        { 
            //This is the Menu for user interface
            printf("\n\n########## MENU ########## \n");
            printf("\nStack Operations:\n");
            printf("1. Push\n");
            printf("2. Pop\n");
            printf("3. Peek top Element\n");
            printf("4. peek all element of the array\n");
            printf("5. Quit \n");
            printf("Enter your choice: ");
            scanf("%d", &choice);


            switch(choice)
            {
                //Case 1 is used to push the data element to the array
                case 1:
                    printf("Enter the Element you want to push: \n");
                    scanf("%d", &data);
                    push(data);
                    break;

                //case 2 is used to delete a top item from the array    
                case 2:
                    data=pop();    
                    printf("Deleted element is %d \n", data);
                    break;
                
                //Case 3 is used to delete the top item
                case 3:
                   
                    printf("The top Element in the array stack is %d \n", peek());
                    break;

                //case 4 is used to print the all element of the array
                case 4:
                    print();
                    break;

                //case 5 is used to exit the operation
                case 5:
                    return 0;
                
                //This will display a message if user wrong type their choices
                default:
                    printf("Wrong choice \n");
            }
        }
    return 0;
 } 