/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SFRSASigningOperation.h>

@interface SFRSA_PSSSigningOperation : SFRSASigningOperation {

	id _pssSigningOperationInternal;

}

@property (nonatomic,copy) id<SFMaskGenerationFunction> maskGenerationFunction; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFMaskGenerationFunction>)maskGenerationFunction;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 ;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3 ;
-(void)setMaskGenerationFunction:(id<SFMaskGenerationFunction>)arg1 ;
@end

