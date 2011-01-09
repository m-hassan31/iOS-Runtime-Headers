/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQSDocument, GQZArchive;



@interface GQPProcessor : NSObject 
{
    struct _xmlTextReader { } *mReader;
    struct _xmlParserInputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuffer {} *x5; struct _xmlBuffer {} *x6; NSInteger x7; NSInteger x8; unsigned long x9; } *mParserInputBuffer;
    GQZArchive *mArchive;
    struct stack<std::tr1::shared_ptr<StateSpec>,std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec> > > > { struct deque<std::tr1::shared_ptr<StateSpec>,std::allocator<std::tr1::shared_ptr<StateSpec> > > { 
            struct _Deque_impl { 
                struct shared_ptr<StateSpec> {} **_M_map; 
                NSUInteger _M_map_size; 
                struct _Deque_iterator<std::tr1::shared_ptr<StateSpec>,std::tr1::shared_ptr<StateSpec>&,std::tr1::shared_ptr<StateSpec>*> { 
                    struct shared_ptr<StateSpec> {} *_M_cur; 
                    struct shared_ptr<StateSpec> {} *_M_first; 
                    struct shared_ptr<StateSpec> {} *_M_last; 
                    struct shared_ptr<StateSpec> {} **_M_node; 
                } _M_start; 
                struct _Deque_iterator<std::tr1::shared_ptr<StateSpec>,std::tr1::shared_ptr<StateSpec>&,std::tr1::shared_ptr<StateSpec>*> { 
                    struct shared_ptr<StateSpec> {} *_M_cur; 
                    struct shared_ptr<StateSpec> {} *_M_first; 
                    struct shared_ptr<StateSpec> {} *_M_last; 
                    struct shared_ptr<StateSpec> {} **_M_node; 
                } _M_finish; 
            } _M_impl; 
        } x1; } *mStateStack;
    struct stack<std::pair<const Action*, int>,std::deque<std::pair<const Action*, int>, std::allocator<std::pair<const Action*, int> > > > { struct deque<std::pair<const Action*, int>,std::allocator<std::pair<const Action*, int> > > { 
            struct _Deque_impl { 
                struct pair<const Action*,int> {} **_M_map; 
                NSUInteger _M_map_size; 
                struct _Deque_iterator<std::pair<const Action*, int>,std::pair<const Action*, int>&,std::pair<const Action*, int>*> { 
                    struct pair<const Action*,int> {} *_M_cur; 
                    struct pair<const Action*,int> {} *_M_first; 
                    struct pair<const Action*,int> {} *_M_last; 
                    struct pair<const Action*,int> {} **_M_node; 
                } _M_start; 
                struct _Deque_iterator<std::pair<const Action*, int>,std::pair<const Action*, int>&,std::pair<const Action*, int>*> { 
                    struct pair<const Action*,int> {} *_M_cur; 
                    struct pair<const Action*,int> {} *_M_first; 
                    struct pair<const Action*,int> {} *_M_last; 
                    struct pair<const Action*,int> {} **_M_node; 
                } _M_finish; 
            } _M_impl; 
        } x1; } *mActionStack;
    GQSDocument *mDocumentState;
    struct __QLPreviewRequest { } *mOutputPreviewRequest;
    struct __CFBundle { } *mBundle;
    struct CGSize { 
        float width; 
        float height; 
    } mThumbnailSize;
    BOOL mWrongFormat;
}

+ (void)initialize;

- (id)documentState;
- (struct stack<std::pair<const Action*, int>,std::deque<std::pair<const Action*, int>, std::allocator<std::pair<const Action*, int> > > > { struct deque<std::pair<const Action*, int>,std::allocator<std::pair<const Action*, int> > > { struct _Deque_impl { struct pair<const Action*,int> {} **x_1_2_1; NSUInteger x_1_2_2; struct _Deque_iterator<std::pair<const Action*, int>,std::pair<const Action*, int>&,std::pair<const Action*, int>*> { struct pair<const Action*,int> {} *x_3_3_1; struct pair<const Action*,int> {} *x_3_3_2; struct pair<const Action*,int> {} *x_3_3_3; struct pair<const Action*,int> {} **x_3_3_4; } x_1_2_3; struct _Deque_iterator<std::pair<const Action*, int>,std::pair<const Action*, int>&,std::pair<const Action*, int>*> { struct pair<const Action*,int> {} *x_4_3_1; struct pair<const Action*,int> {} *x_4_3_2; struct pair<const Action*,int> {} *x_4_3_3; struct pair<const Action*,int> {} **x_4_3_4; } x_1_2_4; } x_1_1_1; } x1; }*)actionStack;
- (struct CGSize { float x1; float x2; })thumbnailSize;
- (BOOL)isWrongFormat;
- (void)setWrongFormat:(BOOL)arg1;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3;
- (struct stack<std::tr1::shared_ptr<StateSpec>,std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec> > > > { struct deque<std::tr1::shared_ptr<StateSpec>,std::allocator<std::tr1::shared_ptr<StateSpec> > > { struct _Deque_impl { struct shared_ptr<StateSpec> {} **x_1_2_1; NSUInteger x_1_2_2; struct _Deque_iterator<std::tr1::shared_ptr<StateSpec>,std::tr1::shared_ptr<StateSpec>&,std::tr1::shared_ptr<StateSpec>*> { struct shared_ptr<StateSpec> {} *x_3_3_1; struct shared_ptr<StateSpec> {} *x_3_3_2; struct shared_ptr<StateSpec> {} *x_3_3_3; struct shared_ptr<StateSpec> {} **x_3_3_4; } x_1_2_3; struct _Deque_iterator<std::tr1::shared_ptr<StateSpec>,std::tr1::shared_ptr<StateSpec>&,std::tr1::shared_ptr<StateSpec>*> { struct shared_ptr<StateSpec> {} *x_4_3_1; struct shared_ptr<StateSpec> {} *x_4_3_2; struct shared_ptr<StateSpec> {} *x_4_3_3; struct shared_ptr<StateSpec> {} **x_4_3_4; } x_1_2_4; } x_1_1_1; } x1; }*)stateStack;
- (void)pushInitialState;
- (BOOL)go;
- (void)setThumbnailSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setBundle:(struct __CFBundle { }*)arg1;
- (struct __CFBundle { }*)bundle;
- (void)dealloc;
- (id)archive;

@end
