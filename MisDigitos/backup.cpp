#include "stdafx.h"  //________________________________________ MisDigitos.cpp
#include "MisDigitos.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	MisDigitos app;
	return app.BeginDialog(IDI_MisDigitos, hInstance);
}

void MisDigitos::Window_Open(Win::Event& e)
{
}

void MisDigitos::tbxEntrada_Change(Win::Event& e)
{
	int entrada = tbxEntrada.IntValue;
	wstring salida =L"";
	salida = entrada;
	std::reverse(salida.begin(), salida.end());
	tbxSalida.Text = salida;
	entrada = tbxSalida.IntValue;
	wstring auxiliar=separacionDigitos(entrada);
}
wstring MisDigitos::separacionDigitos(int n)
{
	tbxSalida.Text = L"";
	int digito = 0;
	wstring salida = L"";
	while (n != 0)
	{
		digito = n % 10;
		n = n / 10;
		Sys::Format(salida, L"%d\r\n", digito);
		tbxSalida.Text += salida;
	}
	return salida;
}

