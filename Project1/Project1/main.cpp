#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		cout << "PrintTest" << endl; //����Ʈ�׽�Ʈ ��ü�� const char * ��
		MessageBoxA(NULL, "Msg", "Cap", NULL);
		//�޽����ڽ� push 4��
	}
	return 0;
}