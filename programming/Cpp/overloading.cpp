#include <iostream>

// 函式多載 (function overloading) 
void Print(const char*);
void Print(char);


int main(){
	// 除了名稱之外，呼叫函式時也會依照傳入的引數(argument) 與參數(parameter)的相似性
	// 決定呼叫的是哪個函式 
	Print("Hello");
	Print('\n');
	Print("world!");
	return 0;
}

void Print(const char* str) {
	std::cout << str;
}

void Print(char ch) {
	std::cout << ch;
}

