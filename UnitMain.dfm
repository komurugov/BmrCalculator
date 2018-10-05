object MainForm: TMainForm
  Left = 313
  Top = 249
  Width = 242
  Height = 191
  Caption = #1050#1072#1083#1100#1082#1091#1083#1103#1090#1086#1088' '#1050#1041#1052
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ButtonGo: TButton
    Left = 9
    Top = 9
    Width = 211
    Height = 25
    Caption = #1042#1099#1073#1088#1072#1090#1100' '#1092#1072#1081#1083'...'
    TabOrder = 0
    OnClick = ButtonGoClick
  end
  object MemoResults: TMemo
    Left = 9
    Top = 42
    Width = 211
    Height = 89
    ReadOnly = True
    TabOrder = 1
  end
  object OpenDialogMdb: TOpenDialog
    Filter = '*.mdb'
  end
  object Contracts: TADODataSet
    Parameters = <>
    Left = 33
    Top = 3
  end
end
