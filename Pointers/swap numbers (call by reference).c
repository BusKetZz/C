// **** Program to swap elements (call by reference) ****

void swapNumbers(int *x, int *y, int *z)
{
    int tmp;
    tmp = *y;
    *y = *x;
    *x = *z;
    *z = tmp;
}


int main()
{
    printf("\n Pointer : Program to swap the numbers using pointers and call by referenec :\n");
    printf("-------------------------------------------------------------------------------\n");
    int n1, n2, n3;
    printf(" Input the value of the 1st element: ");
    scanf("%d", &n1);
    printf(" Input the value of the 2nd element: ");
    scanf("%d", &n2);
    printf(" Input the value of the 3rd element: ");
    scanf("%d", &n3);
    printf("\n The value before swapping : \n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n", n1, n2, n3);
    swapNumbers(&n1, &n2, &n3);
    printf("\n The value after swapping : \n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n", n1, n2, n3);
    
    return 0;
}
