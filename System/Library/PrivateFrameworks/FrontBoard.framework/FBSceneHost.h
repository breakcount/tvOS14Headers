/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBSSceneSpecification;


@protocol FBSceneHost <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * group; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification; 
@required
-(NSString *)identifier;
-(FBSSceneSpecification *)specification;
-(NSString *)group;
-(void)clientWillInvalidate:(id)arg1;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(void)client:(id)arg1 didReceiveActions:(id)arg2;

@end

