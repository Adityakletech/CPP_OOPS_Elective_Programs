# Object-Oriented Programming (OOPS) Elective – C++ Coursework

This repository contains the C++ laboratory and classroom programs written for the **Object-Oriented Programming (OOPS) Elective** course.

The programs are organized session-by-session from `Class_1` to `Class_12`, covering C++ fundamentals, classes and objects, constructors and destructors, static and friend members, single/multi-level/multiple inheritance, virtual base classes, runtime polymorphism, operator overloading, and exception handling.

## Student Information

| Field | Details |
| :--- | :--- |
| **Name** | Aditya K |
| **Roll No.** | 512 |
| **Division** | E |
| **SRN** | 01FE23BEC245 |
| **Semester** | 7 (VII) |

## Directory Layout

```text
CPP_OOPS_Elective_Programs/
│
├── Programs/
│   ├── Class_1/
│   ├── Class_2/
│   ├── Class_3/
│   ├── Class_4/
│   ├── Class_5/
│   ├── Class_6/
│   ├── Class_7/
│   ├── Class_8/
│   ├── Class_9/
│   ├── Class_10/
│   ├── Class_11/
│   └── Class_12/
│
├── .gitignore
└── README.md
```

## Session-Wise Program Index

### Class 1 – C++ Fundamentals & Parameter Passing
Introductory programs covering console I/O, primitive data types, arrays, C-style vs. C++ strings, palindrome checks, and function argument passing.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Console output using `cout` |
| `prog_2.cpp` | Reading two integers with `cin` and computing their sum |
| `prog_3.cpp` | Declaring and printing `int`, `char`, and `float` variables |
| `prog_4.cpp` | Computing the area of a rectangle from user input |
| `prog_5.cpp` | Finding the maximum element in an integer array |
| `prog_6.cpp` | Finding string length using C-style arrays and `std::string` |
| `prog_7.cpp` | Checking whether a C-style character array is a palindrome |
| `prog_8.cpp` | Checking whether a C++ `std::string` is a palindrome |
| `prog_9.cpp` | Adding two numbers using **pass by value** |
| `prog_10.cpp` | Adding two numbers using **pass by reference** |
| `prog_11.cpp` | Adding two numbers using **pass by pointer** |

### Class 2 – Classes, Objects, and Member Functions
Encapsulation basics, private data members, public methods, and out-of-line member function definitions using the scope resolution operator (`::`).

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Defining a `Test` class and accessing private fields via member functions |
| `prog_2.cpp` | `Student` class storing and displaying student name and age |
| `prog_3.cpp` | Defining `Student::displayData()` outside the class declaration |
| `prog_4.cpp` | `Rectangle` class with separate methods for setting dimensions, calculating area, and printing |
| `prog_5.cpp` | Streamlined `Rectangle` class where `area()` directly returns the computed value |

### Class 3 – Object Interaction & Constructors
Passing objects as arguments to member functions and initializing objects with default, parameterized, and copy constructors.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | `Time` class that adds two `Time` objects with carry-over handling |
| `prog_2.cpp` | `Complex` class for adding two complex numbers using objects |
| `prog_3.cpp` | `Employee` class initialized via a default constructor |
| `prog_4.cpp` | Overloaded default and parameterized constructors in the `Employee` class |
| `prog_5.cpp` | `Distance` class initialized with a parameterized constructor |
| `prog_6.cpp` | Demonstrating default, parameterized, and copy constructors in `Rectangle` |

### Class 4 – Destructors & Static Data Members
Automatic cleanup with destructors and class-wide state sharing with `static` data members.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | `Rectangle` class combining constructors with a destructor (`~Rectangle()`) |
| `prog_2.cpp` | Shared `static` data member across multiple `Employee` instances |
| `prog_3.cpp` | Generating unique employee IDs for each instance using a `static` counter |

### Class 5 – Static Member Functions & Friend Functions
Calling class-level methods without an object and granting non-member functions access to private members via `friend`.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Accessing a `static` counter through a `static` member function |
| `prog_2.cpp` | Using a `friend` function to sum private members of a class |
| `prog_3.cpp` | Passing both an object and an extra parameter to a `friend` function |
| `prog_4.cpp` | Common `friend` function operating on private members of two classes (`ABC` and `XYZ`) |

### Class 6 – Single & Multi-Level Inheritance
Building class hierarchies and inheriting base-class behavior across single and multi-level chains.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Single-level inheritance (`Animal` -> `Dog`) |
| `prog_2.cpp` | Multi-level inheritance (`Person` -> `Student` -> `IT_Student`) |
| `prog_3.cpp` | Exploring member visibility across multi-level inheritance |

### Class 7 – Multi-Level Inheritance & `protected` Access Control
Using the `protected` access specifier so derived classes can access base members while keeping them hidden from external code.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Multi-level inheritance hierarchy (`Vehicle` -> `Car` -> `SportsCar`) |
| `prog_2.cpp` | Calling a `protected` base-class method from derived classes |
| `prog_3.cpp` | Accessing `protected` data members across a three-level class hierarchy |

### Class 8 – Constructor Initializer Lists & Multiple Inheritance
Passing arguments to base-class constructors via initializer lists and combining multiple base classes (`Student` and `Test` into `Result`).

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Single-level inheritance using constructor initializer lists (`Animal` -> `Dog`) |
| `prog_2.cpp` | Multi-level constructor chaining (`Person` -> `Student` -> `IT_Student`) |
| `prog_3.cpp` | Multiple inheritance with both default and parameterized constructors |
| `prog_4.cpp` | Initializing `Student` and `Test` base classes from the `Result` constructor |
| `prog_5.cpp` | Student result system (3 subjects) calculating total marks and percentage |
| `prog_6.cpp` | Student result system (5 subjects) calculating total marks out of 500 and percentage |

### Class 9 – Multiple Inheritance Practice
Additional practice combining independent base classes into a single derived class.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Multiple inheritance with `Liquid` and `Fuel` base classes and `Petrol` derived class |
| `prog_2.cpp` | Multiple inheritance `Result` class displaying student details, total marks, and percentage |

### Class 10 – Virtual Base Classes & Runtime Polymorphism
Resolving diamond-inheritance ambiguity with `virtual` inheritance and achieving late binding with `virtual` functions.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Diamond inheritance hierarchy illustrating base member disambiguation |
| `prog_2.cpp` | Resolving the diamond problem cleanly using `virtual` base classes |
| `prog_3.cpp` | Function overriding and dynamic dispatch via a base-class pointer |
| `prog_4.cpp` | Comparing virtual dispatch through a base pointer with direct object calls |

### Class 11 – Abstract Classes & Operator Overloading
Pure virtual functions, polymorphic pointer arrays, and overloading unary (`++`, `--`) and binary (`+`, `-`) operators.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Overriding `virtual void draw()` in `Shape` and `Circle` |
| `prog_2.cpp` | Polymorphic `draw()` calls across `Circle`, `Square`, and `Triangle` |
| `prog_3.cpp` | Iterating over an array of `Shape*` pointers for runtime polymorphism |
| `prog_4.cpp` | Abstract `Vehicle` class with pure virtual `getMileage()` implemented by `Car` and `Bike` |
| `prog_5.cpp` | Overloading binary `+` to add two `Complex` numbers |
| `prog_6.cpp` | Overloading binary `-` to subtract two `Complex` numbers |
| `prog_7.cpp` | Overloading prefix and postfix increment (`++`) for a `Counter` class |
| `prog_8.cpp` | Overloading prefix and postfix decrement (`--`) for a `Counter` class |

### Class 12 – String Operator Overloading & Exception Handling
Overloading `+` for string concatenation and structured error handling with `try`, `throw`, and `catch`.

| File | Topic Covered |
| :--- | :--- |
| `prog_1.cpp` | Overloading the `+` operator to concatenate two `StringConcat` objects |
| `prog_2.cpp` | Throwing and catching an integer exception when a number is negative |
| `prog_3.cpp` | Exception handling to check for zero operands before multiplication |
| `prog_4.cpp` | Multiple `catch` blocks handling `int` and `double` exceptions |
| `prog_5.cpp` | Division-by-zero check throwing a string literal exception |
| `prog_6.cpp` | Demonstrating exception flow control in division-by-zero handling |

## Core C++ & OOPS Topics Practiced
- **Fundamentals**: `cin` / `cout`, primitive types, arrays, C-strings, `std::string`, pass by value/reference/pointer
- **Encapsulation**: Classes, objects, access specifiers (`private`, `protected`, `public`), scope resolution (`::`)
- **Object Lifecycle**: Default, parameterized, and copy constructors, constructor initializer lists, destructors
- **Class-Level & External Access**: `static` data members, `static` member functions, `friend` functions across classes
- **Inheritance**: Single-level, multi-level, multiple, hierarchical, and `virtual` base classes (diamond problem)
- **Polymorphism**: Function overriding, `virtual` functions, late binding, abstract classes, pure virtual functions, operator overloading (`+`, `-`, `++`, `--`)
- **Exception Handling**: `try`, `throw`, and multiple `catch` blocks

## How to Compile and Run

### Using G++ (Terminal / VS Code)
Compile any individual `.cpp` file using `g++` and run the generated executable:

```bash
g++ Programs/Class_1/prog_1.cpp -o program
./program        # On Linux / macOS / Git Bash
program.exe      # On Windows Command Prompt / PowerShell
```

### Using Code::Blocks
1. Open **Code::Blocks** and select **File -> Open**.
2. Browse to the desired `.cpp` file inside `Programs/Class_X/`.
3. Press **F9** (or click **Build and Run**) to compile and execute the program.

### Cloning the Repository
```bash
git clone https://github.com/Adityakletech/CPP_OOPS_Elective_Programs.git
```

## Author

**Aditya K**  
Department of Electronics and Communication Engineering (ECE)  
SRN: `01FE23BEC245` | Roll No: `512` | Division: `E` | Semester: `VII`
