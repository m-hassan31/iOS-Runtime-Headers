/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSKeyValueUnnestedProperty;



@interface NSKeyValueComputedProperty : NSKeyValueProperty 
{
    NSString *_operationName;
    NSString *_operationArgumentKeyPath;
    NSKeyValueUnnestedProperty *_operationArgumentProperty;
}


- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet { }*)arg3;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { }*)arg1 getAffectingProperties:(id)arg2;
- (void)_addDependentValueKey:(id)arg1;
- (Class)_isaForAutonotifying;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(struct { id x1; id x2; }*)arg5;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(struct { id x1; id x2; })arg5;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (id)description;
- (void)dealloc;

@end
