 
#include <stdio.h>
int main()  
{  
    // P0, P1, P2, P3, P4 are the Process names here  
  
    int n, m, i, j, k;  
    n = 5;                         // Number of processes  
    m = 3;                         // Number of resources  
    int alloc[5][3] = {{0, 1, 0},  // P0 // Allocation Matrix  
                       {2, 0, 0},  // P1  
                       {3, 0, 2},  // P2  
                       {2, 1, 1},  // P3  
                       {0, 0, 2}}; // P4  
  
    int max[5][3] = {{7, 5, 3},  // P0 // MAX Matrix  
                     {3, 2, 2},  // P1  
                     {9, 0, 2},  // P2  
                     {2, 2, 2},  // P3  
                     {4, 3, 3}}; // P4  
  
    int avail[3] = {3, 3, 2}; // Available Resources  
  

    int f[n], ans[n], ind = 0;  
    for (k = 0; k &lt; n; k++)  
    {  
        f[k] = 0;  
    }  
    int need[n][m];  
    for (i = 0; i < n; i++)  
    {  
        for (j = 0; j < m; j++)  
            need[i][j] = max[i][j] - alloc[i][j];  
    }  
    int y = 0;  
    for (k = 0; k < 5; k++)  
    {  
        for (i = 0; i < n; i++)  
        {  
            if (f[i] == 0)  
            {  
                int flag = 0;  
                for (j = 0; j < m; j++)  
                {  
                    if (need[i][j] > avail[j])  
                    {  
                        flag = 1;  
                        break;  
                    }  
                }  
                if (flag == 0)  
                {  
                    ans[ind++] = i;  
                    for (y = 0; y < m; y++)  
                        avail[y] += alloc[i][y];  
                    f[i] = 1;  
                }  
            }  
        }  
    }  
    int flag = 1;  
    for (int i = 0; i < n; i++)  
    {  
        if (f[i] == 0)  
        {  
            flag = 0;  
            printf("The following system is not safe");  
            break;  
        }  
    }  
    if (flag == 1)  
    {  
        printf("Following is the SAFE Sequence\n");  
        for (i = 0; i &lt; n - 1; i++)  
            printf(" P %d ->", ans[i]);  

        printf(" P %d ", ans[n - 1]);  
    }  
    return (0);  
}





// Title: To Implement and analyze concepts of synchronization and deadlocks.
// Aim: Write a program to demonstrate the concept of deadlock avoidance through Banker’s
// Algorithm
// Theory:
// Bankers’ Algorithm is a resource allocation and deadlock avoidance algorithm which tests all
// the requests made by processes for resources, it checks for the safe state, and after granting a
// request system remains in the safe state it allows the request, and if there is no safe state it
// doesn’t allow the request made by the process. 
// Inputs to Banker’s Algorithm
//  Max needs of resources by each process. 
//  Currently, allocated resources by each process. 
//  Max free available resources in the system.
// The request will only be granted under the below condition
//  If the request made by the process is less than equal to the max needed for that process. 
//  If the request made by the process is less than equal to the freely available resource in the
// system.
// Program
