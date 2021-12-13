#include "ImageMetaData.h"

	std::string ImageMetaData::getFile() {
		return file;
	}

	void ImageMetaData::setFile(std::string name) {
		file = name;
	}
	std::string ImageMetaData::getImage() {
		return image;
	}

	void ImageMetaData::setImage(std::string type) {
		if (type == "PNG" || type == "JPEG")
			image = type;
		else
			std::cout << type << " : Image Type Is not Supported" << std::endl;
	}

	int ImageMetaData::getDay() {
		return d;
	}

	int ImageMetaData::getMonth() {
		return m;
	}

	int ImageMetaData::getYear() {
		return y;
	}

	void ImageMetaData::setDate(int dd, int mm, int yy) {
		if (dd > 0 && dd < 32 && mm < 13 && yy > 0) {
			d = dd;
			m = mm;
			y = yy;
		}
		else
			std::cout << "This is an Invalid Date" << std::endl;
	}

	double ImageMetaData::getSize() {
		return size;
	}

	void ImageMetaData::setSize(double ss) {
		if (ss >= 0)
			size = ss;
		else
			std::cout << "This is an Invalid Size" << std::endl;
	}

	std::string ImageMetaData::getAuthor() {
		return author;
	}

	void ImageMetaData::setAuthor(std::string name) {
		author = name;
	}

	void ImageMetaData::setDimensions(double wi, double he) {
		if (wi >= 0 && he >= 0) {
			width = wi;
			height = he;
		}
		else {
			std::cout << "These are Invalid Dimensions" << std::endl;
		}
	}

	double ImageMetaData::getWidth() {
		return width;
	}

	double ImageMetaData::getHeight() {
		return height;
	}

	std::string ImageMetaData::getAperture() {
		return aperture;
	}

	void ImageMetaData::setAperture(std::string apertureS) {
		if (apertureS.size() > 2 && apertureS.at(0) == 'f' && apertureS.at(1) == '/')
			aperture = apertureS;
		else
			std::cout << "This is an Invalid Aperture Size" << std::endl;
	}

	void ImageMetaData::setExposure(double exposureT) {
		if (exposureT >= 0)
			exposure = exposureT;
		else
			std::cout << "This is an Invalid ExposureTime" << std::endl;
	}

	double ImageMetaData::getExposure() {
		return exposure;
	}

	void ImageMetaData::ImageMetaData::setISO(int ISO) {
		iso = ISO;
	}

	int ImageMetaData::getISO() {
		return iso;
	}
	void ImageMetaData::setFlash(bool on) {
		flash = on;
	}
	bool ImageMetaData::isFlash() {
		return flash;
	}

void print(ImageMetaData metaData) {
	std::cout << "File Name: " << metaData.getFile() << std::endl;
	std::cout << "Image Type: " << metaData.getImage() << std::endl;
	std::cout << "Date Created: " << metaData.getDay() << "/" << metaData.getMonth() << "/" << metaData.getYear() << std::endl;
	std::cout << "Size: " << metaData.getSize() << std::endl;
	std::cout << "Author Name: " << metaData.getAuthor() << std::endl;
	std::cout << "Image Dimensions: " << metaData.getWidth() << "x" << metaData.getHeight() << std::endl;
	std::cout << "Aperture Size: " << metaData.getAperture() << std::endl;
	std::cout << "Exposure time: " << metaData.getExposure() << std::endl;
	std::cout << "ISO value: " << metaData.getISO() << std::endl;
	std::cout << "Flash enabled: " << metaData.isFlash() << std::endl;
	std::cout << std::endl;
}

int main() {
	ImageMetaData metaData;
	metaData.setFile("File 1");
	metaData.setImage("JPEG");
	metaData.setDate(6, 12, 2001);
	metaData.setSize(32);
	metaData.setAuthor("Alexander Le");
	metaData.setDimensions(5, 7);
	metaData.setAperture("f/4");
	metaData.setExposure(1 / 30);
	metaData.setISO(650);
	metaData.setFlash(false);
	print(metaData);
	return 0;
}