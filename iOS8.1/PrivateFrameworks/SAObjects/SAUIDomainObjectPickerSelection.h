//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class SADomainObject, SAUIDomainObjectPicker;

@interface SAUIDomainObjectPickerSelection : SAStartRequest
{
}

+ (id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectPickerSelection;
@property(retain, nonatomic) SADomainObject *selectedItem;
@property(retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

