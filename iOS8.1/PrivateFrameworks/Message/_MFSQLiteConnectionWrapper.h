//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSQLiteConnection;

@interface _MFSQLiteConnectionWrapper : NSObject
{
    MFSQLiteConnection *_connection;
    unsigned int _generation;
    unsigned int _type;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned int generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) MFSQLiteConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 generation:(unsigned int)arg2;

@end
