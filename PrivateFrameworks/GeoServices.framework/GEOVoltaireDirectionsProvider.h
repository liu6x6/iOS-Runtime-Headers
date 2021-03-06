/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORequester;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
    BOOL _cancelled;
    GEORequester *_requester;
}

@property(retain) GEORequester * requester;

+ (unsigned short)providerID;
+ (id)providerURL;
+ (void)setUsePersistentConnection:(BOOL)arg1;

- (void)cancelProviderRequest;
- (void)cleanupRequester;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)requester;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)startProviderWithRequest:(id)arg1;

@end
