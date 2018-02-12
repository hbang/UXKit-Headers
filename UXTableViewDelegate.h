// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Foundation/Foundation.h>

@class UXView, UXTableView;

@protocol UXTableViewDelegate <NSObject>

@optional
- (void)tableView:(UXTableView *)tableView willDisplayCell:(UXTableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView willDisplayHeaderView:(UXView *)headerView forSection:(NSInteger)section;
- (void)tableView:(UXTableView *)tableView willDisplayFooterView:(UXView *)footerView forSection:(NSInteger)section;

- (void)tableView:(UXTableView *)tableView didEndDisplayingCell:(UXTableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didEndDisplayingHeaderView:(UXView *)headerView forSection:(NSInteger)section;
- (void)tableView:(UXTableView *)tableView didEndDisplayingFooterView:(UXView *)footerView forSection:(NSInteger)section;

- (CGFloat)tableView:(UXTableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath;
- (CGFloat)tableView:(UXTableView *)tableView heightForHeaderInSection:(NSInteger)section;
- (CGFloat)tableView:(UXTableView *)tableView heightForFooterInSection:(NSInteger)section;

- (CGFloat)tableView:(UXTableView *)tableView estimatedHeightForRowAtIndexPath:(NSIndexPath *)indexPath;
- (CGFloat)tableView:(UXTableView *)tableView estimatedHeightForHeaderInSection:(NSInteger)section;
- (CGFloat)tableView:(UXTableView *)tableView estimatedHeightForFooterInSection:(NSInteger)section;

- (UXView *)tableView:(UXTableView *)tableView viewForHeaderInSection:(NSInteger)section;
- (UXView *)tableView:(UXTableView *)tableView viewForFooterInSection:(NSInteger)section;

- (NSInteger)tableView:(UXTableView *)tableView accessoryTypeForRowWithIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)indexPath;

- (BOOL)tableView:(UXTableView *)tableView shouldHighlightRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didHighlightRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didUnhighlightRowAtIndexPath:(NSIndexPath *)indexPath;

- (NSIndexPath *)tableView:(UXTableView *)tableView willSelectRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSIndexPath *)tableView:(UXTableView *)tableView willDeselectRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath;

- (void)tableView:(UXTableView *)tableView willBeginEditingRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didEndEditingRowAtIndexPath:(NSIndexPath *)indexPath;

- (NSInteger)tableView:(UXTableView *)tableView editingStyleForRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSString *)tableView:(UXTableView *)tableView titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSArray *)tableView:(UXTableView *)tableView editActionsForRowAtIndexPath:(NSIndexPath *)indexPath;
- (BOOL)tableView:(UXTableView *)tableView shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSInteger)tableView:(UXTableView *)tableView indentationLevelForRowAtIndexPath:(NSIndexPath *)indexPath;

- (NSIndexPath *)tableView:(UXTableView *)tableView targetIndexPathForMoveFromRowAtIndexPath:(NSIndexPath *)indexPath toProposedIndexPath:(NSIndexPath *)indexPath;

- (BOOL)tableView:(UXTableView *)tableView shouldShowMenuForRowAtIndexPath:(NSIndexPath *)indexPath;

- (BOOL)tableView:(UXTableView *)tableView canPerformAction:(SEL)action forRowAtIndexPath:(NSIndexPath *)indexPath withSender:(id)sender;
- (void)tableView:(UXTableView *)tableView performAction:(SEL)action forRowAtIndexPath:(NSIndexPath *)indexPath withSender:(id)sender;

@end
