/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <JavaScriptCore/JSVirtualMachine.h>

@interface JSVirtualMachine (Internal)
+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup *)arg1;
- (id)externalObjectGraph;
- (void)addContext:(id)arg1 forGlobalContextRef:(struct OpaqueJSContext *)arg2;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext *)arg1;
@end
