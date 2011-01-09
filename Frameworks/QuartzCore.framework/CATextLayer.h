/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CATextLayer : CALayer 
{
    struct CATextLayerPrivate { struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } _m; 
        } x1; struct __CTTypesetter {} *x2; } *_state;
}

@property(copy) id truncationString;
@property BOOL allowsFontSubpixelQuantization;
@property(copy) id string;
@property void *font;
@property float fontSize;
@property CGColor *foregroundColor;
@property(getter=isWrapped) BOOL wrapped;
@property(copy) NSString *truncationMode;
@property(copy) NSString *alignmentMode;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;

- (id)_createStringDict;
- (struct __CTTypesetter { }*)_retainTypesetter;
- (struct __CTLine { }*)_createTruncationToken;
- (void)_applyLinesToFunction:(int (*)())arg1 info:(void*)arg2;
- (void)_drawLine:(struct __CTLine { }*)arg1 inContext:(struct CGContext { }*)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3;
- (BOOL)isWrapped;
- (void)setWrapped:(BOOL)arg1;
- (id)truncationMode;
- (void)setTruncationMode:(id)arg1;
- (id)alignmentMode;
- (void)setAlignmentMode:(id)arg1;
- (BOOL)wrapped;
- (id)truncationString;
- (void)setTruncationString:(id)arg1;
- (BOOL)allowsFontSubpixelQuantization;
- (void)setAllowsFontSubpixelQuantization:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (id)_implicitActionForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGColor { }*)foregroundColor;
- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setFontSize:(float)arg1;
- (float)fontSize;
- (void)setString:(id)arg1;
- (id)string;
- (void*)font;
- (id)init;
- (void)setFont:(void*)arg1;
- (void)dealloc;

@end
