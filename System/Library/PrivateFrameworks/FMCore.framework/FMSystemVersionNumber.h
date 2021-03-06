/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FMSystemVersionNumber : NSObject {

	long long _baseNumber;
	NSString* _baseLetter;
	long long _buildNumber;
	NSString* _suffix;

}

@property (assign,nonatomic) long long baseNumber;               //@synthesize baseNumber=_baseNumber - In the implementation block
@property (nonatomic,copy) NSString * baseLetter;                //@synthesize baseLetter=_baseLetter - In the implementation block
@property (assign,nonatomic) long long buildNumber;              //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * suffix;                    //@synthesize suffix=_suffix - In the implementation block
-(id)debugDescription;
-(id)description;
-(id)init;
-(long long)compare:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(long long)buildNumber;
-(void)setBuildNumber:(long long)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(NSString *)baseLetter;
-(long long)baseNumber;
-(void)setBaseNumber:(long long)arg1 ;
-(void)setBaseLetter:(NSString *)arg1 ;
@end

