# Ride Management System 🚗

# 📌 About the Project

The Ride Management System is a console-based application developed in C++ using Object-Oriented Programming (OOP) principles. It simulates a basic ride-booking system where passenger and driver information can be managed, rides can be handled, and ratings can be recorded.

This project was developed as part of a university C++ programming course to demonstrate practical implementation of OOP concepts.

# ✨ Features

* **Passenger Management:** Manage passenger information.
* **Driver Management:** Manage driver profiles and availability.
* **Ride Management:** Handle ride requests and ride status.
* **Rating System:** Record and validate ride ratings.
* **File Handling:** Store and retrieve records using text files.
* **Data Validation:** Handle invalid inputs and rating values.
* **Admin Module:** Provide administrative functionality.
* **Record Management:** View saved passenger, driver, and ride records.

## 🛠️ Technologies Used

* **Language:** C++
* **Programming Standard:** C++11
* **IDE:** Visual Studio Code
* **Compiler:** GCC (g++)
* **Version Control:** Git and GitHub

## 🧠 OOP Concepts Implemented

This project demonstrates the following concepts:

* Classes and Objects
* Encapsulation
* Abstraction
* Inheritance
* Composition
* Runtime Polymorphism
* Operator Overloading
* Exception Handling
* Standard Template Library (STL)
* File Input/Output (File I/O)

## 📁 Project Structure

```text
Ride-Management-System/
│
├── Include/
│   ├── Admin.hpp
│   ├── Driver.hpp
│   ├── Exceptions.hpp
│   ├── FileManager.hpp
│   ├── Passenger.hpp
│   ├── Rating.hpp
│   ├── Ride.hpp
│   ├── User.hpp
│   └── Vehicle.hpp
│
├── src/
│   ├── Admin.cpp
│   ├── Driver.cpp
│   ├── FileManager.cpp
│   ├── Passenger.cpp
│   ├── Rating.cpp
│   ├── Ride.cpp
│   ├── User.cpp
│   └── Vehicle.cpp
│
├── data/
│   ├── drivers.txt
│   ├── passengers.txt
│   └── rides.txt
│
├── main.cpp
├── rides.txt
└── .gitignore
```

## ⚙️ How to Compile and Run

Make sure GCC (g++) is installed and available in your terminal.

### 1. Clone the Repository

```bash
git clone https://github.com/khansa-2007/Ride-Management-System.git
```

### 2. Navigate to the Project Folder

```bash
cd Ride-Management-System
```

### 3. Compile the Program

Run this command in the project root directory:

```bash
g++ -std=c++11 src/*.cpp main.cpp -IInclude -o main.exe
```

### 4. Run the Program

In PowerShell:

```powershell
.\main.exe
```

## 🎯 Project Objective

The main objective of this project is to strengthen practical C++ programming skills by applying Object-Oriented Programming principles, file handling, data validation, and modular program design in a real-world-inspired ride management scenario.

## 👩‍💻 Author

**Khansa Rasheed**

Computer Science Student

GitHub: [@khansa-2007](https://github.com/khansa-2007)
