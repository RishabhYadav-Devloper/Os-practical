// C implementation of First - Fit algorithm
#include<stdio.h>
// Function to allocate memory to
// blocks as per First fit algorithm
void firstFit(int blockSize[], int m, int processSize[], int n)
{
int i, j;
// Stores block id of the
// block allocated to a process
int allocation[n];
// Initially no block is assigned to any process
for(i = 0; i < n; i++)
{
allocation[i] = -1;
}
// pick each process and find suitable blocks
// according to its size ad assign to it
for (i = 0; i < n; i++) //here, n -&gt; number of processes
{
for (j = 0; j < m; j++) //here, m -&gt; number of blocks
{
if (blockSize[j] >= processSize[i])
{

// allocating block j to the ith process
allocation[i] = j;
// Reduce available memory in this block.
blockSize[j] -= processSize[i];
break; //go to the next process in the queue
}
}
}
printf("\nProcess No.\tProcess Size\tBlock no.\n");
for (int i = 0; i < n; i++)
{
printf(" %i\t\t\t", i+1);
printf("%i\t\t\t\t", processSize[i]);
if (allocation[i] != -1)
printf("%i", allocation[i] + 1);
else
printf("Not Allocated");
printf("\n");
}
}
int main()
{
int m; //number of blocks in the memory
int n; //number of processes in the input queue
int blockSize[] = {100, 500, 200, 300, 600};
int processSize[] = {212, 417, 112, 426};
m = sizeof(blockSize) / sizeof(blockSize[0]);
n = sizeof(processSize) / sizeof(processSize[0]);
firstFit(blockSize, m, processSize, n);
return 0 ;
}






// Title: To Implement Various Memory Management techniques and evaluate their performance.
// Aim: Write a program to demonstrate the concept of dynamic partitioning placement algorithm
// First Fit.
// Theory:
// Dynamic partitioning tries to overcome the problems caused by fixed partitioning. In this technique,
// the partition size is not declared initially. It is declared at the time of process loading. The first
// partition is reserved for the operating system. The remaining space is divided into parts. The size of
// each partition will be equal to the size of the process. The partition size varies according to the need
// of the process so that the internal fragmentation can be avoided.
// First Fit Algorithm:
// The first-fit algorithm searches for the first free partition that is large enough to accommodate the
// process. The operating system starts searching from the beginning of the memory and allocates the
// first free partition that is large enough to fit the process.
// For example, suppose we have the following memory partitions:
// | 10 KB | 20 KB | 15 KB | 25 KB | 30 KB |
// Now, a process requests 18 KB of memory. The operating system starts searching from the
// beginning and finds the first free partition of 20 KB. It allocates the process to that partition and
// keeps the remaining 2 KB as free memory.
// Program
