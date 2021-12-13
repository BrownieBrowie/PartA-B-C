#pragma once
#include <iostream>
#include <string>

class ImageMetaData {
private:
	std::string file, image, author, aperture;
	int d, m, y, iso;
	double size, width, height, exposure;
	bool flash;

public:
	std::string getFile();
	void setFile(std::string name);
	std::string getImage();
	void setImage(std::string type);
	int getDay();
	int getMonth();
	int getYear();
	void setDate(int dd, int mm, int yy);
	double getSize();
	void setSize(double ss);
	std::string getAuthor();
	void setAuthor(std::string name);
	void setDimensions(double wi, double he);
	double getWidth();
	double getHeight();
	std::string getAperture();
	void setAperture(std::string apertureS);
	void setExposure(double exposureT);
	double getExposure();
	void setISO(int ISO);
	int getISO();
	void setFlash(bool on);
	bool isFlash();
};
