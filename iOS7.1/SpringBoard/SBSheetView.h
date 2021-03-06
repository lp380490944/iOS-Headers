//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBApplication, SBFakeStatusBarView, SBProxyRemoteView;

@interface SBSheetView : UIView
{
    SBProxyRemoteView *_remoteProxyView;
    SBApplication *_app;
    SBFakeStatusBarView *_fakeStatusBarView;
    _Bool _wasPresentedAnimated;
}

- (void)dealloc;
- (void)noteSheetDidEnd;
- (_Bool)wasPresentedAnimated;
- (id)fakeStatusBarView;
- (id)application;
- (id)remoteViewIdentifier;
- (id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 shouldFakeStatusBar:(_Bool)arg3 wasPresentedAnimated:(_Bool)arg4;

@end

