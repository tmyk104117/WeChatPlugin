//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

__attribute__((visibility("hidden")))
@interface GeneralControlBitSet : PBGeneratedMessage
{
    unsigned int hasBitValue:1;
    unsigned int bitValue;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetBitValue:) unsigned int bitValue; // @synthesize bitValue;
@property(readonly, nonatomic) BOOL hasBitValue; // @synthesize hasBitValue;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
