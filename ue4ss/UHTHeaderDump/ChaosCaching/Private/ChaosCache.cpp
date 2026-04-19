#include "ChaosCache.h"

UChaosCache::UChaosCache() {
    this->RecordedDuration = 0.00f;
    this->NumRecordedFrames = 0;
    this->bCompressChannels = false;
    this->ChannelsCompressionErrorThreshold = 0.00f;
    this->ChannelsCompressionSampleRate = 0.03f;
    this->Version = 0;
}


