//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "about.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAboutForm *AboutForm;
//---------------------------------------------------------------------------


__fastcall TAboutForm::TAboutForm(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TAboutForm::OKClick(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------



void __fastcall TAboutForm::DeveloperEditClick(TObject *Sender)
{
   OKButton -> SetFocus();                                 // Focus naar OK button (Caret is zo verdwenen)
   AboutWebSiteEdit -> Font -> Color = clRed;              // na eerste bezoek link rood maken

   ShellExecute(NULL, "open", "http://climexp.knmi.nl", 0, 0, SW_SHOWNORMAL);

}
//---------------------------------------------------------------------------




