/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIKBHandwritingStrokes : NSObject <NSCopying>
{
    struct KBStrokeList { struct COWQueue<writing_point16_t> { 
            NSUInteger m_size; 
            NSUInteger m_capacity; 
            struct SharedElements {} *m_elements; 
        } x1; struct COWQueue<int> { 
            NSUInteger m_size; 
            NSUInteger m_capacity; 
            struct SharedElements {} *m_elements; 
        } x2; NSInteger x3; } *_strokes;
}


- (id)initWithStrokes:(struct KBStrokeList { struct COWQueue<writing_point16_t> { NSUInteger x_1_1_1; NSUInteger x_1_1_2; struct SharedElements {} *x_1_1_3; } x1; struct COWQueue<int> { NSUInteger x_2_1_1; NSUInteger x_2_1_2; struct SharedElements {} *x_2_1_3; } x2; NSInteger x3; }*)arg1;
- (const struct KBStrokeList { struct COWQueue<writing_point16_t> { NSUInteger x_1_1_1; NSUInteger x_1_1_2; struct SharedElements {} *x_1_1_3; } x1; struct COWQueue<int> { NSUInteger x_2_1_1; NSUInteger x_2_1_2; struct SharedElements {} *x_2_1_3; } x2; NSInteger x3; }*)strokes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
