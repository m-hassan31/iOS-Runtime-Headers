/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/SMSCTServer.framework/SMSCTServer
 */

@class NSArray;



@interface SMSSMILInterpreter : NSObject 
{
    NSArray *_originalParts;
    struct _xmlSAXHandler { 
        int (*internalSubset)(); 
        int (*isStandalone)(); 
        int (*hasInternalSubset)(); 
        int (*hasExternalSubset)(); 
        int (*resolveEntity)(); 
        int (*getEntity)(); 
        int (*entityDecl)(); 
        int (*notationDecl)(); 
        int (*attributeDecl)(); 
        int (*elementDecl)(); 
        int (*unparsedEntityDecl)(); 
        int (*setDocumentLocator)(); 
        int (*startDocument)(); 
        int (*endDocument)(); 
        int (*startElement)(); 
        int (*endElement)(); 
        int (*reference)(); 
        int (*characters)(); 
        int (*ignorableWhitespace)(); 
        int (*processingInstruction)(); 
        int (*comment)(); 
        int (*warning)(); 
        int (*error)(); 
        int (*fatalError)(); 
        int (*getParameterEntity)(); 
        int (*cdataBlock)(); 
        int (*externalSubset)(); 
        NSUInteger initialized; 
        void *_private; 
        int (*startElementNs)(); 
        int (*endElementNs)(); 
        int (*serror)(); 
    } _saxHandler;
    unsigned int _handlerInitialized : 1;
}


- (id)initWithMessageParts:(id)arg1;
- (id)orderedParts;
- (id)_smilData;
- (id)_orderedPartsForSMILString:(id)arg1;
- (id)_newDictionaryRepresentationOfOriginalParts;
- (void)_initializeSAXHandler;
- (id)_parseParTagArrayFromSMIL:(id)arg1;
- (void)dealloc;

@end
