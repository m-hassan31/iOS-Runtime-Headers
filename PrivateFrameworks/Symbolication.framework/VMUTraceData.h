/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMapTable, NSMutableSet;



@interface VMUTraceData : NSObject 
{
    NSMapTable *pcMap;
    NSMapTable *threadTraces;
    NSMapTable *libXrefs;
    NSMapTable *fnXrefs;
    NSMutableSet *threadIDnumbers;
    NSUInteger maxDepth;
    NSUInteger threadCount;
}


- (void)freeXrefTable:(id)arg1;
- (void)buildPCMap:(long*)arg1 withNumPages:(NSUInteger)arg2 forTask:(NSUInteger)arg3;
- (id)initWithLogRecords:(struct { NSUInteger x1; NSUInteger x2; NSUInteger x3; NSUInteger *x4; NSUInteger x5; NSUInteger x6; NSUInteger x7[2]; struct { NSUInteger x_8_1_1; NSUInteger x_8_1_2; NSUInteger x_8_1_3; NSUInteger x_8_1_4; } x8[0]; }*)arg1 forTask:(NSUInteger)arg2;
- (id)initWithBacktraces:(id)arg1 forTask:(NSUInteger)arg2;
- (id)threadIDs;
- (id)traceForThread:(NSUInteger)arg1;
- (id)numberForThread:(NSUInteger)arg1;
- (NSUInteger)readAddressFromFile:(struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { char *x_6_1_1; NSInteger x_6_1_2; } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; NSInteger x_13_1_2; } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; NSInteger x_18_1_2; } x18; NSInteger x19; long long x20; }*)arg1 has64bitAddresses:(BOOL)arg2 needSwap:(BOOL)arg3;
- (BOOL)readFromFile:(struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { char *x_6_1_1; NSInteger x_6_1_2; } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; NSInteger x_13_1_2; } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; NSInteger x_18_1_2; } x18; NSInteger x19; long long x20; }*)arg1;
- (void)addOrIncrementXref:(id)arg1 withParent:(id)arg2 withChild:(id)arg3 withSelector:(SEL)arg4 commutative:(BOOL)arg5;
- (void)generateXref:(id)arg1 withSelector:(SEL)arg2 commutative:(BOOL)arg3;
- (id)functionXref;
- (id)libraryXref;
- (void)printXrefs:(id)arg1 toString:(id)arg2;
- (NSUInteger)maxDepth;
- (id)symbolForPC:(NSUInteger)arg1;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (void)writeToFile:(struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { char *x_6_1_1; NSInteger x_6_1_2; } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; NSInteger x_13_1_2; } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; NSInteger x_18_1_2; } x18; NSInteger x19; long long x20; }*)arg1;
- (void)addEvent:(id)arg1;

@end
