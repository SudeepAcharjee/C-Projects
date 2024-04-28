//Creating a Liner data Structure i.e (Stacks) Using Array
//Writing the Header file
#include<stdio.h>
#define MAX 5


//Declaring the global variable (This variable can be used by all the sub functions)
int stack_arr[MAX];
int top = -1;
///////////////////////////////////////////////


//The codition for overflow function
int isFull()
{
    if (top == MAX-1)
        return 1;
    else
        return 0;
}
///////////////////////////////////////////////


//The condition for under-flow function
int isEmpty()
{ 
    if(top == -1)
        return 1;
     else 
        return 0; 
}
///////////////////////////////////////////////


//Write the push function to insert datas into array that is void function
void push(int data)
{
    if(isFull())
        {
            printf("Stack Overflow\n");
            return;
        }
    else
        {
            top = top + 1;
            stack_arr[top] = data;
        }
}
////////////////////////////////////////////////


//This pop fuction is used to delete the top element in th array
int pop()
{
    int popdata;
    if (isEmpty())
        {
            printf("Stack Underflow \n");
            return 0;
        }
    else
        {
            popdata = stack_arr[top];
            top = top -1;
            return popdata;
        }
}
//////////////////////////////////////////////////////


//This peek fuction is used to print the top element in th array
int peek()
{
    if(isEmpty())
        {
            printf("Stack Underflow \n");
            return 0;
        }
    else
        {
            printf("%d is the top value \n", &stack_arr[top]);
            return stack_arr[top];
        }
}
////////////////////////////////////////////////////////////////////


//This print fuction is used to print the all element in th array
void print()
{
    int i;
     if(isEmpty())
        {
            printf("Stack Underflow \n");
            return;
        }
        //This for loop will start from the top element and will be reduced using loop till it reaches underflow
        for(i=top; i>=0; i--)
        printf("%d ", stack_arr[i]);
        printf("\n The Memory address is: ");
        printf("%p \n", &stack_arr[i]);
        printf("\n");
}
//////////////////////////////////////////////////////////////////////////


//Writing the main function to execute the code
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
                    data=stack_arr[top];
                    printf("The top Element in the array stack is %d", data);
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