//////////////////////////////////
//  Singly Linear Linked List   //
//////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   DisplayNonFactors
//  Description :     Used to insert a node at the beginning of the list
//  Input :           Pointer, Integer
//  Output :          Void
//
///////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL) {
        printf("Memory allocation failed");
        return;
    }

    newn->data = No;
    newn->next = *First;
    *First = newn;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   InsertLast
//  Description :     Used to insert a node at the end of the list
//  Input :           Pointer, Integer
//  Output :          Void
//
///////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL) {
        printf("Memory allocation failed");
        return;
    }
    newn->data = No;
    newn->next = NULL;

    if (*First == NULL) {
        *First = newn;
    } else {
        PNODE temp = *First;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Display
//  Description :     Used to display all the elements of the list
//  Input :           Head pointer
//  Output :          Void
//
///////////////////////////////////////////////////////////////////////////////

void Display(PNODE First)
{
    while (First != NULL) {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL");
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Count
//  Description :     Used to count the number of nodes in the list
//  Input :           Head pointer
//  Output :          Integer
//
///////////////////////////////////////////////////////////////////////////////

int Count(PNODE First)
{
    int iCnt = 0;
    while (First != NULL) {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   DeleteFirst
//  Description :     Used to delete the first node of the list
//  Input :           Pointer to the head pointer
//  Output :          Void
//
///////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE First)
{
    if (*First == NULL) {
        printf("List is empty, cannot delete.");
        return;
    }
    PNODE temp = *First;
    *First = (*First)->next;
    free(temp);
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   DeleteLast
//  Description :     Used to delete the last node of the list
//  Input :           Pointer to the head pointer
//  Output :          Void
//
///////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE First)
{
    if (*First == NULL) {
        printf("List is empty, cannot delete.");
        return;
    }

    if ((*First)->next == NULL) {
        free(*First);
        *First = NULL;
        return;
    }

    PNODE temp = *First;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   InsertAtPos
//  Description :     Used to insert a node at a specific position in the list
//  Input :           Pointer to the head pointer, Integer, Integer
//  Output :          Void
//
///////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE First, int No, int iPos)
{
    int iLength = Count(*First);
    if (iPos < 1 || iPos > iLength + 1) {
        printf("Invalid position");
        return;
    }

    if (iPos == 1) {
        InsertFirst(First, No);
    } else if (iPos == iLength + 1) {
        InsertLast(First, No);
    } else {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        if (newn == NULL) {
            printf("Memory allocation failed");
            return;
        }
        newn->data = No;
        newn->next = NULL;

        PNODE temp = *First;
        for (int i = 1; i < iPos - 1; i++) {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   DeleteAtPos
//  Description :     Used to delete a node at a specific position in the list
//  Input :           Pointer to the head pointer, Integer
//  Output :          Void
//
///////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE First, int iPos)
{
    int iLength = Count(*First);
    if (iPos < 1 || iPos > iLength) {
        printf("Invalid position");
        return;
    }

    if (iPos == 1) {
        DeleteFirst(First);
    } else if (iPos == iLength) {
        DeleteLast(First);
    } else {
        PNODE temp1 = *First;
        for (int i = 1; i < iPos - 1; i++) {
            temp1 = temp1->next;
        }
        PNODE temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}


int main()
{
    PNODE Head = NULL;
    int iChoice = 0, iNo = 0, iPos = 0;

    printf("------------------------------------------\n");
    printf("-------- Singly Linear Linked List -------\n");
    printf("------------------------------------------\n");

    while (iChoice != 9) {
        printf("\nChoose an option:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from position\n");
        printf("7. Display elements \n");
        printf("8. Count elements\n");
        printf("9. Exit\n");

        printf("\n----------------------------\n");
        printf("Your option is : ");
        scanf("%d", &iChoice);

        switch (iChoice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &iNo);
                printf("----------------------------\n");
                InsertFirst(&Head, iNo);
                break;

            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &iNo);
                printf("----------------------------\n");
                InsertLast(&Head, iNo);
                break;

            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &iNo);
                printf("Enter position: ");
                scanf("%d", &iPos);
                printf("----------------------------\n");
                InsertAtPos(&Head, iNo, iPos);
                break;

            case 4:
                printf("----------------------------\n");
                DeleteFirst(&Head);
                break;

            case 5:
                printf("----------------------------\n");
                DeleteLast(&Head);
                break;

            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &iPos);
                printf("----------------------------\n");
                DeleteAtPos(&Head, iPos);
                break;

            case 7:
                printf("List elements: ");
                Display(Head);
                printf("\n----------------------------\n");
                break;

            case 8:
                printf("Total elements : %d\n", Count(Head));
                printf("----------------------------\n");
                break;

            case 9:
                printf("----------------------------------------------------\n");
                printf("Exiting program thank you for using the application.\n");
                printf("----------------------------------------------------\n");
                break;

            default:
                printf("Invalid option.\n");
                printf("----------------------------\n");
        }
    }

    return 0;
}