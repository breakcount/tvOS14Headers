/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHPatternNetwork;

@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStep {

	CHPatternNetwork* _patternFST;

}

@property (nonatomic,retain) CHPatternNetwork * patternFST;              //@synthesize patternFST=_patternFST - In the implementation block
-(void)dealloc;
-(id)process:(id)arg1 ;
-(CHPatternNetwork *)patternFST;
-(void)setPatternFST:(CHPatternNetwork *)arg1 ;
-(id)initWithPatternFst:(id)arg1 ;
@end

