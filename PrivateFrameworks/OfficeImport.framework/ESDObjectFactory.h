/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ESDObjectFactory : NSObject {
}

+ (struct EshObject { int (**x1)(); unsigned short x2; }*)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2;
+ (struct EshObject { int (**x1)(); unsigned short x2; }*)createObjectWithType:(unsigned short)arg1;
+ (void)initialize;
+ (void)replaceHostEshFactoryWith:(struct EshObjectFactory { int (**x1)(); boolx2; }*)arg1;
+ (void)restoreHostEshFactory;
+ (void)setEshFactory:(struct EshObjectFactory { int (**x1)(); boolx2; }*)arg1;

@end
