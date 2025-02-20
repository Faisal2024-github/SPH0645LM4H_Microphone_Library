/*
  Modified for SparkFun MicroMod Artemis compatibility.
  Supports I2S Slave Mode & 16-bit PCM output.
*/

#ifndef AUDIO_IN_I2S_H
#define AUDIO_IN_I2S_H

#include "AudioIn.h"

class AudioInI2S : public AudioIn {
public:
    AudioInI2S();  // Constructor
    
    // Initializes I2S in slave mode with given sample rate and bit depth
    bool begin(long sampleRate, int bitsPerSample);
    
    // Reads audio data from I2S bus and converts to 16-bit PCM
    int read();
    
    // Stops I2S communication
    void end();
};

#endif

