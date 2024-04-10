#include <stdio.h>
  
int add(int x, int y)
{
    return printf("%*c%*c", x, ' ', y, ' ');
}
 
// Driver code
int main()
{
    printf("Sum = %d", add(6, 4));
    return 0;
}
 
// This code is contributed by shubhamsingh10
