#include "Form1.h"

#include <Windows.h>
#include "SeekTree.h"

using namespace prackic2023;

//void main() {
//	std::ifstream f("output.txt");
//	SeekTree t(f, 7);
//	std::list<Student> l;
//	t.best_students(l);
//	for (auto& i : l)
//		std::cout << i << '\n';
//	std::cin.get();
//}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew TopSoft);
    return 0;
}