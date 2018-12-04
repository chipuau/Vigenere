/*
	Megan Chipman
	Vigenere Cipher
	December 3, 2018
*/

#pragma once

#include <string>
#include <iostream>

class Encrypt
{
public:
	Encrypt();
	~Encrypt();
	static void DoEncryption(std::string plainText, std::string key); 

private: 
	static void PadKey(std::string plaintext, std::string& key); 
};

