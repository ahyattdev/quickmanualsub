#import <UIKit/UIView.h>

@interface JMActionMenuBarItemView : UIView

- (void)setLatestPendingUpdateAction:(id)fp;
- (id)latestPendingUpdateAction;
- (void)setIsCurrentlyUpdatingNodeChanges:(BOOL)fp8;
- (BOOL)isCurrentlyUpdatingNodeChanges;
- (void)setSeparatorViews:(id)fp8;
- (id)separatorViews;
- (void)setBadgeViews:(id)fp8;
- (id)badgeViews;
- (void)setShouldDismissMenuAfterTouchHoldRelease:(BOOL)fp8;
- (BOOL)shouldDismissMenuAfterTouchHoldRelease;
- (void)setOpenButton:(id)fp8;
- (id)openButton;
- (void)setThemeConfiguration:(id)fp8;
- (id)themeConfiguration;
- (void)setDoDuringBadgeAnimations:(id)fp;
- (id)doDuringBadgeAnimations;
- (void)setOnOpenButtonTap:(id)fp;
- (id)onOpenButtonTap;
- (void)setOnOpenButtonTouchDown:(id)fp;
- (id)onOpenButtonTouchDown;
- (void)setOnOpenButtonLongPressRelease:(id)fp;
- (id)onOpenButtonLongPressRelease;
- (void)setOnPanOverOpenButton:(id)fp;
- (id)onPanOverOpenButton;
- (void)setParentMenuView:(id)fp8;
- (id)parentMenuView;
- (void)setDidReleaseTouchOnOpenButton:(BOOL)fp8;
- (BOOL)didReleaseTouchOnOpenButton;
- (unsigned int)visibleBadgeCount;
- (void)setNeedsDisplay;
- (BOOL)isCompactOpenButton;
- (void)setCompactOpenButton:(BOOL)fp8 animated:(BOOL)fp12;
- (struct CGPoint)recommendedCenterForBadgeView:(id)fp8;
- (void)moveBadgesToCenterOfOpenButton;
- (float)badgeSpacing;
- (id)separatorViewCorrespondingToActionMenuNode:(id)fp8;
- (id)badgeViewCorrespondingToActionMenuNode:(id)fp8;
- (void)sanitiseFinalPositionOfBadgesAnimated:(BOOL)fp8 onComplete:(id)fp;
- (void)addBadgesForNodes:(id)fp8 animated:(BOOL)fp12 onComplete:(id)fp;
- (void)removeBadgesForNodes:(id)fp8 animated:(BOOL)fp12 onComplete:(id)fp;
- (void)i_updatedBadgeNodesChanges:(id)fp8 animated:(BOOL)fp12 onComplete:(id)fp;
- (void)updatedBadgeNodesChanges:(id)fp8 animated:(BOOL)fp12 onComplete:(id)fp;
- (void)updateBadgeViewPointersToLatestActionMenuNodes:(id)fp8;
- (void)createSeparatorViews;
- (void)userDidReleaseTouchElsewhereOnMenuView;
- (void)didPanOverOpenButton:(id)fp8;
- (void)didLongPressOpenButton:(id)fp8;
- (void)didTapOpenButton:(id)fp8;
- (void)didTouchDownOnOpenButton;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (id)initWithThemeConfiguration:(id)fp8 parentMenuView:(id)fp12;

@end
