#include "Macro.h"
#include <locale>

vector<string> libGames;

int main()
{
	const char  Letters[] = "ABCDEFGHIJKLMNOPQRSTUVWX*-+!@#$%¨&*()_{}[]´`^~;YZabcdefghijklmnopqrstuvwxyz0123456789/";
	string Title = "";
	for (int i = 0; i < 150; i++)
		Title += Letters[rand() % sizeof(Letters) + 1];


	SetConsoleTitleA(Title.c_str());


	setlocale(LC_ALL, "pt-br.UTF-8");

	wprintf(L"╔══╗───╔═══╗╔═══╗─╔╗╔═══╗────╔══╗─╔╗─╔╗─────╔═╦═╗──────────────\n");
	wprintf(L"║═╦╝╔╦╗║╔═╗║║╔═╗║╔╝║║╔═╗║╔═╦╗║╔╗║╔╝║─║╚╗╔══╗║║║║║╔═╗─╔═╗╔═╗─╔╗─\n");
	wprintf(L"║╔╝─║╔╝╚╝╔╝║╚╝╔╝║║╬║║║║║║║║║║║╔╗║╚╗║─║╔╣╚══╝║║║║║║╬╚╗║╬║║╬╚╗║╚╗\n");
	wprintf(L"╚╝──╚╝─╔╗╚╗║╔╗╚╗║╚═╝║║║║║╚╩═╝╚══╝─║║─╚═╝────╚╩═╩╝╚══╝╠╗║╚══╝╚═╝\n");
	wprintf(L"───────║╚═╝║║╚═╝║───║╚═╝║────────╔╝╚╗────────────────╚═╝───────\n");
	wprintf(L"───────╚═══╝╚═══╝───╚═══╝────────╝──╚──────────────────────────\n");
	setlocale(LC_ALL, "");
	ConsoleProperties::SetColor(RED, BLACK);
	char Termo[] = "O Proprietário deste loader não se responsabiliza\nexpressa ou tacitamente pelo uso indevido das\ninformações dos instrumentos, materiais disponibilizados\nou dos programas utilizados, para quaisquer que\nsejam os fins feito por qualquer usuário, sendo\nde inteira responsabilidade deste as eventuais lesões\na direito próprio ou de terceiros, causadas ou não por este\nuso inadequado.";
	for (int i = 0; i < sizeof(Termo); i++)
	{
		cout << Termo[i];
		Sleep(1);
	}
	getchar();
	system("cls");
	setlocale(LC_ALL, "pt-br.UTF-8");
	ConsoleProperties::SetColor(GREEN, BLACK);
	wprintf(L"╔══╗──────╔╗───╔╗─────╔═╦═╗─────────────\n");
	wprintf(L"║══╣╔═╗╔╦╗╠╣╔═╗║╚╗╔══╗║║║║║╔═╗─╔═╗╔╦╗╔═╗\n");
	wprintf(L"╠══║║═╣║╔╝║║║╬║║╔╣╚══╝║║║║║║╬╚╗║═╣║╔╝║╬║\n");
	wprintf(L"╚══╝╚═╝╚╝─╚╝║╔╝╚═╝────╚╩═╩╝╚══╝╚═╝╚╝─╚═╝\n");
	wprintf(L"────────────╚╝──────────────────────────\n");

	setlocale(LC_ALL, "");
	int gameSelected = 0;
	string macroSelected = "";
	libGames.push_back("Em Breve BlackShot");
	libGames.push_back("Em Breve PubgLite");
	libGames.push_back("CallOfDutyWarzone");

	ConsoleProperties::SetColor(RED, BLACK);
	cout << "Selecione uma opção:\n(1) - Ativar Macro\n(2) - Duplo clique\n(3) - Cliques Infinitos" << endl;
	ConsoleProperties::SetColor(GREEN, BLACK);
	cout << "Digitado: ";
	cin >> gameSelected;

	switch (gameSelected)
	{
		case 1:
			system("cls");
			ConsoleProperties::SetColor(RED, BLACK);
			cout << "Digite uma opcao de Jogo:" << endl;
			for (auto i = libGames.begin(); i < libGames.end(); i++)
				cout << *i << endl;
			ConsoleProperties::SetColor(GREEN, BLACK);
			cout << "Digitado: ";
			cin >> macroSelected;

			if (macroSelected == "CallOfDutyWarzone")
				Games::CallOfDutyWarzone();

		break;

		case 2:
			Options::DoubleClick();
		break;

		case 3:
			Options::InfiniteClick();
		break;

		default:
			system("cls");
			ConsoleProperties::SetColor(RED, BLACK);
			cout << "Opção inválida, reabra o programa!";
			getchar();
			ExitProcess(0);
		break;
	}
	getchar();
	return true; 
}