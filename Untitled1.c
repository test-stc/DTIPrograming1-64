//Class 4/1 program ‘ InsertAtFirst ’
#include <stdlib.h>
#include <stdio.h>
struct Node {
int data;
struct Node* next;
};
struct Node* head;
void InsertAtFirst (int x)
{
struct Node* NEW
= (struct Node*)malloc(sizeof(struct Node));
NEW->data = x;
NEW->next = head;
head = NEW;
}
void PrintList ()
{
struct Node* temp = head;
printf ("\n List is : ");
while (temp != NULL)
{
printf ("\t %d", temp->data);
temp = temp->next;
}
printf ("\n");
}
int main ()
{
head = NULL;
int n, i, x;
printf
("\n Number of node to be created : " );
scanf ("%d", &n);
printf ("\n");
for (i=0; i<n; i++)
{
printf (" Enter data : ");
scanf ("%d", &x);
InsertAtFirst (x);
}
PrintList ();
}
Class 4/2 program ‘ InsertAtLast ’
#include <stdlib.h>
#include <stdio.h>
struct Node {
int data;
struct Node* next;
};
struct Node* head;
void InsertAtLast (int x)
{
struct Node* new = (struct Node*)malloc(sizeof(struct Node));
new->data = x;
new->next = NULL;
struct Node* temp = head;
if (temp==NULL)
{ head = new;
return;
}
while (temp->next != NULL)
{ temp = temp->next;
}
temp->next = new;
}
void PrintList ()
{
struct Node* temp = head;
printf ("\n List is : " );
while (temp != NULL)
{ printf ("\t %d", temp->data);
temp = temp->next;
}
printf ("\n");
}
int main ()
{
head = NULL;
int n, i, x;
printf ("\n Number of node to be created : ");
scanf ("%d", &n);
printf ("\n");
for (i=0; i<n; i++)
{ printf (" Enter data : ");
scanf ("%d", &x);
InsertAtLast (x);
}
PrintList ();
}
Class 4/3 program ‘ InsertInOrder ’
#include <stdlib.h>
#include <stdio.h>
struct Node {
int data;
struct Node* next;
};
struct Node* head;
void InsertAtFirst (int y)
{
struct Node* new = (struct Node*)malloc(sizeof(struct Node));
new->data = y;
new->next = head;
head = new;
}
void InsertInOrder (int x)
{
struct Node* new = (struct Node*)malloc(sizeof(struct Node));
new->data = x;
struct Node* temp = head;
struct Node* prev;
while (x >= temp->data)
{
if (temp->next == NULL)
{
temp->next = new;
new->next = NULL;
return;
}
prev = temp;
temp = temp->next;
}
if (temp == head)
{
new->next = temp;
head = new;
}
else
{
new->next = temp;
prev->next = new;
}
}
void PrintList ()
{
struct Node* temp = head;
printf ("\n List is : ");
while (temp != NULL)
{
printf ("\t %d", temp->data);
temp = temp->next;
}
printf ("\n");
}
int main ()
{
head = NULL;
InsertAtFirst (15);
InsertAtFirst (10);
InsertAtFirst (7);
InsertAtFirst (4);
InsertAtFirst (2);
PrintList ();
int x;
printf ("\n Enter data to be inserted : ");
scanf ("%d", &x);
InsertInOrder (x);
PrintList ();
getch();
}
Class 4/4 program ‘ DeleteNode ’
#include <stdlib.h>
#include <stdio.h>
struct Node {
int data;
struct Node* next;
};
struct Node* head;
void InsertAtFirst (int y)
{
struct Node* new = (struct Node*)malloc(sizeof(struct Node));
new->data = y;
new->next = head;
head = new;
}
void DeleteNode (int x)
{
struct Node* temp = head;
struct Node* prev;
while (temp->data != x)
{
if (temp->next == NULL)
{
printf ("\n !!!!! error !!!!!");
printf ("\n !!!!! cannot delete !!!!!");
printf ("\n !!!!! data not found !!!!!");
return;
}
prev = temp;
temp = temp->next;
}
if (temp == head)
{
head = temp->next;
}
else
{
prev->next = temp->next;
}
free (temp);
}
void PrintList ()
{
struct Node* temp = head;
printf ("\n List is :
");
while (temp != NULL)
{
printf ("\t%d", temp->data);
temp = temp->next;
}
printf ("\n");
}
int main ()
{
head = NULL;
InsertAtFirst (15);
InsertAtFirst (10);
InsertAtFirst (7);
InsertAtFirst (4);
InsertAtFirst (2);
PrintList ();
int x;
printf ("\n Enter data to be deleted : ");
scanf ("%d", &x);
DeleteNode (x);
printf ("\n");
PrintList ();
}
