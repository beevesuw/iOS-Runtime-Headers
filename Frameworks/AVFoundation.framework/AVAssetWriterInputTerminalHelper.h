/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper 
{
    NSInteger _terminalStatus;
    BOOL _didRequestMediaDataOnce;
}


- (NSInteger)status;
- (void)transitionToTerminalStatus:(NSInteger)arg1;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)markAsFinished;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(NSInteger)arg2;
- (id)initWithConfigurationState:(id)arg1;

@end