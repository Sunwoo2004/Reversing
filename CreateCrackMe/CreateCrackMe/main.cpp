#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	int iCase;

	cin >> iCase;

	if (iCase == 0) //크랙이 이런식으로 이뤄지는지 알수 있다.
	{
		MessageBoxA(NULL, "Clear!!!", "Caption", NULL);
		exit(0);
	} 

	MessageBoxA(NULL, "No", "Error", NULL);

	return 0; //끝
}