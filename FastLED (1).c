#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 6

CRGB leds[NUM_LEDS];

int bank_1_size = 57;
int bank_2_size = 57;
int a;
int b;
int offset = 20;
int bank2;

void setup(){
    delay(5000);
        
    FastLED.addLeds<WS2812B,DATA_PIN>(leds,NUM_LEDS);}

void loop(){
    for(int x = 0; x<NUM_LEDS;x++){
    for(int bank1 = 0; bank1 <NUM_LEDS; bank1 = bank1 + 1){
        if(bank1 - offset <= -1)
        {bank2 = NUM_LEDS + bank1 - offset;}
        else
        {bank2 = bank1 - offset;}
        leds[bank1] = CRGB::Red
        leds[bank2] = CRGB::Blue
        FastLED.show();
        delay(400);
        if(bank1 < bank_1_size)
        {a = (bank1 + NUM_LEDS - bank_1_size);}
        else
           {c = (bank1 - bank_1_size);}
        leds[a] = CRGB::Purple
        if(bank2 < bank_2_size)
        {b = (bank2 + NUM_LEDS - bank_2_size);}
        leds[b] = CRGB::Orange
        delay(1)
        }
        for(int i = 0; i < NUM_LEDS;i++ ){
          static unit8_t hue=0;
          leds(0,num_leds/6-1).fill_rainbow(hue++)
          leds(NUM_LEDS/6, NUM_LEDS-1) = LEDS(NUM_LEDS/6-1,0);
          FastLed.delay(1);
        }
    }
} 


