/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNTechnique;

@interface SCNPass : NSObject {

	_C3DFXPass* _fxPass;
	SCNTechnique* _technique;

}

@property (nonatomic,copy) id initializationHandler; 
@property (nonatomic,copy) id executionHandler; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithFXPass:(_C3DFXPass*)arg1 technique:(id)arg2 ;
-(void)setInitializationHandler:(id)arg1 ;
-(id)initializationHandler;
-(void)setExecutionHandler:(id)arg1 ;
-(id)executionHandler;
-(void)setValue:(id)arg1 forPassPropertyKey:(long long)arg2 ;
-(id)valueForPassPropertyKey:(long long)arg1 ;
@end

