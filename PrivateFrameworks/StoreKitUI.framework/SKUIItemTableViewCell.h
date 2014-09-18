/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIItemCellLayout;

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView> {
    bool_layoutNeedsLayout;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) SKUIItemCellLayout * layout;
@property(readonly) Class superclass;

- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;
- (void)configureForItem:(id)arg1 rowIndex:(long long)arg2;
- (id)layout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellLayoutNeedsLayout;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end