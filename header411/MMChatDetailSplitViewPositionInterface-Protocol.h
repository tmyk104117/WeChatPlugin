//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray;

@protocol MMChatDetailSplitViewPositionInterface
- (double)getChatDetailSplitViewDividerThickness;
- (struct CGSize)getChatDetailSplitViewFrameSize;
- (BOOL)isChatDetailSplitViewAnimating;
- (BOOL)setPositions:(NSArray *)arg1 ofDividersAtIndexes:(NSArray *)arg2 animated:(BOOL)arg3 completitionBlock:(void (^)(BOOL))arg4;
- (BOOL)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2 animated:(BOOL)arg3 completitionBlock:(void (^)(BOOL))arg4;
- (void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2;
@end
