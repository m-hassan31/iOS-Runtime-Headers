/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableArray, NSMutableData;



@interface PTPDevicePropDescDataset : NSObject 
{
    unsigned short _devicePropertyCode;
    unsigned short _dataTypeCode;
    unsigned char _readWriteAttribute;
    id _factoryDefaultValue;
    id _currentValue;
    unsigned char _formFlag;
    id _minimumValue;
    id _maximumValue;
    id _stepSize;
    unsigned short _numberOfValues;
    NSMutableArray *_supportedValues;
    NSMutableData *_content;
    BOOL _dirty;
    BOOL _readOnlyObject;
}


- (void)setCurrentValue:(id)arg1;
- (unsigned short)devicePropertyCode;
- (void)setDevicePropertyCode:(unsigned short)arg1;
- (unsigned short)dataTypeCode;
- (void)setDataTypeCode:(unsigned short)arg1;
- (unsigned char)readWriteAttribute;
- (void)setReadWriteAttribute:(unsigned char)arg1;
- (id)factoryDefaultValue;
- (void)setFactoryDefaultValue:(id)arg1;
- (id)currentValue;
- (unsigned char)formFlag;
- (void)setFormFlag:(unsigned char)arg1;
- (id)stepSize;
- (void)setStepSize:(id)arg1;
- (unsigned short)numberOfValues;
- (void)setNumberOfValues:(unsigned short)arg1;
- (id)supportedValues;
- (void)setSupportedValues:(id)arg1;
- (void)updateContent;
- (void)copyContent:(char *)arg1 ofSize:(unsigned long)arg2;
- (id)initWithMutableData:(id)arg1;
- (id)minimumValue;
- (void)setMinimumValue:(id)arg1;
- (id)maximumValue;
- (void)setMaximumValue:(id)arg1;
- (id)content;
- (unsigned long)contentSize;
- (id)initWithData:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setContent:(id)arg1;

@end
