//---------------------------------------------------------------------------

#ifndef aboutH
#define aboutH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TAboutForm : public TForm
{
__published:	// IDE-managed Components
        TBevel *Bevel1;
        TGroupBox *GroupBox1;
        TLabel *Label5;
        TLabel *Label6;
        TImage *Image1;
        TEdit *AboutWebSiteEdit;
        TLabel *Label1;
        TLabel *Label2;
        TButton *OKButton;
        TLabel *Label3;
        void __fastcall OKClick(TObject *Sender);
        void __fastcall DeveloperEditClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAboutForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAboutForm *AboutForm;
//---------------------------------------------------------------------------
#endif
