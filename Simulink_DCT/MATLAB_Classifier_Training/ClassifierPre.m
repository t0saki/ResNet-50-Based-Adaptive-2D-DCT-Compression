%% 测试网络
load("trained_resnet50_final224.mat");

inputSize = [224 224 3];
test=imread("indoor-garden.jpg");
test=imresize(test,[inputSize(1),inputSize(2)],"lanczos3");
y=predict(net,test)