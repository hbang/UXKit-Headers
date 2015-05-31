/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Foundation/Foundation.h>
#import "UXTableView.h"
#import "UXTableViewDataSource.h"
#import "UXTableViewDelegate.h"

@interface UXTableViewController : UXCollectionViewController <UXTableViewDataSource, UXTableViewDelegate>

- (instancetype)initWithStyle:(UXTableViewStyle)style;

@property (readonly, nonatomic) UXTableView *tableView;
@property (readonly, nonatomic) id<UXTableViewDelegate> tableViewDelegate;

@end
