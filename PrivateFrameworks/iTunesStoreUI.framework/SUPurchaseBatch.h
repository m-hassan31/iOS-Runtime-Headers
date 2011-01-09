/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;



@interface SUPurchaseBatch : NSObject 
{
    NSArray *_continuations;
    NSArray *_errors;
    NSArray *_items;
    BOOL _shouldSuspendWhenFinished;
    NSArray *_validPurchases;
}

@property(retain) NSArray *validPurchases;
@property(readonly) NSArray *items;
@property(retain) NSArray *errors;
@property(retain) NSArray *continuations;
@property BOOL storeShouldExitWhenFinished;


- (void)setDocumentTargetIdentifier:(id)arg1;
- (id)copyContinuationsForPurchases:(id)arg1;
- (id)copyFilteredItemsFromItems:(id)arg1;
- (int (*)())errorEqualCallback;
- (id)everythingFailedErrorForError:(id)arg1;
- (id)mergedErrorForError:(id)arg1 withCount:(NSInteger)arg2;
- (id)_copyModifiedErrorsFromDictionary:(struct __CFDictionary { }*)arg1;
- (id)_copyUniqueErrorsFromErrors:(id)arg1;
- (id)_copyValidPurchasesForItems:(id)arg1;
- (void)_validateItems;
- (void)setValidPurchases:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setContinuations:(id)arg1;
- (void)setStoreShouldExitWhenFinished:(BOOL)arg1;
- (void)setPurchasesAndContinuationsFromPurchases:(id)arg1;
- (id)errors;
- (id)continuations;
- (id)validPurchases;
- (BOOL)storeShouldExitWhenFinished;
- (id)initWithItems:(id)arg1;
- (id)items;
- (void)dealloc;

@end
