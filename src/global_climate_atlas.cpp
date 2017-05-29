//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "constanten.h"

USEFORM("main.cpp", Form1);
USEFORM("about.cpp", AboutForm);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   try
   {
      Application->Initialize();
      Application->Title = program_name;
      Application->CreateForm(__classid(TForm1), &Form1);
      Application->CreateForm(__classid(TAboutForm), &AboutForm);
      Application->Run();
   }
   catch (Exception &exception)
   {
      Application->ShowException(&exception);
   }
   return 0;
}
//---------------------------------------------------------------------------
