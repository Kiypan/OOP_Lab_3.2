#pragma once
#include "CHardDrive.h"

class Computer
{
	HardDrive _hardDrive;
	std::string _brand;
	int _price;
public:

	HardDrive GetHardDrive() const { return _hardDrive; }
	std::string GetBrand() const { return _brand; }
	int GetPrice() const { return _price; }

	void SetHardDrive(const HardDrive &value) { _hardDrive = value; }
	void SetBrand(const std::string &value) { _brand = value; }
	void SetPrice(const int& value);

	Computer();
	Computer(const int &size, const std::string &brand, const int &price);
	Computer(const  Computer& s);

	Computer& operator = (const  Computer& s);
	operator std::string () const;

	friend std::ostream& operator << (std::ostream& out, const  Computer& s);
	friend std::istream& operator >> (std::istream& in, Computer& s);
};

