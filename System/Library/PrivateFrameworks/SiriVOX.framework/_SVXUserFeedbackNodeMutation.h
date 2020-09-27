/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXUserFeedbackNodeMutating.h>

@class SVXUserFeedbackNode, NSString, SVXUserFeedback, NSSet;

@interface _SVXUserFeedbackNodeMutation : NSObject <SVXUserFeedbackNodeMutating> {

	SVXUserFeedbackNode* _baseModel;
	NSString* _identifier;
	double _duration;
	SVXUserFeedback* _feedback;
	NSSet* _dependentNodes;
	struct {
		unsigned isDirty : 1;
		unsigned hasIdentifier : 1;
		unsigned hasDuration : 1;
		unsigned hasFeedback : 1;
		unsigned hasDependentNodes : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setIdentifier:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setFeedback:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setDependentNodes:(id)arg1 ;
@end

