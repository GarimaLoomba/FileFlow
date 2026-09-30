# File Management System

A command-line based file management system built from scratch in C for Linux.

The project provides a simple interface for performing common file and directory operations while exploring C programming, Linux system calls, file I/O, directory handling, and command-line interfaces.

## Project Status

🚧 **Currently under development**

The project is being developed incrementally in multiple phases.

### Current Phase

**Phase 1 — CLI Foundation**

Implemented:

* Interactive command-line interface
* Application banner
* `help` command
* `clear` command
* `exit` command
* Basic command validation
* Unknown command handling

Upcoming phases will add actual file and directory management functionality.

---

## Planned Features

The final system is planned to support:

### File Operations

* Create files
* Delete files
* Read files
* Write to files
* Append to files
* Rename files

### Directory Operations

* Create directories
* Remove directories
* List directory contents

### File Management

* Copy files
* Move files
* Search for files
* Display file information

### Linux Features

* File permissions
* Permission modification using `chmod`
* File metadata
* Directory traversal

### CLI Features

* Interactive command prompt
* Command parsing
* Input validation
* Error handling
* Helpful command messages

---

## Project Structure

```text
file-manager/
│
├── src/
│   └── main.c
│
├── include/
│
├── tests/
│
├── LICENSE
├── Makefile
├── README.md
└── .gitignore
```

### Directory Description

| Directory/File | Purpose               |
| -------------- | --------------------- |
| `src/`         | C source files        |
| `include/`     | Header files          |
| `tests/`       | Testing files         |
| `Makefile`     | Build automation      |
| `README.md`    | Project documentation |
| `LICENSE`      | Project license       |
| `.gitignore`   | Files ignored by Git  |

---

## Requirements

* Linux / Ubuntu
* GCC
* GNU Make
* Git

The project is primarily developed and tested on Ubuntu.

---

## Installation

Clone the repository:

```bash
git clone <repository-url>
```

Navigate into the project:

```bash
cd file-manager
```

Compile the project:

```bash
make
```

Run the program:

```bash
make run
```

---

## Available Commands

### `help`

Displays the available commands.

```text
fm> help
```

### `clear`

Clears the terminal.

```text
fm> clear
```

### `exit`

Exits the File Management System.

```text
fm> exit
```

---

## Example

```text
========================================
       FILE MANAGEMENT SYSTEM
========================================

fm> help

Available commands:
  help    - Show available commands
  clear   - Clear the terminal
  exit    - Exit the program

fm> hello

Unknown command: hello
Type 'help' to see available commands.

fm> exit

Exiting File Management System...
```

---

## Technologies

* C
* Linux
* GCC
* GNU Make
* Git

---

## Learning Objectives

This project is being developed to gain practical experience with:

* C programming
* Pointers and strings
* File handling
* Linux system calls
* Directory handling
* File permissions
* Command-line interfaces
* Modular C programming
* Header and source files
* Error handling
* Git and GitHub

---

## Development Roadmap

```text
Phase 1
CLI Foundation
    ↓
Phase 2
File Operations
    ↓
Phase 3
Directory Operations
    ↓
Phase 4
Copy, Move & Search
    ↓
Phase 5
File Metadata & Permissions
    ↓
Phase 6
Command Parser & Error Handling
    ↓
Phase 7
Code Architecture & Logging
    ↓
Phase 8
Testing, Documentation & Viva Preparation
```

---

## License

This project is licensed under the MIT License.
See the `LICENSE` file for details.

---

## Author

Garima Loomba

Computer Science & Artificial Intelligence

This project is being developed as a hands-on C and Linux systems programming project.
