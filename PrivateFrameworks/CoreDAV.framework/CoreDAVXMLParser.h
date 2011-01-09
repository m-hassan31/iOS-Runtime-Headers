/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSURL, CoreDAVXMLElementGenerator;



@interface CoreDAVXMLParser : NSXMLParser_CoreDAVFlavor <CoreDAVResponseBodyParser>
{
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    NSSet *_parseHints;
    NSURL *_baseURL;
}

@property(readonly) CoreDAVItem *rootElement;
@property(readonly) NSError *parserError;
@property(retain) NSURL *baseURL;
@property(retain) NSSet *parseHints;
@property(retain) CoreDAVXMLElementGenerator *rootElementGenerator;


- (id)parseHints;
- (id)rootElementGenerator;
- (void)setRootElementGenerator:(id)arg1;
- (BOOL)processData:(id)arg1;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (void)setParseHints:(id)arg1;
- (id)rootElement;
- (id)baseURL;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)setBaseURL:(id)arg1;

@end
