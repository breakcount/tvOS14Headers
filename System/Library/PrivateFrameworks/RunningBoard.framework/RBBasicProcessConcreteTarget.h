/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RBConcreteTarget.h>

@class RBProcess;

@interface RBBasicProcessConcreteTarget : RBConcreteTarget {

	RBProcess* _process;

}
-(id)description;
-(id)identity;
-(id)process;
-(BOOL)isSystem;
-(id)createRBSTarget;
-(id)_initWithProcess:(id)arg1 ;
@end

