#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	int iCase;

	cin >> iCase;

	if (iCase == 0) //ũ���� �̷������� �̷������� �˼� �ִ�.
	{
		MessageBoxA(NULL, "Clear!!!", "Caption", NULL);
		exit(0);
	} 

	MessageBoxA(NULL, "No", "Error", NULL);

	return 0; //��
}