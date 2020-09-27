/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTPromise.h>

@class CUTResult;

@interface _CUTStaticPromise : CUTPromise {

	CUTResult* _result;
	BOOL _safe;

}

@property (nonatomic,retain) CUTResult * result;              //@synthesize result=_result - In the implementation block
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(id)initWithResult:(id)arg1 safe:(BOOL)arg2 ;
-(id)then:(/*^block*/id)arg1 ;
@end

