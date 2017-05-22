#pragma once  //______________________________________ MisDigitos.h  
#include "Resource.h"
class MisDigitos : public Win::Dialog
{
public:
	MisDigitos()
	{
	}
	~MisDigitos()
	{
	}
	wstring separacionDigitos(int n);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxEntrada;
	Win::Textbox tbxSalida;
	Win::Textbox tbx3;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(472);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(481);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"MisDigitos";
		lb1.Create(NULL, L"Entrada", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 18, 15, 117, 25, hWnd, 1000);
		lb2.Create(NULL, L"Salida", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 18, 52, 116, 25, hWnd, 1001);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 134, 15, 105, 25, hWnd, 1002);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_PASSWORD | ES_LEFT | ES_WINNORMALCASE, 18, 77, 447, 397, hWnd, 1003);
		tbx3.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 296, 19, 128, 34, hWnd, 1004);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
		tbx3.Font = fontArial014A;
	}
	//_________________________________________________
	void tbxEntrada_Change(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (tbxEntrada.IsEvent(e, EN_CHANGE)) {tbxEntrada_Change(e); return true;}
		return false;
	}
};
