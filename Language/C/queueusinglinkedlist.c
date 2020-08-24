#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
struct node*front=0;
struct node*rear=0;

void enqueue()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert :");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(front==0 && rear==0)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void display()
{
	struct node*temp;
	if(front==0 && rear==0)
	{
		printf("Queue is empty \n");
	}
	else
	{
		temp=front;
		while(temp!=0)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
	}
	void dequeue()
	{
		struct node *temp;
		temp=front;
		if(front==0 && rear==0)
		{
			printf("Queue is empty\n");
		}
		else
		{
			printf("Deleted element is : %d\n",front->data);
			{
				front=front->next;
				free(temp);
			}
		}
	}
	int main()
	{
		int n,choice;
		printf("---------------QUEUE MENU------------");
        printf("\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("------------------------------------- \n");
        while(1){
		
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            	printf("Program successfully exited");
            return 0;
            default:
            printf("Wrong choice \n");
        } 
    } 
		
	}
