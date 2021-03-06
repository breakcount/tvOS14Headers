/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseOperation.h>

@class NSString;

@interface ML3UpdateSpotlightIndexOperation : ML3DatabaseOperation {

	NSString* _bundleIdentifier;
	unsigned long long _bundle;
	unsigned long long _batchCount;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long bundle;                  //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) unsigned long long batchCount;              //@synthesize batchCount=_batchCount - In the implementation block
-(unsigned long long)type;
-(NSString *)bundleIdentifier;
-(unsigned long long)bundle;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundle:(unsigned long long)arg1 ;
-(BOOL)_execute:(id*)arg1 ;
-(unsigned long long)batchCount;
-(void)setBatchCount:(unsigned long long)arg1 ;
@end

