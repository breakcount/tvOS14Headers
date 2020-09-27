/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPTopic.h>

@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic {

	PPTopicRecord* _mostRelevantRecord;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sentimentScore;
-(id)mostRelevantRecord;
-(id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2 ;
@end
