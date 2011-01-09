/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NoteContext, NSMutableArray;



@interface NoteSearchContext : NSObject 
{
    struct __CXQuery { } *query;
    NSMutableArray *integerIds;
    NoteContext *noteContext;
}

@property(readonly) __CXQuery *query;


- (id)initWithSearchTerms:(id)arg1 context:(id)arg2;
- (BOOL)nextSearchResults:(id*)arg1 includePrevious:(BOOL)arg2;
- (struct __CXQuery { }*)query;
- (void)dealloc;

@end
