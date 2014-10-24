//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDNetworkTask.h"

@class PDSecureConnectionManager;

@interface PDNetworkConnectionTask : PDNetworkTask
{
    PDSecureConnectionManager *_connectionManager;
}

- (void)handleError:(id)arg1;
- (void)handleResponse:(id)arg1 data:(id)arg2;
- (id)request;
- (void)_destroyConnectionManager;
- (void)_handleConnectionFailureWithError:(id)arg1;
- (void)_handleConnectionSuccessWithResponse:(id)arg1 data:(id)arg2;
- (void)_startConnection:(BOOL)arg1;
- (void)performReset;
- (void)performCancel;
- (void)performStart:(BOOL)arg1;
- (void)dealloc;

@end
