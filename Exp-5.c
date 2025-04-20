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
