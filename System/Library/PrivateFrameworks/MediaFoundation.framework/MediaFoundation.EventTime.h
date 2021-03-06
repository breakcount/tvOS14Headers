/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaFoundation/MediaFoundation-Structs.h>
#import <libobjc.A.dylib/MFTimeStamp.h>

@interface MediaFoundation.EventTime : _UKNOWN_SUPERCLASS_ <MFTimeStamp> {

	 time;
	 userSecondsSinceReferenceDate;
	 hostTime;
	 type;

}

@property (readonly,nonatomic) double time; 
@property (readonly,nonatomic) double userSecondsSinceReferenceDate; 
@property (readonly,nonatomic) SCD_Struct_Me0 hostTime; 
-(double)time;
-(SCD_Struct_Me0)hostTime;
-(double)userSecondsSinceReferenceDate;
@end

