/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class PreferencesDoubleTwoPartValueCell;



@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener>
{
    PreferencesDoubleTwoPartValueCell *_cell;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _startDateGr;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _endDateGr;
    BOOL _indent;
}


- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (id)cellForSubitemAtIndex:(NSInteger)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (void)shortenCell:(id)arg1;

@end
