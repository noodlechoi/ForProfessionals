#include "KeyValuePair.h"
#include <iostream>
#include <type_traits>
int main()
{
	KeyValuePair<int, float>* a = new KeyValuePair<int, float>(1, 0.5);
	std::cout << a->getKey() << " " << a->getValue() << std::endl;
	KeyValuePair<int, int> b{1, 3};
	std::cout << b.getKey() << " " << b.getValue() << std::endl;

	// Ŭ���� ���ø��� �Ű������� ����Ʈ�� ��� �����߰ų� �����ڿ� ��� �Ű������� ����ϵ��� �ۼ��� ��쿡�� ����ȴ�. => �ȵ�
	//KeyValuePair c{ 3, 5.5 };
}