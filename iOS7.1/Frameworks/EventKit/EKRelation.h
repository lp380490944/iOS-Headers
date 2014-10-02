//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKRelation : NSObject
{
    NSString *_entityName;
    BOOL _toMany;
    BOOL _ownsRelated;
    NSString *_inversePropertyName;
}

+ (id)relationWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyName:(id)arg3 ownsRelated:(BOOL)arg4;
+ (id)relationWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyName:(id)arg3;
@property(readonly, nonatomic) NSString *inversePropertyName;
@property(readonly, nonatomic) BOOL ownsRelatedObject;
@property(readonly, nonatomic) BOOL toMany;
- (void)dealloc;
- (id)initWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyName:(id)arg3 ownsRelated:(BOOL)arg4;

@end
