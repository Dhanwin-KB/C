#include<stdio.h> 
#include<stdlib.h> 
struct sparsematrix 
{ 
    int m; 
    int n; 
    int data; 
    struct sparsematrix* next; 
}; 
struct sparsematrix* build(int row, int col, int value)  
{ 
    struct sparsematrix* element = (struct sparsematrix*)malloc(sizeof(struct sparsematrix)); 
    if (element == NULL)  
    { 
        printf("Memory allocation failed.\n"); 
        exit(1); 
    } 
    element->m = row; 
    element->n = col; 
    element->data = value; 
    element->next = NULL; 
    return element; 
} 
void show(struct sparsematrix* matrix)  
{ 
    struct sparsematrix* temp = matrix; 
    printf("\nSparse Matrix:\n"); 
    while (temp != NULL)  
    { 
        printf("(%d, %d) = %d\n", temp->m, temp->n, temp->data); 
        temp = temp->next; 
    } 
} 
void add(struct sparsematrix** matrix, int row, int col, int value)  
{ 
    struct sparsematrix* newNode = build(row, col, value); 
    if (*matrix == NULL)  
    { 
        *matrix = newNode; 
    }  
    else  
    { 
        struct sparsematrix* temp = *matrix; 
        while (temp->next != NULL)  
        { 
            temp = temp->next; 
        } 
        temp->next = newNode; 
    } 
} 
int main() 
{ 
    int nrows, ncols, data; 
    struct sparsematrix* sparseMatrix = NULL; 
    printf("Enter the number of rows in the matrix: "); 
    scanf("%d", &nrows); 
    printf("Enter the number of columns in the matrix: "); 
    scanf("%d", &ncols); 
    printf("Enter the elements of the %d X %d matrix:\n",nrows,ncols); 
    for (int i = 0; i < nrows; i++) { 
        for (int j = 0; j < ncols; j++) { 
            scanf("%d", &data); 
            if (data != 0)  
            { 
                add(&sparseMatrix, i, j, data); 
            } 
        } 
    } 
    show(sparseMatrix); 
    return 0; 
} 