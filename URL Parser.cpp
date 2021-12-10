// Code Created by Bouraoui Elfeghih
#include <iostream>
#include <string>
#include "Url.h"

int main() {
	std::string url;
	std::cout << "Please Enter a URL: ";
	std::cin >> url;
	Url Parser(url);
	std::cout << std::endl;
	std::cout << "Scheme: " << Parser.getScheme() << std::endl;
	std::cout << "Authority: " << Parser.getAuthority() << std::endl;
	std::cout << "Path: " << Parser.getPath() << std::endl;
	return 0;
}