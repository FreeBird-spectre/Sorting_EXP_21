📦 Sorting Algorithms in C++

=== Code Execution Successful ===

🎯 Aim

To study and implement fundamental sorting algorithms in C++, including Bubble Sort, Selection Sort, Quick Sort, and Bucket Sort. These programs demonstrate how different sorting techniques work and how they vary in terms of efficiency, stability, and use cases.

📚 Theory

Sorting is the process of arranging data in a particular order (ascending or descending). Efficient sorting is crucial for optimizing search operations and organizing data.

Types of Sorting Algorithms Implemented:

Bubble Sort: Repeatedly swaps adjacent elements if they are in the wrong order.

Selection Sort: Selects the minimum element and places it at the beginning.

Quick Sort: Uses divide-and-conquer with pivot-based partitioning.

Bucket Sort: Distributes elements into buckets and sorts each bucket individually.

📋 Algorithm Overview

🔹 Bubble Sort

Compare adjacent elements

Swap if out of order

Repeat until no swaps are needed

🔹 Selection Sort

Find the minimum element

Swap with the first unsorted element

Repeat for the rest of the array

🔹 Quick Sort

Choose a pivot

Partition array around pivot

Recursively sort left and right parts

🔹 Bucket Sort

Create buckets based on value range

Distribute elements into buckets

Sort each bucket

Merge buckets into final array

💻 Sample Outputs

Bubble Sort

cpp

int arr[] = {56, 1, 69, 2, 28};

Output:

Code

1 2 28 56 69

Bucket Sort

cpp

float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};

Output:

Code

0.23 0.25 0.32 0.42 0.47 0.51 0.52

Quick Sort

cpp

int arr[] = {10, 7, 8, 9, 1, 5};

Output:

Code

1 5 7 8 9 10

Selection Sort

cpp

int arr[] = {64, 5, 12, 29, 91};

Output:

Code

5 12 29 64 91

🚀 Applications

Data analysis and visualization

Search optimization

Database indexing

Real-time systems (e.g., embedded devices)

Graphics and game development

Machine learning preprocessing

🧠 Conclusion

Sorting algorithms are essential for organizing data efficiently. This project demonstrated:

Bubble Sort for simplicity

Selection Sort for clarity

Quick Sort for speed

Bucket Sort for specialized use cases
