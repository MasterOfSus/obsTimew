#include <ctime>
#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>

int main() {
	std::string input {""};
	int minutes {};
	std::ofstream text;
	std::cout << "Oh! Hewwooooo wewcum to youw timew!!! 0w0" << std::endl;
	while (true) {
		std::cout << "Wha awe u timing? (.)w(.) ";
		std::cin >> input;
bwoh:
		if (input == "g") {
			std::cout << "YE!! SUPEW CHAWGE!! HOW MUWCH? (!)o(!) ";
			std::cin >> input;
			minutes = std::stoi(input) + 1;
			while(--minutes) {
				text.open("/home/mogus/.config/timew/timewText.txt", std::ios::out);
				text << "Starting in:\n" << minutes << " minutes";
				text.close();
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::minutes(1));
			}
			text.open("/home/mogus/.config/timew/timewText.txt", std::ios::out);
			text<< "\nThe goober should start any minute now! UwU";
			text.close();
		} else if (input == "s") {
			std::cout << "ye... goon sesh! how muwch miwnut?? (o)w(o) ";
			std::cin >> input;
			minutes = std::stoi(input) + 1;
			while(--minutes) {
				text.open("/home/mogus/.config/timew/timewText.txt", std::ios::out);
				text << "Time until next break:\n" << minutes << " minutes";
				text.close();
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::minutes(1));
			}
			text.open("/home/mogus/.config/timew/timewText.txt", std::ios::out);
			text<< "\nThe goober should start the next break any minute now! UwU";
			text.close();
		} else if (input == "b") {
			std::cout << "ye... goon break! how muwch miwnut?? {0}w{0}: ";
			std::cin >> input;
			minutes = std::stoi(input) + 1;
			while (--minutes) {
				text.open("/home/mogus/.config/timew/timewText.txt", std::ios::out);
				text << "Time until next session:\n" << minutes << " minutes";
				text.close();
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::minutes(1));
			}
			text.open("/home/mogus/.config/timew/timewText.txt", std::ios::out);
			text<< "\nThe goober should start the next session any minute now! OwO";
			text.close();
		} else if (input == "q") {
			std::cout << "Boiiiiii (@)w(@)" << std::endl;
			break;
		} else {
			std::cout << "bwuh? pwease say again ;-; ";
			std::cin >> input;
			goto bwoh;
		}
	}
}
