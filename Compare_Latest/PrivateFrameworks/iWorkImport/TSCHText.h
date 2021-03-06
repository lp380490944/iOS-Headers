//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSUCache;

__attribute__((visibility("hidden")))
@interface TSCHText : NSObject
{
    TSUCache *mTSWPTextCache;
    TSUCache *mTSWPColumnCache;
    TSUCache *mNumberWidthCache;
    TSUCache *mDigitWidthFonts;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedText;
+ (id)_singletonAlloc;
- (struct __CTFont *)retainedCTFontForParagraphStyle:(id)arg1;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 viewScale:(float)arg4;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 range:(struct _NSRange)arg4 viewScale:(float)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 viewScale:(float)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(float)arg4 atPosition:(struct CGPoint)arg5 viewScale:(float)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 range:(struct _NSRange)arg5 viewScale:(float)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(float)arg4 atPosition:(struct CGPoint)arg5 range:(struct _NSRange)arg6 viewScale:(float)arg7;
- (void)drawAttributedString:(struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 range:(struct _NSRange)arg5 viewScale:(float)arg6;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 outErasableFrame:(struct CGRect *)arg4;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(float)arg4 outErasableFrame:(struct CGRect *)arg5;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect *)arg3;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(float)arg3;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(float)arg3 outErasableFrame:(struct CGRect *)arg4 checkNumberTemplates:(BOOL)arg5;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(float)arg3 outErasableFrame:(struct CGRect *)arg4;
- (struct CGSize)measureAttributedString:(struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect *)arg3;
- (id)p_wpStorageForAttributedString:(struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2;
- (struct CGSize)p_wpWidthForNumberTemplate:(id)arg1 paragraphStyle:(id)arg2;
- (BOOL)p_styleSupportsEqualDigits:(id)arg1;
- (id)p_wpColumnForText:(id)arg1 paragraphStyle:(id)arg2 textBlack:(BOOL)arg3 wrapWidth:(float)arg4;
- (id)p_newWPColumnForText:(id)arg1 wpTextObject:(id)arg2 wrapWidth:(float)arg3;
- (id)p_wpTextForParagraphStyle:(id)arg1 textBlack:(BOOL)arg2;
- (void)clearCaches;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;

@end

