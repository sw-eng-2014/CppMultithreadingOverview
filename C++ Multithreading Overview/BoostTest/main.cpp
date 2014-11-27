#include<iostream>
#include<boost\thread.hpp>

void threadFunc() {
	std::cout << "Success: New thread was created" << std::endl;
}
int main(int argc, char ** argv) {
	std::cout << "Trying to create new thread..." << std::endl;
	boost::thread myThread(threadFunc);
	myThread.join();
	std::cout << "New thread finished job" << std::endl;
	return 0;
}