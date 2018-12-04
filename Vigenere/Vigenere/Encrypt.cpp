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
	//Convert Plaintext to all lowercase: 
	for (int i = 0; i < plainText.length(); i++)
	{
		if (isupper(plainText[i]))
		{
			plainText[i] = tolower(plainText[i]); 
		}
	}

	//Convert Key to all lowercase: 
	for (int j = 0; j < key.length(); j++)
	{
		if (isupper(key[j]))
		{
			key[j] = tolower(key[j]); 
		}
	}

	std::string noSpacesPlain = "";

	//Remove spaces from Plaintext: 
	for (int k = 0; k < plainText.length(); k++)
	{
		if (isalpha(plainText[k]))
		{
			noSpacesPlain += plainText[k]; 
		}
	}

	plainText = noSpacesPlain; 
 

	std::string noSpacesKey = "";

	//Remove spaces from Key: 
	for (int l = 0; l < key.length(); l++)
	{
		if (isalpha(key[l]))
		{
			noSpacesKey += key[l];
		}
	}

	std::cout << noSpacesKey << std::endl; 
	key = noSpacesKey; 

	PadKey(plainText, key);

	return; 
}

void Encrypt::PadKey(std::string plaintext, std::string& key)
{
	
	int toPad = plaintext.length() - key.length(); 
	int wholeWords = toPad / key.length(); 

	std::string paddedKey = key; 

	for (int i = 0; i < wholeWords; i++)
	{
		paddedKey += key; 
	}


		for (int j = 0; j < (toPad % key.length()); j++)
		{
			paddedKey += key[j]; 
		}

		key = paddedKey; 
		std::cout << plaintext << std::endl; 
		std::cout << key << std::endl; 
}