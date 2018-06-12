#include <iostream>

int main(void)
{
	unsigned int len = 0x9999;

	std::string pub;

	pub += "PUB";
	pub += len >> 24;
	pub += len >> 16;
	pub += len >> 8;
	pub += len;
	pub += "end";

	std::cout << pub.c_str() << std::endl;

	return 0;
}
