/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSIObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSIDate, NSString, PSIAsset, NSDate;

@interface PSICollection : PSIObject <NSCopying> {

	PSIDate* _startDate;
	PSIDate* _endDate;
	NSString* _title;
	NSString* _subtitle;
	PSIAsset* _keyAsset;
	unsigned long long _type;
	unsigned long long _numberOfAssets;
	NSDate* _sortDate;

}

@property (readonly) PSIDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (readonly) PSIDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) PSIAsset * keyAsset;                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long numberOfAssets;              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (readonly) NSDate * sortDate;                              //@synthesize sortDate=_sortDate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)type;
-(PSIDate *)endDate;
-(PSIDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSDate *)sortDate;
-(void)setKeyAsset:(PSIAsset *)arg1 ;
-(unsigned long long)numberOfAssets;
-(PSIAsset *)keyAsset;
-(id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAsset:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9 ;
-(id)_initForCopy:(BOOL)arg1 ;
@end

