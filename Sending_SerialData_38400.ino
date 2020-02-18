int i = 0;
const String KEY_LR = "lrlr="; // 0 LEFT/RIGHTキー
const String KEY_UP_DOWN = "updn="; // 1 UP/DOWNキー
const String KEY_DATA_COUNT = "cont="; // 2 COUNTキー
const String KEY_TARGET_LAT = "tlat=";   // 3 TARGET LATキー
const String KEY_TARGET_LONG = "tlng="; // 4 TARGET LONGキー
const String KEY_GPS_LAT = "glat=";   // 5 GPS LATキー
const String KEY_GPS_LONG = "glng="; // 6 GPS LONGキー
const String KEY_WIND_VELOCITY = "wvel="; // 7 WIND VELOCITYキー
const String KEY_SAIO_BANGLE = "sbag="; // 8 SAIL BASE ANGLEキー
const String KEY_SAIL_ANGLE = "sang="; // 9 SAIL ANGLEキー
const String KEY_RUDDER_ANGLE = "rang="; // 10 RUDDER ANGLEキー
const String KEY_WIND_DEGREE = "wdeg="; // 11 WIND DEGREEキー
const String KEY_WIND_TANGLE = "wtag="; // 12 WIND TARGET ANGLEキー
const String KEY_MACHINE_ANGLE = "mang="; // 13 MACHINE ANGLEキー
const String KEY_UPWIND_ANGLE = "uwag="; // 14 UPWIND ANGLEキー
const String KEY_DOWNWIND_ANGLE = "dwag="; // 15 DOWNWIND ANGLEキー
const String KEY_DISTANCE_RETURN = "drtn="; // 16 DISTANCE RETURNキー
const String KEY_BATTERY_VOLT = "volt="; // 17 BATTERYキー
const String KEY_WIND_AXISD = "wadt="; // 18 WIND AXIS DISTANCEキー
const String KEY_WIND_CROSSD = "wcdt="; // 19 WIND CROSS DISTANCEキー
const String KEY_POTENTIO_VAL = "pval="; // 20 POTENTIOVALキー
const String KEY_DISTANCE_TARGET = "dtar="; // 21 DISTANCE TARGETキー
const String KEY_DISTANCE_LAT = "dlat="; // 22 DISTANCE LATキー
const String KEY_DISTANCE_LONG = "dlng="; // 23 DISTANCE LONGキー
const String KEY_TARGET_DEGREE = "tdeg="; // 24 TARGET DEGREEキー
const String KEY_COMPASS_DEGREE = "cdeg="; // 25 COMPASS DEGREEキー
const String KEY_TEMP_BME280 = "tbme="; // 26 TEMP BME280キー
const String KEY_HUMID_BME280 = "hbme="; // 27 HUMID BME280キー
const String KEY_PRESSURE_BME280 = "pbme="; // 28 PRESSURE BME280キー
const String KEY_GPS_SPD_MPH = "gspd="; // 29 GPS SPEEDキー
const String KEY_GPS_COURSE = "gcrs="; // 30 GPS COURSEキー
const String KEY_GO_DIRECTION = "gdrc="; // 31 GO DIRECTIONキー
const String KEY_POTENTIOVAL_AVE = "pvav="; // 32 POTENTIOVAL AVEキー
const String KEY_GPS_YEAR = "year="; // 33 GPS YEARキー
const String KEY_GPS_MONTH = "mnth="; // 34 GPSMONTHキー
const String KEY_GPS_DAY = "dday="; // 35 GPS DAYキー
const String KEY_GPS_HOUR = "hour="; // 36 GPS HOURキー
const String KEY_GPS_MINUTE = "mnte="; // 37 GPS MINUTEキー
const String KEY_GPS_SECOND = "scnd="; // 38 GPS SECONDキー

String strLR[3] = {L, R, L};   // 0
String strUpDown[3] = {UP, DOWN, DOWN};    // 1
int count[3] = {100, 200, 300};     // 2
double targetGPSLat[3] = {36.277450, 36.277450, 36.277450};    // 3
double targetGPSLong[3] = {140.45869, 140.45869, 140.45869};   // 4
double dGPSLat[3] = {36.277430, 36.318192, 36.291428};      // 5
double dGPSLong[3] = {140.484012, 140.458269, 140.528449};  // 6
int WindVelocity[3] = {50, 100, 150};   // 7
int Sail_Base_Angle[3] = {15, 20, 25};   // 8
int Sail_Angle[3] = {20, 25, 30};   // 9
int rudderAngle[3] = {10, 15, 20};   // 10
int windDeg[3] = {-15, 15, 30};     // 11
int windTargetAngle[3] = {135, 150, 120};     // 12
int machineAngle[3] = {70, 110, -80};     // 13
int upwindAngle[3] = {75, 80, 85};     // 14
int downwindAngle[3] = {110, 120, 105};     // 15
int dis_return[3] = {100, 50, 80};     // 16
double volt[3] = {8.0, 7.4, 4.5};     // 17
double windAxisDistance[3] = {150.8, 180.8, 120.33};     // 18
double windCrossDistance[3] = {140.83, 18.8, 12.33};     // 19
int potentioVal[3] = {50, 54, 80};     // 20
double disTarget[3] = {240.83, 118.8, 112.33};     // 21
double disLat[3] = {150.8, 180.8, 120.33};     // 22
double disLong[3] = {140.83, 18.8, 12.33};     // 23
int targetDeg[3] = {89, 112, 133};     // 24
int compassDeg[3] = {189, 222, 163};     // 25
double tempBME280[3] = {28.4, 25.5, 19.9};     // 26
double humidBME280[3] = {50.5, 45.4, 51.3};     // 27
double presBME280[3] = {1012.83, 1008.8, 1002.33};     // 28
double dGPSSpdMph[3] = {3.3, 4.4, 4.2};     // 29
int dGPSCourse[3] = {130, 140, 150};     // 30
int goDirection[3] = {189, 222, 163};     // 31
int potentioValAve[3] = {11, 22, 33};     // 32
int iGpsYear[3] = {1999, 2000, 2020};     // 27
int iGpsMonth[3] = {1, 9, 12};     // 28
int iGpsDay[3] = {2, 11, 31};     // 29
int iGpsHour[3] = {13, 14, 15};     // 30
int iGpsMinute[3] = {5, 10, 59};     // 31
int iGpsSecond[3] = {0, 9, 44};     // 32

void sendDblData(String key, double data, int format)
{
    //改行を含めないデータを送信する
    Serial.print(key);
    Serial.print(data, format);
    Serial.println(";");
}

void sendIntData(String key, int data)
{
    //改行を含めないデータを送信する
    Serial.print(key);
    Serial.print(data);
    Serial.print(";");
}

void sendLongData(String key, long data)
{
    //改行を含めないデータを送信する
    Serial.print(key);
    Serial.print(data);
    Serial.print(";");
}

void sendStrData(String key, String data)
{
    //改行を含めないデータを送信する
    Serial.print(key);
    Serial.print(data);
    Serial.print(";");
}

void sendData() {
    sendStrData(KEY_LR, strLR[i]);
    sendStrData(KEY_UP_DOWN, strUpDown[i]);
    sendIntData(KEY_DATA_COUNT, count[i]);

    sendDblData(KEY_TARGET_LAT, targetGPSLat[i], 6);
    sendDblData(KEY_TARGET_LONG, targetGPSLong[i], 6);
    sendDblData(KEY_GPS_LAT, dGPSLat[i], 6);
    sendDblData(KEY_GPS_LONG, dGPSLong[i], 6);
    // sendIntData(KEY_GPS_ALT, round(m_dGpsAlt));

    sendIntData(KEY_WIND_VELOCITY, WindVelocity[i]);
    sendIntData(KEY_SAIO_BANGLE, Sail_Base_Angle[i]);
    sendIntData(KEY_SAIL_ANGLE, Sail_Angle[i]);
    sendIntData(KEY_RUDDER_ANGLE, rudderAngle[i]);
    sendIntData(KEY_WIND_DEGREE, windDeg[i]);
    sendIntData(KEY_WIND_TANGLE, windTargetAngle[i]);
    sendIntData(KEY_MACHINE_ANGLE, machineAngle[i]);
    sendIntData(KEY_UPWIND_ANGLE, upwindAngle[i]);
    sendIntData(KEY_DOWNWIND_ANGLE, downwindAngle[i]);
    sendIntData(KEY_DISTANCE_RETURN, dis_return[i]);
    sendDblData(KEY_BATTERY_VOLT, volt[i], 1);
    sendDblData(KEY_WIND_AXISD, windAxisDistance[i], 1);
    sendDblData(KEY_WIND_CROSSD, windCrossDistance[i], 1);
    sendIntData(KEY_POTENTIO_VAL, potentioVal[i]);
    sendDblData(KEY_DISTANCE_TARGET, disTarget[i], 1);
    sendDblData(KEY_DISTANCE_LAT, disLat[i], 1);
    sendDblData(KEY_DISTANCE_LONG, disLong[i], 1);
    sendIntData(KEY_TARGET_DEGREE, targetDeg[i]);
    sendIntData(KEY_COMPASS_DEGREE, compassDeg[i]);
    sendDblData(KEY_TEMP_BME280, tempBME280[i], 1);
    sendDblData(KEY_HUMID_BME280, humidBME280[i], 1);
    sendDblData(KEY_PRESSURE_BME280, presBME280[i], 1);
    sendDblData(KEY_GPS_SPD_MPH, dGPSSpdMph[i], 1);
    sendIntData(KEY_GPS_COURSE, dGPSCourse[i]);
    sendIntData(KEY_GO_DIRECTION, goDirection[i]);
    sendIntData(KEY_POTENTIOVAL_AVE, potentioValAve[i]);

    //日時
    sendIntData(KEY_GPS_YEAR, iGpsYear[i]);
    sendIntData(KEY_GPS_MONTH, iGpsMonth[i]);
    sendIntData(KEY_GPS_DAY, iGpsDay[i]);
    sendIntData(KEY_GPS_HOUR, iGpsHour[i]);
    sendIntData(KEY_GPS_MINUTE, iGpsMinute[i]);
    sendIntData(KEY_GPS_SECOND, iGpsSecond[i]);
}

void setup() {
    // Serial.begin(9600);
    Serial.begin(38400);
}

void loop() {
    sendData();
    i ++;
    if (i > 2) i = 0;
    delay(1000);
    // Serial.println("R,down,000029,36.465122,140.565990,36.465443,140.579590, 617,15,45, 70, 98, 170,-155, 20, 20, 20, 7.95, -1199.2, 211.4, -65,1217.7,-35.67,-1217.15,268,33,31.72,39.37,1024.75,0.8,91.6,110,-60;2019/08/22 18:17:49,47.3,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65");
    // delay(1000);

    // Serial.println("L,down,000030,36.465122,140.565990,36.465450,140.579590, 617,15,45, 70,300, -32,  25, 20, 20, 20, 7.95, 1032.7, -645.3, -65,1217.7,-36.52,-1217.15,268,235,31.73,39.36,1024.73,1.3,83.1,-70,-60;2019/08/22 18:17:50,46.4,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65");
    // delay(1000);

    // Serial.println("R,down,000031,36.465122,140.565990,36.465454,140.579590, 617,15,45, 70, 93, 175,-155, 20, 20, 20, 7.95, -1213.1, 106.1, -65,1217.7,-36.94,-1217.15,268,28,31.73,39.33,1024.76,1.3,83.1,110,-60;2019/08/22 18:17:51,45.1,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65");
    // delay(1000);

    // Serial.println("L,up  ,000032,36.465122,140.565990,36.465450,140.579590, 616,15,45,110,303, -35,-155, 20, 20, 20, 7.93, 997.5, -698.4, -65,1217.7,-36.52,-1217.15,268,238,31.74,39.32,1024.77,0.4,76.7,-70,-60;2019/08/22 18:17:53,43.5,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65");
    // delay(1000);
}

