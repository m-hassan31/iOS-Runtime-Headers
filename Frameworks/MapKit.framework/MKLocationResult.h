/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GMMLocation;



@interface MKLocationResult : NSObject 
{

  /* Error parsing encoded ivar type info: ^{MKLocationRequester=^^?i^{Connection}*BB^{LocationRequest}^{LocationResponse}@} */
    struct MKLocationRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; struct LocationRequest {} *x7; struct LocationResponse {} *x8; id x9; } *_requester;

    GMMLocation *_location;
}


- (void)dealloc;

@end
