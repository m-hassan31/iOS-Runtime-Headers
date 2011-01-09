/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSArray, WebResource;



@interface WebArchivePrivate : NSObject 
{
    WebResource *cachedMainResource;
    NSArray *cachedSubresources;
    NSArray *cachedSubframeArchives;
    struct RefPtr<WebCore::LegacyWebArchive> { 
        struct LegacyWebArchive {} *m_ptr; 
    } coreArchive;
}

+ (void)initialize;

- (struct LegacyWebArchive { NSInteger x1; struct RefPtr<WebCore::ArchiveResource> { struct ArchiveResource {} *x_2_1_1; } x2; struct Vector<WTF::RefPtr<WebCore::ArchiveResource>,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::ArchiveResource>,0ul> { struct RefPtr<WebCore::ArchiveResource> {} *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; struct Vector<WTF::RefPtr<WebCore::Archive>,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::Archive>,0ul> { struct RefPtr<WebCore::Archive> {} *x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; }*)coreArchive;
- (void)setCoreArchive:(struct PassRefPtr<WebCore::LegacyWebArchive> { struct LegacyWebArchive {} *x1; })arg1;
- (id)initWithCoreArchive:(struct PassRefPtr<WebCore::LegacyWebArchive> { struct LegacyWebArchive {} *x1; })arg1;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
