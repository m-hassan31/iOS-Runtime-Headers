/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebScriptCallFramePrivate;



@interface WebScriptCallFrame : NSObject 
{
    WebScriptCallFramePrivate *_private;
    id _userInfo;
}


- (id)exception;
- (id)functionName;
- (id)_initWithGlobalObject:(id)arg1 debugger:(struct WebScriptDebugger { int (**x1)(); struct HashSet<JSC::JSGlobalObject*,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> > { struct HashTable<JSC::JSGlobalObject*,JSC::JSGlobalObject*,WTF::IdentityExtractor<JSC::JSGlobalObject*>,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> > { struct JSGlobalObject {} **x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_2_1_1; } x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RetainPtr<WebScriptCallFrame> { id x_4_1_1; } x4; struct ProtectedPtr<JSC::JSGlobalObject> { struct JSGlobalObject {} *x_5_1_1; } x5; struct RetainPtr<WebScriptCallFrame> { id x_6_1_1; } x6; }*)arg2 caller:(id)arg3 debuggerCallFrame:(const struct DebuggerCallFrame { struct ExecState {} *x1; struct JSValue { union $_684 { long long x_1_2_1; double x_1_2_2; struct $_685 { NSInteger x_3_3_1; NSInteger x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg4;
     /* Encoded args for previous method: @24@0:4@8^{WebScriptDebugger=^^?{HashSet<JSC::JSGlobalObject*,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> >={HashTable<JSC::JSGlobalObject*,JSC::JSGlobalObject*,WTF::IdentityExtractor<JSC::JSGlobalObject*>,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> >=^^{JSGlobalObject}iiii}}B{RetainPtr<WebScriptCallFrame>=@}{ProtectedPtr<JSC::JSGlobalObject>=^{JSGlobalObject}}{RetainPtr<WebScriptCallFrame>=@}}12@16r^{DebuggerCallFrame=^{ExecState}{JSValue=($_684=qd{$_685=ii})}}20 */

- (void)_setDebuggerCallFrame:(const struct DebuggerCallFrame { struct ExecState {} *x1; struct JSValue { union $_684 { long long x_1_2_1; double x_1_2_2; struct $_685 { NSInteger x_3_3_1; NSInteger x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (void)_clearDebuggerCallFrame;
- (id)scopeChain;
- (id)caller;
- (id)_convertValueToObjcValue:(struct JSValue { union $_684 { long long x_1_1_1; double x_1_1_2; struct $_685 { NSInteger x_3_2_1; NSInteger x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)dealloc;
- (id)evaluateWebScript:(id)arg1;

@end
