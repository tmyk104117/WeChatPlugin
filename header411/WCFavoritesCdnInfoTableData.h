//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString, WCFavoritesCdnInfoTableDataPackedInfo;

@interface WCFavoritesCdnInfoTableData : NSObject <WCTTableCoding>
{
    unsigned int _itemLocalId;
    unsigned int _uploadStatus;
    unsigned int _isThumb;
    unsigned int _totalLength;
    unsigned int _dataType;
    NSString *_dataLocalId;
    NSString *_md5;
    NSString *_head256Md5;
    NSString *_cdnUrl;
    NSString *_cdnKey;
    NSString *_streamId;
    NSString *_dataFmt;
    WCFavoritesCdnInfoTableDataPackedInfo *_m_packedInfo;
}

+ (id)infoTableDataWithFavoritesCDNInfo:(id)arg1;
+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)dataFmt;
+ (const struct WCTProperty *)streamId;
+ (const struct WCTProperty *)dataType;
+ (const struct WCTProperty *)isThumb;
+ (const struct WCTProperty *)head256Md5;
+ (const struct WCTProperty *)md5;
+ (const struct WCTProperty *)cdnKey;
+ (const struct WCTProperty *)uploadStatus;
+ (const struct WCTProperty *)totalLength;
+ (const struct WCTProperty *)cdnUrl;
+ (const struct WCTProperty *)dataLocalId;
+ (const struct WCTProperty *)itemLocalId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) WCFavoritesCdnInfoTableDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(nonatomic) unsigned int totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5=_head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *dataLocalId; // @synthesize dataLocalId=_dataLocalId;
@property(nonatomic) unsigned int uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(nonatomic) unsigned int itemLocalId; // @synthesize itemLocalId=_itemLocalId;
- (void).cxx_destruct;
- (void)copyFieldFromOtherObject:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
