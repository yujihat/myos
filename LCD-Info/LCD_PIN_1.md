## ILI9341搭載 2.8インチ TFT LCD モジュール（タッチパネルあり）ピン配置（Raspberry Pi 5用）

- LCD画面を**正面から見て**、**左側にピンヘッダがある**状態で説明します。

| 番号 | ピン名  | 役割                     | Raspberry Pi接続例      | 備考                      |
|------|---------|--------------------------|--------------------------|---------------------------|
| 1    | VCC     | 電源入力（3.3V）         | 3.3V (Pin 1)             | 電源供給                  |
| 2    | GND     | グランド                 | GND (Pin 6)              | グランド接続              |
| 3    | CS      | チップセレクト（SPI）    | GPIO8 (SPI0_CE0, Pin 24) | SPI通信の選択信号        |
| 4    | RESET   | リセット                 | GPIO25 (Pin 22)          | モジュールのリセット      |
| 5    | DC/RS   | データ/コマンド選択      | GPIO24 (Pin 18)          | データとコマンドの切り替え |
| 6    | SDI/MOSI| SPI データ入力（MOSI）   | GPIO10 (SPI0_MOSI, Pin 19) | SPIデータ送信            |
| 7    | SCK     | SPI クロック             | GPIO11 (SPI0_SCLK, Pin 23) | SPIクロック信号          |
| 8    | LED     | バックライト制御         | GPIO18 (Pin 12)          | バックライトの明るさ調整 |
| 9    | SDO/MISO| SPI データ出力（MISO）  | GPIO9 (SPI0_MISO, Pin 21) | SPIデータ受信            |
| 10   | T_CLK   | タッチ SPIクロック        | GPIO11 (Pin 23)          | タッチSPIクロック        |
| 11   | T_CS    | タッチ チップセレクト    | GPIO7 (Pin 7)            | タッチパネルの選択信号  |
| 12   | T_DIN   | タッチ SPIデータ入力     | GPIO10 (Pin 19)          | タッチSPIデータ送信      |
| 13   | T_DO    | タッチ SPIデータ出力     | GPIO9 (Pin 21)           | タッチSPIデータ受信      |
| 14   | T_IRQ   | タッチ IRQ（割り込み）    | GPIO17 (Pin 11)          | タッチの割り込み信号     |

