#include "Macro.h"

void Games::CallOfDutyWarzone()
{
	bool Actived = true;
	system("cls");
	ConsoleProperties::SetColor(GREEN, BLACK);
	cout << "Macro para o jogo CallOfDutyWarzone Ativado! Nao feche essa janela!";
	while (true) {
		if (GetAsyncKeyState(VK_INSERT) & 1) {
			Actived = !Actived;
			if (Actived)
			{
				system("cls");
				ConsoleProperties::SetColor(GREEN, BLACK);
				cout << "Macro para o jogo CallOfDutyWarzone Ativado! Nao feche essa janela!";
			}
			else
			{
				system("cls");
				ConsoleProperties::SetColor(RED, BLACK);
				cout << "Macro para o jogo CallOfDutyWarzone Desativado! Nao feche essa janela!";
			}
		}

		if (Actived) {
			
			if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) > 0) {
				mouse_event(MOUSEEVENTF_MOVE, 0, 5, 0, 0);
				Sleep(70);
			}
		}
	}
}


void Options::DoubleClick()
{
	bool Actived = true;
	system("cls");
	ConsoleProperties::SetColor(GREEN, BLACK);
	cout << "Duplo Clique Ativado! Nao feche essa janela!";
	while (true) {
		if (GetAsyncKeyState(VK_INSERT) & 1) 
		{
			Actived = !Actived;

			if (Actived)
			{
				system("cls");
				ConsoleProperties::SetColor(GREEN, BLACK);
				cout << "Duplo Clique Ativado! Nao feche essa janela!";
			}
			else
			{
				system("cls");
				ConsoleProperties::SetColor(RED, BLACK);
				cout << "Duplo Clique Desativado! Nao feche essa janela!";
			}
		}

		if (Actived) {
			if (GetAsyncKeyState(VK_LBUTTON) < 0) {
				Sleep(250);
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}
		}
	}
}


void Options::InfiniteClick()
{
	bool Actived = TRUE;
	system("cls");
	ConsoleProperties::SetColor(GREEN, BLACK);
	cout << "Clique Infinito Ativado! Nao feche essa janela!";
	while (true) {
		if (GetAsyncKeyState(VK_INSERT) & 1) 
		{
			Actived = !Actived;

			if (Actived)
			{
				system("cls");
				ConsoleProperties::SetColor(GREEN, BLACK);
				cout << "Clique Infinito Ativado! Nao feche essa janela!";
			}
			else
			{
				system("cls");
				ConsoleProperties::SetColor(RED, BLACK);
				cout << "Clique Infinito Desativado! Nao feche essa janela!";
			}
		}

		if (Actived) {
			if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) > 0) {
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				Sleep(10);
			}
		}
	}
}


void ConsoleProperties::SetColor(int fgColor, int bgColor) {
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(colors, ((16 * bgColor) + fgColor));
}