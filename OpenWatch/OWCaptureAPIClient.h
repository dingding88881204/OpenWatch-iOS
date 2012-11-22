//
//  OWCaptureAPIClient.h
//  OpenWatch
//
//  Created by Christopher Ballinger on 11/13/12.
//  Copyright (c) 2012 OpenWatch FPC. All rights reserved.
//

#import "AFHTTPClient.h"
#import "OWRecording.h"

#define kOWCaptureAPIClientBandwidthNotification @"kOWCaptureAPIClientBandwidthNotification"

@interface OWCaptureAPIClient : AFHTTPClient

+ (OWCaptureAPIClient *)sharedClient;

@property (nonatomic, strong) NSMutableDictionary *uploadDictionary;

- (void) startedRecording:(OWRecording*)recording;
- (void) uploadFileURL:(NSURL*)url recording:(OWRecording*)recording priority:(NSOperationQueuePriority)priority;
- (void) finishedRecording:(OWRecording*)recording;
- (void) updateMetadataForRecording:(OWRecording*)recording;

@end
