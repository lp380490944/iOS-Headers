//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RadioUI/RUTableViewCell.h>

@class UILabel;

@interface _RUTrackCancelTableViewCell : RUTableViewCell
{
    UILabel *_lastConfiguredTextLabel;
}

+ (id)_textLabelFontForTraitCollection:(id)arg1;
+ (float)defaultHeightForTraitCollection:(id)arg1;
- (void).cxx_destruct;
- (void)_configureTextLabel;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)textLabel;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
