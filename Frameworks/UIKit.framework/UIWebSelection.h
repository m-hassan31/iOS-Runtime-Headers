/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebSelectionBlock>, UIWebDocumentView, UITextSelection;



@interface UIWebSelection : NSObject 
{
    UIWebDocumentView *_documentView;
    <UIWebSelectionBlock> *_base;
    <UIWebSelectionBlock> *_extent;
    struct CGSize { 
        float width; 
        float height; 
    } _desiredSize;
    UITextSelection *_textSelection;
}

@property(readonly) BOOL valid;
@property(getter=isTextOnly,readonly) BOOL textOnly;
@property(readonly) CGRect boundingRect;
@property CGSize desiredSize;
@property(readonly) UITextSelection *textSelection;
@property(retain) <UIWebSelectionBlock> *extent;
@property(retain) <UIWebSelectionBlock> *base;
@property(readonly) UIWebDocumentView *documentView;


- (id)domDocument;
- (void)adjustSelectionFromPoint:(struct CGPoint { float x1; float x2; })arg1 towardsPoint:(struct CGPoint { float x1; float x2; })arg2 withNewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)blockAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)blockOfSameWidthAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)distanceBetweenFirstRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 second:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 edge:(NSInteger)arg3;
- (void)growFromEdge:(NSInteger)arg1;
- (void)shrinkFromEdge:(NSInteger)arg1;
- (void)moveEdge:(NSInteger)arg1 outwards:(BOOL)arg2;
- (void)growSelectionTowardsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)tryToShrinkToBaseAndExtent;
- (void)shrinkSelectionFromPoint:(struct CGPoint { float x1; float x2; })arg1 towardsPoint:(struct CGPoint { float x1; float x2; })arg2 withNewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)duplicate;
- (void)useBlock;
- (id)asDomRange;
- (BOOL)isEqualToSelection:(id)arg1;
- (struct CGSize { float x1; float x2; })desiredSize;
- (void)setDesiredSize:(struct CGSize { float x1; float x2; })arg1;
- (id)textSelection;
- (void)setExtent:(id)arg1;
- (id)base;
- (void)setBase:(id)arg1;
- (BOOL)isTextOnly;
- (id)textSelectionRects;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingTextSelectionRect;
- (BOOL)blockContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)applySelectionToWebDocumentView;
- (id)initWithDocumentView:(id)arg1;
- (BOOL)valid;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)webArchive;
- (id)textRepresentation;
- (id)webFrame;
- (id)documentView;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)selectionChanged;
- (id)webView;
- (id)extent;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
