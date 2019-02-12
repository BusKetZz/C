// ********** Tower of Hanoi **********

#include <stdio.h>

/* Implementation of "The Tower of Hanoi" game using recursive function */

void ToH(int disk, int source, int auxiliary, int destination)
{
    if(disk==1) // just pick and place the disk in the destination
    {
        printf("Move the disk from tower number: %d to tower number: %d\n", source, destination);
        return;
    }
    ToH(disk-1, source, destination, auxiliary); // move all disk-1 to auxiliary
    ToH(1, source, auxiliary, destination); // move the last disk to the destination
    ToH(disk-1, auxiliary, source, destination); // move all disk-1 from auxiliary to destination
}



int main()
{
    ToH(5, 1, 2, 3); // amount of disks; source tower; auxiliary tower; destination tower
    return 0;
}
