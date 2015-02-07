/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXTableViewCell.h"

@class UXTableView;

@protocol UXTableViewDataSource <NSObject>

@required
- (NSUInteger)tableView:(UXTableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (UXTableViewCell *)tableView:(UXTableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

@optional
- (NSUInteger)numberOfSectionsInTableView:(UXTableView *)tableView;

- (NSString *)tableView:(UXTableView *)tableView titleForHeaderInSection:(NSInteger)section;
- (NSString *)tableView:(UXTableView *)tableView titleForFooterInSection:(NSInteger)section;
- (BOOL)tableView:(UXTableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath;
- (BOOL)tableView:(UXTableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath;

- (NSArray *)sectionIndexTitlesForTableView:(UXTableView *)tableView;
- (NSInteger)tableView:(UXTableView *)tableView sectionForSectionIndexTitle:(NSString *)title atIndex:(NSInteger)index;

- (void)tableView:(UXTableView *)tableView commitEditingStyle:(UXTableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView moveRowAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)indexPath;

@end
