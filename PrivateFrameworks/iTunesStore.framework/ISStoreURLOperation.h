/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSAuthenticationContext, NSNumber, NSString;



@interface ISStoreURLOperation : ISURLOperation 
{
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedDSID;
    BOOL _needsAuthentication;
    BOOL _needsURLBag;
    NSString *_urlBagKey;
    BOOL _urlKnownToBeTrusted;
}

@property BOOL urlKnownToBeTrusted;
@property(retain) NSString *urlBagKey;
@property BOOL needsURLBag;
@property BOOL needsAuthentication;
@property(retain) NSNumber *authenticatedDSID;
@property(retain) SSAuthenticationContext *authenticationContext;
@property <ISStoreURLOperationDelegate> *delegate;

+ (void)handleITunesStoreResponseHeaders:(id)arg1;
+ (void)addITunesStoreHeadersToRequest:(id)arg1;
+ (id)pingOperationWithUrl:(id)arg1;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (id)propertyListOperationWithURLBagKey:(id)arg1;
+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withBagContext:(id)arg2;
+ (id)_restrictionsHeaderValue;

- (void)handleResponse:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (id)authenticatedDSID;
- (id)authenticatedAccountDSID;
- (void)setAuthenticatedDSID:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (BOOL)needsAuthentication;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (id)authenticationContext;
- (id)urlBagKey;
- (BOOL)needsURLBag;
- (BOOL)urlKnownToBeTrusted;
- (id)_account;
- (id)_accountIdentifier;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (BOOL)_authenticateReturningError:(id*)arg1;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (id)_copyURLBagContext;
- (void)_runURLOperation;
- (void)setNeedsURLBag:(BOOL)arg1;
- (void)setUrlKnownToBeTrusted:(BOOL)arg1;
- (BOOL)handleRedirectFromDataProvider:(id)arg1;
- (id)newRequestWithURL:(id)arg1;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (void)run;
- (id)init;
- (void)dealloc;

@end