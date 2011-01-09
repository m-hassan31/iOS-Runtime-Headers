/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSArray, NSMutableDictionary, NSMutableSet;



@interface WebPluginDatabase : NSObject 
{
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)sharedDatabase;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)arg1;
+ (id)_defaultPlugInPaths;

- (void)refresh;
- (id)pluginForExtension:(id)arg1;
- (BOOL)isMIMETypeRegistered:(id)arg1;
- (void)addPluginInstanceView:(id)arg1;
- (void)removePluginInstanceView:(id)arg1;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)destroyAllPluginInstanceViews;
- (void)setPlugInPaths:(id)arg1;
- (id)pluginForKey:(id)arg1 withEnumeratorSelector:(SEL)arg2;
- (id)pluginForMIMEType:(id)arg1;
- (void)_removePlugin:(id)arg1;
- (id)_scanForNewPlugins;
- (void)_addPlugin:(id)arg1;
- (id)_plugInPaths;
- (void)close;
- (id)init;
- (void)dealloc;
- (id)plugins;

@end
