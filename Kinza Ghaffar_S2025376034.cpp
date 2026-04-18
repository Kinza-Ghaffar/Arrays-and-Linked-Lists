//Part A  –  Theory
//Q1. What is contiguous memory allocation? Why do arrays use it, and what 
//access-time advantage does it provide? 
//Answer:
//Contiguous Memory Allocation
// Contiguous memory allocation is a technique in which data elements are stored in adjacent (continuous) memory locations without any gaps.
// Why Arrays Use Contiguous Memory:
// Arrays store elements in a continuous block of memory
// It allows easy calculation of element addresses
// Helps in efficient memory organization
// Supports index-based access
// Access-Time Advantage:
// Provides direct (random) access to elements
// Address of any element can be calculated using a formula
// Access time is constant (O(1))
// Makes arrays very fast for data retrieval
// Q2.What is a memory leak? Describe one realistic scenario in C++ where 
// working with arrays causes a memory leak. 
// Answer:
// Memory Leak:
// A memory leak occurs when dynamically allocated memory is not deallocated, causing wastage of memory and reducing available resources.
// C++ Scenario (Arrays):
// Using dynamic array (new[])
// Memory is allocated at runtime
// Programmer forgets to use delete[]
// Pointer goes out of scope but memory remains occupied
// Key Points:
// Happens in heap memory
// Common with pointers and arrays
// Leads to memory wastage / program slowdown
// Conclusion:
// In C++, memory leaks occur when dynamic arrays are created using new[] but not freed with delete[], leaving unused memory allocated.
// Q1.A.3  [1 Mark]  What is the difference between a fixed-size (static) array and a dynamic 
// array? Why does fixed size matter? 
// Answer:
// Fixed-Size (Static) Array:
// Size is defined at compile time
// Stored in stack memory
// Size cannot be changed during program execution
// Dynamic Array
// Size is defined: at runtime
// Stored in heap memory
// Size can be managed using pointers (new/delete)
// Key Difference:
// Static array → fixed size, compile-time
// Dynamic array → flexible size, runtime
// Why Fixed Size Matters:
// Memory efficiency issue (may waste or be insufficient)
// Cannot handle changing data requirements
// Limits program flexibility and scalability
// Q1.A.4  [1 Mark]  Explain in your own words why array element access is O(1). Why is this not 
// the case for a Linked List? 
// Answer:
// Why Array Access is O(1)
// Elements stored in contiguous memory
// Each element has a fixed index
// Address calculated using formula (base + index × size)
// No need to traverse → direct access
// Hence, constant time O(1)
// Why Not in Linked List
// Elements stored in non-contiguous memory
// Each node connected using pointers
// To access an element, must traverse from start
// Time depends on position → O(n)
// Q2.A.1  In your own words, explain how Bubble Sort works. What happens in each 
// pass and why is it called 'Bubble' Sort?
// Bubble Sort:
// Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements in an array and swaps them if they are in the wrong order.
// It continues this process until the entire array is sorted.
// What happens in each pass?
// In each pass, the largest unsorted element moves to its correct position at the end of the array.
// The algorithm repeats multiple passes, and after each pass, the unsorted portion becomes smaller.
// Why it is called “Bubble” Sort?
// It is called Bubble Sort because larger elements gradually “bubble up” to the end of the array, just like air bubbles rise to the surface of water.
// Conclusion:
// Bubble Sort sorts data by repeatedly swapping adjacent elements, and after each pass, the largest element settles at its correct position.
// Q2.A.2What is the time complexity of Bubble Sort in the best, average, and worst 
// case? How does it differ from the worst case if the array is already sorted and an optimisation 
// flag is used? 
// Answer:
// Time Complexity of Bubble Sort
// Best Case:
// O(n)
// Occurs when the array is already sorted
// With optimization flag (no-swap flag), algorithm stops after first pass if no swaps are made
// Average Case:
// O(n²)
// Elements are in random order, so multiple comparisons and swaps are needed
// Worst Case:
// O(n²)
// Happens when array is in reverse order
// Effect of Optimization (Already Sorted Array)
// Without optimization: Bubble Sort still runs all passes → O(n²)
// With optimization flag:
// Algorithm detects no swaps in first pass
// It stops early
// Reduces time complexity to O(n) in best case
// Conclusion:
// Bubble Sort is efficient only for small or nearly sorted data, and optimization improves performance when the array is already sorted.
// Q2.A.3  [1 Mark]  Compare Bubble Sort and Selection Sort: which is generally preferred and 
// why? Mention at least one scenario where one might be chosen over the other. 
// Bubble Sort vs Selection Sort
// Bubble Sort
// Repeatedly compares adjacent elements and swaps them
// Many swaps required
// Can be optimized using a no-swap flag
// Best case: O(n) (if already sorted with optimization)
// Selection Sort
// Selects the minimum (or maximum) element and places it in correct position
// Performs fewer swaps compared to Bubble Sort
// Time complexity: O(n²) in all cases
// Which is Generally Preferred?
// Selection Sort is generally preferred over Bubble Sort
// Reason: It performs less swapping, which makes it more efficient in practice (even though both are O(n²))
// When to Choose Which
// Bubble Sort:
// When data is already nearly sorted
// Easy to understand and implement
// Selection Sort:
// When minimizing swaps is important (e.g., when write operations are costly, like in flash memory)
// Conclusion:
// Selection Sort is usually better than Bubble Sort due to fewer swaps, but both are mainly used for small datasets due to O(n²) complexity.
// Q3.A.1 [1 Mark]
// What is the prerequisite condition for Binary Search to work correctly? Why does this condition matter?

// Answer:
// - Binary Search works only on a SORTED array (ascending or descending order).
// - Sorting is necessary because Binary Search compares the middle element with the target value.
// - Based on this comparison, it decides whether to move to the left half or right half.
// - If the array is not sorted, this decision becomes incorrect and the search may fail or give wrong results.


// Q3.A.2 [1 Mark]
// Dry-run Binary Search on {2, 5, 8, 12, 16, 23, 38, 45}, key = 23

// Answer:
// Step 1:
// low = 0, high = 7, mid = 3 → value = 12
// Since 23 > 12, we move to the right half

// Step 2:
// low = 4, high = 7, mid = 5 → value = 23
// Element found at index 5


// Q3.A.3 [1 Mark]
// Why is Binary Search faster than Linear Search for large inputs?

// Answer:
// - Linear Search checks elements one by one → O(n)
// - Binary Search works only on sorted arrays and divides the search space into half every step → O(log n)
// - This means Binary Search reduces the number of comparisons very quickly.
// - For large datasets, this reduction makes it much faster than Linear Search.
// Q4.A.1 [1 Mark]
// What does Big O notation describe? Why do we express complexity in Big O rather than measuring runtime in seconds?
//
// Answer:
// Big O notation describes how the performance of an algorithm grows with input size (n).
// It shows time or space requirements in terms of growth, not exact time.
// We use Big O instead of seconds because runtime depends on hardware, compiler, and system,
// while Big O gives a universal and machine-independent way to compare algorithms.


// Q4.A.2 [1 Mark]
// Explain Big O, Big Omega, and Big Theta using analogy.
//
// Answer:
// Think of traveling:
// - Big O (Worst case): Maximum possible time you might take in worst traffic.
// - Big Omega (Best case): Minimum time if roads are empty.
// - Big Theta (Average/Tight bound): Typical time you usually take on normal traffic.
// So, Big O = upper limit, Big Omega = lower limit, Big Theta = exact/average behavior.


// Q4.A.3 [1 Mark]
// Rank from fastest to slowest for large n:
//
// Answer:
// O(1) < O(log n) < O(n) < O(n log n) < O(n²)


// Q4.A.4 [1 Mark]
// What is Space Complexity? If a function creates a temporary array of size n, what is its space complexity and why?
//
// Answer:
// Space complexity is the amount of memory an algorithm uses relative to input size.
// If a function creates a temporary array of size n, its space complexity is O(n),
// because memory usage grows linearly with input size.


// Q4.A.5 [1 Mark]
// A student says: 'My computer is faster, so my O(n²) solution will always beat an O(n log n) one.' Is this correct? Explain.
//
// Answer:
// This is incorrect.
// Big O ignores hardware differences and focuses on growth rate.
// For large input sizes, O(n log n) will always outperform O(n²) regardless of machine speed,
// because its growth rate is much slower.

// Time Complexity:
// Nested Loop:
// Outer loop runs n times
// Inner loop runs n times for each outer loop
// Total operations = n * n = n²
// So, Time Complexity = O(n²)
// Q5.A.1 [1 Mark]
// What is a Singly Linked List? How does its memory structure differ from an array?
//
// Answer:
// A Singly Linked List is a linear data structure where each element (node)
// contains data and a pointer to the next node.
//
// Difference from Array:
// - Array uses contiguous memory (continuous blocks)
// - Linked List uses non-contiguous memory (nodes are scattered in heap)
// - Linked List nodes are connected using pointers, while arrays use indexing


// Q5.A.2 [1 Mark]
// State time complexities for insertion at head, insertion at tail, deletion by value.
//
// Answer:
// - Insertion at head: O(1)
//   Because we directly change the head pointer
//
// - Insertion at tail: O(n)
//   Because we may need to traverse entire list to reach last node
//
// - Deletion by value: O(n)
//   Because we must search the node before deleting it


// Q5.A.3 [1 Mark]
// What happens if you remove a node without calling delete in C++?
//
// Answer:
// If delete is not used, the memory allocated for the node is not freed.
// This causes a MEMORY LEAK, meaning memory remains occupied even though it is no longer used.
//
// Problem name: Memory Leak
//
// How to avoid:
// Always use "delete" after removing a node and properly update pointers




#include<iostream>
using namespace std;

// ================== PART B Q1 ==================

int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

// Q1.B.2
void findMinMax(int arr[],int size,int &minVal,int &maxVal){
    minVal=arr[0];
    maxVal=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]<minVal){
            minVal=arr[i];
        }
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
}

// ================== PART B Q2 ==================

void bubbleSort(int arr[], int n, int &swapCount) {
    swapCount = 0;

    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapCount++;
                swapped = true;
            }
        }

        if(!swapped) break;
    }
}

// ================== PART B Q3 ==================

int binarySearch(int arr[], int n, int key, int &iterations) {
    int low = 0, high = n - 1;
    iterations = 0;

    while (low <= high) {
        iterations++;
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        else if (key > arr[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

// ================== PART B Q4 ==================

void nestedLoop(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

void singleLoop(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool checkElements(int A[], int B[], int n) {
    for(int i = 0; i < n; i++) {
        bool found = false;

        for(int j = 0; j < n; j++) {
            if(A[i] == B[j]) {
                found = true;
                break;
            }
        }

        if(found == false)
            return false;
    }

    return true;
}

// ================== PART B Q5 ==================

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void deleteByValue(int val) {
        if (head == nullptr) return;

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr && temp->next->data != val) {
            temp = temp->next;
        }

        if (temp->next == nullptr) return;

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// ================== SINGLE MAIN ==================

int main(){

    // Q1
    int arr1[10]={4,15,7,23,1,9,42,18,6,30};
    int key=42;

    int result=linearSearch(arr1,10,key);

    if(result!=-1){
        cout<<key<<" found at index "<<result<<endl;
    }else{
        cout<<key<<" not found "<<endl;
    }

    int minVal,maxVal;
    findMinMax(arr1,10,minVal,maxVal);

    cout<<"Minimum value: "<<minVal<<endl;
    cout<<"Maximum value: "<<maxVal<<endl;

    // Q2
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int n2 = 7, swapCount;

    bubbleSort(arr2, n2, swapCount);
    cout << "Total Swaps: " << swapCount << endl;

    // Q3
    int arr3[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int iterations;

    int res1 = binarySearch(arr3, 10, 56, iterations);
    cout << "Key 56 -> Index: " << res1 << " Iterations: " << iterations << endl;

    int res2 = binarySearch(arr3, 10, 100, iterations);
    cout << "Key 100 -> Index: " << res2 << " Iterations: " << iterations << endl;

    // Q4
    int arr4[] = {1,2,3,4,5};
    cout << "Nested Loop:" << endl;
    nestedLoop(arr4,5);

    cout << "Single Loop:" << endl;
    singleLoop(arr4,5);

    int A[] = {1,2,3,4};
    int B[] = {4,3,2,1};

    if(checkElements(A,B,4))
        cout << "All elements of A exist in B"<<endl;
    else
        cout << "Missing elements"<<endl;

    // Q5
    LinkedList list;

    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);

    list.display();

    list.deleteByValue(30);
    list.deleteByValue(100);

    list.display();

    return 0;
}