#include<iostream>
#include<chrono>
#include<windows.h>
class Timer {
	using clock_t = std::chrono::steady_clock;
	using timepoint_t = clock_t::time_point;
private:
	timepoint_t begin;
public:
	Timer()
	{
		start();
	}
	~Timer() noexcept
	{
	}
	void start() {
		begin = clock_t::now();
	}
	void stop() {
		auto end = clock_t::now();
		std::cout << std::chrono::duration_cast <std::chrono::milliseconds>

			(end - begin).count() << std::endl;

	}

};
int main()
{
	Timer timer = Timer();
	std::cout << "Hello, World!" << std::endl;
	Sleep(10);
	timer.stop();
	timer.start();
	timer.stop();
	system("pause");

}
