/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventAttendeePicker;



@interface EKEventAttendeesEditViewController : EKEventEditItemViewController 
{
    EKEventAttendeePicker *_picker;
}

@property(copy) NSArray *attendees;


- (id)attendees;
- (void)setAttendees:(id)arg1;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)_firstInvalidRecipientAddress;
- (id)_attendeeFromRecipient:(id)arg1;
- (id)_recipientFromAttendee:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (BOOL)validateAllowingAlert:(BOOL)arg1;

@end
