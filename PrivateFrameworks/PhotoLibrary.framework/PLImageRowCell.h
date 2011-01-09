/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray;



@interface PLImageRowCell : UITableViewCell 
{
    NSMutableArray *_stackItemViews;
    struct CGImage { } *_rowImage;
}

@property(readonly) NSArray *stackItemViews;

+ (Class)layerClass;
+ (void)_initializeSafeCategory;

- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (void)removeStackItemView:(id)arg1;
- (void)redrawStackItemView:(id)arg1;
- (void)clearContents;
- (id)stackItemViews;
- (void)setRowImage:(struct CGImage { }*)arg1;
- (void)addStackItemView:(id)arg1;
- (BOOL)_accessibilityAlwaysReturnsChild;

@end
