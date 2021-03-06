/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSOperationQueue, NSURLAuthenticationChallenge, NSURLConnectionDelegateProxy;

@interface NSURLDownloadInternal : NSObject {
    NSOperationQueue *_targetQueue;
    struct _CFURLDownload { } *cfDownload;
    struct _CFURLAuthChallenge { } *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    id delegate;
    BOOL downloadActive;
    NSURLConnectionDelegateProxy *proxy;
}

- (void)dealloc;

@end
