/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, <IMConnectionMonitorDelegate>;



@interface IMConnectionMonitor : NSObject 
{
    <IMConnectionMonitorDelegate> *_delegate;
    NSString *_remoteHost;
}

+ (id)alloc;

- (void)_setup;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)goDisconnected;
- (void)setDataConnectionActive:(BOOL)arg1;
- (BOOL)isDataConnectionActive;
- (BOOL)requiresDataConnectionActivation;
- (BOOL)isReachableAfterModemDial;
- (BOOL)startDialUp;
- (id)remoteHost;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (BOOL)isImmediatelyReachable;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end