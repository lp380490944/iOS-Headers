//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScreen;

@interface SBWindowContext : NSObject
{
    unsigned int _identifier;
    float _level;
    UIScreen *_screen;
    _Bool _orderOutPending;
}

+ (id)contextWithIdentifier:(unsigned int)arg1 level:(float)arg2 screen:(id)arg3;
@property(nonatomic, getter=isOrderOutPending) _Bool orderOutPending; // @synthesize orderOutPending=_orderOutPending;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) float level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithIdentifier:(unsigned int)arg1 level:(float)arg2 screen:(id)arg3;

@end

