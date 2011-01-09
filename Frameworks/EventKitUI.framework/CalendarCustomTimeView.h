/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UIFont;



@interface CalendarCustomTimeView : UIView 
{
    NSInteger _style;
    unsigned int _isAllDay : 1;
    unsigned int _showDates : 1;
    unsigned int _highlighted : 1;
    unsigned int _forceSingleLine : 1;
    unsigned int _startDesignator : 2;
    unsigned int _endDesignator : 2;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _startDate;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _endDate;
    NSString *_startTimeString;
    NSString *_endTimeString;
    NSString *_startDateString;
    NSString *_endDateString;
    UIFont *_timeFont;
    UIFont *_designatorFont;
    UIFont *_betweenFont;
    NSString *_betweenTimesString;
    NSString *_startDesignatorString;
    NSString *_endDesignatorString;
    float _startTimeX;
    float _startDateX;
    float _endTimeX;
    float _endDateX;
    float _startTimeDesignatorX;
    float _endTimeDesignatorX;
    float _betweenTimeX;
    float _firstLineWidth;
    float _secondLineWidth;
    float _fullWidth;
    float _fullHeight;
    float _yTextOffset;
}


- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_rebuildStrings;
- (void)setShowDates:(BOOL)arg1;
- (BOOL)_isTwoLinesHigh;
- (NSInteger)_designatorForTime:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 use24Hr:(BOOL)arg2;
- (id)_timeString:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 use24Hr:(BOOL)arg2;
- (id)_dateString:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)relayoutText;
- (void)setStartDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 endDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2;
- (float)fullTextWidth;
- (BOOL)showDates;
- (void)setForceSingleLine:(BOOL)arg1;
- (float)fullTextHeight;
- (void)_localeChanged;
- (void)setIsAllDay:(BOOL)arg1;

@end
