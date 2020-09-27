/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSArray, CRLatticeResults;

@interface CRTextRecognizerResults : NSObject {

	NSDictionary* _inputOptions;
	NSDate* _startTime;
	NSDate* _endTime;
	NSArray* _textFeatures;
	NSArray* _codeMaps;
	CRLatticeResults* _latticeResults;

}

@property (nonatomic,retain) NSDictionary * inputOptions;                    //@synthesize inputOptions=_inputOptions - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * textFeatures;                         //@synthesize textFeatures=_textFeatures - In the implementation block
@property (nonatomic,retain) NSArray * codeMaps;                             //@synthesize codeMaps=_codeMaps - In the implementation block
@property (nonatomic,retain) CRLatticeResults * latticeResults;              //@synthesize latticeResults=_latticeResults - In the implementation block
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(void)setTextFeatures:(NSArray *)arg1 ;
-(NSArray *)textFeatures;
-(NSDictionary *)inputOptions;
-(void)setInputOptions:(NSDictionary *)arg1 ;
-(NSArray *)codeMaps;
-(void)setCodeMaps:(NSArray *)arg1 ;
-(CRLatticeResults *)latticeResults;
-(void)setLatticeResults:(CRLatticeResults *)arg1 ;
@end

