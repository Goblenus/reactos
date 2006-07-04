/* $Id$
 *
 * PROJECT:         ReactOS Console Configuration DLL
 * LICENSE:         GPL - See COPYING in the top level directory
 * FILE:            dll/win32/console/colors.c
 * PURPOSE:         displays colors dialog
 * PROGRAMMERS:     Johannes Anderwald (johannes.anderwald@student.tugraz.at)
 */

#include "console.h"

INT_PTR 
CALLBACK
ColorsProc(
  HWND hwndDlg,
  UINT uMsg,
  WPARAM wParam,
  LPARAM lParam
)
{
	UNREFERENCED_PARAMETER(hwndDlg)
	UNREFERENCED_PARAMETER(wParam)
	UNREFERENCED_PARAMETER(lParam)

	switch(uMsg)
	{
		case WM_INITDIALOG:
			return TRUE;

		default:
			break;
	}

	return FALSE;
}
