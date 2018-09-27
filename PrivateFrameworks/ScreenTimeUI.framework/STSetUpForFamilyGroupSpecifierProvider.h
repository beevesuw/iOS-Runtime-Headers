/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STSetUpForFamilyGroupSpecifierProvider : STRootGroupSpecifierProvider {
    UIViewController * _presenter;
}

@property (nonatomic) UIViewController *presenter;

+ (id)providerWithCoordinator:(id)arg1 presenter:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentAppleAccountSetupFamilyController:(id)arg1;
- (id)presenter;
- (void)setCoordinator:(id)arg1;
- (void)setPresenter:(id)arg1;

@end