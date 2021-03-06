/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCChartViewDelegate;
@class NSString, NSObject, NSDictionary;

@interface CCChartViewSetupOptions : NSObject {

	NSString* config;
	NSString* rendererType;
	NSString* baseConfig;
	NSObject*<CCChartViewDelegate> delegate;
	NSDictionary* expressionFunctions;

}

@property (retain) NSString * config; 
@property (retain) NSDictionary * configDictionary; 
@property (retain) NSString * rendererType; 
@property (retain) NSString * baseConfig; 
@property (__weak) NSObject*<CCChartViewDelegate> delegate; 
@property (retain) NSDictionary * expressionFunctions; 
-(NSObject*<CCChartViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<CCChartViewDelegate>)arg1 ;
-(NSString *)config;
-(void)setConfig:(NSString *)arg1 ;
-(NSDictionary *)configDictionary;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(void)setRendererType:(NSString *)arg1 ;
-(void)setBaseConfig:(NSString *)arg1 ;
-(NSString *)rendererType;
-(NSString *)baseConfig;
-(NSDictionary *)expressionFunctions;
-(void)setExpressionFunctions:(NSDictionary *)arg1 ;
@end

