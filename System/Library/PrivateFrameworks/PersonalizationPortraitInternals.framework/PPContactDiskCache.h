/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PPContactDiskCache : NSObject {

	long long _lastCreatedAt;
	NSString* _path;

}
-(id)init;
-(BOOL)isEmpty;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(BOOL)iterNameRecordCacheWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(id)_cacheObjectFromFilePath:(id)arg1 error:(id*)arg2 ;
@end

