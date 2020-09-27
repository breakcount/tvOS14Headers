/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface PPContactDiskCacheHistoryRecordSet : NSObject {

	NSString* _filename;
	NSMutableArray* _adds;
	NSMutableArray* _updates;
	NSMutableArray* _deletes;

}

@property (nonatomic,readonly) NSString * filename;                   //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSMutableArray * adds;                 //@synthesize adds=_adds - In the implementation block
@property (nonatomic,readonly) NSMutableArray * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSMutableArray * deletes;              //@synthesize deletes=_deletes - In the implementation block
-(unsigned long long)hash;
-(NSString *)filename;
-(NSMutableArray *)updates;
-(NSMutableArray *)deletes;
-(id)initWithFilename:(id)arg1 ;
-(NSMutableArray *)adds;
@end

