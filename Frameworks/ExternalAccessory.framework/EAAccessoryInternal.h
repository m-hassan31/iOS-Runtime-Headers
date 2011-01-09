/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class <EAAccessoryDelegate>, NSArray, NSString, NSDictionary;



@interface EAAccessoryInternal : NSObject 
{
    BOOL _connected;
    NSUInteger _connectionID;
    NSString *_name;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_serialNumber;
    NSString *_firmwareRevision;
    NSString *_hardwareRevision;
    NSString *_preferredApp;
    NSInteger _classType;
    NSDictionary *_audioPorts;
    NSUInteger _capabilities;
    NSArray *_eqNames;
    NSUInteger _eqItems;
    NSInteger _iPodOutOptionsMask;
    struct __CFAccessory { } *_cfAccessory;
    int (*_cfAccessoryPortPropertyCallback)();
    void *_cfAccessoryPortPropertyContext;
    NSDictionary *_protocols;
    NSDictionary *_legacyLingoProperties;
    <EAAccessoryDelegate> *_delegate;
    NSUInteger _eqIndex;
}

@property <EAAccessoryDelegate> *delegate;
@property NSDictionary *legacyLingoProperties;
@property NSDictionary *protocols;
@property void *cfAccessoryPortPropertyContext;
@property unknown type *cfAccessoryPortPropertyCallback;
@property __CFAccessory *cfAccessory;
@property NSInteger iPodOutOptionsMask;
@property NSUInteger eqIndex;
@property(retain) NSArray *eqNames;
@property NSUInteger capabilities;
@property NSDictionary *audioPorts;
@property NSInteger classType;
@property(copy) NSString *preferredApp;
@property(copy) NSString *hardwareRevision;
@property(copy) NSString *firmwareRevision;
@property(copy) NSString *serialNumber;
@property(copy) NSString *modelNumber;
@property(copy) NSString *name;
@property(copy) NSString *manufacturer;
@property NSUInteger connectionID;
@property BOOL connected;


- (id)serialNumber;
- (void)setCapabilities:(NSUInteger)arg1;
- (NSUInteger)capabilities;
- (void)setConnected:(BOOL)arg1;
- (id)manufacturer;
- (void)setManufacturer:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (BOOL)connected;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)legacyLingoProperties;
- (void)setLegacyLingoProperties:(id)arg1;
- (id)protocols;
- (void*)cfAccessoryPortPropertyContext;
- (void)setCfAccessoryPortPropertyContext:(void*)arg1;
- (void)setCfAccessoryPortPropertyCallback:(int (*)())arg1;
- (struct __CFAccessory { }*)cfAccessory;
- (void)setCfAccessory:(struct __CFAccessory { }*)arg1;
- (NSInteger)iPodOutOptionsMask;
- (NSUInteger)eqIndex;
- (id)eqNames;
- (id)audioPorts;
- (NSInteger)classType;
- (id)preferredApp;
- (id)hardwareRevision;
- (id)firmwareRevision;
- (id)modelNumber;
- (void)setModelNumber:(id)arg1;
- (void)setFirmwareRevision:(id)arg1;
- (void)setHardwareRevision:(id)arg1;
- (void)setConnectionID:(NSUInteger)arg1;
- (void)setProtocols:(id)arg1;
- (void)setPreferredApp:(id)arg1;
- (void)setClassType:(NSInteger)arg1;
- (void)setEqNames:(id)arg1;
- (void)setEqIndex:(NSUInteger)arg1;
- (void)setIPodOutOptionsMask:(NSInteger)arg1;
- (void)setAudioPorts:(id)arg1;
- (NSUInteger)connectionID;
- (int (*)())cfAccessoryPortPropertyCallback;

@end
