# Linked List Program in C++

This program implements a **Linked List** in C++ with features like
building from file, searching, inserting, deleting, and making the list
circular. Below is a line-by-line explanation.

------------------------------------------------------------------------

## Code Explanation

``` cpp
#include <iostream>
#include <fstream>
#include <string>
```

-   Includes libraries for input/output, file handling, and string
    operations.

``` cpp
using namespace std;
```

-   Allows using standard library names without `std::` prefix.

``` cpp
struct Node {
    int value;
    Node* next;
};
```

-   Defines a `Node` structure with an integer `value` and a pointer to
    the next node.

``` cpp
class LinkedList {
private:
    Node* head;
    int size;
```

-   Declares `LinkedList` class with a `head` pointer and `size` of the
    list.

``` cpp
public:
    LinkedList() : head(nullptr), size(0) {}
```

-   Constructor initializes an empty list.

``` cpp
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
```

-   Destructor frees memory of all nodes.

------------------------------------------------------------------------

### Append Function

``` cpp
void append(int data)
```

-   Creates a new node with `data` and adds it at the end of the list.

------------------------------------------------------------------------

### Print List

``` cpp
void printList()
```

-   Traverses and prints all nodes in the list.

------------------------------------------------------------------------

### Build from File

``` cpp
void buildFromFile(const string& filename)
```

-   Reads numbers from a file and appends them to the list.
-   Also logs the numbers into `initial_list_for_linkedlist.txt`.

------------------------------------------------------------------------

### Save to File

``` cpp
void saveToFile(const string& filename)
```

-   Saves current list values into a text file.

------------------------------------------------------------------------

### Find a Value

``` cpp
void findValue()
```

-   Searches for a given number in the list and displays its position.

------------------------------------------------------------------------

### Insert at Position

``` cpp
void insertAt()
```

-   Inserts a number at a specific position in the list.
-   Updates list in `updated_list.txt`.

------------------------------------------------------------------------

### Remove at Position

``` cpp
void removeAt()
```

-   Removes a node at a given position.

------------------------------------------------------------------------

### Make Circular

``` cpp
void makeCircular()
```

-   Connects the last node back to the head, making the list circular.

------------------------------------------------------------------------

### Menu

``` cpp
void showMenu()
```

-   Displays available operations for the user.

------------------------------------------------------------------------

### Main Function

``` cpp
int main()
```

1.  Builds list from `integer_data.txt`.
2.  Runs a menu-driven program:
    -   Find number
    -   Insert number
    -   Delete number
    -   Make circular
    -   Print list
    -   Exit

------------------------------------------------------------------------

## Summary

-   **LinkedList** class handles nodes dynamically.
-   Supports **file I/O**, **search**, **insert**, **delete**, and
    **circular conversion**.
-   Uses menu for interactive execution.
