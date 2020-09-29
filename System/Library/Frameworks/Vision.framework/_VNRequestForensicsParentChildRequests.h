/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:44 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class VNRequest, NSArray;

@interface _VNRequestForensicsParentChildRequests : NSObject {

	VNRequest* _parentRequest;
	NSArray* _orderedChildRequests;

}

@property (nonatomic,readonly) VNRequest * parentRequest;                        //@synthesize parentRequest=_parentRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedChildRequests;              //@synthesize orderedChildRequests=_orderedChildRequests - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2 ;
-(VNRequest *)parentRequest;
-(NSArray *)orderedChildRequests;
@end
