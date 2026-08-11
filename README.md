# CppProject-TPs

This repository contains a collection of C++ practical works ("TPs") completed in class, covering data structures, recursion, operator overloading, and inheritance/polymorphism. Each TP lives in its own folder with its own runnable demo. The code has since been modernized to modern C++17 idioms (rule-of-zero, `override`, RAII/smart-pointer ownership, no `using namespace std;` in headers) and several latent bugs from the original exercises were fixed along the way.

## Contents

| Folder | Topic | Entry point |
|---|---|---|
| [tp1](tp1) | Towers of Hanoi (recursion, composition) | `main2.cpp` |
| [tp2](tp2) | `Time` value type with comparison/increment operators | `main.cpp` |
| [tp3](tp3) | `File`/`Image`/`Text`/`Video` polymorphic hierarchy | `test.cpp` |
| [tp4](tp4) | Reading/sorting `Robot` records from a file | `test.cpp` |
| [tp5](tp5) | Templated `stack<T>` container | `main.cpp` |
| [tp6](tp6) | `Employe` inheritance hierarchy loaded from a file | `main.cpp` |

## Requirements

- A C++17 compiler (e.g. GCC, Clang)
- A text editor or IDE

## Usage

1. Clone the repository: `git clone https://github.com/Naretto95/CppProject-TPs.git`.
2. Navigate to the folder of the TP you want to run.
3. Compile all `.cpp` files in that folder, e.g. `g++ -Wall -std=c++17 *.cpp -o demo`.
4. Run the resulting executable.

tp1 additionally ships a `Makefile` (`make run` from inside `tp1`).

## Contributions

If you find any errors or have suggestions for improvements, please feel free to open a pull request or an issue.

## License
This project is licensed under the terms of the MIT license.
