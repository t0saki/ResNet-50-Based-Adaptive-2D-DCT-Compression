%% 训练室内外分类网络

%% 读入数据集
digitDatasetPath = fullfile('images_resized224');

imds = imageDatastore(digitDatasetPath, ...
    'IncludeSubfolders',true, ...
    'LabelSource','foldernames');
% 根据文件夹自动加标签
% 数据集来源：Nadian-Ghomsheh, Ali (2017): Indoor-Outdoor dataset. figshare. Dataset.
% https://doi.org/10.6084/m9.figshare.4595323.v1
% 本程序使用数据集中的照片已被缩放到224*224分辨率
%% 每类划分300张训练，剩下100张验证

numTrainFiles = 300;
[imdsTrain,imdsValidation] = splitEachLabel(imds,numTrainFiles,'randomize');
%% 定义网络顶、底层大小

inputSize = [224 224 3];
numClasses = 2;

%% 定义网络，从getLayer.m获取
layers=getLayers(inputSize,numClasses);
%% 训练网络并保存

options = trainingOptions('sgdm', ...
    'MaxEpochs',64, ...
    'ValidationData',imdsValidation, ...
    'ValidationFrequency',30, ...
    'Verbose',false, ...
    'MiniBatchSize',64,  ...
    'OutputNetwork','best-validation-loss',  ...
    'Plots','training-progress');

% net = trainNetwork(imdsTrain,layers,options);

% doTraining变量决定当前程序用于训练网络还是验证网络
% doTraining=true;
doTraining=false;
if doTraining
    net = trainNetwork(imdsTrain,layers,options);
    modelDateTime = string(datetime("now",Format="yyyy-MM-dd-HH-mm-ss"));
    save("trained_resnet50_"+modelDateTime+".mat","net");
    %save("trained_ACG2.mat","net");
else
    %load("trained_resnet50_2022-05-27-03-33-07.mat");
    load("trained_resnet50_final224.mat");
end

%% 测试网络
YPred = classify(net,imdsValidation);
YValidation = imdsValidation.Labels;

accuracy = sum(YPred == YValidation)/numel(YValidation)