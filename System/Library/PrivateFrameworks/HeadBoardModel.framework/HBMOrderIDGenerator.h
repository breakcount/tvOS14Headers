/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HBMOrderIDGenerator.h>

@protocol HBMOrderIDGenerator <NSObject>
@required
-(double)nextOrderID;

@end


@class NSString;

@interface HBMOrderIDGenerator : NSObject <HBMOrderIDGenerator> {

	double _stride;
	double _current;

}

@property (nonatomic,readonly) double current;                      //@synthesize current=_current - In the implementation block
@property (nonatomic,readonly) double stride;                       //@synthesize stride=_stride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)current;
-(double)stride;
-(double)nextOrderID;
-(id)initWithBase:(double)arg1 stride:(double)arg2 ;
@end
