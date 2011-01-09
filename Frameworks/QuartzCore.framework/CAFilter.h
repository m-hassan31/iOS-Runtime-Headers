/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString;



@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSUInteger _type;
    NSString *_name;
    NSUInteger _flags;
    void *_attr;
    void *_cache;
}

@property(readonly) NSString *type;
@property(copy) NSString *name;
@property(getter=isEnabled) BOOL enabled;
@property BOOL cachesInputImage;

+ (id)filterTypes;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)filterWithType:(id)arg1;
+ (id)filterWithName:(id)arg1;

- (BOOL)cachesInputImage;
- (void)setDefaults;
- (struct Object { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)initWithName:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)enabled;
- (id)type;
- (id)initWithType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setCachesInputImage:(BOOL)arg1;
- (id)name;
- (void)setEnabled:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (BOOL)isEnabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
