<<<<<<< HEAD
# CodeWorkHub
=======

# 📏 Patterns Overview

This repository contains 24 unique patterns created for various applications. Each pattern serves as an example of different techniques in design, coding, or visualization.

## Projects in this Section

1. **Patterns for Design**: Illustrates common patterns used in design principles.
2. **Coding Patterns**: Includes algorithms and data structures patterns.
3. **Visualization Patterns**: Demonstrates graphical patterns and visualizations.

---

# 💻 SQL Practice Session

This project contains SQL practice exercises to help beginners learn SQL easily.

## What is in this Project?

- **Creating a Database and Tables**
- **Inserting Data into Tables**
- **Running Basic and Advanced Queries**
- **Using Joins, Subqueries, and Functions**

## How to Use This Project

### 1. Create the Database:

```sql
CREATE DATABASE Practice;
USE Practice;
```

### 2. Create Tables:

```sql
CREATE TABLE Employee(
  worker_id INT PRIMARY KEY AUTO_INCREMENT,
  First_name VARCHAR(20),
  Last_name VARCHAR(20),
  Salary INT,
  Joining_Date DATE,
  Department VARCHAR(30)
);

CREATE TABLE Employee_Family(
  Family_id INT,
  Members INT,
  Location VARCHAR(30),
  FOREIGN KEY(Family_id) REFERENCES Employee(worker_id) ON DELETE CASCADE
);
```

### 3. Insert Data: Add sample data into the tables (provided in `Practice_Set.sql`).

### 4. Run SQL Queries:

#### Get all Employee names:

```sql
SELECT First_name FROM Employee;
```

#### Get Employees with the highest salary:

```sql
SELECT * FROM Employee WHERE Salary = (SELECT MAX(Salary) FROM Employee);
```

#### Find the number of employees in each department:

```sql
SELECT Department, COUNT(*) FROM Employee GROUP BY Department;
```

#### Join Employee and Employee_Family tables:

```sql
SELECT e.First_name, e.Last_name, f.Members
FROM Employee e
JOIN Employee_Family f ON e.worker_id = f.Family_id;
```

## How to Run the SQL Scripts
- Open MySQL Workbench or any SQL tool.
- Copy and paste the SQL commands.
- Run the commands step by step.

---

# 🛠️ Future Improvements

- Add difficulty levels to the number guessing game.
- Improve user interfaces for better usability in the task manager and file sorter.
- Introduce new scheduling algorithms in the process scheduling simulator.

---

# 🤝 Contributions

Feel free to fork the repository, submit issues, or create pull requests for improvements.

---

# 📜 License

This project is licensed under the MIT License.

---

# Multithreading Task Simulator

## Overview

This program demonstrates the usage of **multithreading** in C++ to run two tasks concurrently. The tasks are **Task A** and **Task B**, each printing a message with a loop that runs 10 iterations. Both tasks are executed simultaneously using the C++ `<thread>` library, showcasing the power of multithreading in managing multiple tasks in parallel.

## Features

- **Multithreading**: Uses C++ threads to run `taskA()` and `taskB()` concurrently.
- **Task Execution**: Each task prints a message along with its iteration number (from 0 to 9).
- **Sleep Functionality**: A `sleep(1)` function call is used in each task to simulate a delay of 1 second between task iterations.
- **Thread Synchronization**: The `join()` method is used to ensure the main thread waits for the completion of both threads before finishing execution.

## C++ Code Explanation

```cpp
#include<iostream>
#include<thread>
#include <unistd.h>

using namespace std;

void taskA()
{
    for(int i = 0; i < 10; i++)
    {
        sleep(1); // Simulates a 1 second delay between iterations
        cout << "TASK---A" << i << endl; // Prints the task name and iteration number
        fflush(stdout); // Ensures that the output is displayed immediately
    }
}

void taskB()
{
    for(int i = 0; i < 10; i++)
    {
        sleep(1); // Simulates a 1 second delay between iterations
        cout << "TASK---B" << i << endl; // Prints the task name and iteration number
        fflush(stdout); // Ensures that the output is displayed immediately
    }
}

int main()
{
    // Creating two threads to run taskA and taskB concurrently
    thread t1(taskA);
    thread t2(taskB);

    // Ensures the main thread waits for both t1 and t2 to finish
    t1.join();
    t2.join();

    return 0;
}
```

### Code Explanation

- **`#include<iostream>`**: Includes the standard input/output stream library for printing to the console.
- **`#include<thread>`**: Includes the thread library to handle multithreading.
- **`#include<unistd.h>`**: Provides access to the `sleep()` function, used to pause the execution of a thread.
- **`using namespace std;`**: Ensures we don’t have to prefix standard C++ objects like `cout` with `std::`.
  
#### Functions:

- **`taskA()` and `taskB()`**: These two functions run concurrently in separate threads. They print their respective task names and iteration numbers 10 times, with a 1-second pause between each iteration using the `sleep(1)` function.
  
#### Threads:
- **`thread t1(taskA);`** and **`thread t2(taskB);`**: These lines create two threads, `t1` and `t2`, which run `taskA()` and `taskB()` concurrently.
  
#### Synchronization:
- **`t1.join();`** and **`t2.join();`**: These lines ensure that the main thread waits for both threads (`t1` and `t2`) to finish execution before it exits.

### How to Compile and Run

1. **Compile the Program**:
   To compile the program, run the following command in the terminal:

   ```bash
   g++ -std=c++11 -o multithreaded_program multithreaded_program.cpp
   ```

2. **Run the Program**:
   After compiling, run the program using:

   ```bash
   ./multithreaded_program
   ```

---

>>>>>>> 94aa14d (Add File)
