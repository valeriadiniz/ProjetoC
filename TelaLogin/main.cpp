/*
	Name: Tela de Login
	Copyright:
	Author: Valéria Diniz
	Date: 19/09/20 22:23
	Description: Minha primeira tela utilizando c++
*/

#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include "resource.h"
#include <iostream>

HINSTANCE hInst;
using namespace std;

BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
    }
    return TRUE;

    case WM_CLOSE:
    {
        EndDialog(hwndDlg, 0);
    }
    return TRUE;

    case WM_COMMAND:
    {


        switch(LOWORD(wParam))
        {

        case Ok_1:
            {
             char usuario[1024];
             char senha[1024];
             GetDlgItemText(hwndDlg, Login_1, usuario, sizeof(usuario));
             //printf("%s\n", usuario);
             GetDlgItemText(hwndDlg, Senha_1, senha, sizeof(senha));
             //printf("%s\n", senha);


             if(strcmp(usuario, "Valeria") == 0 && strcmp(senha, "12345") == 0){

             printf("Login realizado com sucesso!\n\n ");

             }


                else{
             printf("Login invalido, tente novamente!\n\n ");

		}
            }
             break;
        }

    }
    return TRUE;
    }
    return FALSE;
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst=hInstance;
    InitCommonControls();
    return DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DlgMain);
}
