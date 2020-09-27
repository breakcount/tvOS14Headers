/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMAdImpressions : FATObject {

	NSNumber* _adId;
	NSNumber* _impressionCount;
	NSNumber* _impressionTime;

}

@property (nonatomic,retain) NSNumber * adId;                         //@synthesize adId=_adId - In the implementation block
@property (nonatomic,retain) NSNumber * impressionCount;              //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,retain) NSNumber * impressionTime;               //@synthesize impressionTime=_impressionTime - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)impressionCount;
-(NSNumber *)adId;
-(void)setAdId:(NSNumber *)arg1 ;
-(void)setImpressionCount:(NSNumber *)arg1 ;
-(NSNumber *)impressionTime;
-(void)setImpressionTime:(NSNumber *)arg1 ;
@end

