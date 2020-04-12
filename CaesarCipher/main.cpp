#include <iostream>
#include <string>
#include "Caesar.h"

using namespace std;

int main() {
	Caesar encoder;
	Caesar decoder;
	string message;


	cout << "Enter a message: ";
	getline(cin, message);
	cout << endl;
	string cipher_text = encoder.Encrypt(message);
	cout<< "Cipher text: " << endl << cipher_text << endl;
	string deciphered_text = decoder.Decrypt(cipher_text);
	cout << "Deciphered text: "<< endl << deciphered_text << endl;

	return 0;
}