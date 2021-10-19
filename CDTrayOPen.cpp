#include <Windows.h>

int main() {
	mciSendString(L"set cdaudio door open", NULL, NULL, NULL);
	return EXIT_SUCCESS;
}