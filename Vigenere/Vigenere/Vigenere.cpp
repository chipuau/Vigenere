/*
	Megan Chipman
	Vigenere Cipher
	December 3, 2018
*/

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	//1. Display Options to User: Encryption and Decryption
	std::cout << "Vigenere Cipher" << std::endl; 
	std::cout << "=====================" << std::endl; 
	std::cout << "1. Encrypt Plaintext" << std::endl;
	std::cout << "2. Decrypt Coded Text" << std::endl; 
	std::cout << std::endl; 

	//2. Grab Input from User
	int userChoice = 0; 
	std::cin >> userChoice; 

    return 0;
}

