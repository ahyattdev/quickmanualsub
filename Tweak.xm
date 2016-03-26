#import "headers/headers.h"

/*
%hook JMActionMenuBarItemView

- (id)init {
    %orig;
    
    if ([self.superview isKindOfClass:%c(HomeNavigationBar)]) {
        // Insert the button
        UIButton *subButton = [UIButton buttonWithType:UIButtonTypeRoundedRect];
        [subButton setFrame:CGRectMake(0, 0, 60, 60)];
        [subButton setBackgroundColor:[UIColor redColor]];
        [self addSubview:subButton];
    }
    
    return self;
}

%end
*/

%hook RedditsViewController_iPhone

- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath {
    if (indexPath.row == 2) {
        // Return the man sub cell
        
        NSIndexPath *manSubCellIndex = [NSIndexPath indexPathForRow:[tableView numberOfRowsInSection:0]-2 inSection:0];
        return %orig(tableView, manSubCellIndex);
    } else if (indexPath.row > 2 && indexPath.row < [tableView numberOfRowsInSection:0]-1) {
        NSIndexPath *shiftedIndex = [NSIndexPath indexPathForRow:indexPath.row+1 inSection:0];
        return %orig(tableView, shiftedIndex);
    } else {
        return %orig;
    }
}

%end