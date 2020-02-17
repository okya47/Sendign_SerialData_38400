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
const String KEY_GPS_SPEED = "gspd="; // 29 GPS SPEEDキー
const String KEY_GPS_COURSE = "gcrs="; // 30 GPS COURSEキー
const String KEY_GO_DIRECTION = "gdrc="; // 31 GO DIRECTIONキー
const String KEY_POTENTIOVAL_AVE = "pvav="; // 32 POTENTIOVAL AVEキー

String LR[3] = {L, R, L};
String UpDown[3] = {UP, DOWN, DOWN};
double dGPSLat[3] = {36.277430, 36.318192, 36.291428};
double dGPSLong[3] = {140.484012, 140.458269, 140.528449};
double dGPSLat[3] = {36.277430, 36.318192, 36.291428};
double dGPSLong[3] = {140.484012, 140.458269, 140.528449};

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
    sendDblData(KEY_GPS_LAT, dGPSLat[i], 6);
    sendDblData(KEY_GPS_LONG, dGPSLong[i], 6);
    sendIntData(KEY_GPS_ALT, round(m_dGpsAlt));

    //日時
    sendIntData(KEY_GPS_YEAR, m_iGpsYear);
    sendIntData(KEY_GPS_MONTH, m_iGpsMonth);
    sendIntData(KEY_GPS_DAY, m_iGpsDay);
    sendIntData(KEY_GPS_HOUR, m_iGpsHour);
    sendIntData(KEY_GPS_MINUTE, m_iGpsMinute);
    sendIntData(KEY_GPS_SECOND, m_iGpsSecond);

    //速度
    sendDblData(KEY_GPS_SPD_MPH, m_dGpsSpdMph, 1);

    //コース
    sendDblData(KEY_GPS_COURSE, m_dGpsCourse, 1);
    sendDblData(KEY_GPS_COURSE_AVE, m_dGpsCourseAve, 1);

    //地磁気
    sendIntData(KEY_COMPASS, m_iAngle);
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

