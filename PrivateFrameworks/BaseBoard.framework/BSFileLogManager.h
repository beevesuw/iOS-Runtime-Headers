/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BSFileLogManager : NSObject <BSFileLoggerDelegate> {
    NSMutableDictionary *_loggersByName;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)_queue_addLogger:(id)arg1;
- (void)_queue_enableOrDisableLoggerIfNecessary:(id)arg1;
- (bool)_queue_isClass:(Class)arg1 aKindOfClass:(Class)arg2;
- (void)_queue_loadFileLoggers;
- (void)dealloc;
- (void)flush;
- (id)init;
- (void)loggerEnabledStateChanged:(id)arg1;
- (id)loggerForName:(id)arg1;
- (void)reloadFromDefaults;

@end