#include <stdio.h> 
#include <stdlib.h> 
int mutex = 1; 
int full = 0; 
int empty = 10, x = 0; 

void producer() { 
--mutex;
++full; 
--empty; 
x++; 
printf("\nProducer produces item %d", x); 
++mutex;
}

void consumer() { 
--mutex; 
--full; 
++empty; 
printf("\nConsumer consumes item %d", x); 
x--; 
++mutex; 
} 
int main() { 
int n, i; 
printf("\n1. Press 1 for Producer\n2. Press 2 for Consumer\n3. Press 3 for Exit"); 
for (i = 1; i > 0; i++) { 
printf("\nEnter your choice: "); 
scanf("%d", &n);
switch (n) { 
case 1: 
if ((mutex == 1) && (empty != 0)) { producer(); 
} else { 
printf("Buffer is full!"); 
} 
break; 
case 2: 
if ((mutex == 1) && (full != 0)) { consumer(); 
} else { 
printf ("Buffer is empty!"); 
} 
break; 
case 3: 
exit(0);
break; 
default: 
printf ("Invalid choice!\n"); 
break; 
} 
} 
return 0; 
}























// Title: To Implement and analyze concepts of synchronization and deadlocks.
// Aim: Write a C program to implement solution of Producer consumer problem through
// Semaphore
// Theory:
// What is the Producer-Consumer Problem?
// The producer-consumer problem is an example of a multi-process synchronization problem. The
// problem describes two processes, the producer and the consumer that share a common fixed-size
// buffer and use it as a queue.
//  The producer’s job is to generate data, put it into the buffer, and start again.
//  At the same time, the consumer is consuming the data (i.e., removing it from the buffer),
// one piece at a time.
// What is the Actual Problem?
// Given the common fixed-size buffer, the task is to make sure that the producer can’t add data
// into the buffer when it is full and the consumer can’t remove data from an empty buffer.
// Accessing memory buffers should not be allowed to producers and consumers at the same time.
// Solution of Producer-Consumer Problem
// The producer is to either go to sleep or discard data if the buffer is full. The next time the
// consumer removes an item from the buffer, it notifies the producer, who starts to fill the buffer
// again. In the same manner, the consumer can go to sleep if it finds the buffer to be empty. The
// next time the producer transfer data into the buffer, it wakes up the sleeping consumer.
