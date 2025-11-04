#include<stdio.h>
int main()
{
    int arr[100], n, i, key, found = 0, seq_count = 0, index;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    printf("Enter elements of sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    int index_size = 10; 
    int num_indices = (n + index_size - 1) / index_size;
    int indices[num_indices];
    for(i = 0; i < num_indices; i++) {
        indices[i] = arr[i * index_size];
    }

    for(i = 0; i < num_indices; i++) {
        seq_count++;
        if(key <= indices[i]) {
            break;
        }
    }
    int start = (i - 1) * index_size;
    int end = (i < num_indices) ? (i * index_size) : n;
  
    for(i = start; i < end; i++) {
        seq_count++;
        if(arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }
    if(found)
        printf("Element %d found at position %d\n", key, index + 1);
    else
        printf("Element %d not found in the array\n", key);
    printf("Number of comparisons made: %d\n", seq_count);
    return 0;
}