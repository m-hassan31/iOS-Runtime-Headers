/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSDictionary;



@interface FormToABBinder : NSObject 
{
    NSDictionary *_abPointers;
    NSArray *_fieldLabels;
    NSDictionary *_synonyms;
}

+ (void)loadBinders;
+ (void)clearBinders;
+ (id)abPointerForControl:(id)arg1 rep:(id)arg2 useFieldName:(BOOL)arg3;
+ (id)synonymsForMatch:(id)arg1;

- (void)_indexMapping:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)abPointerForControl:(id)arg1 rep:(id)arg2 useFieldName:(BOOL)arg3 foundByPageScan:(BOOL*)arg4;
- (id)synonymsForMatch:(id)arg1;
- (void)dealloc;

@end
