//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RUIAlertViewDelegate.h"
#import "RUIPageDelegate.h"
#import "RUIPasscodeViewDelegate.h"
#import "RUITableViewDelegate.h"
#import "RemoteUIWebViewControllerDelegate.h"
#import "UIWebViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSURL, RUIAlertView, RUIElement, RUIPage, RUIStyle;

@interface RUIObjectModel : NSObject <RemoteUIWebViewControllerDelegate, UIWebViewDelegate, RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate, RUIAlertViewDelegate>
{
    NSString *_name;
    NSURL *_sourceURL;
    NSURL *_scriptURL;
    NSString *_inlineScript;
    NSString *_validationFunction;
    NSMutableArray *_defaultPages;
    NSMutableDictionary *_namedPages;
    NSMutableArray *_displayedPages;
    int _currentPage;
    struct OpaqueJSContext *_ctx;
    NSDictionary *_clientInfo;
    NSDictionary *_serverInfo;
    NSDictionary *_updateInfo;
    int _refreshDelay;
    NSString *_refreshURL;
    NSTimer *_refreshTimer;
    int _nextButtonStyle;
    NSDictionary *_confirmationAttributes;
    NSString *_confirmationURLString;
    RUIElement *_confirmationElement;
    CDUnknownBlockType _confirmationCompletion;
    RUIAlertView *_alertElement;
    id <RUIObjectModelDelegate> _delegate;
    RUIStyle *_style;
    NSDictionary *_alert;
}

+ (id)objectModelForXMLNamed:(id)arg1;
@property(retain, nonatomic) NSDictionary *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property(nonatomic) int nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(retain, nonatomic) NSString *refreshURL; // @synthesize refreshURL=_refreshURL;
@property(nonatomic) int refreshDelay; // @synthesize refreshDelay=_refreshDelay;
@property(retain, nonatomic) NSDictionary *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(retain, nonatomic) NSDictionary *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(retain, nonatomic) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSString *validationFunction; // @synthesize validationFunction=_validationFunction;
@property(retain, nonatomic) NSString *inlineScript; // @synthesize inlineScript=_inlineScript;
@property(retain, nonatomic) NSURL *scriptURL; // @synthesize scriptURL=_scriptURL;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDictionary *namedPages; // @synthesize namedPages=_namedPages;
@property(readonly, nonatomic) NSArray *defaultPages; // @synthesize defaultPages=_defaultPages;
@property(nonatomic) __weak id <RUIObjectModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)supportedInterfaceOrientationsForRUIPage:(id)arg1;
- (void)RUIPage:(id)arg1 toggledEditing:(BOOL)arg2;
- (void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2;
- (void)_nextPage;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)passcodeViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tableViewOMSubmitForm:(id)arg1;
- (void)tableViewOM:(id)arg1 elementDidChange:(id)arg2;
- (void)tableViewOMDidChange:(id)arg1;
- (BOOL)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2;
- (void)tableViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;
- (void)tableViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)alertView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)alertView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remoteUIWebViewControllerDonePressed:(id)arg1;
- (id)_pageContainingTableView:(id)arg1;
- (void)_handleElementChangeConfirmed:(id)arg1;
- (void)_handleElementChange:(id)arg1;
- (void)_handleLinkPressConfirmed:(id)arg1 attributes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanupConfirmation;
- (void)_presentSecondConfirmationWithAttributes:(id)arg1;
- (void)_presentConfirmationWithAttributes:(id)arg1;
- (BOOL)hasSecondConfirmationAttributes:(id)arg1;
- (BOOL)hasConfirmationAttributes:(id)arg1;
- (id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2;
- (BOOL)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2;
- (void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)arg1;
- (void)_startNavigationBarSpinnerIfNeededForAttributes:(id)arg1;
- (id)elementsWithName:(id)arg1;
- (id)relativeURLWithString:(id)arg1;
- (id)rowForFormField:(id)arg1;
- (id)tableFooterViewForAttributes:(id)arg1;
- (id)tableHeaderViewForAttributes:(id)arg1;
- (Class)customTableCellClassForTableViewRow:(id)arg1;
- (Class)customFooterClassForSection:(id)arg1;
- (Class)customHeaderClassForSection:(id)arg1;
- (void)configureSection:(id)arg1;
- (void)configureRow:(id)arg1;
- (void)configureTableView:(id)arg1;
@property(readonly, nonatomic) RUIAlertView *alertElement;
- (void)setAlertElement:(id)arg1;
- (id)alertController;
- (void)setPages:(id)arg1;
@property(readonly, nonatomic) NSArray *allPages;
@property(readonly, nonatomic) NSArray *pages;
@property(readonly, nonatomic) RUIPage *visiblePage;
@property(readonly, nonatomic) NSArray *displayedPages;
- (id)postbackDictionary;
- (void)populatePostbackDictionary:(id)arg1;
- (id)postbackData;
- (BOOL)goBack;
- (id)_viewControllerFromNavigatingBackWithinDisplayedPages;
- (void)back:(id)arg1;
- (void)pageDidDisappear:(id)arg1;
- (void)_displaySupplementalPage:(id)arg1;
- (id)_parentViewController;
- (id)newNavigationControllerForPresentation;
- (void)presentInParentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)presentWithBlock:(CDUnknownBlockType)arg1;
- (id)_firstPageForPresentation;
- (void)refreshTimeout;
- (void)_populatePageNavItem:(id)arg1 withNextButton:(BOOL)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)cleanupRefreshTimer;
- (id)init;
- (void)setJSGlobalContext:(struct OpaqueJSContext *)arg1;
- (void)runScript;
- (id)invokeScriptFunction:(id)arg1 withArguments:(id)arg2;
- (id)objectForJSValue:(struct OpaqueJSValue *)arg1;
- (BOOL)validateWithFunction:(id)arg1;
- (BOOL)prepareScriptContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
