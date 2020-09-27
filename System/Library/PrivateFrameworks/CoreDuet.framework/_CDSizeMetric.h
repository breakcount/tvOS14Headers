/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSDate, NSString, _CDSizeMetricFamily;

@interface _CDSizeMetric : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _scale;
	unsigned long long _count;
	unsigned long long _firstSize;
	unsigned long long _lastSize;
	unsigned long long _minimumSize;
	unsigned long long _maximumSize;
	unsigned long long _totalSizes;
	NSDate* _firstUpdate;
	NSDate* _lastUpdate;
	NSString* _name;
	NSString* _string;
	_CDSizeMetricFamily* _family;

}
-(id)initWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 family:(id)arg4 ;
@end

