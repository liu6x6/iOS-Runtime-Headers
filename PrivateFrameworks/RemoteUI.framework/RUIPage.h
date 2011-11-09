/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIToolbar, RUIWebView, RUITableView, UIView, NSDictionary, NSString, UIBarButtonItem, NSArray;

@interface RUIPage : UIViewController  {
    NSString *_pageID;
    UIView *_containerView;
    RUITableView *_tableViewOM;
    RUIWebView *_webViewOM;
    NSString *_validationFunction;
    BOOL _isLoading;
    NSString *_navTitle;
    NSString *_loadingTitle;
    NSDictionary *_rightNavigationBarButton;
    NSDictionary *_leftNavigationBarButton;
    BOOL _hidesBackButton;
    UIToolbar *_toolbar;
    NSDictionary *_rightToolbarButton;
    NSDictionary *_leftToolbarButton;
    UIBarButtonItem *_leftToolbarItem;
    UIBarButtonItem *_rightToolbarItem;
    UIBarButtonItem *_middleFlexSpace;
    UIBarButtonItem *_leftFlexSpace;
    id _delegate;
}

@property(readonly) RUITableView * tableViewOM;
@property(readonly) RUIWebView * webViewOM;
@property(readonly) NSArray * buttons;
@property BOOL hidesBackButton;
@property(readonly) UIToolbar * toolbar;
@property(readonly) UIView * containerView;
@property(retain) UIBarButtonItem * leftToolbarItem;
@property(retain) UIBarButtonItem * rightToolbarItem;
@property(retain) NSDictionary * leftToolbarButton;
@property(retain) NSDictionary * rightToolbarButton;
@property(retain) NSDictionary * leftNavigationBarButton;
@property(retain) NSDictionary * rightNavigationBarButton;
@property(copy) NSString * loadingTitle;
@property(copy) NSString * navTitle;
@property(retain) NSString * validationFunction;
@property(copy) NSString * pageID;


- (id)navTitle;
- (void)setNavTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasToolbar;
- (void)setRightNavigationBarButton:(id)arg1;
- (void)setLeftNavigationBarButton:(id)arg1;
- (void)setRightToolbarButton:(id)arg1;
- (void)setLeftToolbarButton:(id)arg1;
- (BOOL)hasTableView;
- (id)webViewOM;
- (id)leftToolbarButton;
- (id)rightToolbarButton;
- (id)leftNavigationBarButton;
- (id)rightNavigationBarButton;
- (id)loadingTitle;
- (id)validationFunction;
- (id)pageID;
- (void)_updateNavItemTitle;
- (id)rightToolbarItem;
- (id)leftToolbarItem;
- (void)_rightNavigationBarButtonPressed:(id)arg1;
- (id)_barButtonItemForDict:(id)arg1 action:(SEL)arg2;
- (void)_leftNavigationBarButtonPressed:(id)arg1;
- (void)_rightToolbarButtonPressed:(id)arg1;
- (void)setRightToolbarItem:(id)arg1;
- (void)_leftToolbarButtonPressed:(id)arg1;
- (void)setLeftToolbarItem:(id)arg1;
- (void)_barButtonPressed:(id)arg1 isRight:(BOOL)arg2 isNavbar:(BOOL)arg3;
- (id)tableViewOM;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setPageID:(id)arg1;
- (void)setValidationFunction:(id)arg1;
- (void)setLoadingTitle:(id)arg1;
- (float)_getKeyboardIntersectionHeight;
- (void)_setContentInset:(float)arg1;
- (id)containerView;
- (id)buttons;
- (id)toolbar;
- (id)contentScrollView;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setButton:(id)arg1 enabled:(BOOL)arg2;
- (void)setHidesBackButton:(BOOL)arg1;
- (BOOL)hidesBackButton;
- (void)viewDidLayoutSubviews;
- (void)_updateToolbar;
- (id)description;
- (id)init;
- (void)dealloc;

@end