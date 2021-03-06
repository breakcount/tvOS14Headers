/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class NSObject;

@interface LSDatabaseBuilder : NSObject {

	NSObject*<OS_dispatch_queue> _ioQueue;

}
-(void)syncWithMI:(unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 ;
-(void)setSeedingComplete:(BOOL)arg1 ;
-(id)initWithIOQueue:(id)arg1 ;
-(void)createAndSeedLocalDatabase:(BOOL*)arg1 ;
@end

