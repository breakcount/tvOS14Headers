/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSMutableArray;

@interface _GCHapticTokenAndParams : NSObject {

	NSMutableArray* _params;
	unsigned long long _token;

}

@property (nonatomic,retain) NSMutableArray * params;                 //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) unsigned long long token;              //@synthesize token=_token - In the implementation block
-(unsigned long long)token;
-(NSMutableArray *)params;
-(void)setParams:(NSMutableArray *)arg1 ;
-(id)initWithHapticCommand:(const HapticCommand*)arg1 ;
@end
