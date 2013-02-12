/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASMailMessage, NSArray, NSMutableSet, NSString;

@interface ASFolderItemsSyncTask : ASTask <NSCopying> {
    NSInteger _bodyTruncationBytes;
    NSArray *_commands;
    BOOL _deletesAsMoves;
    NSInteger _filterDays;
    NSString *_folderID;
    BOOL _haveShortcut121Response;
    BOOL _isInitialSync;
    BOOL _isResyncAfterConnectionFailed;
    BOOL _isSpinning;
    NSInteger _mimeSupport;
    BOOL _moreAvailable;
    NSInteger _numReplacedItems;
    NSString *_previousSyncKey;
    NSMutableSet *_rejectedServerIds;
    ASMailMessage *_streamingMailMessage;
    NSInteger _type;
    BOOL _willUpdate;
}

- (void)_addRejectedServerId:(id)arg1;
- (NSInteger)_bodyTruncationCode;
- (NSInteger)_filterCode;
- (void)_handleChangedLeaf:(id)arg1 addedChangesPtr:(id*)arg2 modifiedChangesPtr:(id*)arg3 removedChangesPtr:(id*)arg4;
- (void)_handleResponseToLeaf:(id)arg1 addedResponsesPtr:(id*)arg2 modifiedResponsesPtr:(id*)arg3 removedResponsesPtr:(id*)arg4 fetchedResponsesPtr:(id*)arg5;
- (NSInteger)_mimeSupportCode;
- (NSInteger)_mimeTruncationCode;
- (void)_setSpinning:(BOOL)arg1;
- (void)appendCommandData:(id)arg1;
- (void)appendSupportedFieldsData:(id)arg1;
- (NSInteger)bodyType;
- (NSInteger)commandCode;
- (id)commands;
- (NSInteger)connectionActionForResponse:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (NSInteger)filterDays;
- (void)finishWithError:(id)arg1;
- (id)folderID;
- (NSInteger)handleStreamOperation:(NSInteger)arg1 forCodePage:(NSInteger)arg2 tag:(NSInteger)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(NSInteger)arg6;
- (id)initWithFolderID:(id)arg1 deletesAsMoves:(BOOL)arg2;
- (id)initWithFolderID:(id)arg1;
- (BOOL)isInitialSync;
- (BOOL)isResyncAfterConnectionFailed;
- (NSInteger)mimeSupport;
- (BOOL)moreAvailable;
- (double)percentComplete;
- (id)previousSyncKey;
- (BOOL)processContext:(id)arg1;
- (id)rejectedServerIds;
- (id)replacementObjectForEmailItem:(id)arg1;
- (id)requestBody;
- (void)setBodyTruncationBytes:(NSInteger)arg1;
- (void)setCommands:(id)arg1;
- (void)setFilterDays:(NSInteger)arg1;
- (void)setIsInitialSync:(BOOL)arg1;
- (void)setIsResyncAfterConnectionFailed:(BOOL)arg1;
- (void)setMIMESupport:(NSInteger)arg1;
- (void)setMoreAvailable:(BOOL)arg1;
- (void)setPreviousSyncKey:(id)arg1;
- (void)setStreamingMailMessage:(id)arg1;
- (void)setSyncClassType:(NSInteger)arg1;
- (void)setWillUpdate:(BOOL)arg1;
- (id)streamingMailMessage;
- (NSInteger)syncClassType;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;
- (BOOL)willUpdate;

@end