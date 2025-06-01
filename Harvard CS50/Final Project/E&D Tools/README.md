
# Encryption & Decryption Tool

## Project Overview

The File Encryption Tool is a command-line utility written in C that allows users to securely encrypt and decrypt files. It uses the Advanced Encryption Standard (AES) to ensure that files are protected from unauthorized access. The tool is simple to use and includes error handling for file input/output operations.

## Features

- Encrypt Files: Securely encrypt files using AES-256 encryption.
- Decrypt Files: Decrypt previously encrypted files back to their original form.
- Command-Line Interface: Easily input file paths and passwords directly from the command line.
- Error Handling: Robust error handling and validation for file operations.
  
## Technologies Used

- C Programming Language: Core logic and functionality.
- Standard C Libraries: File handling and command-line parsing.

## Installation

### Prerequisites

- C Compiler: You need a C compiler like GCC installed on your system.

### Windows Installation

1. Install a C compiler such as [MinGW](http://www.mingw.org/).
2. Clone the repository or download the source code.
3. Navigate to the project directory and compile the source code:

   ```bash
   gcc -o file_encryption_tool file_encryption_tool.c -lssl -lcrypto
   ```

### Linux/Mac Installation

1. Install GCC:
   
   ```bash
   sudo apt-get install libssl-dev gcc   # For Ubuntu/Debian
   ```
2. Clone the repository or download the source code.
3. Navigate to the project directory and compile the source code:

   ```bash
   gcc -o file_encryption_tool file_encryption_tool.c -lssl -lcrypto
   ```

## Usage

1. Encrypt a File:
   
   ```bash
   ./file_encryption_tool encrypt <input_file> <output_file> <password>
   ```

   Example:

   ```bash
   ./file_encryption_tool encrypt secret.txt secret.enc mypassword123
   ```

2. Decrypt a File:
   
   ```bash
   ./file_encryption_tool decrypt <input_file> <output_file> <password>
   ```

   Example:

   ```bash
   ./file_encryption_tool decrypt secret.enc secret.txt mypassword123
   ```

3. Help:

   For help and usage instructions:

   ```bash
   ./file_encryption_tool help
   ```

## Example

Imagine you want to encrypt a text file containing sensitive information, such as passwords:

1. Place your sensitive information in a file named `passwords.txt`.
2. Run the encryption command:

   ```bash
   ./file_encryption_tool encrypt passwords.txt passwords.enc mysecurepassword
   ```

3. The encrypted file `passwords.enc` will be created, which you can securely store or transfer.
4. To access the original content, decrypt the file:

   ```bash
   ./file_encryption_tool decrypt passwords.enc passwords.txt mysecurepassword
   ```

## Contributing

If you'd like to contribute to this project, feel free to fork the repository and submit a pull request. Contributions for new features, bug fixes, and improvements are always welcome.

## Video Demo

For a video demonstration of how to use this tool, please visit the following URL:

[Encryption & Decryption Tool Video Demo]
# URL:https://youtu.be/ngbZJTQVDaQ

## Contact

For any questions or issues, please contact [Kachhi Narayandas](Mailto:narayankachhi43@gmail.com).
