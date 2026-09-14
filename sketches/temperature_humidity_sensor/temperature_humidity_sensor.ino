#include <dht_nonblocking.h>

#define DHT_SENSOR_TYPE DHT_TYPE_11

static const int dhtPin = 2; // signal pin of the dht11 to arduino digital pin 2

DHT_nonblocking dht_sensor(dhtPin, DHT_SENSOR_TYPE);

void setup()
{
  Serial.begin(9600);
}

// poll for a measurement, keeping the state machine alive
static bool measure_environment(float *temperature, float *humidity)
{
  static unsigned long measurement_timestamp = millis();

  // measure once every three seconds
  if (millis() - measurement_timestamp > 3000ul)
  {
    if (dht_sensor.measure(temperature, humidity) == true)
    {
      measurement_timestamp = millis();
      return true;
    }
  }

  return false;
}

void loop()
{
  float temperature;
  float humidity;

  if (measure_environment(&temperature, &humidity) == true)
  {
    Serial.print("temperature = ");
    Serial.print(temperature, 1);
    Serial.print(" deg C, humidity = ");
    Serial.print(humidity, 1);
    Serial.println("%");
  }
}
