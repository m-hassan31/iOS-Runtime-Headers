/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSCache;



@interface CPBitmapStore : NSObject 
{
    NSString *_path;
    NSString *_imagePath;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_findStmt;
    struct sqlite3_stmt { } *_saveStmt;
    struct sqlite3_stmt { } *_beginStmt;
    struct sqlite3_stmt { } *_commitStmt;
    struct __CFBoolean { } *_dbIsReadOnly;
    struct __CFBoolean { } *_dbIsMissing;
    struct __CFRunLoopObserver { } *_txnObserver;
    NSCache *_cache;
    NSInteger _version;
}

@property(readonly) NSInteger version;


- (id)initWithPath:(id)arg1 version:(NSInteger)arg2;
- (struct CGImage { }*)createImageForKey:(id)arg1;
- (struct CGImage { }*)storeImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 scale:(float)arg5 draw:(id)arg6;
- (id)allGroups;
- (void)removeImagesInGroups:(id)arg1;
- (NSInteger)version;
- (void)dealloc;
- (NSInteger)imageCount;
- (id)dbPath;
- (BOOL)findImageWithKey:(id)arg1 andInfo:(struct _img { id x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; unsigned char x6; }*)arg2;
- (BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; unsigned char x6; }*)arg3;
- (struct sqlite3_stmt { }*)findStmt;
- (struct sqlite3_stmt { }*)saveStmt;
- (struct sqlite3_stmt { }*)beginStmt;
- (struct sqlite3_stmt { }*)commitStmt;
- (void)createDbAt:(const char *)arg1;
- (BOOL)dbIsReadOnly;
- (BOOL)dbIsMissing;
- (void)beginAutoTxn;
- (void)commitTxn;
- (id)imagePath;
- (void)purge;
- (struct sqlite3 { }*)db;
- (NSInteger)setVersion:(NSInteger)arg1;

@end
