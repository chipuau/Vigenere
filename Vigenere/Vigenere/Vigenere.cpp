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
	int userChoice = 0;
	std::string plainText = "";
	std::string key = ""; 

	while (userChoice != 3)
	{
		//1. Display Options to User: Encryption and Decryption
		std::cout << "Vigenere Cipher" << std::endl;
		std::cout << "=====================" << std::endl;
		std::cout << "1. Encrypt Plaintext" << std::endl;
		std::cout << "2. Decrypt Ciphertext" << std::endl;
		std::cout << "3. Exit" << std::endl;
		std::cout << std::endl;

		//2. Grab Input from User
		std::cin >> userChoice;

		//3. Evaluate Input
		switch (userChoice)
		{
			case 1:
				//Case 1: Encrypt Plaintext: 
				std::cout << "Plaintext: ";
				std::cin >> plainText;

				std::cout << "Key: "; 
				std::cin >> key; 

				std::cout << std::endl; 
				break;

			case 2:
				break;

			case 3: 
				break; 

			default:
				std::cout << "Invalid Option." << std::endl;
				std::cout << std::endl;
				break;
		}
	}
	

    return 0;
}

