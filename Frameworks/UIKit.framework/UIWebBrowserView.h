/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMNode, NSMutableArray, NSObject<UIFormPeripheral>, NSTimer, UIResponder, UIWebFormAccessory, UIWebFormDelegate, UIWebTouchEventsGestureRecognizer, WebPDFView;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        NSMutableArray *all; 
        NSMutableArray *html; 
        NSMutableArray *javascript; 
        NSMutableArray *css; 
        NSMutableArray *error; 
        NSMutableArray *warning; 
        NSMutableArray *tip; 
        NSMutableArray *log; 
    struct { 
        WebPDFView *view; 
        NSTimer *timer; 
    unsigned int _accessoryEnabled : 1;
    unsigned int _forceInputView : 1;
    unsigned int _formIsAutoFilling : 1;
    unsigned int _inputViewObeysDOMFocus : 1;
    unsigned int _hasEditedTextField : 1;
    UIWebFormAccessory *_accessory;
    DOMNode *_currentAssistedNode;
    UIResponder *_editingDelegateForEverythingExceptForms;
    UIWebFormDelegate *_formDelegate;
    NSObject<UIFormPeripheral> *_input;
    } _inputViewBounds;
    float _lastAdjustmentForScroller;
    } _messages;
    } _pdf;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
}

@property(retain) UIWebFormAccessory *_accessory;
@property(retain) DOMNode *_currentAssistedNode;
@property UIResponder *_editingDelegateForEverythingExceptForms;
@property(retain) NSObject<UIFormPeripheral> *_input;
@property(getter=isAccessoryEnabled) BOOL accessoryEnabled;
@property BOOL allowsInlineMediaPlayback;
@property(readonly) BOOL hasEditedTextField;
@property CGRect inputViewBounds;
@property BOOL inputViewObeysDOMFocus;
@property BOOL mediaPlaybackRequiresUserAction;

+ (id)_PDFPageNumberLabel;
+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;
+ (BOOL)isAutoFillAllowed;
+ (float)preferredScrollDecelerationFactor;

- (id)_accessory;
- (void)_autoFillFrame:(id)arg1;
- (id)_buildVersion;
- (void)_centerRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(NSInteger)arg4;
- (void)_cleanUpPDF;
- (void)_clearAllConsoleMessages;
- (void)_clearSelectionAndUI;
- (struct CGPoint { float x1; float x2; })_convertWindowPointToViewport:(struct CGPoint { float x1; float x2; })arg1;
- (id)_currentAssistedNode;
- (void)_displayFormNodeInputView;
- (BOOL)_domainIsWhitelistedForUDIDHeader:(id)arg1;
- (void)_dumpWebArchiveAtPath:(id)arg1;
- (id)_editingDelegate;
- (id)_editingDelegateForEverythingExceptForms;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingRect;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)_hidePDFPageNumberLabel;
- (id)_input;
- (id)_keyboardResponder;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_requestWithUDIDHeaderIfAppropriate:(id)arg1;
- (BOOL)_requiresKeyboardResetOnReload;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (void)_resetFormDataForFrame:(id)arg1;
- (void)_scrollCaretToVisible:(id)arg1;
- (void)_setBrowserUserAgentProductVersion:(id)arg1 bundleVersion:(id)arg2;
- (void)_setPDFView:(id)arg1;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (void)_setUIWebViewUserAgent;
- (void)_startAssistingKeyboard;
- (void)_startAssistingSelectForNode:(id)arg1;
- (void)_startURLificationIfNeededCoalesce:(BOOL)arg1;
- (void)_stopAssistingFormNode;
- (void)_stopAssistingKeyboard;
- (void)_stopAssistingSelectForNode:(id)arg1;
- (void)_updateAccessory;
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)arg1;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ensuringVisibilityOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withScale:(float)arg2;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)accessoryAutoFill;
- (void)accessoryDone;
- (void)accessoryTab:(BOOL)arg1;
- (BOOL)allowsInlineMediaPlayback;
- (void)assistFormNode:(id)arg1;
- (void)autoFillWithElementValue;
- (BOOL)canAutoFill;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)clearMessagesMatchingMask:(NSInteger)arg1;
- (void)dealloc;
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)arg1;
- (id)formElement;
- (BOOL)hasEditedTextField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputViewBounds;
- (BOOL)inputViewObeysDOMFocus;
- (void)installGestureRecognizers;
- (BOOL)isAccessoryEnabled;
- (BOOL)isAutoFillMode;
- (BOOL)isAutoFilling;
- (BOOL)mediaPlaybackRequiresUserAction;
- (id)messagesMatchingMask:(NSInteger)arg1;
- (BOOL)playsNicelyWithGestures;
- (void)promptForReplace:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)setAccessoryEnabled:(BOOL)arg1;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputViewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputViewObeysDOMFocus:(BOOL)arg1;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (void)set_accessory:(id)arg1;
- (void)set_currentAssistedNode:(id)arg1;
- (void)set_editingDelegateForEverythingExceptForms:(id)arg1;
- (void)set_input:(id)arg1;
- (id)textFormElement;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 formStateDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 formStateDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webViewFormEditedStatusHasChanged:(id)arg1;
- (id)webVisiblePositionForPoint:(struct CGPoint { float x1; float x2; })arg1;

@end