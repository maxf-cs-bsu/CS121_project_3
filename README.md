# Bubbles and Pointers

### Algorithm/Pseudocode
```
constant MAX is max length of array

function printValues (array);
    print("[ ") // formating
    for i from zero to MAX
        printf array
    printf(" ]  \n')

    
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)

function swap (*a, *b);
    int t // temp value to move stuff around
    *a = t
    *a = *b
    *b = t


int main(){
    int values[] = //some string of numbers to sort
    printf("Before: \n");
    printValues(values);
    Test the swap of x and y
    int x = 3
    int y = 5
    printf("x is: %d y is: %d \n", x, y);
    swap(&x, &y);
    printf("x NOW is: %d y NOW is: %d \n", x, y);

    sort(values);
    printf("After: \n");
    printValues(values);

    
```
