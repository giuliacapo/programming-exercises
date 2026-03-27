# University Data Structures & Algorithms Exercises

This repository contains implementations of basic **data structures** and **algorithms** from my first semester Computer Engineering course.  
All code is written in C++ and includes examples to run each program.  

These exercises were implemented as part of university coursework and are intended to demonstrate understanding of fundamental concepts in **data structures**, **sorting**, and **searching algorithms**.

---

## Repository Structure

- **/stack** → `stack.cpp`  
- **/queue** → `circular_queue.cpp`  
- **/bst** → `bst.cpp`  
- **/sorting** → `insertion_sort.cpp`  
- **/searching** → `binary_search.cpp`  

---

## Stack (LIFO)

**File:** `stack/stack.cpp`  
**Description:** Stack implementation using a dynamic array. Supports **push** and **pop** operations.  
**Time Complexity:** O(1) for push/pop  

---

## Queue (FIFO)

**File:** `queue/circular_queue.cpp`  
**Description:** Queue implementation using a circular array. Supports **put (enqueue)** and **get (dequeue)** operations.  
**Time Complexity:** O(1) for put/get  

---

## Binary Search Tree (BST)

**File:** `bst/bst.cpp`  
**Description:** Implementation of a **binary search tree** with:  
- Insertion (`ins_ord`)  
- Search (`tree_search`)  
- Traversals: **preorder**, **inorder**, **postorder**  
- Utility functions: minimum, maximum, node count, tree height

---

## Sorting Algorithm

**File:** `sorting/insertion_sort.cpp`  
**Description:** Insertion sort implementation for arrays of integers.  
**Time Complexity:** O(n²) worst case, O(n) best case 

---

## Searching Algorithm

**File:** `searching/binary_search.cpp`  
**Description:** Binary search on a sorted array.  
**Time Complexity:** O(log n)  

---

## Example Exercises

This section shows how the Stack (LIFO) and Queue (FIFO) implementations can be applied to solve simple practical exercises, similar to exam problems.

- **exercise_lifo.cpp** – Demonstrates using a **Stack (LIFO)** to process `Tconferimento` items.  
  Randomly generates 5 items, pushes them onto the stack, and processes them in **last-in-first-out** order.

- **exercise_fifo.cpp** – Demonstrates using a **Queue (FIFO)** to process `Tconferimento` items.  
  Randomly generates 5 items, adds them to a circular queue, and processes them in **first-in-first-out** order.

All exercises include comments in English and example usage in `main()`.
These exercises demonstrate practical applications of the implemented data structures and show problem-solving skills.

---

## Notes
- Each data structure and algorithm includes an example in main() for easy testing.
- This repository demonstrates my understanding of fundamental programming concepts, algorithmic thinking and basic data structures.
- All code is commented in English for clarity.

--- 

## Compilation 
All programs are C++ and can be compiled using: g++ <filename>.cpp -o <output_name>
./<output_name>


