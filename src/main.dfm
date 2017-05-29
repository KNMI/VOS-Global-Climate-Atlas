object Form1: TForm1
  Left = 275
  Top = 85
  Width = 684
  Height = 478
  Caption = 'Global Climate Atlas'
  Color = clWhite
  DefaultMonitor = dmMainForm
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Icon.Data = {
    0000010001002020100000000000E80200001600000028000000200000004000
    0000010004000000000080020000000000000000000000000000000000000000
    000000008000008000000080800080000000800080008080000080808000C0C0
    C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF009999
    9999999999999999999999999999966666666666666666666666666666699666
    68868886666666666662F6666669966336666666666666666666666668699666
    666666666666E006666666266F6996666666E0600EF0000E6666666666699666
    666600EFE000000E66666666666996666600F0F000000006F666666666699666
    6000000000000006666666666669966600000000000000046666666666699668
    0000000008800004666666666669966000000000000000006666666666699EE0
    00000000000000004EEEEEEEEEE99EE00088F8F0FF00000008EEEEEEEEE99EE8
    000000000000000000EEEEEEEEE99EEEE0FFFFF8EEEEF844008EEEEFFFE99EFE
    E0888838EEEEEEEE800EEEEEFEE99EEEE0011188EEEEEEEEEEEEEEEEEEE99EFE
    EEE999EEEEEEEEEEEEEEEEEEEEE99EEEEEE0FFEEEEEEEEEEFFFFFFFFEFE99EEE
    EEE088EEFFFFFEFFFFFFFFFFFFF99EEEEEEE8EEEEFFFFEEEFFFEFFFFEFF99EEE
    EEEF8EEEEEEEFEFEFFFFFFFEFFF99FFFFFF8FEEEEEEFEEEFEFFFFFEFEFE99FE8
    E88FEEEEEEEEEEEEFFFFFFEEFEE99FFEFEFFEEEEEEEEEEEFFFFFFFEEEEE99FFF
    FFEEEEEEEEEEEFFFFFFFEEEEEEE99EFEEEEEEEEEEEEEFFEEFFFEEEEEEEE99EEE
    EEEEEEEEEEEEEFFFFFFEEEEEEEE99EEFEFFEEEEEEEEEEEEEFFFEEEEEEEE99EFF
    FEEEEEEEEEEEEEEEEFEEEEEEEEE9999999999999999999999999999999990000
    0000000000000000000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    000000000000000000000000000000000000000000000000000000000000}
  Menu = MainMenu
  OldCreateOrder = False
  PopupMenu = PopupMenu1
  WindowState = wsMaximized
  OnDestroy = FormDestroy
  OnKeyDown = OnKeyDownForm1
  OnMouseWheel = FormMouseWheel
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 2
    Width = 800
    Height = 1000
    AutoSize = True
    Center = True
    IncrementalDisplay = True
    OnMouseMove = OnMouseMoveImage
  end
  object Bevel1: TBevel
    Left = 0
    Top = 0
    Width = 800
    Height = 2
    Align = alTop
  end
  object MainMenu: TMainMenu
    Left = 16
    Top = 56
    object FileMenu: TMenuItem
      Caption = '&File'
      object Print1: TMenuItem
        Caption = 'Print...'
        OnClick = Print_Chart
      end
      object FileExit: TMenuItem
        Caption = '&Exit'
        OnClick = Quit_Program
      end
    end
    object ClimatologyMenu: TMenuItem
      Caption = '&Climatology'
      object ClimatologyWind: TMenuItem
        Caption = '&Wind'
        object WindJanuary: TMenuItem
          Caption = '&January'
          OnClick = WindJanuaryClick
        end
        object WindFebruary: TMenuItem
          Caption = '&February'
          OnClick = WindFebruaryClick
        end
        object WindMarch: TMenuItem
          Caption = 'Ma&rch'
          OnClick = WindMarchClick
        end
        object WindApril: TMenuItem
          Caption = '&April'
          OnClick = WindAprilClick
        end
        object WindMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = WindMayClick
        end
        object WindJune: TMenuItem
          Caption = 'J&une'
          OnClick = WindJuneClick
        end
        object WindJuly: TMenuItem
          Caption = 'Ju&ly'
          OnClick = WindJulyClick
        end
        object WindAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = WindAugustClick
        end
        object WindSeptember: TMenuItem
          Caption = '&September'
          OnClick = WindSeptemberClick
        end
        object WindOctober: TMenuItem
          Caption = '&October'
          OnClick = WindOctoberClick
        end
        object WindNovember: TMenuItem
          Caption = '&November'
          OnClick = WindNovemberClick
        end
        object WindDecember: TMenuItem
          Caption = '&December'
          OnClick = WindDecemberClick
        end
      end
      object ClimatologyTemperature: TMenuItem
        Caption = '&Temperature'
        object TemperatureJanuary: TMenuItem
          Caption = '&January'
          OnClick = TemperatureJanuaryClick
        end
        object TemperatureFebruary: TMenuItem
          Caption = '&February'
          OnClick = TemperatureFebruaryClick
        end
        object TemperatureMarch: TMenuItem
          Caption = '&March'
          OnClick = TemperatureMarchClick
        end
        object TemperatureApril: TMenuItem
          Caption = '&April'
          OnClick = TemperatureAprilClick
        end
        object TemperatureMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = TemperatureMayClick
        end
        object TemperatureJune: TMenuItem
          Caption = 'J&une'
          OnClick = TemperatureJuneClick
        end
        object TemperatureJuly: TMenuItem
          Caption = 'Ju&ly'
          OnClick = TemperatureJulyClick
        end
        object TemperatureAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = TemperatureAugustClick
        end
        object TemperatureSeptember: TMenuItem
          Caption = '&September'
          OnClick = TemperatureSeptemberClick
        end
        object TemperatureOctober: TMenuItem
          Caption = '&October'
          OnClick = TemperatureOctoberClick
        end
        object TemperatureNovember: TMenuItem
          Caption = '&November'
          OnClick = TemperatureNovemberClick
        end
        object TemperatureDecember: TMenuItem
          Caption = '&December'
          OnClick = TemperatureDecemberClick
        end
      end
      object ClimatologyPrecipitation: TMenuItem
        Caption = '&Precipitation'
        object PrecipitationJanuary: TMenuItem
          Caption = '&January'
          OnClick = PrecipitationJanuaryClick
        end
        object PrecipitationFebruary: TMenuItem
          Caption = '&February'
          OnClick = PrecipitationFebruaryClick
        end
        object PrecipitationMarch: TMenuItem
          Caption = '&March'
          OnClick = PrecipitationMarchClick
        end
        object PrecipitationApril: TMenuItem
          Caption = '&April'
          OnClick = PrecipitationAprilClick
        end
        object PrecipitationMay: TMenuItem
          Caption = 'Ma&y'
          OnClick = PrecipitationMayClick
        end
        object PrecipitationJune: TMenuItem
          Caption = 'J&une'
          OnClick = PrecipitationJuneClick
        end
        object PrecipitationJuly: TMenuItem
          Caption = 'Ju&ly'
          OnClick = PrecipitationJulyClick
        end
        object PrecipitationAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = PrecipitationAugustClick
        end
        object PrecipitationSeptember: TMenuItem
          Caption = '&September'
          OnClick = PrecipitationSeptemberClick
        end
        object PrecipitationOctober: TMenuItem
          Caption = '&October'
          OnClick = PrecipitationOctoberClick
        end
        object PrecipitationNovember: TMenuItem
          Caption = '&November'
          OnClick = PrecipitationNovemberClick
        end
        object PrecipitationDecember: TMenuItem
          Caption = '&December'
          OnClick = PrecipitationDecemberClick
        end
      end
      object ClimatologySeasurfacetemperature: TMenuItem
        Caption = '&Sea surface temperature'
        object SSTJanuary: TMenuItem
          Caption = '&January'
          OnClick = SSTJanuaryClick
        end
        object SSTFebruary: TMenuItem
          Caption = '&February'
          OnClick = SSTFebruaryClick
        end
        object SSTMarch: TMenuItem
          Caption = '&March'
          OnClick = SSTMarchClick
        end
        object SSTApril: TMenuItem
          Caption = '&April'
          OnClick = SSTAprilClick
        end
        object SSTMay: TMenuItem
          Caption = '&May'
          Hint = 'SSTMay'
          OnClick = SSTMayClick
        end
        object SSTJune: TMenuItem
          Caption = '&June'
          OnClick = SSTJuneClick
        end
        object SSTJuly: TMenuItem
          Caption = 'J&uly'
          OnClick = SSTJulyClick
        end
        object SSTAugust: TMenuItem
          Caption = 'Au&gust'
          OnClick = SSTAugustClick
        end
        object SSTSeptember: TMenuItem
          Caption = '&September'
          OnClick = SSTSeptemberClick
        end
        object SSTOctober: TMenuItem
          Caption = '&October'
          OnClick = SSTOctoberClick
        end
        object SSTNovember: TMenuItem
          Caption = '&November'
          OnClick = SSTNovemberClick
        end
        object SSTDecember: TMenuItem
          Caption = '&December'
          OnClick = SSTDecemberClick
        end
      end
    end
    object InfoMenu: TMenuItem
      Caption = '&Info'
      object InfoDataSources: TMenuItem
        Caption = '&Data Sources'
        OnClick = InfoDataSourcesClick
      end
      object InfoBeaufortScale: TMenuItem
        Caption = '&Beaufort scale'
        OnClick = InfoBeaufortScaleClick
      end
      object InfoAbout: TMenuItem
        Caption = '&About...'
        OnClick = InfoAboutClick
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 60
    Top = 56
    object PopupWind: TMenuItem
      Caption = '&Wind'
      object PopupWindJanuary: TMenuItem
        Caption = '&January'
        OnClick = WindJanuaryClick
      end
      object PopupWindFebruary: TMenuItem
        Caption = '&February'
        OnClick = WindFebruaryClick
      end
      object PopupWindMarch: TMenuItem
        Caption = '&March'
        OnClick = WindMarchClick
      end
      object PopupWindApril: TMenuItem
        Caption = '&April'
        OnClick = WindAprilClick
      end
      object PopupWindMay: TMenuItem
        Caption = '&May'
        OnClick = WindMayClick
      end
      object PopupWindJune: TMenuItem
        Caption = '&June'
        OnClick = WindJuneClick
      end
      object PopupWindJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = WindJulyClick
      end
      object PopupWindAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = WindAugustClick
      end
      object PopupWindSeptember: TMenuItem
        Caption = '&September'
        OnClick = WindSeptemberClick
      end
      object PopupWindOctober: TMenuItem
        Caption = '&October'
        OnClick = WindOctoberClick
      end
      object PopupWindNovember: TMenuItem
        Caption = '&November'
        OnClick = WindNovemberClick
      end
      object PopupWindDecember: TMenuItem
        Caption = '&December'
        OnClick = WindDecemberClick
      end
    end
    object PopupTemperature: TMenuItem
      Caption = '&Temperature'
      object PopupTemperatureJanuary: TMenuItem
        Caption = '&January'
        OnClick = TemperatureJanuaryClick
      end
      object PopupTemperatureFebruary: TMenuItem
        Caption = '&February'
        OnClick = TemperatureFebruaryClick
      end
      object PopupTemperatureMarch: TMenuItem
        Caption = '&March'
        OnClick = TemperatureMarchClick
      end
      object PopuptemperatureApril: TMenuItem
        Caption = '&April'
        OnClick = TemperatureAprilClick
      end
      object PopupTemperatureMay: TMenuItem
        Caption = '&May'
        OnClick = TemperatureMayClick
      end
      object PopupTemperatureJune: TMenuItem
        Caption = '&June'
        OnClick = TemperatureJuneClick
      end
      object PopupTemperatureJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = TemperatureJulyClick
      end
      object PopupTemperatureAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = TemperatureAugustClick
      end
      object PopupTemperatureSeptember: TMenuItem
        Caption = '&September'
        OnClick = TemperatureSeptemberClick
      end
      object PopupTemperatureOctober: TMenuItem
        Caption = '&October'
        OnClick = TemperatureOctoberClick
      end
      object PopupTemperatureNovember: TMenuItem
        Caption = '&November'
        OnClick = TemperatureNovemberClick
      end
      object PopupTemperatureDecember: TMenuItem
        Caption = '&December'
        OnClick = TemperatureDecemberClick
      end
    end
    object PopupPrecipitation: TMenuItem
      Caption = '&Precipitation'
      object PopupPrecipitationJanuary: TMenuItem
        Caption = '&January'
        OnClick = PrecipitationJanuaryClick
      end
      object PopupPrecipitationFebruary: TMenuItem
        Caption = '&February'
        OnClick = PrecipitationFebruaryClick
      end
      object PopupPrecipitationMarch: TMenuItem
        Caption = '&March'
        OnClick = PrecipitationMarchClick
      end
      object PopupPrecipitationApril: TMenuItem
        Caption = '&April'
        OnClick = PrecipitationAprilClick
      end
      object PopupPrecipitationMay: TMenuItem
        Caption = '&May'
        OnClick = PrecipitationMayClick
      end
      object PopupPrecipitationJune: TMenuItem
        Caption = '&June'
        OnClick = PrecipitationJuneClick
      end
      object PopupPrecipitationJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = PrecipitationJulyClick
      end
      object PopupPrecipitationAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = PrecipitationAugustClick
      end
      object PopupPrecipitationSeptember: TMenuItem
        Caption = '&September'
        OnClick = PrecipitationSeptemberClick
      end
      object PopupPrecipitationOctober: TMenuItem
        Caption = '&October'
        OnClick = PrecipitationOctoberClick
      end
      object PopupPrecipitationNovember: TMenuItem
        Caption = '&November'
        OnClick = PrecipitationNovemberClick
      end
      object PopupPrecipitationDecember: TMenuItem
        Caption = '&December'
        OnClick = PrecipitationDecemberClick
      end
    end
    object PopupSST: TMenuItem
      Caption = '&Sea surface temperature'
      object PopupSSTJanuary: TMenuItem
        Caption = '&January'
        OnClick = SSTJanuaryClick
      end
      object PopupSSTFebruary: TMenuItem
        Caption = '&February'
        OnClick = SSTFebruaryClick
      end
      object PopupSSTMarch: TMenuItem
        Caption = '&March'
        OnClick = SSTMarchClick
      end
      object PopupSSTApril: TMenuItem
        Caption = '&April'
        OnClick = SSTAprilClick
      end
      object PopupSSTMay: TMenuItem
        Caption = '&May'
        OnClick = SSTMayClick
      end
      object PopupSSTJune: TMenuItem
        Caption = '&June'
        OnClick = SSTJuneClick
      end
      object PopupSSTJuly: TMenuItem
        Caption = 'J&uly'
        OnClick = SSTJulyClick
      end
      object PopupSSTAugust: TMenuItem
        Caption = 'Au&gust'
        OnClick = SSTAugustClick
      end
      object PopupSSTSeptember: TMenuItem
        Caption = '&September'
        OnClick = SSTSeptemberClick
      end
      object PopupSSTOctober: TMenuItem
        Caption = '&October'
        OnClick = SSTOctoberClick
      end
      object PopupSSTNovember: TMenuItem
        Caption = '&November'
        OnClick = SSTNovemberClick
      end
      object PopupSSTDecember: TMenuItem
        Caption = '&December'
        OnClick = SSTDecemberClick
      end
    end
  end
  object PrintDialog1: TPrintDialog
    Left = 104
    Top = 56
  end
end
