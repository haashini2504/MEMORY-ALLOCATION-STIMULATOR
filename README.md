# MEMORY-ALLOCATION-STIMULATOR
# First Fit Memory Allocation Algorithm

This project implements the **First Fit Memory Allocation** technique in **C++**.

## Description
The program allocates memory blocks to processes using the **First Fit Algorithm**.  
Each process is assigned to the first available memory block that is large enough to accommodate it.

If no suitable block is found, the process remains unallocated.

## Features
- Accepts memory block sizes from the user
- Accepts process sizes from the user
- Allocates memory using First Fit strategy
- Displays allocation details clearly
- Handles unallocated processes

## Technologies Used
- C++
- Arrays
- Memory Management Concepts

## Algorithm
1. Read memory block sizes
2. Read process sizes
3. Traverse each process
4. Allocate the first suitable memory block
5. Update remaining memory size
6. Display allocation result

## Sample Input
Enter number of memory blocks: 5  
Enter size of each block:  
100 500 200 300 600  

Enter number of processes: 4  
Enter size of each process:  
212 417 112 426  

## Sample Output
Process No    Process Size    Block No
1             212             2
2             417             5
3             112             2
4             426             Not Allocated

## Concepts Covered
- Operating Systems
- Memory Allocation
- First Fit Strategy
- Process Management

## Author
Haashini
