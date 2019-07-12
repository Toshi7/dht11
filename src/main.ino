#include "DHT.h"          // DHT.h をインポート
#define DHTPIN 22         // DHT sensor アウトプットピンの指定
#define DHTTYPE DHT11     // DHT型の指定
DHT dht(DHTPIN, DHTTYPE); // DHTセンサーライブラリーを使うための設定

void setup() {
    Serial.begin(115200);              //シリアル通信の速度を指定
    delay(2000);                     // 2秒間待つ
    Serial.println("DHT11 sensor!"); // DHT11 sensor!をシリアルモニターに表示
    dht.begin();                     //DHT11センサーを使うためにbeginメソッドを呼ぶ
}

void loop() {
    float h = dht.readHumidity();    //湿度読み取り
    float t = dht.readTemperature(); //温度読み取り
    
    // 読み取りに失敗しているかチェック
    // 失敗している場合はもう一度、温湿度の読み取りをする
    if (isnan(h) || isnan(t)) {
       Serial.println("Failed to read from DHT sensor!");
       return;
    }
    
    //シリアルモニターに表示
    Serial.print("湿度: ");
    Serial.print(h);
    Serial.print(" %\t");
    Serial.print("温度: ");
    Serial.print(t);
    Serial.println(" *C ");
    delay(2000);// 2秒間待つ
}
