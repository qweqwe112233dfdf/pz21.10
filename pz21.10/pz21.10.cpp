#include <iostream>
int main() {

	//task 1
	//{
	//	char laptop[] = "laptop";
	//	char desktop[] = "desktop";

	//	int result = strcmp(laptop, desktop);

	//	if (result == 0) {
	//		std::cout << laptop << " equals " << desktop << '\n';
	//	}
	//	else if (result < 0) {
	//		std::cout << laptop << " less than " << desktop << '\n';
	//	}
	//	else {
	//		std::cout << desktop << " greater than " << laptop << '\n';
	//	}

	//}
	//task 2
	{
		char text[256];
		std::cout << "enter some text: " << '\n';
		std::cin.getline(text, 256);
		int count = std::strlen(text);
		std::cout << "general amount of symbols are " << count << '\n';
	}
}
