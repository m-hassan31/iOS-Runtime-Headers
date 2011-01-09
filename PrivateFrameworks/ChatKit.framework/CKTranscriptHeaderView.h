/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIPlacardButton;



@interface CKTranscriptHeaderView : UIView 
{
    id _delegate;
    UIPlacardButton *_callButton;
    UIPlacardButton *_faceTimeButton;
    UIPlacardButton *_contactsButton;
    UIPlacardButton *_loadMoreButton;
    BOOL _hasContact;
    BOOL _faceTimeAvailable;
    BOOL _isGroupMessage;
}

@property(readonly) BOOL isGroupMessage;
@property BOOL faceTimeAvailable;
@property BOOL hasContact;
@property <CKTranscriptHeaderDelegate> *delegate;

+ (float)defaultHeight;

- (void)_buttonClicked:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isGroupMessage;
- (BOOL)faceTimeAvailable;
- (BOOL)hasContact;
- (void)setButtonsEnabled:(BOOL)arg1;
- (void)setFaceTimeAvailable:(BOOL)arg1;
- (void)setHasContact:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isPhoneTranscript:(BOOL)arg2 displayLoadPrevious:(BOOL)arg3 isGroupMessage:(BOOL)arg4;

@end
