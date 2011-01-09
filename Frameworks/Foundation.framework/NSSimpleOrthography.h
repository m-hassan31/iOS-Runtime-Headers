/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSSimpleOrthography : NSOrthography 
{
    NSUInteger _orthographyFlags;
}

+ (id)orthographyWithFlags:(NSUInteger)arg1;
+ (void)initialize;

- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (id)dominantScript;
- (id)languageMap;
- (NSUInteger)orthographyFlags;
- (id)languagesForScript:(id)arg1;
- (id)dominantLanguageForScript:(id)arg1;
- (id)dominantLanguage;
- (id)allScripts;
- (id)allLanguages;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFlags:(NSUInteger)arg1;

@end
