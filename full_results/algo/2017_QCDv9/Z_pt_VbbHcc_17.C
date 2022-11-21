void Z_pt_VbbHcc_17()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_17/Z_pt_VbbHcc_17
//=========  (Mon Nov 21 13:06:13 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_17 = new TCanvas("Z_pt_VbbHcc_17", "Z_pt_VbbHcc_17",0,0,600,600);
   Z_pt_VbbHcc_17->SetHighLightColor(2);
   Z_pt_VbbHcc_17->Range(0,0,1,1);
   Z_pt_VbbHcc_17->SetFillColor(0);
   Z_pt_VbbHcc_17->SetFillStyle(4000);
   Z_pt_VbbHcc_17->SetBorderMode(0);
   Z_pt_VbbHcc_17->SetBorderSize(2);
   Z_pt_VbbHcc_17->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-4734.095,1562.903,4729370);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(4053295);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",40,0,2000);
   st_stack_10->SetMinimum(0.01);
   st_stack_10->SetMaximum(4255960);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetRange(7,30);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetLabelSize(0.035);
   st_stack_10->GetXaxis()->SetTitleSize(0.035);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/50.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetLabelSize(0.05);
   st_stack_10->GetYaxis()->SetTitleSize(0.057);
   st_stack_10->GetYaxis()->SetTitleOffset(1.2);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetLabelSize(0.035);
   st_stack_10->GetZaxis()->SetTitleSize(0.035);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,516998.4);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,1752355);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,727993);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,14734.3);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,26042.03);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,47840.35);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,30851.32);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,4398.547);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(2422);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,2691.452);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,7146.798);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,4110.229);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,1630.741);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,727.1615);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,381.7932);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,200.3788);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,117.152);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,75.95691);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,52.69243);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,31.04519);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,23.61821);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(13,15.11816);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,13.50982);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(15,5.985654);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(16,4.193663);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(17,4.584837);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(18,2.215082);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(19,3.421441);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(20,1.603628);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(21,0.5506029);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(22,0.4412969);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(23,0.4701356);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(24,0.3481277);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(25,0.05870147);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(26,0.07146066);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(28,-0.05383782);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(33,0.3337765);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(34,0.3305);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,19.26635);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,31.25176);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,24.56063);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,16.25593);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,11.19453);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,8.279725);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,6.213258);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,4.868388);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,4.049018);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,3.436779);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,2.745119);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,2.424517);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(13,1.926788);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,1.86295);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(15,1.199344);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(16,1.040918);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(17,1.051743);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(18,0.6974108);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(19,0.9748404);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(20,0.6031033);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(21,0.4121293);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(22,0.6075838);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(23,0.3504207);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(24,0.2937243);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(25,0.07475257);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(26,0.07146066);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(28,0.05383782);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(33,0.3337765);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(34,0.3305);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(263449);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_3 = new TH1D("VbbHcc_algo_Z_pt_stack_3","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(1,21639.84);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(2,60198.64);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(3,42522.37);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(4,11795.32);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(5,5016.439);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(6,2497.048);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(7,1334.297);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(8,772.9576);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(9,452.4148);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(10,294.9201);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(11,193.5242);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(12,126.4267);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(13,94.64417);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(14,61.79751);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(15,43.22932);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(16,29.27891);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(17,21.13109);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(18,16.01038);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(19,11.46408);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(20,7.533705);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(21,7.913082);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(22,4.327895);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(23,4.100921);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(24,2.423606);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(25,1.260631);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(26,1.70297);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(27,1.298676);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(28,1.174997);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(29,0.5044485);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(30,0.8046307);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(31,0.4287682);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(32,0.2880195);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(33,0.1773331);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(34,0.1337054);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(35,0.1566841);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(36,0.1295829);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(37,0.03537764);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(38,0.1294785);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(41,0.07282258);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(1,37.84367);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(2,64.09094);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(3,54.51927);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(4,28.52157);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(5,18.64474);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(6,13.21687);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(7,9.714018);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(8,7.440039);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(9,5.727832);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(10,4.661696);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(11,3.797447);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(12,3.106446);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(13,2.67805);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(14,2.17065);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(15,1.824319);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(16,1.497909);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(17,1.248611);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(18,1.098121);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(19,0.9399719);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(20,0.7547409);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(21,0.8000631);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(22,0.561921);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(23,0.5458041);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(24,0.426544);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(25,0.3169295);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(26,0.3666862);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(27,0.3169708);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(28,0.2916021);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(29,0.2000066);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(30,0.241873);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(31,0.2157662);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(32,0.1493984);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(33,0.1253982);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(34,0.1088948);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(35,0.1118983);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(36,0.09777807);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(37,0.03537764);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(38,0.09226604);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(41,0.07282258);
   VbbHcc_algo_Z_pt_stack_3->SetEntries(2401118);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_4 = new TH1D("VbbHcc_algo_Z_pt_stack_4","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(1,186.2667);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(2,631.1849);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(3,1541.594);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(4,1916.184);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(5,942.3406);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(6,197.8477);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(7,9.158359);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(8,0.480603);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(1,8.327469);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(2,15.54623);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(3,24.56321);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(4,27.45459);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(5,19.28628);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(6,8.846214);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(7,1.88852);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(8,0.480603);
   VbbHcc_algo_Z_pt_stack_4->SetEntries(14584);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_5 = new TH1D("VbbHcc_algo_Z_pt_stack_5","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(1,123.0488);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(2,361.9831);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(3,709.8751);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(4,863.2616);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(5,410.4905);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(6,73.21285);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(7,5.347957);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(8,1.731565);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(1,12.4419);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(2,21.63694);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(3,30.52307);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(4,33.89365);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(5,23.57796);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(6,9.901388);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(7,2.747184);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(8,1.731565);
   VbbHcc_algo_Z_pt_stack_5->SetEntries(2033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_6 = new TH1D("VbbHcc_algo_Z_pt_stack_6","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(1,18.45833);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(2,39.60971);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(3,10.61091);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(4,6.224141);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(5,3.542467);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(6,1.89522);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(7,0.5696246);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(8,0.9836513);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(9,0.2532814);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(10,0.4870559);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(11,0.2525183);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(12,0.4156687);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(14,0.4709969);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(1,2.078517);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(2,3.032846);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(3,1.578257);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(4,1.196558);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(5,0.8916119);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(6,0.6891778);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(7,0.3358969);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(8,0.4505592);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(9,0.2532814);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(10,0.3445713);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(11,0.2525183);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(12,0.2982438);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(14,0.3339932);
   VbbHcc_algo_Z_pt_stack_6->SetEntries(380);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_7 = new TH1D("VbbHcc_algo_Z_pt_stack_7","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(1,50.57954);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(2,97.38232);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(3,63.86757);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(4,32.29237);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(5,18.77034);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(6,12.13453);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(7,5.461626);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(8,4.13316);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(9,2.151687);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(10,0.5938557);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(11,0.350109);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(12,0.1676428);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(14,0.1828711);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(19,0.1676428);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(25,0.1336818);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(1,2.921925);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(2,4.055274);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(3,3.268715);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(4,2.312281);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(5,1.773018);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(6,1.428118);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(7,0.9530923);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(8,0.8519859);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(9,0.6025952);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(10,0.3044915);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(11,0.2477017);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(12,0.1676428);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(14,0.1828711);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(19,0.1676428);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(22,0.1236251);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(25,0.1336818);
   VbbHcc_algo_Z_pt_stack_7->SetEntries(1796);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_8 = new TH1D("VbbHcc_algo_Z_pt_stack_8","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(1,48.66811);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(2,106.8587);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(3,61.28204);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(4,31.7799);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(5,16.49231);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(6,9.082281);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(7,4.572197);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(8,2.93904);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(9,1.129778);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(10,0.9355045);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(11,0.2056985);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(12,0.2373516);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(14,0.2274369);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(1,3.226317);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(2,4.816689);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(3,3.645877);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(4,2.654147);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(5,1.900868);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(6,1.392649);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(7,1.015485);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(8,0.7922304);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(9,0.5065725);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(10,0.4491291);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(11,0.2056985);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(12,0.2373516);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(14,0.2274369);
   VbbHcc_algo_Z_pt_stack_8->SetEntries(1368);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_9 = new TH1D("VbbHcc_algo_Z_pt_stack_9","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(1,7.898018);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(2,23.29623);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(3,17.39488);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(4,10.3313);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(5,5.93623);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(6,3.536299);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(7,2.117002);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(8,1.202998);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(9,0.7029899);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(10,0.4049882);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(11,0.1922976);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(12,0.09962548);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(13,0.055256);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(14,0.01878689);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(15,0.02043467);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(16,0.007639091);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(17,0.01514324);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(18,0.003727839);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(19,0.001548023);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(20,0.001977371);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(25,0.001858148);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(1,0.1235575);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(2,0.2140477);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(3,0.1846174);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(4,0.142609);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(5,0.1079405);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(6,0.08263887);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(7,0.06468642);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(8,0.04851366);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(9,0.03738115);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(10,0.02843002);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(11,0.01913359);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(12,0.01362174);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(13,0.01014123);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(14,0.00598811);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(15,0.006508413);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(16,0.003544337);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(17,0.005444862);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(18,0.002649577);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(19,0.001548023);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(20,0.001977371);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(25,0.001858148);
   VbbHcc_algo_Z_pt_stack_9->SetEntries(42122);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_10 = new TH1D("VbbHcc_algo_Z_pt_stack_10","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(1,0.8988195);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(2,3.689043);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(3,4.9465);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(4,3.143975);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(5,1.727564);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(6,0.9993926);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(7,0.5998588);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(8,0.364789);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(9,0.2384889);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(10,0.1682664);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(11,0.1011825);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(12,0.07355864);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(13,0.03891911);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(14,0.02859059);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(15,0.01908618);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(16,0.01958305);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(17,0.009570338);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(18,0.0101033);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(19,0.007741629);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(20,0.004911658);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(21,0.004388165);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(22,0.003861106);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(23,0.002478829);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(24,0.002568546);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(25,0.003358619);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(26,0.0004954155);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(27,0.0009004135);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(28,0.0004353423);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(29,0.001773194);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(30,0.0009271739);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(33,0.0004499021);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(34,0.001338237);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(41,0.0004356623);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(1,0.01993725);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(2,0.04046817);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(3,0.04692485);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(4,0.03737436);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(5,0.02769825);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(6,0.02104266);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(7,0.0162689);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(8,0.01269003);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(9,0.01026128);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(10,0.008637232);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(11,0.006711925);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(12,0.005697786);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(13,0.004167519);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(14,0.00352973);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(15,0.002918601);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(16,0.002945475);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(17,0.002090857);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(18,0.002103066);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(19,0.001882811);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(20,0.001490365);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(21,0.001390444);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(22,0.001294284);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(23,0.001016408);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(24,0.001056557);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(25,0.001270743);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(26,0.0004331733);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(27,0.0006367161);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(28,0.0004353423);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(29,0.0008868017);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(30,0.0006567898);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(33,0.0004499021);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(34,0.0007727727);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(41,0.0004356623);
   VbbHcc_algo_Z_pt_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_11 = new TH1D("VbbHcc_algo_Z_pt_stack_11","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(1,0.206533);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(2,0.9308939);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(3,0.7144859);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(4,0.3171109);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(5,0.106678);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(6,0.05570625);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(7,0.03640068);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(8,0.02420915);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(9,0.007116718);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(10,0.002681073);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(11,0.001469136);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(12,0.001698028);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(13,0.001739168);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(1,0.01942672);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(2,0.04148259);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(3,0.03658666);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(4,0.02433776);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(5,0.01371025);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(6,0.01016955);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(7,0.008025091);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(8,0.006361127);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(9,0.00358996);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(10,0.00187665);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(11,0.001469136);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(12,0.001698028);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(13,0.001739168);
   VbbHcc_algo_Z_pt_stack_11->SetEntries(1619);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_12 = new TH1D("VbbHcc_algo_Z_pt_stack_12","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(1,540.4749);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(2,3017.408);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(3,5250.88);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(4,2807.559);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(5,867.5446);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(6,367.1134);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(7,163.9231);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(8,53.52917);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(9,27.99396);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(10,14.98364);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(11,16.02898);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(14,0.1804469);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(1,53.75934);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(2,125.1338);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(3,165.4049);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(4,120.8026);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(5,67.13402);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(6,44.62451);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(7,28.57923);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(8,16.46098);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(9,12.59042);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(10,8.535824);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(11,9.38311);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(14,0.1804469);
   VbbHcc_algo_Z_pt_stack_12->SetEntries(2893);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_pt__19 = new TH1D("VbbHcc_algo_Z_pt__19","",40,0,2000);
   VbbHcc_algo_Z_pt__19->SetBinContent(1,4948);
   VbbHcc_algo_Z_pt__19->SetBinContent(2,11953);
   VbbHcc_algo_Z_pt__19->SetBinContent(3,20158);
   VbbHcc_algo_Z_pt__19->SetBinContent(4,21548);
   VbbHcc_algo_Z_pt__19->SetBinContent(5,16434);
   VbbHcc_algo_Z_pt__19->SetBinContent(6,14019);
   VbbHcc_algo_Z_pt__19->SetBinContent(7,13372);
   VbbHcc_algo_Z_pt__19->SetBinContent(8,12821);
   VbbHcc_algo_Z_pt__19->SetBinContent(9,10432);
   VbbHcc_algo_Z_pt__19->SetBinContent(10,6966);
   VbbHcc_algo_Z_pt__19->SetBinContent(11,4116);
   VbbHcc_algo_Z_pt__19->SetBinContent(12,2689);
   VbbHcc_algo_Z_pt__19->SetBinContent(13,1727);
   VbbHcc_algo_Z_pt__19->SetBinContent(14,1125);
   VbbHcc_algo_Z_pt__19->SetBinContent(15,693);
   VbbHcc_algo_Z_pt__19->SetBinContent(16,527);
   VbbHcc_algo_Z_pt__19->SetBinContent(17,332);
   VbbHcc_algo_Z_pt__19->SetBinContent(18,232);
   VbbHcc_algo_Z_pt__19->SetBinContent(19,144);
   VbbHcc_algo_Z_pt__19->SetBinContent(20,119);
   VbbHcc_algo_Z_pt__19->SetBinContent(21,70);
   VbbHcc_algo_Z_pt__19->SetBinContent(22,55);
   VbbHcc_algo_Z_pt__19->SetBinContent(23,50);
   VbbHcc_algo_Z_pt__19->SetBinContent(24,30);
   VbbHcc_algo_Z_pt__19->SetBinContent(25,23);
   VbbHcc_algo_Z_pt__19->SetBinContent(26,10);
   VbbHcc_algo_Z_pt__19->SetBinContent(27,13);
   VbbHcc_algo_Z_pt__19->SetBinContent(28,16);
   VbbHcc_algo_Z_pt__19->SetBinContent(29,9);
   VbbHcc_algo_Z_pt__19->SetBinContent(30,9);
   VbbHcc_algo_Z_pt__19->SetBinContent(31,5);
   VbbHcc_algo_Z_pt__19->SetBinContent(32,2);
   VbbHcc_algo_Z_pt__19->SetBinContent(33,3);
   VbbHcc_algo_Z_pt__19->SetBinContent(34,3);
   VbbHcc_algo_Z_pt__19->SetBinContent(35,3);
   VbbHcc_algo_Z_pt__19->SetBinContent(36,2);
   VbbHcc_algo_Z_pt__19->SetBinContent(37,2);
   VbbHcc_algo_Z_pt__19->SetBinContent(38,1);
   VbbHcc_algo_Z_pt__19->SetBinContent(41,2);
   VbbHcc_algo_Z_pt__19->SetEntries(144663);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt__19->SetLineColor(ci);
   VbbHcc_algo_Z_pt__19->SetLineWidth(2);
   VbbHcc_algo_Z_pt__19->SetMarkerStyle(20);
   VbbHcc_algo_Z_pt__19->SetMarkerSize(1.2);
   VbbHcc_algo_Z_pt__19->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt__19->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__19->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__19->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__19->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__19->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__19->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__19->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__19->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt__19->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__19->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__19->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__19->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__19->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__19->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_pt_fx1019[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fy1019[40] = {
   542306.2,
   1823983,
   782286.8,
   33831.46,
   8010.552,
   3544.719,
   1726.461,
   955.4988,
   560.8491,
   365.1885,
   241.7017,
   151.0405,
   109.8582,
   76.41646,
   49.2545,
   33.49979,
   25.74064,
   18.23929,
   15.06246,
   9.144221,
   8.468073,
   4.896678,
   4.573535,
   2.774302,
   1.458231,
   1.774927,
   1.299577,
   1.121594,
   0.5062217,
   0.8055578,
   0.4287682,
   0.2880195,
   0.5115595,
   0.4655436,
   0.1566841,
   0.1295829,
   0.03537764,
   0.1294785,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fex1019[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fey1019[40] = {
   26042.13,
   47840.57,
   30851.85,
   4400.546,
   76.91142,
   49.14611,
   31.03079,
   18.83634,
   14.4363,
   10.33524,
   10.49604,
   3.962562,
   3.29918,
   2.900282,
   2.183258,
   1.824079,
   1.632552,
   1.30087,
   1.364541,
   0.9661126,
   0.8999741,
   0.8367784,
   0.6486122,
   0.5178947,
   0.3520059,
   0.3735847,
   0.3169714,
   0.2965307,
   0.2000086,
   0.2418739,
   0.2157662,
   0.1493984,
   0.3565553,
   0.3479784,
   0.1118983,
   0.09777807,
   0.03537764,
   0.09226604,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_Z_pt_fx1019,Graph_from_VbbHcc_algo_Z_pt_fy1019,Graph_from_VbbHcc_algo_Z_pt_fex1019,Graph_from_VbbHcc_algo_Z_pt_fey1019);
   gre->SetName("Graph_from_VbbHcc_algo_Z_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_pt1019 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_pt1019","",100,0,2200);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->SetMaximum(2059006);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_pt1019);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_pt","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_pt_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__20 = new TH1D("data_mc_ratio__20","",40,0,2000);
   data_mc_ratio__20->SetBinContent(1,0.009123997);
   data_mc_ratio__20->SetBinContent(2,0.006553241);
   data_mc_ratio__20->SetBinContent(3,0.02576804);
   data_mc_ratio__20->SetBinContent(4,0.6369219);
   data_mc_ratio__20->SetBinContent(5,2.051544);
   data_mc_ratio__20->SetBinContent(6,3.954897);
   data_mc_ratio__20->SetBinContent(7,7.745322);
   data_mc_ratio__20->SetBinContent(8,13.41812);
   data_mc_ratio__20->SetBinContent(9,18.60037);
   data_mc_ratio__20->SetBinContent(10,19.07508);
   data_mc_ratio__20->SetBinContent(11,17.02926);
   data_mc_ratio__20->SetBinContent(12,17.80317);
   data_mc_ratio__20->SetBinContent(13,15.72026);
   data_mc_ratio__20->SetBinContent(14,14.72196);
   data_mc_ratio__20->SetBinContent(15,14.06978);
   data_mc_ratio__20->SetBinContent(16,15.73144);
   data_mc_ratio__20->SetBinContent(17,12.89789);
   data_mc_ratio__20->SetBinContent(18,12.71979);
   data_mc_ratio__20->SetBinContent(19,9.560193);
   data_mc_ratio__20->SetBinContent(20,13.01368);
   data_mc_ratio__20->SetBinContent(21,8.266344);
   data_mc_ratio__20->SetBinContent(22,11.23211);
   data_mc_ratio__20->SetBinContent(23,10.93246);
   data_mc_ratio__20->SetBinContent(24,10.81353);
   data_mc_ratio__20->SetBinContent(25,15.77254);
   data_mc_ratio__20->SetBinContent(26,5.634036);
   data_mc_ratio__20->SetBinContent(27,10.00326);
   data_mc_ratio__20->SetBinContent(28,14.26541);
   data_mc_ratio__20->SetBinContent(29,17.77877);
   data_mc_ratio__20->SetBinContent(30,11.17238);
   data_mc_ratio__20->SetBinContent(31,11.66131);
   data_mc_ratio__20->SetBinContent(32,6.943974);
   data_mc_ratio__20->SetBinContent(33,5.864421);
   data_mc_ratio__20->SetBinContent(34,6.444079);
   data_mc_ratio__20->SetBinContent(35,19.1468);
   data_mc_ratio__20->SetBinContent(36,15.43413);
   data_mc_ratio__20->SetBinContent(37,56.53289);
   data_mc_ratio__20->SetBinContent(38,7.723289);
   data_mc_ratio__20->SetBinContent(41,27.30068);
   data_mc_ratio__20->SetBinError(1,0.0001297091);
   data_mc_ratio__20->SetBinError(2,5.994013e-05);
   data_mc_ratio__20->SetBinError(3,0.0001814921);
   data_mc_ratio__20->SetBinError(4,0.004338931);
   data_mc_ratio__20->SetBinError(5,0.01600329);
   data_mc_ratio__20->SetBinError(6,0.03340233);
   data_mc_ratio__20->SetBinError(7,0.06697941);
   data_mc_ratio__20->SetBinError(8,0.1185034);
   data_mc_ratio__20->SetBinError(9,0.1821117);
   data_mc_ratio__20->SetBinError(10,0.2285465);
   data_mc_ratio__20->SetBinError(11,0.2654349);
   data_mc_ratio__20->SetBinError(12,0.3433223);
   data_mc_ratio__20->SetBinError(13,0.3782801);
   data_mc_ratio__20->SetBinError(14,0.438924);
   data_mc_ratio__20->SetBinError(15,0.5344668);
   data_mc_ratio__20->SetBinError(16,0.6852723);
   data_mc_ratio__20->SetBinError(17,0.7078639);
   data_mc_ratio__20->SetBinError(18,0.8350954);
   data_mc_ratio__20->SetBinError(19,0.7966828);
   data_mc_ratio__20->SetBinError(20,1.192962);
   data_mc_ratio__20->SetBinError(21,0.988017);
   data_mc_ratio__20->SetBinError(22,1.514537);
   data_mc_ratio__20->SetBinError(23,1.546084);
   data_mc_ratio__20->SetBinError(24,1.974271);
   data_mc_ratio__20->SetBinError(25,3.288802);
   data_mc_ratio__20->SetBinError(26,1.781639);
   data_mc_ratio__20->SetBinError(27,2.774404);
   data_mc_ratio__20->SetBinError(28,3.566352);
   data_mc_ratio__20->SetBinError(29,5.926257);
   data_mc_ratio__20->SetBinError(30,3.724127);
   data_mc_ratio__20->SetBinError(31,5.215097);
   data_mc_ratio__20->SetBinError(32,4.910131);
   data_mc_ratio__20->SetBinError(33,3.385825);
   data_mc_ratio__20->SetBinError(34,3.720491);
   data_mc_ratio__20->SetBinError(35,11.05441);
   data_mc_ratio__20->SetBinError(36,10.91358);
   data_mc_ratio__20->SetBinError(37,39.97479);
   data_mc_ratio__20->SetBinError(38,7.723289);
   data_mc_ratio__20->SetBinError(41,33.30434);
   data_mc_ratio__20->SetMinimum(0.4);
   data_mc_ratio__20->SetMaximum(1.6);
   data_mc_ratio__20->SetEntries(35.4545);
   data_mc_ratio__20->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__20->SetLineColor(ci);
   data_mc_ratio__20->SetLineWidth(2);
   data_mc_ratio__20->SetMarkerStyle(20);
   data_mc_ratio__20->SetMarkerSize(1.2);
   data_mc_ratio__20->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__20->GetXaxis()->SetRange(7,30);
   data_mc_ratio__20->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__20->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__20->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__20->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__20->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__20->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__20->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__20->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__20->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__20->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__20->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__20->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__20->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__20->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1020[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1020[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1020[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1020[40] = {
   0.04802108,
   0.02622863,
   0.03943803,
   0.1300726,
   0.009601264,
   0.0138646,
   0.01797363,
   0.01971362,
   0.02574008,
   0.02830111,
   0.04342561,
   0.0262351,
   0.03003125,
   0.03795363,
   0.04432607,
   0.05445044,
   0.06342313,
   0.07132241,
   0.09059217,
   0.1056528,
   0.1062785,
   0.170887,
   0.1418186,
   0.1866756,
   0.2413924,
   0.210479,
   0.2439036,
   0.2643833,
   0.3951008,
   0.3002564,
   0.5032235,
   0.5187092,
   0.6969967,
   0.7474667,
   0.714165,
   0.7545598,
   1,
   0.7125973,
   0,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1020,Graph_from_mc_statistical_error_fy1020,Graph_from_mc_statistical_error_fex1020,Graph_from_mc_statistical_error_fey1020);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1020 = new TH1F("Graph_Graph_from_mc_statistical_error1020","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1020->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1020->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1020->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1020->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1020);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_17->cd();
   Z_pt_VbbHcc_17->Modified();
   Z_pt_VbbHcc_17->cd();
   Z_pt_VbbHcc_17->SetSelected(Z_pt_VbbHcc_17);
}
