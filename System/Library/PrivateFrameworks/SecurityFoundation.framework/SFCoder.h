/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SFCodingOptions;

@interface SFCoder : NSObject {

	id _coderInternal;

}

@property (nonatomic,copy) SFCodingOptions * options; 
-(SFCodingOptions *)options;
-(void)setOptions:(SFCodingOptions *)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(id)encodeTopLevelValue:(id)arg1 error:(id*)arg2 ;
@end

