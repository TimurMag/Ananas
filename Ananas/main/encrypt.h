#pragma once
#include <string>
#include <vector>

ref class encrypt
{
};

std::string MD5hash(std::string);									//MD5 hash generate

std::vector<std::string> RSAgenerateKeys();							//RSA keys creation
std::string RSAencqypt(std::string key, std::string message);		//Message encryption with RSA
std::string RSAdecrypt(std::string key, std::string decrypt);		//Message decryption with RSA