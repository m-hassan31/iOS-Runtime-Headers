/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UITextChecker : NSObject 
{
    id _checker;
    id _reserved;
    NSInteger _usdt;
}

+ (NSInteger)uniqueSpellDocumentTag;
+ (id)availableLanguages;
+ (struct __CFSet { }*)createDictHashTable:(BOOL)arg1;
+ (id)openUserDictionary:(id)arg1;
+ (id)dictionaryInfo:(id)arg1;
+ (BOOL)_learnWord:(id)arg1 inDictionary:(id)arg2;
+ (BOOL)_forgetWord:(id)arg1 inDictionary:(id)arg2;
+ (BOOL)_isWord:(id)arg1 inDictionary:(id)arg2;
+ (id)_wordsInDictionary:(id)arg1;
+ (void)_setWords:(id)arg1 inDictionary:(id)arg2;
+ (void)learnWord:(id)arg1;
+ (BOOL)hasLearnedWord:(id)arg1;
+ (void)unlearnWord:(id)arg1;

- (id)_nameOfDictionaryForDocumentTag:(NSInteger)arg1;
- (void)_setLanguageDictionaryName:(id)arg1;
- (void)_setDocumentDictionaryName:(id)arg1;
- (void)initUserAddressBook;
- (void)initUserDictionaries;
- (void)initGlobals;
- (NSInteger)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(NSInteger)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id*)arg4;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_chunkAndFindMisspelledWordInString:(id)arg1 language:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(NSInteger*)arg4 correction:(id*)arg5 usingChecker:(id)arg6;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })checkSpellingOfString:(id)arg1 startingAt:(NSInteger)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })checkGrammarOfString:(id)arg1 startingAt:(NSInteger)arg2 language:(id)arg3 wrap:(BOOL)arg4 details:(id*)arg5;
- (id)correctionForWordRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (id)completionsForPartialWordRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (void)ignoreWord:(id)arg1;
- (id)ignoredWords;
- (void)setIgnoredWords:(id)arg1;
- (BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)_checker;
- (id)guessesForWordRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (id)_initWithAsynchronousLoading:(BOOL)arg1;
- (BOOL)_doneLoading;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 startingAt:(NSInteger)arg3 wrap:(BOOL)arg4 language:(id)arg5;
- (id)init;
- (void)dealloc;

@end
