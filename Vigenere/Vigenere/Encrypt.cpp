#include "stdafx.h"
#include "Encrypt.h"


Encrypt::Encrypt()
{
}


Encrypt::~Encrypt()
{
}


void Encrypt::DoEncryption(std::string plainText, std::string key)
{
	ConvertToUpper(plainText); 
	ConvertToUpper(key); 
	
	RemoveSpaces(plainText); 
	RemoveSpaces(key); 
	
	PadKey(plainText, key);

	std::string encryption = "";
	int codedLetter = 0; 

	for (int i = 0; i < plainText.length(); i++)
	{ 
		encryption += ((plainText[i] + key[i]) % 26) + 'A';
	}

	std::cout << encryption << std::endl; 

	return; 
}


void Encrypt::PadKey(const std::string plaintext, std::string& key)
{
	//If the key and the plaintext are the same length, do nothing: 
	if (key.length() == plaintext.length())
	{
		return; 
	}

	//If the key is shorter than the plaintext, shorten the key: 
	else if (key.length() > plaintext.length())
	{
		key = key.substr(0, plaintext.length() - 1); 
		return; 
	}

	else
	{
		//Calculate the number of spaces that need to be padded: 
		int toPad = plaintext.length() - key.length();

		std::string paddedKey = key;

		//Pad the key by the number of whole words available: 
		for (int i = 0; i < (toPad / key.length()); i++)
		{
			paddedKey += key;
		}

		//Pad the key with however many remaining letters there are: 
		for (int j = 0; j < (toPad % key.length()); j++)
		{
			paddedKey += key[j];
		}

		key = paddedKey;
	}

}

void Encrypt::ConvertToUpper(std::string& text)
{
	//Convert String to all lowercase in preparation for coding:  
	for (int i = 0; i < text.length(); i++)
	{
		if (islower(text[i]))
		{
			text[i] = toupper(text[i]);
		}
	}
}

void Encrypt::RemoveSpaces(std::string & text)
{
	std::string noSpaces = "";

	//Remove spaces from Plaintext: 
	for (int k = 0; k < text.length(); k++)
	{
		if (isalpha(text[k]))
		{
			noSpaces += text[k];
		}
	}

	text = noSpaces;
}

void Encrypt::DoDecryption(std::string cipherText, std::string key)
{
	ConvertToUpper(cipherText); 
	ConvertToUpper(key); 

	RemoveSpaces(cipherText); 
	RemoveSpaces(key);

	PadKey(cipherText, key); 

	std::string decryption = ""; 

	for (int i = 0; i < cipherText.length(); i++)
	{
		decryption += ((cipherText[i] - key[i] + 26) % 26) + 'A';
	}

	std::cout << decryption << std::endl;

	return;
}