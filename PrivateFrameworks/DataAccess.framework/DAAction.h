/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class <NSCoding><NSObject>;



@interface DAAction : NSObject <NSCoding>
{
    NSInteger _action;
    <NSCoding><NSObject> *_context;
    NSInteger _changeId;
}

@property NSInteger changeId;
@property(retain) id context; /* unknown property attribute: S_setContext: */
@property(readonly) NSInteger action;


- (id)initWithAction:(NSInteger)arg1 context:(id)arg2;
- (id)message;
- (struct ASEvent { Class x1; id x2; id x3; NSInteger x4; NSInteger x5; id x6; NSInteger x7; id x8; NSInteger x9; id x10; NSInteger x11; id x12; id x13; id x14; BOOL x15; BOOL x16; id x17; void *x18; id x19; id x20; id x21; id x22; id x23; id x24; id x25; id x26; id x27; id x28; id x29; id x30; id x31; id x32; id x33; id x34; id x35; id x36; id x37; id x38; id x39; NSInteger x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; id x47; }*)event;
- (NSInteger)action;
- (id)context;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_setContext:(id)arg1;
- (id)stringForAction:(NSInteger)arg1;
- (NSInteger)changeId;
- (void)setChangeId:(NSInteger)arg1;
- (id)deletedContactID;
- (struct ASContact { Class x1; id x2; id x3; NSInteger x4; NSInteger x5; id x6; NSInteger x7; id x8; NSInteger x9; id x10; NSInteger x11; id x12; id x13; id x14; BOOL x15; BOOL x16; id x17; void *x18; id x19; id x20; id x21; id x22; id x23; NSInteger x24; BOOL x25; id x26; id x27; id x28; id x29; id x30; id x31; id x32; id x33; id x34; id x35; id x36; id x37; id x38; id x39; id x40; id x41; id x42; id x43; id x44; id x45; id x46; id x47; id x48; id x49; id x50; id x51; id x52; id x53; id x54; id x55; id x56; id x57; id x58; id x59; id x60; id x61; id x62; id x63; id x64; id x65; id x66; id x67; id x68; id x69; id x70; id x71; id x72; id x73; id x74; id x75; id x76; id x77; id x78; id x79; id x80; id x81; NSInteger x82; }*)contact;
- (id)deletedEventID;

@end
