#include <stdio.h>

#include "i2s_audio.h"
#include "sound_test.h"
#include "aes.h"

void app_main(void)
{
    size_t bytesWritten;
    i2s_setup();
    i2s_write(I2S_NUM_0, sampleAudio, AUDIO_DATA_SIZE, &bytesWritten, portMAX_DELAY);
    i2s_driver_uninstall(I2S_NUM_0);
}