//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSXPCCoding.h"
#import "NSCopying.h"

@interface BKSApplicationExitInfo : NSObject <NSCopying, BKSXPCCoding>
{
    BOOL _wasReceiver;
    int _terminationReason;
    long long _status;
}

@property(nonatomic) BOOL wasReceiver; // @synthesize wasReceiver=_wasReceiver;
@property(nonatomic) int terminationReason; // @synthesize terminationReason=_terminationReason;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

