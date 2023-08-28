#include <stdio.h> 
int Ceil(int num[], int n, int x) 
{ 
    int low = 0, high = n - 1, mid; 
    int ceil = -1; 
    while (low <= high) 
    { 
        mid = (low + high) / 2; 
        if (num[mid] == x) { 
            return num[mid]; 
        } 
        else if (x < num[mid]) 
        { 
            ceil = num[mid]; 
            high = mid - 1; 
        } 
        else  
        { 
            low = mid + 1; 
        } 
    } 
    return ceil; 
} 
int Floor(int num[], int n, int x) 
{ 
    int low = 0, high = n - 1, mid; 
    int floor = -1; 
    while (low <= high) 
    { 
        mid = (low + high) / 2; 
        if (num[mid] == x) 
        { 
            return num[mid]; 
        } 
        else if (x < num[mid]) 
        { 
            high = mid - 1; 
        } 
        else 
        { 
            floor = num[mid]; 
            low = mid + 1; 
        } 
    } 
    return floor; 
} 
int main(void) 
{ 
    int num[] = {0,1,2,3,4,5,6,7,8,9}; 
    int n = sizeof(num) / sizeof(num[0]); 
    for (int i = 0; i < 10; i++) 
    { 
        printf("Number %d ", num[i]); 
        printf("ceil is %d, ", Ceil(num, n, i)); 
        printf("floor is %d\n", Floor(num, n, i)); 
    } 
    return 0; 
} 