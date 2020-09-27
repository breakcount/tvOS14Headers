/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, NSDictionary, NSSet;

@interface IconPictureOutput : NSObject <MLFeatureProvider> {

	NSString* _label;
	NSDictionary* _labelProbability;

}

@property (nonatomic,retain) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSDictionary * labelProbability;              //@synthesize labelProbability=_labelProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithLabel:(id)arg1 labelProbability:(id)arg2 ;
-(NSDictionary *)labelProbability;
-(void)setLabelProbability:(NSDictionary *)arg1 ;
@end
