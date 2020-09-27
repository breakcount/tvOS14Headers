/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SNDSPItemInfo.h>

@class NSString, NSDictionary;

@interface SNPropertyStripInfo : SNDSPItemInfo {

	NSString* _path;
	NSString* _resourcePath;
	NSDictionary* _value;

}

@property (nonatomic,readonly) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * resourcePath;              //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * value;                 //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)path;
-(NSDictionary *)value;
-(NSString *)resourcePath;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
@end

