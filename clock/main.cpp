#include <iostream>
#include <Windows.h>

void time_clock(int &hours, int &minuts, int &seconds)
{
	Sleep(1000);
	seconds++;

	if (seconds > 59) {
		minuts++;
		seconds = 0;
	}
	if (minuts > 59) {
		hours++;
		minuts = 0;
	}
	if (hours > 23) {
		hours = 0;
	}

	system("cls");
}
//void alarm_clock(int &hours, int &minuts, int &seconds, bool &work)
//{
//	int ahours = 0;
//	int aminuts = 0;
//	int aseconds = 0;
//
//	if (work == true) {
//		std::cout << "enter the time when you will be woken up:" << std::endl;
//		std::cout << "hours(0 - 23): ";  std::cin >> ahours; std::cout << std::endl;
//		std::cout << "minuts(0 - 59): ";  std::cin >> aminuts; std::cout << std::endl;
//		std::cout << "seconds(0 - 59): ";  std::cin >> aseconds; std::cout << std::endl;
//	}
//
//	if (ahours > 23 || ahours < 0) { ahours = 0; }
//	if (aminuts > 59 || aminuts < 0) { aminuts = 0; }
//	if (aseconds > 59 || aseconds < 0) { aseconds = 0; }
//
//	if (hours == ahours && minuts == aminuts && seconds == seconds) {
//		for (;;) { std::cout << char(7); }
//	}
//}

int main()
{
	SYSTEMTIME stime;
	GetLocalTime(&stime);

	int hours = stime.wHour;
	int minuts = stime.wMinute;
	int seconds = stime.wSecond;

	//bool work = true;

	for(;;) {
		//alarm_clock(hours, minuts, seconds, work);
		//work = false;

		time_clock(hours, minuts, seconds);
		std::cout << hours << ":" << minuts << ":" << seconds << std::endl;
	}
}