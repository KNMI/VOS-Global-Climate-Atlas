//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "forecastsettings.h"
#include "dir.h"                          // getcwd
#include "fstream.h"
#include "constanten.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tforecastsettingsform *forecastsettingsform;


//---------------------------------------------------------------------------
__fastcall Tforecastsettingsform::Tforecastsettingsform(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tforecastsettingsform::OKButtonClick(TObject *Sender)
{
   int Size;
   char* Buffer;
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   char char_record[MAXLENGTH];
   ofstream os;
   AnsiString volledig_internet_settings_path = "";
   AnsiString info = "";
   AnsiString record;
   AnsiString line;




   /* Global Wave link adress */
   Size = EditGlobal -> GetTextLen();                 
   Size++;
   Buffer = new char[Size];
   EditGlobal -> GetTextBuf(Buffer, Size);
   Internet_Wave_Global_Adress = (AnsiString)Buffer;
   delete Buffer;

   /*
   // North Atlantic wave link adress
   */
   Size = EditNorthAtlantic -> GetTextLen();
   Size++;
   Buffer = new char[Size];
   EditNorthAtlantic -> GetTextBuf(Buffer, Size);
   Internet_Wave_NorthAtlantic_Adress = (AnsiString)Buffer;
   delete Buffer;

   /*
   // South Atlantic wave link adress
   */
   Size = EditSouthAtlantic -> GetTextLen();
   Size++;
   Buffer = new char[Size];
   EditSouthAtlantic -> GetTextBuf(Buffer, Size);
   Internet_Wave_SouthAtlantic_Adress = (AnsiString)Buffer;
   delete Buffer;

   /*
   // Indian Ocean wave link adress
   */
   Size = EditIndianOcean -> GetTextLen();
   Size++;
   Buffer = new char[Size];
   EditIndianOcean -> GetTextBuf(Buffer, Size);
   Internet_Wave_IndianOcean_Adress = (AnsiString)Buffer;
   delete Buffer;

   /*
   // North Pacific Ocean wave link adress
   */
   Size = EditNorthPacific -> GetTextLen();
   Size++;
   Buffer = new char[Size];
   EditNorthPacific -> GetTextBuf(Buffer, Size);
   Internet_Wave_NorthPacific_Adress = (AnsiString)Buffer;
   delete Buffer;

   /*
   // South Pacific Ocean wave link adress
   */
   Size = EditSouthPacific -> GetTextLen();
   Size++;
   Buffer = new char[Size];
   EditSouthPacific -> GetTextBuf(Buffer, Size);
   Internet_Wave_SouthPacific_Adress = (AnsiString)Buffer;
   delete Buffer;

   /*
   // North Sea Ocean wave link adress
   */
   Size = EditNorthSea -> GetTextLen();
   Size++;
   Buffer = new char[Size];
   EditNorthSea -> GetTextBuf(Buffer, Size);
   Internet_Wave_NorthSea_Adress = (AnsiString)Buffer;
   delete Buffer;


   //
   // wegschrijven naar internet settings file
   //
   getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_internet_settings_path = wave_climate_atlas_root_path + settings_sub_dir + "internet.txt";

   os.open(volledig_internet_settings_path.c_str(), ios::out);
   if (os)
   {
      // do not edit regel
      line = "";
      line = TEXT_DO_NOT_EDIT;
      os.write(line.c_str(), strlen(line.c_str()));
      os.write("\n", strlen("\n"));

      // Global regel
      line = "";
      line = TEXT_GLOBAL + Internet_Wave_Global_Adress;
      os.write(line.c_str(), strlen(line.c_str()));
      os.write("\n", strlen("\n"));

      // North Atlantic regel
      line = "";
      line = TEXT_NORTHATLANTIC + Internet_Wave_NorthAtlantic_Adress;
      os.write(line.c_str(), strlen(line.c_str()));
      os.write("\n", strlen("\n"));

      // South Atlantic regel
      line = "";
      line = TEXT_SOUTHATLANTIC + Internet_Wave_SouthAtlantic_Adress;
      os.write(line.c_str(), strlen(line.c_str()));
      os.write("\n", strlen("\n"));

      // Indian ocean Atlantic regel
      line = "";
      line = TEXT_INDIANOCEAN + Internet_Wave_IndianOcean_Adress;
      os.write(line.c_str(), strlen(line.c_str()));
      os.write("\n", strlen("\n"));

      // North Pacific regel
      line = "";
      line = TEXT_NORTHPACIFIC + Internet_Wave_NorthPacific_Adress;
      os.write(line.c_str(), strlen(line.c_str()));
      os.write("\n", strlen("\n"));

      // South Pacific regel
      line = "";
      line = TEXT_SOUTHPACIFIC + Internet_Wave_SouthPacific_Adress;
      os.write(line.c_str(), strlen(line.c_str()));
      os.write("\n", strlen("\n"));

      // North Sea regel
      line = "";
      line = TEXT_NORTHSEA + Internet_Wave_NorthSea_Adress;
      os.write(line.c_str(), strlen(line.c_str()));
      os.write("\n", strlen("\n"));

      Close();
   } // if (os)
   else
   {
      info = "Unable to open file";
      info += " (";
      info += volledig_internet_settings_path;
      info += ")";
      ::MessageBox(0, info.c_str(), program_name.c_str(), MB_OK);
   } // else
}
//---------------------------------------------------------------------------

void __fastcall Tforecastsettingsform::DefaultButtonClick(TObject *Sender)
{
   ifstream is;
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   char char_record[MAXLENGTH];
   AnsiString volledig_internet_settings_path = "";
   AnsiString info = "";
   AnsiString record;


   getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_internet_settings_path = wave_climate_atlas_root_path + settings_sub_dir + "default.txt";

   is.open(volledig_internet_settings_path.c_str(), ios::in);
   if (is)
   {
      do // while (!is.eof())
      {
         char_record[0] = '\0';                         // initialisatie
         is.getline(char_record, 256);                  // record line inlezen

         if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_GLOBAL)
         {
            if (record.Length() >= 21)
            {
               EditGlobal -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_NORTHATLANTIC)
         {
            if (record.Length() >= 21)
            {
               EditNorthAtlantic -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_SOUTHATLANTIC)
         {
            if (record.Length() >= 21)
            {
               EditSouthAtlantic -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_INDIANOCEAN)
         {
            if (record.Length() >= 21)
            {
               EditIndianOcean -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_NORTHPACIFIC)
         {
            if (record.Length() >= 21)
            {
               EditNorthPacific -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_SOUTHPACIFIC)
         {
            if (record.Length() >= 21)
            {
               EditSouthPacific -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

          else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_NORTHSEA)
         {
            if (record.Length() >= 21)
            {
               EditNorthSea -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }
      } while (!is.eof());
      is.close();
   } // if (is)
   else
   {
      info = "Unable to open file";
      info += " (";
      info += volledig_internet_settings_path;
      info += ")";
      ::MessageBox(0, info.c_str(), program_name.c_str(), MB_OK);
   } // else
}
//---------------------------------------------------------------------------

void __fastcall Tforecastsettingsform::CancelButtonClick(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------


void __fastcall Tforecastsettingsform::HelpButtonClick(TObject *Sender)
{
   const int MAXLENGTH = 255;
   const AnsiString help_sub_dir = "\\help\\";
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   AnsiString volledig_help_path = "";
   //AnsiString info = "";


   getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_help_path = wave_climate_atlas_root_path + help_sub_dir + "SETTINGS.HLP";


   HelpFile = volledig_help_path;
   Application -> HelpCommand(HELP_INDEX, 0);     // werkt OK
   // Application -> HelpCommand(HELP_FINDER, 0); // werkt indirect
   //Application -> HelpJump("");                 // werkt OK

}
//---------------------------------------------------------------------------


void __fastcall Tforecastsettingsform::FormCreate(TObject *Sender)
{
   ifstream is;
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   char char_record[MAXLENGTH];
   AnsiString volledig_internet_settings_path = "";
   AnsiString info = "";
   AnsiString record;


   getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_internet_settings_path = wave_climate_atlas_root_path + settings_sub_dir + "internet.txt";

   is.open(volledig_internet_settings_path.c_str(), ios::in);
   if (is)
   {
      do // while (!is.eof())
      {
         char_record[0] = '\0';                         // initialisatie
         is.getline(char_record, 256);                  // record line inlezen

         if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_GLOBAL)
         {
            if (record.Length() >= 21)
            {
               EditGlobal -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_NORTHATLANTIC)
         {
            if (record.Length() >= 21)
            {
               EditNorthAtlantic -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_SOUTHATLANTIC)
         {
            if (record.Length() >= 21)
            {
               EditSouthAtlantic -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_INDIANOCEAN)
         {
            if (record.Length() >= 21)
            {
               EditIndianOcean -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_NORTHPACIFIC)
         {
            if (record.Length() >= 21)
            {
               EditNorthPacific -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

         else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_SOUTHPACIFIC)
         {
            if (record.Length() >= 21)
            {
               EditSouthPacific -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }

          else if ((record = (AnsiString)char_record).SubString(1, 20) == TEXT_NORTHSEA)
         {
            if (record.Length() >= 21)
            {
               EditNorthSea -> Text = record.SubString(21, record.Length());
            } // if (record.Length() >= 21)
         }
      } while (!is.eof());
      is.close();
   } // if (is)
   else
   {
      info = "Unable to open file";
      info += " (";
      info += volledig_internet_settings_path;
      info += ")";
      ::MessageBox(0, info.c_str(), program_name.c_str(), MB_OK);
   } // else

}
//---------------------------------------------------------------------------

