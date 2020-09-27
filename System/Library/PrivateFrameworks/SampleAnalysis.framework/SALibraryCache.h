/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSArray;


@protocol SALibraryCache <NSObject>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSArray * binaryLoadInfos; 
@property (readonly) unsigned long long startAddress; 
@property (readonly) unsigned long long endAddress; 
@property (readonly) unsigned long long textSegmentsStartAddress; 
@property (readonly) unsigned long long textSegmentsEndAddress; 
@required
-(NSUUID *)uuid;
-(unsigned long long)startAddress;
-(unsigned long long)endAddress;
-(NSArray *)binaryLoadInfos;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;

@end
