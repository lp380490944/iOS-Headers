//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class TNPageRep;

__attribute__((visibility("hidden")))
@interface TNPageNumberLayer : CALayer
{
    TNPageRep *mPageRep;
}

@property(readonly) TNPageRep *pageRep; // @synthesize pageRep=mPageRep;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithPageRep:(id)arg1;

@end
