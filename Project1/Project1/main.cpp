#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		cout << "PrintTest" << endl; //프린트테스트 자체가 const char * 임
		MessageBoxA(NULL, "Msg", "Cap", NULL);
		//메시지박스 push 4개
	}
	return 0;
}