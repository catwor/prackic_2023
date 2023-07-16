#include "Form1.h"

#include <Windows.h>
#include "SeekTree.h"

using namespace prackic2023;

//void main() {
//	std::ifstream f("output.txt");
//	DLIST l("output.txt", 7);
//	l.print();
//	std::cin.get();
//}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew TopSoft);
    return 0;
}