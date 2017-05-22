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
	wstring salida = L"";
	wstring auxiliar = separacionDigitos(entrada);
}
wstring MisDigitos::separacionDigitos(int n)
{
	int divisor = 1;
	int x = tbxEntrada.Text.length();
	tbxSalida.Text = L"";
	int digito = 0;
	wstring salida = L"";
	if (x>1)
	{
		divisor = 1;
		for (int y = 2; y <= x; y++)
		{
			divisor = divisor * 10;
		}
	}
	while (n != 0)
	{
		digito = n / divisor;
		n = n % divisor;
		Sys::Format(salida, L"%d\r\n", digito);
		tbxSalida.Text += salida;
		divisor = divisor / 10;
	}
	return salida;
}

