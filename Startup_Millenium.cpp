#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>

using namespace std;

void ascii()
{
	string one = " __ _             _                        _ _ _            _                 ";
	string two = "/ _\\ |_ __ _ _ __| |_ _   _ _ __     /\\/\\ (_) | | ___ _ __ (_)_   _ _ __ ___  ";
	string thr = "\\ \\| __/ _` | '__| __| | | | '_ \\   /    \\| | | |/ _ \\ '_ \\| | | | | '_ ` _ \\ ";
	string fou = "_\\ \\ || (_| | |  | |_| |_| | |_) | / /\\/\\ \\ | | |  __/ | | | | |_| | | | | | |";
	string fiv = "\\__/\\__\\__,_|_|   \\__|\\__,_| .__/  \\/    \\/_|_|_|\\___|_| |_|_|\\__,_|_| |_| |_|";
	string six = "                           |_|                                                ";
	cout << one << endl << two << endl << thr << endl << fou << endl << fiv << endl << six << endl << endl;
}

int main() 
{
	int num = 0;
	string dir = "";
	ascii();
	cout << "\nInput the count of cycle:";
	cin >> num;
	cout << "Starting Startup Millenium " << num << " times..." << endl;
	system("taskkill /F /IM gmod.exe");
	for (int i = 1; i <= num; i++)
	{
		cout << "Starting " << i << " time..." << endl;
		system("Start hl2.exe");
		Sleep(10000);
		system("taskkill /F /IM gmod.exe");
		Sleep(250);
	}
}
