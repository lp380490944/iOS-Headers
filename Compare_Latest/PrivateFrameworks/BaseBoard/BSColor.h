//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>
{
    float _red;
    float _green;
    float _blue;
    float _alpha;
}

+ (BOOL)supportsSecureCoding;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
@property(readonly, nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) float blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) float green; // @synthesize green=_green;
@property(readonly, nonatomic) float red; // @synthesize red=_red;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
@property(readonly, copy) NSString *description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

