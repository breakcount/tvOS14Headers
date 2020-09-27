/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes {

	int _pid;

}

@property (assign,nonatomic) int pid;              //@synthesize pid=_pid - In the implementation block
+(id)protobufSchema;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
@end

