# 🚀 C++ Level 5 - Data Structures & OOP Mastery

[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/Alhajjy)
[![Level 5](https://img.shields.io/badge/Level%205-Master-crimson?style=for-the-badge)](https://github.com/Alhajjy)
[![Projects Completed](https://img.shields.io/badge/Projects%20Completed-8-brightgreen?style=for-the-badge)](https://github.com/Alhajjy)
[![Focus](https://img.shields.io/badge/Focus-Data%20Structures%20%26%20OOP-darkblue?style=for-the-badge)](https://github.com/Alhajjy)

This repository contains **17 master-level C++ projects** focusing on advanced data structure implementation, object-oriented programming, generic programming, and complex system architecture. These projects represent the transition from algorithmic problem-solving to professional software architecture and design patterns.

## 📋 Table of Contents

- [Overview](#-overview)
- [Project Categories](#-project-categories)
- [Level 5 Highlights](#-level-5-highlights)
- [Technical Architecture](#-technical-architecture)
- [Contact](#-contact)

## 🎯 Overview

Level 5 projects focus on advanced software engineering and computer science fundamentals. These challenges master:

- **Custom Data Structure Implementation**
- **Generic Programming & Templates**
- **Object-Oriented Design Patterns**
- **Memory Management & Performance**
- **Advanced System Architecture**
- **Professional Code Organization**

## 📚 Project Categories

### 🔗 Project 1: Double Linked List Ecosystem
**Core Implementation (clsDbLinkedList.h)**
- **01**: Double Linked List Class - Generic doubly-linked list implementation
- **02-09**: Extensions 1-8 - Progressive feature enhancement

**Core Features:**
- `InsertAtBeginning(T value)` - Head insertion with O(1) complexity
- `InsertAtEnd(T value)` - Tail insertion with O(1) complexity
- `InsertAfter(Node* current, T value)` - Targeted insertion
- `DeleteNode(Node*& NodeToDelete)` - Safe node removal
- `DeleteFirstNode()` / `DeleteLastNode()` - Boundary operations
- `Find(T Value)` - Node search returning pointer
- `PrintList()` - Forward/backward traversal support

**Advanced Extensions:**
- `Size()` - Dynamic size tracking
- `IsEmpty()` - State validation
- `Clear()` - Complete list cleanup
- `Reverse()` - In-place list reversal
- `GetNode(int index)` - Index-based node access
- `GetItem(int index)` - Value extraction by index
- `UpdateItem(int index, T value)` - In-place modification
- `InsertAfter(int index, T value)` - Index-based insertion

### 📋 Project 2: Advanced Queue Implementation
**Implementation (clsMyQueue.h)**
- **10**: Core Queue Class - Linked-list based queue
- **11**: Extensions 1-7 - Enhanced queue operations

**Standard Queue Operations:**
- `push(T item)` - Enqueue operation
- `pop()` - Dequeue operation
- `front()` / `back()` - Boundary element access
- `Size()` / `IsEmpty()` - State management
- `Print()` - Queue visualization

**Advanced Queue Features:**
- `GetItem(int Index)` - Random access capability
- `Reverse()` - Queue order inversion
- `UpdateItem(int Index, T NewValue)` - In-place updates
- `InsertAfter(int Index, T NewValue)` - Positional insertion
- `InsertAtFront(T Value)` / `InsertAtBack(T Value)` - Deque functionality
- `Clear()` - Complete queue reset

### 📚 Project 3: Stack Data Structure
**Implementation (clsMyStack.h)**
- **12**: Stack Class - LIFO data structure implementation

**Stack Operations:**
- `push(T Item)` - Stack push operation
- `Top()` - Access top element
- `Bottom()` - Access bottom element (extended functionality)

### 🔢 Project 4: Dynamic Array System
**Implementation (clsDynamicArray.h)**
- **13**: Dynamic Array Class - Resizable array with advanced operations

**Memory Management:**
- `clsDynamicArray(int Size = 0)` - Constructor with optional size
- `~clsDynamicArray()` - Destructor with proper cleanup
- `Resize(int NewSize)` - Dynamic memory reallocation

**Array Operations:**
- `SetItem(int index, T Value)` / `GetItem(int index)` - Element access
- `Size()` / `IsEmpty()` - State queries
- `PrintList()` - Array visualization
- `Reverse()` / `Clear()` - Bulk operations

**Advanced Insertion/Deletion:**
- `InsertAt(T index, T value)` - Positional insertion
- `InsertAtBeginning(T value)` - Head insertion with shifting
- `InsertBefore(T index, T value)` / `InsertAfter(T index, T value)` - Relative insertion
- `InsertAtEnd(T value)` - Tail insertion
- `DeleteItemAt(int index)` - Positional deletion
- `DeleteFirstItem()` / `DeleteLastItem()` - Boundary deletion
- `Find(T Value)` / `DeleteItem(T Value)` - Value-based operations

### 📋 Project 5: Array-Based Queue
**Implementation (clsMyQueueArr.h)**
- **14**: Queue Array Implementation - Fixed-size array-based queue

**Optimized Array Operations:**
- Circular buffer implementation for efficiency
- All standard queue operations with array backing
- Memory-efficient implementation with O(1) operations

### 📚 Project 6: Array-Based Stack
**Implementation (clsMyStackArr.h)**
- **15**: Stack Array Implementation - Array-backed stack structure

**Stack Features:**
- `push(T Item)` - Efficient array-based push
- `Top()` / `Bottom()` - Boundary access with array indexing

### ↩️ Project 7: Undo/Redo System
- **16**: Undo/Redo Implementation - Command pattern with stack-based history

**Advanced Features:**
- Command pattern implementation
- History management with dual-stack approach
- State preservation and restoration
- Memory-efficient command storage

### 🎫 Project 8: Queue Line Management
**Implementation (clsQueueLine.h)**
- **17**: Queue Line System - Real-world queue simulation

**Business Logic:**
- Customer queue management
- Service time tracking
- Priority queue features
- Statistics and reporting

## 🌟 Level 5 Highlights

### Architectural Revolution from Level 4:
- **Object-Oriented Design**: Complete transition to class-based architecture
- **Generic Programming**: Template-based implementations for type flexibility
- **Data Structure Mastery**: Implementation of fundamental computer science structures
- **Memory Management**: Advanced pointer manipulation and dynamic allocation
- **Design Patterns**: Implementation of professional software design patterns

### Computer Science Fundamentals Mastered:
- **Linear Data Structures**: Lists, stacks, queues with multiple implementations
- **Algorithm Complexity**: Understanding and implementing O(1), O(n) operations
- **Memory Optimization**: Efficient memory usage and management strategies
- **Template Programming**: Generic code for maximum reusability
- **Encapsulation**: Proper data hiding and interface design
- **Polymorphism**: Virtual functions and abstract base classes

### Professional Development Skills:
- **Software Architecture**: Designing scalable and maintainable systems
- **Code Reusability**: Creating generic, template-based solutions
- **Performance Optimization**: Implementing efficient algorithms and data structures
- **Testing & Debugging**: Comprehensive testing of complex data structures
- **Documentation**: Professional code documentation and API design
- **Version Control**: Managing complex project evolution and extensions

### Advanced Implementation Techniques:
- **Template Specialization**: Advanced generic programming techniques
- **Memory Pool Management**: Efficient memory allocation strategies
- **Iterator Patterns**: STL-compatible iterator implementations
- **Exception Safety**: Robust error handling and resource management
- **RAII Principles**: Resource Acquisition Is Initialization patterns
- **Smart Pointers**: Modern C++ memory management techniques

## 🏗️ Technical Architecture

### Design Patterns Implemented:
- **Template Method Pattern**: Consistent interface across data structures
- **Strategy Pattern**: Multiple implementation strategies for same interface
- **Iterator Pattern**: STL-compatible traversal mechanisms
- **Command Pattern**: Undo/Redo functionality implementation
- **Factory Pattern**: Object creation and initialization
- **RAII Pattern**: Resource management and exception safety

### Performance Characteristics:
- **Time Complexity**: Optimized operations with documented complexity
- **Space Complexity**: Memory-efficient implementations
- **Cache Efficiency**: Memory access pattern optimization
- **Scalability**: Designs that handle large datasets efficiently

## 📞 Contact & Social

Ready to discuss advanced data structures, software architecture, or collaborate on enterprise-level projects!

- 📧 Email: muhammedhacci2@gmail.com
- 🐱 GitHub: **[@Alhajjy](https://github.com/Alhajjy)**
- ➤ Telegram: **[@AGuyFromLevant](https://t.me/AGuyFromLevant)**

## 🎉 Support This Project

If this repository helped you master advanced C++ and data structures:

- ⭐ **Star the repository** to show appreciation
- 🍴 **Fork it** to build upon these implementations
- 📢 **Share it** with computer science students
- 💬 **Open issues** for questions or improvements
- 🔗 **Reference it** in your academic or professional work

---

<div align="center">

### 💡 "Master-level programming is where computer science theory meets professional software development."

**Keep Coding, Keep Architecting!** 🚀

</div>
