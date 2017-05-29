//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
#include <jpeg.hpp>

#include "constanten.h"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        // diversen
        TImage *Image1;
        TBevel *Bevel1;
        TPrintDialog *PrintDialog1;
        TMenuItem *Print1;

        // Main menu
        TMainMenu *MainMenu;

        // File menu
        TMenuItem *FileMenu;
        TMenuItem *FileExit;

        // Info menu
        TMenuItem *InfoMenu;
        TMenuItem *InfoAbout;

        // Climatology menu
        TMenuItem *ClimatologyMenu;
        TMenuItem *ClimatologyWind;
        TMenuItem *ClimatologyTemperature;
        TMenuItem *ClimatologyPrecipitation;
        TMenuItem *ClimatologySeasurfacetemperature;

        TMenuItem *WindJanuary;
        TMenuItem *WindFebruary;
        TMenuItem *WindMarch;
        TMenuItem *WindApril;
        TMenuItem *WindMay;
        TMenuItem *WindJune;
        TMenuItem *WindJuly;
        TMenuItem *WindAugust;
        TMenuItem *WindSeptember;
        TMenuItem *WindOctober;
        TMenuItem *WindNovember;
        TMenuItem *WindDecember;

        TMenuItem *TemperatureJanuary;
        TMenuItem *TemperatureFebruary;
        TMenuItem *TemperatureMarch;
        TMenuItem *TemperatureApril;
        TMenuItem *TemperatureMay;
        TMenuItem *TemperatureJune;
        TMenuItem *TemperatureJuly;
        TMenuItem *TemperatureAugust;
        TMenuItem *TemperatureSeptember;
        TMenuItem *TemperatureNovember;
        TMenuItem *TemperatureDecember;
        TMenuItem *TemperatureOctober;

        TMenuItem *PrecipitationJanuary;
        TMenuItem *PrecipitationFebruary;
        TMenuItem *PrecipitationMarch;
        TMenuItem *PrecipitationApril;
        TMenuItem *PrecipitationMay;
        TMenuItem *PrecipitationJune;
        TMenuItem *PrecipitationJuly;
        TMenuItem *PrecipitationAugust;
        TMenuItem *PrecipitationSeptember;
        TMenuItem *PrecipitationOctober;
        TMenuItem *PrecipitationNovember;
        TMenuItem *PrecipitationDecember;

        TMenuItem *SSTJanuary;
        TMenuItem *SSTFebruary;
        TMenuItem *SSTMarch;
        TMenuItem *SSTApril;
        TMenuItem *SSTMay;
        TMenuItem *SSTJune;
        TMenuItem *SSTJuly;
        TMenuItem *SSTAugust;
        TMenuItem *SSTSeptember;
        TMenuItem *SSTOctober;
        TMenuItem *SSTNovember;
        TMenuItem *SSTDecember;
        TMenuItem *InfoDataSources;


        // popup menu
        TPopupMenu *PopupMenu1;

        TMenuItem *PopupWind;
        TMenuItem *PopupWindJanuary;
        TMenuItem *PopupWindFebruary;
        TMenuItem *PopupWindMarch;
        TMenuItem *PopupWindApril;
        TMenuItem *PopupWindMay;
        TMenuItem *PopupWindJune;
        TMenuItem *PopupWindJuly;
        TMenuItem *PopupWindAugust;
        TMenuItem *PopupWindSeptember;
        TMenuItem *PopupWindOctober;
        TMenuItem *PopupWindNovember;
        TMenuItem *PopupWindDecember;

        TMenuItem *PopupTemperature;
        TMenuItem *PopupTemperatureJanuary;
        TMenuItem *PopupTemperatureFebruary;
        TMenuItem *PopupTemperatureMarch;
        TMenuItem *PopuptemperatureApril;
        TMenuItem *PopupTemperatureMay;
        TMenuItem *PopupTemperatureJune;
        TMenuItem *PopupTemperatureJuly;
        TMenuItem *PopupTemperatureAugust;
        TMenuItem *PopupTemperatureSeptember;
        TMenuItem *PopupTemperatureOctober;
        TMenuItem *PopupTemperatureNovember;
        TMenuItem *PopupTemperatureDecember;

        TMenuItem *PopupPrecipitation;
        TMenuItem *PopupPrecipitationJanuary;
        TMenuItem *PopupPrecipitationFebruary;
        TMenuItem *PopupPrecipitationMarch;
        TMenuItem *PopupPrecipitationApril;
        TMenuItem *PopupPrecipitationMay;
        TMenuItem *PopupPrecipitationJune;
        TMenuItem *PopupPrecipitationJuly;
        TMenuItem *PopupPrecipitationAugust;
        TMenuItem *PopupPrecipitationSeptember;
        TMenuItem *PopupPrecipitationOctober;
        TMenuItem *PopupPrecipitationNovember;
        TMenuItem *PopupPrecipitationDecember;

        TMenuItem *PopupSST;
        TMenuItem *PopupSSTJanuary;
        TMenuItem *PopupSSTFebruary;
        TMenuItem *PopupSSTMarch;
        TMenuItem *PopupSSTApril;
        TMenuItem *PopupSSTMay;
        TMenuItem *PopupSSTJune;
        TMenuItem *PopupSSTJuly;
        TMenuItem *PopupSSTAugust;
        TMenuItem *PopupSSTSeptember;
        TMenuItem *PopupSSTOctober;
        TMenuItem *PopupSSTNovember;
        TMenuItem *PopupSSTDecember;
        TMenuItem *InfoBeaufortScale;




        void __fastcall Quit_Program(TObject *Sender);
        void __fastcall InfoAboutClick(TObject *Sender);
        void __fastcall Print_Chart(TObject *Sender);
        void __fastcall FormMouseWheel(TObject *Sender, TShiftState Shift, int WheelDelta, TPoint &MousePos, bool &Handled);
        void __fastcall OnMouseMoveImage(TObject *Sender, TShiftState Shift, int X, int Y);
        void __fastcall OnKeyDownForm1(TObject *Sender, WORD &Key, TShiftState Shift);
        void __fastcall InfoDataSourcesClick(TObject *Sender);
        void __fastcall InfoBeaufortScaleClick(TObject *Sender);
        void __fastcall WindJanuaryClick(TObject *Sender);
        void __fastcall WindFebruaryClick(TObject *Sender);
        void __fastcall WindMarchClick(TObject *Sender);
        void __fastcall WindAprilClick(TObject *Sender);
        void __fastcall WindMayClick(TObject *Sender);
        void __fastcall WindJuneClick(TObject *Sender);
        void __fastcall WindJulyClick(TObject *Sender);
        void __fastcall WindAugustClick(TObject *Sender);
        void __fastcall WindSeptemberClick(TObject *Sender);
        void __fastcall WindOctoberClick(TObject *Sender);
        void __fastcall WindNovemberClick(TObject *Sender);
        void __fastcall WindDecemberClick(TObject *Sender);

        void __fastcall TemperatureJanuaryClick(TObject *Sender);
        void __fastcall TemperatureFebruaryClick(TObject *Sender);
        void __fastcall TemperatureMarchClick(TObject *Sender);
        void __fastcall TemperatureAprilClick(TObject *Sender);
        void __fastcall TemperatureMayClick(TObject *Sender);
        void __fastcall TemperatureJuneClick(TObject *Sender);
        void __fastcall TemperatureJulyClick(TObject *Sender);
        void __fastcall TemperatureAugustClick(TObject *Sender);
        void __fastcall TemperatureSeptemberClick(TObject *Sender);
        void __fastcall TemperatureOctoberClick(TObject *Sender);
        void __fastcall TemperatureNovemberClick(TObject *Sender);
        void __fastcall TemperatureDecemberClick(TObject *Sender);

        void __fastcall PrecipitationJanuaryClick(TObject *Sender);
        void __fastcall PrecipitationFebruaryClick(TObject *Sender);
        void __fastcall PrecipitationMarchClick(TObject *Sender);
        void __fastcall PrecipitationAprilClick(TObject *Sender);
        void __fastcall PrecipitationMayClick(TObject *Sender);
        void __fastcall PrecipitationJuneClick(TObject *Sender);
        void __fastcall PrecipitationJulyClick(TObject *Sender);
        void __fastcall PrecipitationAugustClick(TObject *Sender);
        void __fastcall PrecipitationSeptemberClick(TObject *Sender);
        void __fastcall PrecipitationOctoberClick(TObject *Sender);
        void __fastcall PrecipitationNovemberClick(TObject *Sender);
        void __fastcall PrecipitationDecemberClick(TObject *Sender);

        void __fastcall SSTJanuaryClick(TObject *Sender);
        void __fastcall SSTFebruaryClick(TObject *Sender);
        void __fastcall SSTMarchClick(TObject *Sender);
        void __fastcall SSTAprilClick(TObject *Sender);
        void __fastcall SSTMayClick(TObject *Sender);
        void __fastcall SSTJuneClick(TObject *Sender);
        void __fastcall SSTJulyClick(TObject *Sender);
        void __fastcall SSTAugustClick(TObject *Sender);
        void __fastcall SSTSeptemberClick(TObject *Sender);
        void __fastcall SSTOctoberClick(TObject *Sender);
        void __fastcall SSTNovemberClick(TObject *Sender);
        void __fastcall SSTDecemberClick(TObject *Sender);
   void __fastcall FormDestroy(TObject *Sender);





private:	// User declarations
        void ShowChart(AnsiString chart_name);

        // voor HTMLHelp (chm)
        typedef HWND WINAPI (*HtmlHelpFunc)( HWND hwndCaller, LPCSTR pszFile, UINT uCommand, DWORD dwData );
        HtmlHelpFunc HTMLHelp;
        HINSTANCE hHelpOCX;

        // diversen
        char global_climate_atlas_root_path[MAXPATHLENGTH];
        void Bepaal_Root_Dir();

public: // User declarations
        __fastcall TForm1(TComponent* Owner);

};

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
