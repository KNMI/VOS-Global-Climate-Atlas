object forecastsettingsform: Tforecastsettingsform
  Left = 235
  Top = 141
  HorzScrollBar.Visible = False
  VertScrollBar.Visible = False
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'Internet wave settings'
  ClientHeight = 423
  ClientWidth = 692
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 112
    Top = 375
    Width = 561
    Height = 2
  end
  object OKButton: TButton
    Left = 177
    Top = 388
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 0
    OnClick = OKButtonClick
  end
  object CancelButton: TButton
    Left = 265
    Top = 388
    Width = 75
    Height = 25
    Caption = 'Cancel'
    TabOrder = 1
    OnClick = CancelButtonClick
  end
  object HelpButton: TButton
    Left = 353
    Top = 388
    Width = 75
    Height = 25
    Caption = 'Help'
    TabOrder = 2
    OnClick = HelpButtonClick
  end
  object StaticTextWaveClimateAtlas: TStaticText
    Left = 16
    Top = 368
    Width = 94
    Height = 17
    Caption = 'Ocean Wave Atlas'
    Enabled = False
    TabOrder = 11
  end
  object StaticTextGlobal: TStaticText
    Left = 32
    Top = 96
    Width = 40
    Height = 17
    Caption = 'Global: '
    TabOrder = 12
  end
  object StaticTextNorthAtlantic: TStaticText
    Left = 32
    Top = 123
    Width = 71
    Height = 17
    Caption = 'North Atlantic:'
    TabOrder = 13
  end
  object StaticTextSouthAtlantic: TStaticText
    Left = 32
    Top = 151
    Width = 73
    Height = 17
    Caption = 'South Atlantic:'
    TabOrder = 14
  end
  object StaticTextIndianOcean: TStaticText
    Left = 32
    Top = 179
    Width = 71
    Height = 17
    Caption = 'Indian Ocean:'
    TabOrder = 15
  end
  object StaticTextNorthPacific: TStaticText
    Left = 32
    Top = 207
    Width = 68
    Height = 17
    Caption = 'North Pacific:'
    TabOrder = 16
  end
  object StaticTextSouthPacific: TStaticText
    Left = 32
    Top = 234
    Width = 70
    Height = 17
    Caption = 'South Pacific:'
    TabOrder = 17
  end
  object StaticTextNorthSea: TStaticText
    Left = 32
    Top = 263
    Width = 55
    Height = 17
    Caption = 'North Sea:'
    TabOrder = 18
  end
  object EditGlobal: TEdit
    Left = 108
    Top = 92
    Width = 540
    Height = 21
    MaxLength = 200
    TabOrder = 4
  end
  object EditNorthAtlantic: TEdit
    Left = 108
    Top = 120
    Width = 540
    Height = 21
    MaxLength = 200
    TabOrder = 5
  end
  object EditSouthAtlantic: TEdit
    Left = 108
    Top = 148
    Width = 540
    Height = 21
    MaxLength = 200
    TabOrder = 6
  end
  object EditIndianOcean: TEdit
    Left = 108
    Top = 176
    Width = 540
    Height = 21
    MaxLength = 200
    TabOrder = 7
  end
  object EditNorthPacific: TEdit
    Left = 108
    Top = 204
    Width = 540
    Height = 21
    MaxLength = 200
    TabOrder = 8
  end
  object EditSouthPacific: TEdit
    Left = 108
    Top = 232
    Width = 540
    Height = 21
    MaxLength = 200
    TabOrder = 9
  end
  object EditNorthSea: TEdit
    Left = 108
    Top = 260
    Width = 540
    Height = 21
    MaxLength = 200
    TabOrder = 10
  end
  object DefaultButton: TButton
    Left = 441
    Top = 388
    Width = 75
    Height = 25
    Caption = 'Defaults'
    TabOrder = 3
    OnClick = DefaultButtonClick
  end
end
