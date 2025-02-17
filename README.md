# Simple Encryption Program
This is a very rudimentary encryption program for short strings. It allows you to input a string, for example a password, and a key of your choice, and it returns an encrypted version of the string. You can decrypt your string by inputting the encrypted version and your original key. 

An example run of this program is below:

```
Type "e" to encrypt and "d" to decrypt
e
Input the string you'd like to encrypt
Hell0World!
Input the encryption key you'd like to use (any number between 1 and 10). You'll need this number to decrypt your string
10
Your encrypted string is Rovv:ay|vn+
```

Here is the program used to decrypt the encryption shown above:
```
Type "e" to encrypt and "d" to decrypt
d
Input the string you'd like to decrypt
Rovv:ay|vn+
Input the encryption key you used to encrypt this string
10
Your decrypted string is Hell0World!
```

To use this program, simply clone the repository, navigate to the folder in terminal, run the command ```./encryption```, and follow the given prompts. If you would like to modify the code in any way, you can recompile using the command ```g++ -o encryption main.cpp``` and run as above. 

Note that this program makes no claims of efficacy or security. Anyone with both the encrypted version of your string and the key could use this program to get the decrypted version. Even if the key was not known, it would be easy to try all possible keys. The primary purpose of this program is to mess around with and look at. 
