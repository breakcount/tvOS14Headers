/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IOAccelMemoryMapInfo : NSObject {

	int pid;
	unsigned long long address;
	id _expansionData;

}

@property (assign) int pid; 
@property (assign) unsigned long long address; 
-(unsigned long long)address;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
@end

