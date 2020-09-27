/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrint100kShoutingModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _Sigmoid;

}

@property (setter=igmoid,nonatomic,retain) MLMultiArray * Sigmoid;              //@synthesize Sigmoid=_Sigmoid - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithSigmoid:(id)arg1 ;
-(MLMultiArray *)Sigmoid;
-(void)setSigmoid:(MLMultiArray *)arg1 ;
@end

