/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface CFXPreferencesSource : NSObject 
{
    struct __CFDictionary { } *_dict;
    NSInteger _generationCount;
    BOOL _disabled;
}


- (long)generationCount;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (struct __CFArray { }*)copyKeyList;
- (struct __CFDictionary { }*)copyDictionary;
- (void)finalize;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (unsigned char)synchronize;
- (id)init;
- (void)dealloc;

@end
