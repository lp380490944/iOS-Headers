//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMFXPCServerProtocol.h"

@class NSString;

@protocol FMFXPCInternalServerProtocol <FMFXPCServerProtocol>
- (oneway void)_setClientBundleId:(NSString *)arg1;
- (oneway void)_iCloudAccountNameWithCompletion:(void (^)(NSString *))arg1;
@end
