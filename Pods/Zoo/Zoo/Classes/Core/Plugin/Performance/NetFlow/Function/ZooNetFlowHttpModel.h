//
//  ZooNetFlowHttpModel.h
//  Zoo
//
//  Created by lZackx on 2022/4/14.

#import <Foundation/Foundation.h>

@interface ZooNetFlowHttpModel : NSObject

@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) NSString *requestBody;
@property (nonatomic, copy) NSString *statusCode;
@property (nonatomic, copy) NSData *responseData;
@property (nonatomic, copy) NSString *responseBody;
@property (nonatomic, copy) NSString *mineType;
@property (nonatomic, assign) NSTimeInterval startTime;
@property (nonatomic, assign) NSTimeInterval endTime;
@property (nonatomic, copy) NSString *totalDuration;
@property (nonatomic, copy) NSString *uploadFlow;//上行流量 单位字节B
@property (nonatomic, copy) NSString *downFlow;//下行流量 单位字节B

@property (nonatomic, strong) NSURLRequest *request;
@property (nonatomic, strong) NSURLResponse *response;

@property (nonatomic, copy) NSString *topVc;//流量触发时候的顶层vc

+ (void)dealWithResponseData:(NSData *)responseData response:(NSURLResponse*)response request:(NSURLRequest *)request complete:(void (^)(ZooNetFlowHttpModel *model))complete;

@end
