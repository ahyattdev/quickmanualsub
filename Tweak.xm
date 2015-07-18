#import "headers/RedditsViewController.h"

%hook RedditsViewController

- (void)viewDidLoad {
    %orig;
    UIBarButtonItem *manualSubButton = [[UIBarButtonItem alloc] initWithTitle:@"sub" style:UIBarButtonItemStylePlain target:self action:@selector(showManualEntryView)];
    self.navigationItem.rightBarButtonItems = @[self.navigationItem.rightBarButtonItem, manualSubButton];
}

%end