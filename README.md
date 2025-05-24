# Telecom Billing Management System

A C-based billing management system for telecom operators, featuring dual interfaces for customers and agents with secure file-based data storage.


## Overview
This project provides a console-based solution for managing telecom billing operations, allowing:
- **Customers** to view/pay bills and manage accounts
- **Agents** to perform CRUD operations on customer records  
Data is persisted using file handling in C for reliability.

## Features

### Customer Portal
| Feature            | Description                                  |
|--------------------|----------------------------------------------|
| Account Creation   | Register new customer profiles               |
| Bill Viewing       | Check due amounts                           |
| Payment History    | View past transactions                      |
| Settings           | Update username, phone number or change password |

### Agent Portal
| Feature            | Description                                  |
|--------------------|----------------------------------------------|
| Record Addition    | Add new customer billing entries            |
| Record Listing     | View all customer records                   |
| Record Modification| Edit existing customer data                 |
| Record Search      | Find specific customer records              |
| Record Deletion    | Remove outdated entries                     |

## Tools
- **Language**: C 
- **Compiler**: GCC (via Code::Blocks IDE)
- **Core Libraries**:
  - `<stdio.h>`: File I/O operations
  - `<conio.h>`: Console interface styling
  - `<string.h>`: String manipulation
- **Development**:
  - Code::Blocks 20.03

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/AponGhosh/Telecom-Billing-Management.git
