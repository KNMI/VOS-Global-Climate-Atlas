object AboutForm: TAboutForm
  Left = 298
  Top = 276
  HorzScrollBar.Visible = False
  VertScrollBar.Visible = False
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'Global Climate Atlas'
  ClientHeight = 284
  ClientWidth = 356
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 24
    Top = 245
    Width = 310
    Height = 2
  end
  object GroupBox1: TGroupBox
    Left = 24
    Top = 16
    Width = 310
    Height = 217
    TabOrder = 0
    DesignSize = (
      310
      217)
    object Label5: TLabel
      Left = 88
      Top = 15
      Width = 134
      Height = 13
      Alignment = taCenter
      Anchors = [akTop]
      Caption = 'version 1.1 (build 28022007)'
    end
    object Label6: TLabel
      Left = 50
      Top = 28
      Width = 210
      Height = 13
      Alignment = taCenter
      Caption = 'freeware for marine meteorological observers'
    end
    object Image1: TImage
      Left = 138
      Top = 50
      Width = 34
      Height = 37
      Picture.Data = {
        055449636F6E0000010001002020100000000000E80200001600000028000000
        2000000040000000010004000000000080020000000000000000000000000000
        0000000000000000000080000080000000808000800000008000800080800000
        80808000C0C0C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000
        FFFFFF0000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000FFFFFFFFFFFFFFFF393C9CE431389CE423308CC40730C84C0F24C80C
        0724C30C230CE31C310CE79C391CE79CFFFFFFFFFFFFFFFFFF00003FFFFFFFFF
        FFFFFFFFFF39E73FFF39E73FFFFFFFFFFF99E67FFF31E33FFE33F31FFE63F19F
        FC07380FFC04080FFCE0C1CFFFC3F0FFFFC738FFFFFF3FFFFFFE1FFFFFFF3FFF
        FFFFFFFF}
    end
    object Label1: TLabel
      Left = 40
      Top = 92
      Width = 230
      Height = 13
      Caption = 'Developed and built by: KNMI (The Netherlands)'
      WordWrap = True
    end
    object Label2: TLabel
      Left = 4
      Top = 148
      Width = 285
      Height = 26
      Caption = 
        'The ECMWF (European Centre for Medium-Range Weather Forecasts) i' +
        's acknowledged for the raw ERA-40 data'
      WordWrap = True
    end
    object Label3: TLabel
      Left = 4
      Top = 184
      Width = 284
      Height = 26
      Caption = 
        'NOAA (National Oceanic and Atmospheric Administration) is acknow' +
        'ledged for the raw ICOADS data'
      WordWrap = True
    end
    object AboutWebSiteEdit: TEdit
      Left = 70
      Top = 117
      Width = 170
      Height = 21
      Cursor = crHandPoint
      TabStop = False
      BorderStyle = bsNone
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsUnderline]
      ParentFont = False
      ReadOnly = True
      TabOrder = 0
      Text = 'More climate data (Climate Explorer)'
      OnClick = DeveloperEditClick
    end
  end
  object OKButton: TButton
    Left = 140
    Top = 252
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    TabOrder = 1
    OnClick = OKClick
  end
end
