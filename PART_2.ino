  #define AMS5915_DEFAULT_ADDRESS          (0x28)
 
/**************************************************************************
    CONVERSION DELAY (in mS)
**************************************************************************/
    #define AMS5915_CONVERSIONDELAY          (100)
 
 
class AMS5915
{
    protected:
        // Instance-specific properties
        uint8_t ams_conversionDelay;
        float pressure, temperature;
    
    public:
        uint8_t ams_i2cAddress;
        void getAddr_AMS5915(uint8_t i2cAddress);
        void begin(void);
        float getPressure(void);
        float getTemperature(void);
        void Measure_PressureAndTemperature(float pMin, float pMax);
  
    private:
};
