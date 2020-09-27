/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SNModelFeatureConnection : NSObject {

	NSString* _sourceFeatureName;
	NSString* _destinationFeatureName;

}

@property (readonly) NSString * sourceFeatureName;                   //@synthesize sourceFeatureName=_sourceFeatureName - In the implementation block
@property (readonly) NSString * destinationFeatureName;              //@synthesize destinationFeatureName=_destinationFeatureName - In the implementation block
-(NSString *)destinationFeatureName;
-(NSString *)sourceFeatureName;
-(id)initWithSourceFeatureName:(id)arg1 destinationFeatureName:(id)arg2 ;
@end

