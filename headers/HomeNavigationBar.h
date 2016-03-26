@interface HomeNavigationBar : UINavigationBar

- (void)setCenterSectionOverlay:(id)fp8;
- (id)centerSectionOverlay;
- (void)setSettingsButtonOverlay:(id)fp8;
- (id)settingsButtonOverlay;
- (void)setInboxButtonOverlay:(id)fp8;
- (id)inboxButtonOverlay;
- (void)setSupplementalBarWrapperView:(id)fp8;
- (id)supplementalBarWrapperView;
- (void)didChangeProStatus;
- (void)parentControllerWillBecomeVisible;
- (void)updateContentsBasedOnHeightAnimated:(BOOL)fp8;
- (float)maximumBarHeight;
- (float)defaultBarHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;

// From a superclass I am too lazy to make a header for
- (id)parentViewController;

@end
