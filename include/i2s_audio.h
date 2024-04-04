#ifndef I2S_AUDIO_H_
#define I2S_AUDIO_H_

#include <driver/i2s.h>

// Define the I2S pins
#define I2S_BCLK_PIN 26 // I2S Bit Clock pin
#define I2S_LRC_PIN 25 // I2S Left/Right Clock pin
#define I2S_DOUT_PIN 27 // I2S Data Out pin

// Define the sample rate and bit depth of the audio data
#define SAMPLE_RATE 44100
#define BIT_DEPTH 16

/**
 * @author  dendifuadi
 * @brief   Setup and enable (install) I2S driver
 * @param   
 */
void i2s_setup();

#endif