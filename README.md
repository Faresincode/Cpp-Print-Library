# Cpp-Print-Library
Utility C++ class for printing, string manipulation, random generators, math helpers, and formatting.

# 📘 clsPrint

`clsPrint` is a **C++ utility class** that provides a wide range of helper functions for **printing, random generation, math operations, string manipulation, encryption, and formatting**.  
It is designed to simplify common tasks in **competitive programming, teaching, or small utility projects**.

---

## ✨ Features

- 🔢 **Number Utilities**
  - Prime, Odd, Even, Palindrome, Perfect numbers
  - Fibonacci sequence (iterative & recursive)
  - Digit-by-digit printing

- 🔤 **String & Character Utilities**
  - Convert to **uppercase** / **lowercase**
  - Extract **vowels**, **first letters**, or **each word**
  - Encrypt & Decrypt text with a numeric key
  - Generate random words, characters, or license-style keys

- 📅 **Date & Formatting Helpers**
  - Short names for **days** and **months**
  - Indentation with **tabs** and **newlines**
  - Reset & customize console color
  - Save strings to file

- 🎲 **Random Generators**
  - Random letters (upper/lowercase)
  - Random digits / special characters
  - Random license-style keys (`XXXX-XXXX-XXXX-XXXX`)

---

## 📂 Project Structure

```
clsPrint/
│── clsPrint.h     # The utility class
│── main.cpp       # Example test program
│── README.md      # Project documentation
│── .gitignore     # Ignore build files
│── LICENSE        # MIT License (optional)
```

---

## 🚀 Usage

### Include the class
```cpp
#include "clsPrint.h"
#include <iostream>
using namespace std;
```

### Example Program
```cpp
int main() {
    clsPrint::Print("=== clsPrint Demo ===\n\n");

    cout << "Prime numbers (1-20): ";
    clsPrint::PrintPrimeNumbers(1, 20);

    cout << "Random Key: " << clsPrint::GenerateKey() << "\n";

    string txt = "HelloWorld";
    string enc = clsPrint::EncryptText(txt, 2);
    cout << "Encrypted: " << enc << "\n";
    cout << "Decrypted: " << clsPrint::DecryptText(enc, 2) << "\n";

    cout << "Fibonacci (first 10 numbers): ";
    clsPrint::PrintFibonatchiSerie(10);
    cout << "\n";

    return 0;
}
```

---

## ⚡ Example Output
```
=== clsPrint Demo ===

Prime numbers (1-20): 2 3 5 7 11 13 17 19
Random Key: WXYZ-ASDF-QWER-ZXCV
Encrypted: JgnnqYqtnf
Decrypted: HelloWorld
Fibonacci (first 10 numbers): 0 1 1 2 3 5 8 13 21 34
```


## 📜 License
This project is licensed under the **MIT License**.  
You are free to use, modify, and distribute it.
