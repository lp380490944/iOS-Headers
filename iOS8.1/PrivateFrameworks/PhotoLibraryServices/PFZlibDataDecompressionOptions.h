//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFZlibDataDecompressionOptions : NSObject
{
    BOOL _decompressAllAtOnce;
    int _windowBits;
    CDUnknownBlockType _createBuffer;
    CDUnknownBlockType _growData;
}

+ (id)defaultOptions;
@property(nonatomic) BOOL decompressAllAtOnce; // @synthesize decompressAllAtOnce=_decompressAllAtOnce;
@property(copy, nonatomic) CDUnknownBlockType growData; // @synthesize growData=_growData;
@property(copy, nonatomic) CDUnknownBlockType createBuffer; // @synthesize createBuffer=_createBuffer;
@property(nonatomic) int windowBits; // @synthesize windowBits=_windowBits;
- (void).cxx_destruct;

@end
