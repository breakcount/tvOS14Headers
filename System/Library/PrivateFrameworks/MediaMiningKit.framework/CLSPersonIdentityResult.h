/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSPersonIdentity;

@interface CLSPersonIdentityResult : NSObject {

	float _confidence;
	CLSPersonIdentity* _person;

}

@property (nonatomic,retain) CLSPersonIdentity * person;              //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) float confidence;                        //@synthesize confidence=_confidence - In the implementation block
+(id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2 ;
-(id)description;
-(CLSPersonIdentity *)person;
-(void)setPerson:(CLSPersonIdentity *)arg1 ;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
-(BOOL)isSamePersonAsResult:(id)arg1 ;
@end

