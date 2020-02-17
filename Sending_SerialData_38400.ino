int i = 0;
const String KEY_GPS_LAT = "glat=";   //GPS LATキー
const String KEY_GPS_LONG = "glng="; //GPS LONGキー

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

