/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Cocoa/Cocoa.h>

@interface NSGestureRecognizer (UXKit)

// TODO: what are these?
- (void)__stateChange:(id)unknown;
- (void)setGestureDidEndHandler:(id)handler;
- (void)setGestureDidChangeHandler:(id)handler;
- (void)setGestureDidBeginHandler:(id)handler;

@end
