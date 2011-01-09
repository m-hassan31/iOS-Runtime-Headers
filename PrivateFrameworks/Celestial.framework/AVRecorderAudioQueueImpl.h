/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableDictionary;



@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl>
{
    BOOL _isActive;
    BOOL _isRecording;
    BOOL _isWriting;
    NSMutableDictionary *_attributes;
    NSUInteger _fileType;
    NSUInteger _audioCodec;
    long long _maxPCMFramesToRecord;
    BOOL _haveRecordedMaxPCMFrames;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        NSUInteger mFormatID; 
        NSUInteger mFormatFlags; 
        NSUInteger mBytesPerPacket; 
        NSUInteger mFramesPerPacket; 
        NSUInteger mBytesPerFrame; 
        NSUInteger mChannelsPerFrame; 
        NSUInteger mBitsPerChannel; 
        NSUInteger mReserved; 
    } _recordingFormat;
    struct OpaqueAudioFileID { } *_audioFile;
    struct OpaqueAudioQueue { } *_audioQueue;
    NSUInteger _numDeviceChannels;
    struct AudioQueueLevelMeterState { float x1; float x2; } *_audioLevels;
    struct AudioQueueLevelMeterState { float x1; float x2; } *_audioLevelsDB;
    NSUInteger _totalBytesRecorded;
    NSUInteger _totalPacketsRecorded;
    NSUInteger _totalFramesRecorded;
    struct AudioQueueBuffer {} *_buffers[3];
    BOOL _bufferUsed[3];
}


- (id)attributeForKey:(id)arg1;
- (BOOL)isRecording;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 useDB:(BOOL)arg3;
- (void)copyEncoderCookieToFile;
- (void)haveABuffer:(struct AudioQueueBuffer { NSUInteger x1; void *x2; NSUInteger x3; void *x4; NSUInteger x5; struct AudioStreamPacketDescription {} *x6; NSUInteger x7; }*)arg1 withTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; NSUInteger x_5_1_3; NSUInteger x_5_1_4; NSUInteger x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; NSUInteger x6; NSUInteger x7; }*)arg2 andNumPackets:(unsigned long)arg3 andPacketDescs:(const struct AudioStreamPacketDescription { long long x1; NSUInteger x2; NSUInteger x3; }*)arg4;
- (id)initWithAttributes:(id)arg1;
- (BOOL)activate:(id*)arg1;
- (BOOL)takePhoto;
- (BOOL)autoFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)micVolume;
- (void)setMicVolume:(float)arg1;
- (long long)recordedFileSizeInBytes;
- (NSUInteger)audioNumDeviceChannels;
- (BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2;
- (BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2;
- (BOOL)start;
- (BOOL)isActive;
- (void)deactivate;
- (id)init;
- (void)dealloc;
- (id)filePath;
- (void)stop;
- (void)setFilePath:(id)arg1;
- (double)recordedDuration;

@end
