//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

#import "SKUIItemOfferButtonDelegate.h"
#import "SKUIPreviewContainerView.h"
#import "SKUIViewElementView.h"

@class NSMutableDictionary, NSString, SKUIGradientView, SKUIPreviewProgressIndicator, SKUITrackViewElement, SKUITracklistColumnData, SUPlayerStatus, UIView;

@interface SKUITracklistLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView>
{
    SKUITracklistColumnData *_columnData;
    NSMutableDictionary *_columnViewsByIndex;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIGradientView *_offerConfirmationGradientView;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    int _previewState;
    UIView *_separatorView;
    SKUITrackViewElement *_track;
}

+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;
- (id)_previewMediaURL;
- (id)_previewControlViewElement;
- (id)_previewColumnView;
- (void)_layoutConfirmationGradientRelativeToView:(id)arg1 alpha:(float)arg2;
- (void)_enumerateViewElementViewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)togglePreviewPlaybackAnimated:(BOOL)arg1;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(BOOL)arg2;
- (void)hidePreviewProgressAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
