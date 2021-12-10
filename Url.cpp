#include "Url.h"

Url::Url(std::string url) {
int position, position1, position2, alpha;
position2 = url.find(":");

for (int x = 0; x < url.size(); x++) {
	if (url[x] == '/' && url[x + 1] == '/') {
		position = x;
		x++;
	}
	else if (url[x] == '/' && url[x + 1] != '/') {
		position1 = x;
		break;
	}
}
scheme = url.substr(0, position2 + 1);
alpha = ((url.size() - position2) - (url.size() - position1)) - 1;
authority = url.substr(position, alpha);

path = url.substr(position1);
}
std::string Url::getScheme() {
	return scheme;
}
std::string Url::getAuthority() {
	return authority;
}
std::string Url::getPath() {
	return path;
}
std::string Url::getUrl() {
	return scheme + authority + path;
}