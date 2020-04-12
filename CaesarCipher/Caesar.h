#pragma once
#include <iostream>

class Caesar
{
	std::string _alphabet;
	int _key;
public:
	Caesar();
	std::string Encrypt(std::string message);
	std::string Decrypt(std::string encrypted_message);

};



