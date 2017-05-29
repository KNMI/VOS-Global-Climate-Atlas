//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "about.h"
#include "dir.h"                          // getcwd
#include "fstream.h"                      // ifstream
//#include "constanten.h";
#include "htmlhelp.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner)
{
   ifstream is;
   //const int MAXLENGTH = 255;
   //const AnsiString desktop_sub_dir = "\\desktop\\";
   //char wave_climate_atlas_root_path[MAXPATHLENGTH] = "";
   AnsiString volledig_desktop_path = "";
   AnsiString info = "";
   AnsiString desktop_name = "";

   /*
   //Image1 -> Width = Screen -> Width - 20;      // op deze manier de plaatjes altijd in midden van het scherm (i.v.m. center)

                                                // -20 i.v.m. breedte vertical scrollbar
   // nadeel: bij printen kan een deel niet geprint worden !

   // mogelijke scherm dimensies:
   // 800 * 600
   // 1024 * 768  (typisch 15 inch tft, 17 inch crt)
   // 1152 * 864
   // 1280 * 960
   // 1280 * 1024 (typisch 17 en 19 inch tft)
   // 1600 * 1200 (typisch 20 inch tft)
   // 1680 * 1050 (typisch 20 inch tft )
   // 2048 * 1536
   //
   //
   // nb files moeten van type bmp of jpg zijn (bij jpg #include <jpeg.hpp>)
   */


   /* laden HTMLHelp OCX voor HTML (chm) help */
   hHelpOCX = ::LoadLibrary("hhctrl.ocx");
   if (!hHelpOCX)
      ::MessageBox(0, "Cannot use the html help", "TurboWin Error", MB_OK | MB_ICONERROR);


   /* root dir van deze Global Climate Atlas module bepalen */
   Bepaal_Root_Dir();

   /* desktop foto */
   if (Screen -> Width <= 1280 && Screen -> Height <= 1024)
   {
      Image1 -> Width = 1280;
      Image1 -> Height = 1024;
      Image1 -> Stretch = false;
      desktop_name = "desktop_gca_1280_1024.jpg";
   }
   else if (Screen -> Width <= 2288 && Screen -> Height <= 1712)
   {
      Image1 -> Width = 2288;
      Image1 -> Height = 1712;
      Image1 -> Stretch = false;
      desktop_name = "desktop_gca_2560_1920.jpg";
   }
   else
   {
      desktop_name = "unknown";     // dit betekent dan dat er gewoon niets gebeurd (geen melding o.i.d) het desktopvlak blijft wit
   }



   //getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_desktop_path = global_climate_atlas_root_path + desktop_sub_dir + desktop_name;

   is.open(volledig_desktop_path.c_str(), ios::in);
   if (is)
   {
      is.close();
      Image1 -> Picture -> LoadFromFile(volledig_desktop_path.c_str());
   }
   // indien desktop file niet te opnenen gewoon niets doen

   //else
   //{
   //   info = "Unable to open desktop";
   //   info += " (";
   //   info += volledig_desktop_path;
   //   info += ")";
   //   ::MessageBox(0, info.c_str(), "Wave Climate Atlas error", MB_OK);
   //} // else
}


void TForm1::Bepaal_Root_Dir()
{
   /* initialisatie */
   global_climate_atlas_root_path[0] = '\0';


   getcwd(global_climate_atlas_root_path, MAXPATHLENGTH);
}




//---------------------------------------------------------------------------

void __fastcall TForm1::Quit_Program(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InfoAboutClick(TObject *Sender)
{
   //AboutForm -> ShowModal();    // op deze manier: na verslepen niet meer in centrum !
    AboutForm = new TAboutForm(this);
    AboutForm->ShowModal();
    delete AboutForm;
}
//---------------------------------------------------------------------------


void TForm1::ShowChart(AnsiString chart_name)
{
   ifstream is;
   //const int MAXLENGTH = 255;
   //const AnsiString chart_sub_dir = "\\charts\\";
   //char wave_climate_atlas_root_path[MAXLENGTH] = "";
   AnsiString volledig_chart_path = "";
   AnsiString info = "";


   //getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_chart_path = global_climate_atlas_root_path + chart_sub_dir + chart_name;

   is.open(volledig_chart_path.c_str(), ios::in);
   //b.v. is.open("c:\\program files\\borland\\cbuilder5\\projects\\climate_atlas\\charts\\globaljanuary.bmp", ios::in);
   if (is)
   {
      is.close();

      Image1 -> Picture -> LoadFromFile(volledig_chart_path.c_str());
      //b.v. Image1 -> Picture -> LoadFromFile("c:\\program files\\borland\\cbuilder5\\projects\\climate_atlas\\charts\\globaljanuary.bmp");
   }
   else
   {
      info = "Unable to open chart";
      info += " (";
      info += volledig_chart_path;
      info += ")";
      ::MessageBox(0, info.c_str(), program_name.c_str(), MB_OK);
   } // else

}

void __fastcall TForm1::Print_Chart(TObject *Sender)
{
   if (PrintDialog1 -> Execute())
   {
      Print();
   }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::InfoDataSourcesClick(TObject *Sender)
{
   AnsiString volledig_help_path = "";


   volledig_help_path = global_climate_atlas_root_path + help_sub_dir + "DATA.CHM";

   HTMLHelp = (HtmlHelpFunc)::GetProcAddress(hHelpOCX, ATOM_HTMLHELP_API_ANSI);
   HTMLHelp(0, volledig_help_path.c_str(), HH_DISPLAY_TOPIC, 0);
}


//-----------------------------------------------------------------------------
void __fastcall TForm1::InfoBeaufortScaleClick(TObject *Sender)
{
   AnsiString volledig_help_path = "";


   volledig_help_path = global_climate_atlas_root_path + help_sub_dir + "BEAUFORT.CHM";

   HTMLHelp = (HtmlHelpFunc)::GetProcAddress(hHelpOCX, ATOM_HTMLHELP_API_ANSI);
   HTMLHelp(0, volledig_help_path.c_str(), HH_DISPLAY_TOPIC, 0);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormMouseWheel(TObject *Sender, TShiftState Shift, int WheelDelta, TPoint &MousePos, bool &Handled)
{
   if (WheelDelta < 0)
      VertScrollBar -> Position += 20;
   else
      VertScrollBar -> Position -= 20;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OnMouseMoveImage(TObject *Sender, TShiftState Shift, int X, int Y)
{
   Image1 -> Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OnKeyDownForm1(TObject *Sender, WORD &Key, TShiftState Shift)
{
   switch (Key)
   {
      case VK_NEXT  : VertScrollBar -> Position += 160;      // Page Down
                      break;
      case VK_PRIOR : VertScrollBar -> Position -= 160;      // Page Up
                      break;
      case VK_DOWN  : VertScrollBar -> Position += 20;       // Arrow Down
                      break;
      case VK_UP    : VertScrollBar -> Position -= 20;       // Arrow Up
                      break;
      case VK_RIGHT : HorzScrollBar -> Position += 20;       // Arrow right
                      break;
      case VK_LEFT  : HorzScrollBar -> Position -= 20;       // Arrow left
                      break;
      // TAB werkt niet (wordt eerder door Windows afgevangen voor ander gebruik
      //case VK_TAB   : HorzScrollBar -> Position += 160;      // TAB
      //                break;

   } // switch Key
}
//---------------------------------------------------------------------------


void __fastcall TForm1::WindJanuaryClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_jan.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WindFebruaryClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_feb.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::WindMarchClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_mar.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WindAprilClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_apr.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------

void __fastcall TForm1::WindMayClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_may.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::WindJuneClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_jun.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::WindJulyClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_jul.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::WindAugustClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_aug.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::WindSeptemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_sep.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::WindOctoberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_oct.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::WindNovemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_nov.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::WindDecemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "wind_dec.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::TemperatureJanuaryClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_jan.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TemperatureFebruaryClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_feb.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TemperatureMarchClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_mar.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TemperatureAprilClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_apr.bmp";
   ShowChart(chart_name);

}


//---------------------------------------------------------------------------

void __fastcall TForm1::TemperatureMayClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_may.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::TemperatureJuneClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_jun.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::TemperatureJulyClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_jul.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::TemperatureAugustClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_aug.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::TemperatureSeptemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_sep.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::TemperatureOctoberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_oct.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::TemperatureNovemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_nov.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::TemperatureDecemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "temp_dec.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------





void __fastcall TForm1::PrecipitationJanuaryClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_jan.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::PrecipitationFebruaryClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_feb.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::PrecipitationMarchClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_mar.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PrecipitationAprilClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_apr.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------

void __fastcall TForm1::PrecipitationMayClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_may.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::PrecipitationJuneClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_jun.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------




void __fastcall TForm1::PrecipitationJulyClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_jul.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::PrecipitationAugustClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_aug.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::PrecipitationSeptemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_sep.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::PrecipitationOctoberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_oct.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::PrecipitationNovemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_nov.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::PrecipitationDecemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "precip_dec.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::SSTJanuaryClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_jan.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SSTFebruaryClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_feb.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SSTMarchClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_mar.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SSTAprilClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_apr.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------

void __fastcall TForm1::SSTMayClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_may.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::SSTJuneClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_jun.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::SSTJulyClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_jul.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::SSTAugustClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_aug.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::SSTSeptemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_sep.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::SSTOctoberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_oct.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::SSTNovemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_nov.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::SSTDecemberClick(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "sst_dec.bmp";
   ShowChart(chart_name);

}
//---------------------------------------------------------------------------




void __fastcall TForm1::FormDestroy(TObject *Sender)
{
   // voor chm HTMLhelp
   ::FreeLibrary("hhctrl.ocx");
}
//---------------------------------------------------------------------------

