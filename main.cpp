#include <iostream>

using namespace std;

void decrypt() {
  cout << "Input the string you'd like to decrypt" << endl;

  string input;
  int n;

  cin >> input;

  cout << "Input the encryption key you used to encrypt this string" << endl;

  cin >> n;

  cout << n << endl;

  for (int i = 0; i < input.length(); i++) {
    input[i] = (input[i]- '!' + 93*2)%93 - n +'!';
  }

  cout << "Your decrypted string is " << input << endl;
}

void encrypt() {
  cout << "Input the string you'd like to encrypt" << endl;

  string input;

  cin >> input;

  cout << "Input the encryption key you'd like to use (any number between 1 and 10). You'll need this number to decrypt your string" << endl;

  int n;

  cin >> n;

  for (int i = 0; i < input.length(); i++) {
    input[i] = '!' + (input[i] - '!' + n)%93;
  }

  cout << "Your encrypted string is " << input << endl;
}

int main() {
    cout << "Type \"e\" to encrypt and \"d\" to decrypt" << endl;

    char input;

    cin >> input;

    if (input == 'e') {
      encrypt();
    }
    else if (input == 'd') {
      decrypt();
    }
    else {
      cout << "Invalid input. Exiting program now." << endl;
    }

    return 0;
}