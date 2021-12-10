#pragma once
#include <string>

class Url {
private:
	std::string scheme, authority, path;
public:
	Url(std::string url);
	std::string getScheme();
	std::string getAuthority();
	std::string getPath();
	std::string getUrl();
};
