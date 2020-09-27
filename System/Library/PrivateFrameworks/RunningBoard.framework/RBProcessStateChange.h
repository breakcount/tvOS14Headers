/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBSProcessIdentity, RBProcessState;

@interface RBProcessStateChange : NSObject {

	RBSProcessIdentity* _identity;
	RBProcessState* _originalState;
	RBProcessState* _updatedState;

}

@property (nonatomic,readonly) RBSProcessIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) RBProcessState * originalState;              //@synthesize originalState=_originalState - In the implementation block
@property (nonatomic,readonly) RBProcessState * updatedState;               //@synthesize updatedState=_updatedState - In the implementation block
-(RBSProcessIdentity *)identity;
-(RBProcessState *)updatedState;
-(id)initWithIdentity:(id)arg1 originalState:(id)arg2 updatedState:(id)arg3 ;
-(RBProcessState *)originalState;
-(id)changeByApplyingChange:(id)arg1 ;
@end

