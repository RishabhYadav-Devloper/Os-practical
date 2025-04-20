# Os-practical
Q1. What is an Operating System?
An Operating System is system software that manages hardware and software resources and provides services for computer programs.

Q2. What are the main functions of an Operating System?
• Process Management• Memory Management• File Management• I/O Device Management• Security• User Interface

Q3. What is the difference between Layered, Monolithic, and Microkernel OS structures?
• Layered: OS is divided into layers; each layer uses services of lower layers.• Monolithic: All OS components work together in kernel space.• Microkernel: Only essential services run in kernel; others run in user space

.Q4. What is the role of the Linux Kernel?It’s the core of the Linux OS that interacts directly with hardware and manages system resources.

Q5. What is a Shell?
A shell is a command-line interface used to interact with the OS via commands.

Q6. What are system calls?
System calls are functions that allow user-level processes to request services from the OS.

Q7. List key objectives of an OS.• Make systems user-friendly• Manage system resources• Ensure efficient execution of programs

Q8. What is kernel mode and user mode?• Kernel mode: OS runs with full access to hardware.• User mode: Applications run with limited privileges.© 2024 MUSA. All rights reserved. This material is the exclusive property of MUSA. Unauthorized reproduction, distribution, or use is strictly prohibited.

Q9. What is the evolution of OS?From simple batch systems to modern-day multiprogramming, multitasking, and distributed OS.

Q10. Name some common operating systems.Windows, Linux, macOS, UNIX, Android.

Module 2: 

Process and Scheduling

Q1. What is a process?
A process is a program in execution

.Q2. What are the different process states?
New, Ready, Running, Waiting, Terminated

.Q3. What is a Process Control Block (PCB)?It is a data structure used by the OS to store process information

.Q4. Difference between Preemptive and Non-Preemptive scheduling.• Preemptive: CPU can be taken away from a process.• Non-preemptive: CPU is released only after process completes

.Q5. Explain FCFS Scheduling.Processes are executed in the order of arrival

.Q6. What is SJF (Shortest Job First)?Process with the shortest burst time is executed first.

Q7. What is Round Robin scheduling?
Each process gets equal time (time quantum) in a cyclic order

.Q8. What is Priority Scheduling?Processes are executed based on their priority level.

Q9. What is a thread?
A thread is a lightweight process; smallest unit of execution.

Q10. Types of threads?•
 User-level threads• Kernel-level threads

Module 3: 

Synchronization and Deadlocks

Q1. What is concurrency?
Multiple processes running simultaneously, possibly interacting.

Q2. What is mutual exclusion?
Ensures that only one process accesses the critical section at a time

.Q3. What are semaphores?
Synchronization tools used to manage resource access

.Q4. What is the producer-consumer problem?
A classic synchronization problem where producer and consumer share a common buffer

.Q5. Define Deadlock.A situation where two or more processes are waiting for each other to release resources.

Q6. Four necessary conditions for deadlock?•
 Mutual exclusion• Hold and wait• No preemption• Circular wait

Q7. What is a Resource Allocation Graph?A graph used to detect deadlocks by mapping processes and resources.

Q8. What is the Banker’s Algorithm?
A deadlock avoidance algorithm that checks for safe resource allocation.

Q9. Methods to handle deadlocks?• Deadlock prevention• Deadlock avoidance• Deadlock detection and recovery

Q10. What is the Dining Philosopher’s Problem?
A classic problem to demonstrate synchronization issues using philosophers and chopsticks

.Module 4: Memory Management

Q1. What is memory management?
It is the function of an OS responsible for handling the primary memory.

Q2. What is Paging?
Dividing memory into fixed-size blocks called pages and frames.

Q3. What is Segmentation?
Dividing memory into variable-sized segments based on logical divisions like functions or arrays

.Q4. What is virtual memory?
A technique that gives an application the illusion of a large, continuous memory using disk space

.Q5. What is demand paging?Pages are loaded into memory only when they are needed

.Q6. Name three memory allocation strategies.First Fit, Best Fit, Worst FitQ7. What is Thrashing?A condition where the OS spends more time swapping pages than executing processes.

Q8. Explain FIFO page replacement.Replaces the oldest loaded page in memory.

Q9. What is LRU (Least Recently Used)?Replaces the page that has not been used for the longest time.© 2024 MUSA. All rights reserved. This material is the exclusive property of MUSA. Unauthorized reproduction, distribution, or use is strictly prohibited.

Q10. What is TLB (Translation Lookaside Buffer)?
A memory cache that stores recent page table entries for faster access.


Module 5: 

File Management


Q1. What is a file?
A collection of related information stored on secondary storage.

Q2. File access methods?• 
Sequential• Direct• Indexed

Q3. What is a file directory?
A structure that stores metadata and file names

.Q4. What is file sharing?
Allowing multiple users or processes to access a file.

Q5. What is file protection?
Methods to control access to files to prevent unauthorized use.

Q6. What is a file descriptor?
An identifier for accessing open files in a program

.Q7. File system mounting?
Attaching a file system to the directory structure of another.

Q8. What is inode?
A data structure in UNIX storing file information like size and permissions.

Q9. What are the file attributes?
Name, type, size, location, protection, creation time.

Q10. What is file compression?
Reducing file size to save storage using algorithms.

Module 6

: I/O Management

Q1. What is I/O management?Managing input and output devices for efficient data transfer.

Q2. Name types of I/O devices.• Input: Keyboard, Mouse• Output: Monitor, Printer• Storage: Hard Drive, SSD

Q3. What is the role of the device driver?
It acts as an interface between the OS and hardware devices.

Q4. What is disk scheduling?
Techniques to determine the order of disk I/O requests

Q5. Explain FCFS Disk Scheduling.Processes I/O requests in the order they arrive.

Q6. What is SSTF?
Shortest Seek Time First – selects the request with the closest track number.

Q7. Explain SCAN scheduling.The head moves in one direction, servicing requests, then reverses

.Q8. What is C-SCAN?
Like SCAN but only services in one direction and jumps back to start.


Q9. What is LOOK?
Similar to SCAN, but the head only goes as far as the last request in each direction.

Q10. What is C-LOOK?
A version of LOOK that moves in one direction and jumps back after the last request.*****ALL THE BEST*****