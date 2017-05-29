//---------------------------------------------------------------------------

#ifndef forecastsettingsH
#define forecastsettingsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tforecastsettingsform : public TForm
{
__published:	// IDE-managed Components
        TButton *OKButton;
        TButton *CancelButton;
        TButton *HelpButton;
        TButton *DefaultButton;
        TBevel *Bevel1;
        TStaticText *StaticTextWaveClimateAtlas;
        TStaticText *StaticTextGlobal;
        TStaticText *StaticTextNorthAtlantic;
        TStaticText *StaticTextSouthAtlantic;
        TStaticText *StaticTextIndianOcean;
        TStaticText *StaticTextNorthPacific;
        TStaticText *StaticTextSouthPacific;
        TStaticText *StaticTextNorthSea;
        TEdit *EditGlobal;
        TEdit *EditNorthAtlantic;
        TEdit *EditSouthAtlantic;
        TEdit *EditIndianOcean;
        TEdit *EditNorthPacific;
        TEdit *EditSouthPacific;
        TEdit *EditNorthSea;
        void __fastcall OKButtonClick(TObject *Sender);
        void __fastcall CancelButtonClick(TObject *Sender);
        void __fastcall HelpButtonClick(TObject *Sender);
        void __fastcall DefaultButtonClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations

public:		// User declarations
        __fastcall Tforecastsettingsform(TComponent* Owner);

        AnsiString Internet_Wave_Global_Adress;
        AnsiString Internet_Wave_NorthAtlantic_Adress;
        AnsiString Internet_Wave_SouthAtlantic_Adress;
        AnsiString Internet_Wave_IndianOcean_Adress;
        AnsiString Internet_Wave_NorthPacific_Adress;
        AnsiString Internet_Wave_SouthPacific_Adress;
        AnsiString Internet_Wave_NorthSea_Adress;

};
//---------------------------------------------------------------------------
extern PACKAGE Tforecastsettingsform *forecastsettingsform;
//---------------------------------------------------------------------------
#endif
