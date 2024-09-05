#include "KeyValuePair.h"
#include <iostream>
#include <type_traits>
int main()
{
	KeyValuePair<int, float>* a = new KeyValuePair<int, float>(1, 0.5);
	std::cout << a->getKey() << " " << a->getValue() << std::endl;
	KeyValuePair<int, int> b{1, 3};
	std::cout << b.getKey() << " " << b.getValue() << std::endl;

	// 클래스 템플릿에 매개변수의 디폴트를 모두 지정했거나 생성자에 모든 매개변수를 사용하도뢰 작성된 경우에만 적용된다. => 안됨
	//KeyValuePair c{ 3, 5.5 };
}