// Online C compiler to run C program online

#include <stdio.h>
int main() {
    int n,i,j,bt[20],wt[20],tat[20];
    float avwt=0,avtat=0;
    printf("Enter the total number of processer(Maximum 20):-");
    scanf("%d",&n);
    if(n<=0 || n>20){
        printf("Invalid number of process!\n");
        return 1;
    }
    
    printf("\nEnter the Process Bust Time\n");
    for(i=0;i<n;i++){
        printf("procedure [%d]:-",i+1);
        scanf("%d",&bt[i]);
        
        if(bt[i]<=0){
               printf("Procces must be in Positive integer\n");
        return 1;
        }
    }
    wt[0]=0;
    for(i=1;i<n;i++){
          wt[i]=0;
           for(j=0;j<i;j++){
               wt[i]+=bt[j];
           }
    }
     printf("\nprocess\t\tBust time \t\tWaiting Time \t\tTurn Around Time\n");
    for(i=0;i<n;i++){
          tat[i]=bt[i]+wt[i];
          avwt+=wt[i];
          avtat+=tat[i];
        
        printf("p[%d]\t\t%d\t\t\t\t%d\t\t\t\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    printf("\nAverage Wating time = %d\n",avwt/n);
    printf("\nAverage Turn Around time = %d\n",avtat/n);
    return 0;
}







// Title: Write a program to demonstrate the concept of non-preemptive scheduling algorithms.
// Aim: To implement non preemptive scheduling algorithm in C (FCFS)
// Theory:
// The CPU Scheduling is the process by which a process is executed by the using the resources of
// the CPU. The process also can wait due to the absence or unavailability of the resources.
// First Come First Serve Scheduling Algorithm
// This is the first type of CPU Scheduling Algorithms. Here, in this CPU Scheduling Algorithm
// we are going to learn how CPU is going to allot resources to the certain process.
// Here, in the First Come First Serve CPU Scheduling Algorithm, the CPU allots the resources to
// the process in a certain order. The order is serial way. The CPU is allotted to the process in
// which it has occurred.
