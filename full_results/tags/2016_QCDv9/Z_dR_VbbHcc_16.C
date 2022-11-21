void Z_dR_VbbHcc_16()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_16/Z_dR_VbbHcc_16
//=========  (Mon Nov 21 13:02:19 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_16 = new TCanvas("Z_dR_VbbHcc_16", "Z_dR_VbbHcc_16",0,0,600,600);
   Z_dR_VbbHcc_16->SetHighLightColor(2);
   Z_dR_VbbHcc_16->Range(0,0,1,1);
   Z_dR_VbbHcc_16->SetFillColor(0);
   Z_dR_VbbHcc_16->SetFillStyle(4000);
   Z_dR_VbbHcc_16->SetBorderMode(0);
   Z_dR_VbbHcc_16->SetBorderSize(2);
   Z_dR_VbbHcc_16->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-3312.407,10.52419,3309105);
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
   st->SetMaximum(2836060);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",50,0,10);
   st_stack_17->SetMinimum(0.01);
   st_stack_17->SetMaximum(2977863);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetRange(1,50);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetLabelSize(0.035);
   st_stack_17->GetXaxis()->SetTitleSize(0.035);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetLabelSize(0.05);
   st_stack_17->GetYaxis()->SetTitleSize(0.057);
   st_stack_17->GetYaxis()->SetTitleOffset(1.2);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetLabelSize(0.035);
   st_stack_17->GetZaxis()->SetTitleSize(0.035);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",50,0,10);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,827551);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,1203431);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,873364);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,807465.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,714286.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,652596.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,667573.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,664862.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,638389);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,695391.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,802931);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,845092.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,961966.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,980820);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,613507.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,374266.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,282871.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,179185.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,142474);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,80806.05);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,64459.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,50051.47);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,24789.67);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,17667.16);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2790.216);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,508.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,33837.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,40681.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,34624.66);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,33287.89);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,31285.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,29986.65);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,30295.27);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,30263.51);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,29542.28);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,30899.41);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,33174.88);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,34062.07);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,36295.53);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,36626.44);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,28894.52);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,22749.98);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,19707.96);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,15579.31);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,13920.17);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,10435.43);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,9258.338);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,8247.997);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,5850.647);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,4925.582);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,1983.173);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,508.1);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(9787);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",50,0,10);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,1.686476);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,2281.052);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,4244.926);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,5051.98);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,6101.591);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,7231.894);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,8206.548);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,9123.746);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,9995.629);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,10954.17);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,11974.28);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,12771.19);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,13629.25);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,14290.62);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,13905.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,7622.848);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,4642.211);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,2980.907);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,1948.195);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,1251.912);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,771.6881);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,457.5433);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,255.5327);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,128.6935);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,53.72074);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,21.47649);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,6.385025);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.1149389);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.54227);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,19.04043);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,25.80695);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,28.1821);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,30.93232);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,33.77703);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,35.8291);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,37.91767);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,39.58648);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,41.41251);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,43.33853);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,44.72234);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,46.31105);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,47.30224);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,46.88951);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,35.26807);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,27.98338);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,22.56489);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,18.40347);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,14.80149);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,11.64552);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,8.932213);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,6.632463);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,4.715887);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,2.9197);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.82461);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.038213);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.09177421);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(2269787);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",50,0,10);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,23.33924);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,30429.7);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,59264.4);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,71242.45);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,87026.89);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,101807.8);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,115604.5);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,129310);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,143758.7);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,158788);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,175337.1);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,192882.5);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,210195.8);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,225728.3);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,221426);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,115824.8);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,65723.48);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,38695.53);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,22703.21);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,13021.62);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,7286.346);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,3888.008);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,1980.387);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,916.6079);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,378.0744);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,129.5296);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,30.71089);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,1.056189);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,1.235304);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,44.54989);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,62.24936);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,68.31266);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,75.52163);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,81.70244);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,87.07387);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,92.09882);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,97.12977);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,102.113);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,107.3578);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,112.6546);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,117.6946);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,122.0401);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,120.9635);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,87.50549);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,65.90988);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,50.56618);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,38.71296);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,29.30444);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,21.86692);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,15.94789);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,11.3309);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,7.698275);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,4.926746);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,2.871144);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,1.383859);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,0.2489351);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(3.53571e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",50,0,10);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(2,1.269605);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,1059.375);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,2749.337);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,4184.445);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,4088.663);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,3236.283);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,2616.199);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,2220.781);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,1888.918);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,1814.008);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,1779.429);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,1847.922);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,1977.401);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,2150.171);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,2045.549);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,1083.188);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,654.8557);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,458.3694);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,303.1202);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,216.9205);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,140.8109);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,97.60461);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,58.92033);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,30.89947);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,14.93218);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,9.466902);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,1.1461);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(2,0.6352731);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,17.76766);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,28.615);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,35.33717);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,34.93065);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,31.023);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,27.88517);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,25.71332);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,23.70012);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,23.23058);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,22.99572);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,23.4386);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,24.25231);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,25.28504);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,24.66103);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,17.9318);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,13.92138);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,11.64594);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,9.463006);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,7.985917);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,6.432797);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,5.325423);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,4.127339);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,2.961584);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,2.065417);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,1.615734);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,0.5488628);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(125833);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",50,0,10);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,1816.462);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,1965.995);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,1428.899);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,1159.743);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,993.9497);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,958.0138);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,959.8803);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,975.1528);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,1008.195);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,1112.507);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,1269.436);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,1472.785);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,1500.272);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,1531.91);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,850.3483);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,586.5199);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,407.9184);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,307.5588);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,200.0975);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,151.8345);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,91.98082);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,52.9237);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,42.01814);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,20.41818);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,11.56204);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,2.240349);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,44.70419);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,46.48476);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,39.5391);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,35.665);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,33.02209);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,32.27459);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,32.35469);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,32.64178);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,33.21331);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,34.76155);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,37.22974);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,40.21034);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,40.49349);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,40.8866);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,30.43389);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,25.18223);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,21.00738);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,18.23447);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,14.60051);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,12.74797);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,9.855051);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,7.486153);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,6.593924);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,4.605326);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,3.468504);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,1.585272);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(19535);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",50,0,10);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,30.32395);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,30.76747);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(5,28.35682);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(6,28.08244);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,26.23399);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(8,28.19595);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,28.69146);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(10,34.9108);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,32.82989);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,40.17142);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,48.67754);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,49.70307);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(15,58.23983);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,60.11967);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,33.62319);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(18,21.16626);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(19,15.12053);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(20,10.44376);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(21,6.720032);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,6.394477);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(23,2.768746);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(24,1.789624);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,1.419933);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(26,0.4418802);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(27,0.3650382);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,1.666281);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,1.671116);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(5,1.601677);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(6,1.606265);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,1.542926);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(8,1.607426);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,1.618807);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(10,1.792551);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,1.733554);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,1.915419);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,2.115875);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,2.142572);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(15,2.310169);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,2.341587);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,1.750338);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(18,1.392042);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(19,1.172547);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(20,0.9709346);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(21,0.7793751);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,0.7603493);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(23,0.4946234);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(24,0.4028091);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.3671741);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(26,0.1980274);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(27,0.1828382);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(6972);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",50,0,10);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(2,0.06684071);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,49.54518);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,86.53564);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,93.66495);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,106.2496);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,111.3012);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,101.6508);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,93.63175);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,79.46202);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,71.8717);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,68.39678);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,64.13713);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,69.03307);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,69.06589);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,71.38647);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,33.28711);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,17.59587);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,11.08527);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(20,7.691684);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,4.69797);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,3.423604);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(23,2.51491);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,1.100431);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,0.5007636);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,0.5880218);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,0.1352961);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,0.06671945);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,0.04987789);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(2,0.06684071);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,1.831221);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,2.428173);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,2.52789);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,2.688046);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,2.756645);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,2.637921);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,2.528734);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,2.330053);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,2.215985);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,2.163867);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,2.09439);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,2.167539);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,2.162705);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,2.207576);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,1.505312);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,1.098689);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.8646459);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(20,0.7214597);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.5617586);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,0.4804917);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(23,0.4058434);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.2757792);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.1832369);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.196384);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.09577267);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.06671945);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.04987789);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(18198);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",50,0,10);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,31.44446);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,66.71594);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,77.23189);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,90.62486);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,88.46674);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,89.14138);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,87.60825);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,87.78847);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,81.06675);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,77.19254);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,79.65628);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,84.11487);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,90.53066);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,82.67875);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,30.12941);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,15.53015);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,8.807202);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,7.777108);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,3.363458);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,1.682914);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,2.483528);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,0.3971456);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.3706891);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.3337086);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.1401072);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,2.434723);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,3.587207);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,3.840599);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,4.166962);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,4.122706);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,4.140884);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,4.103989);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,4.105594);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,3.95459);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,3.85512);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,3.910746);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,4.036169);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,4.180216);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,4.000595);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,2.407183);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,1.718264);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,1.301614);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,1.21553);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.7838828);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.5539909);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.6902503);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.2808968);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.2623097);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.2411049);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.1401072);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(6283);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",50,0,10);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(2,0.01214232);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,8.02808);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,17.70843);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,23.93094);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,29.74851);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,33.30662);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,34.52604);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,34.1646);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,33.35413);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,32.45421);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,31.21232);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,31.11957);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,32.58272);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,34.59418);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,32.8952);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,10.73081);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,3.874889);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,1.661034);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,0.8661007);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,0.5014098);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.3231204);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.1765014);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.1001859);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.03982424);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.03287693);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.009419964);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.007797775);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(2,0.004300631);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.1098786);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.1636242);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.1900601);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.2116929);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.2243147);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.2288822);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.227366);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.2247621);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.2216245);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.217312);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.2165575);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.2217372);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.228763);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.2232969);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.1272223);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.07605746);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.04946449);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.03571532);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.02695196);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.0216959);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.01599746);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.01204887);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.007843332);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.006877157);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.003590399);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.003188632);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(302515);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",50,0,10);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(2,0.003967931);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,3.770092);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,8.072928);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,11.15495);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,13.8862);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,14.88717);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,13.89855);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,11.51032);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,9.292437);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,7.835123);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,7.076403);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,7.051667);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,7.237891);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,7.673608);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,7.331217);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,2.952284);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.359091);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.692062);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.3791081);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.2176209);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.1253728);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.06986223);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.03891723);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.0169532);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.004363873);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.003568903);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.0007117537);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(2,0.001257578);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.03790022);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.05546687);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.06527698);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.07289456);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.07554865);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.0730184);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.0664574);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.05971084);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.05479894);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.05207871);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.05196039);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.05264965);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.05421333);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.05302491);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.03357738);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.02276677);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.01624444);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01198856);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.009075685);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.006872484);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.005132729);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.003829794);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.002472901);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.001266964);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.0011341);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.0005078546);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",50,0,10);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.2168722);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.3685944);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.5065002);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.566533);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.5531165);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.546307);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.4862614);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.3486681);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.3456525);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.4012248);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.4008158);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.3936175);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.426431);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.4054466);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.1498574);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.07702604);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.03780446);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.02432178);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(21,0.01110998);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.0109225);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(24,0.003143403);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.003014248);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.001493284);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.01817251);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.02412787);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.02833388);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.02986046);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.02926432);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.02905773);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.02753012);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.02393062);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.02304812);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.0249699);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.02534181);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.02459294);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.02541518);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.02525097);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.01541723);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.01083397);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.007530817);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.006101274);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(21,0.004203356);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.003909185);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(24,0.002227248);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.002131957);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.001493284);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(4585);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",50,0,10);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,2440.76);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,4361.571);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,5976.299);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,6264.079);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,5062.599);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,3692.93);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,2703.406);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,2416.913);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,2080.895);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,2298.905);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,2171.36);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,2353.389);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,2481.608);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,2541.117);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,1184.638);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,604.6499);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,364.3944);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,282.3528);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,172.6762);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,82.74362);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,57.91506);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,23.54082);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,7.077091);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.8518846);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,2.800823);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,3.909615);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,99.43527);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,132.3922);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,155.6171);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,159.2514);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,143.0175);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,122.1687);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,104.3382);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,98.58444);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,91.16664);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,96.28118);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,93.30677);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,97.50465);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,100.0945);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,100.9058);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,69.32322);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,49.19123);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,38.07591);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,34.07772);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,26.22221);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,18.21662);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,14.5898);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,9.467956);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,5.049696);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.8518846);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,2.800823);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,3.909615);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__33 = new TH1D("VbbHcc_tags_Z_dR__33","",50,0,10);
   VbbHcc_tags_Z_dR__33->SetBinContent(2,556);
   VbbHcc_tags_Z_dR__33->SetBinContent(3,658911);
   VbbHcc_tags_Z_dR__33->SetBinContent(4,696564);
   VbbHcc_tags_Z_dR__33->SetBinContent(5,489734);
   VbbHcc_tags_Z_dR__33->SetBinContent(6,430572);
   VbbHcc_tags_Z_dR__33->SetBinContent(7,399182);
   VbbHcc_tags_Z_dR__33->SetBinContent(8,381373);
   VbbHcc_tags_Z_dR__33->SetBinContent(9,377269);
   VbbHcc_tags_Z_dR__33->SetBinContent(10,382658);
   VbbHcc_tags_Z_dR__33->SetBinContent(11,396336);
   VbbHcc_tags_Z_dR__33->SetBinContent(12,420656);
   VbbHcc_tags_Z_dR__33->SetBinContent(13,452540);
   VbbHcc_tags_Z_dR__33->SetBinContent(14,496294);
   VbbHcc_tags_Z_dR__33->SetBinContent(15,547806);
   VbbHcc_tags_Z_dR__33->SetBinContent(16,566781);
   VbbHcc_tags_Z_dR__33->SetBinContent(17,339078);
   VbbHcc_tags_Z_dR__33->SetBinContent(18,222641);
   VbbHcc_tags_Z_dR__33->SetBinContent(19,152687);
   VbbHcc_tags_Z_dR__33->SetBinContent(20,105903);
   VbbHcc_tags_Z_dR__33->SetBinContent(21,71916);
   VbbHcc_tags_Z_dR__33->SetBinContent(22,47613);
   VbbHcc_tags_Z_dR__33->SetBinContent(23,30586);
   VbbHcc_tags_Z_dR__33->SetBinContent(24,18240);
   VbbHcc_tags_Z_dR__33->SetBinContent(25,9862);
   VbbHcc_tags_Z_dR__33->SetBinContent(26,4767);
   VbbHcc_tags_Z_dR__33->SetBinContent(27,1982);
   VbbHcc_tags_Z_dR__33->SetBinContent(28,551);
   VbbHcc_tags_Z_dR__33->SetBinContent(29,27);
   VbbHcc_tags_Z_dR__33->SetEntries(7703085);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__33->SetLineColor(ci);
   VbbHcc_tags_Z_dR__33->SetLineWidth(2);
   VbbHcc_tags_Z_dR__33->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__33->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__33->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__33->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__33->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__33->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__33->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1033[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1033[50] = {
   0,
   26.37828,
   865701.7,
   1276227,
   961482.9,
   912375.7,
   832893.8,
   783942.5,
   812147.8,
   824143.4,
   813260.7,
   888118.4,
   1014105,
   1074964,
   1208378,
   1222525,
   740184.5,
   446537.9,
   325815.8,
   204757.4,
   157352.8,
   89251.44,
   69060.27,
   52426.2,
   25917.31,
   18136.56,
   2965.706,
   548.6576,
   5.130621,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1033[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1033[50] = {
   0,
   1.49268,
   33837.93,
   40681.9,
   34625.12,
   33288.41,
   31286.16,
   29987.08,
   30295.64,
   30263.88,
   29542.66,
   30899.8,
   33175.26,
   34062.48,
   36295.93,
   36626.85,
   28894.78,
   22750.17,
   19708.09,
   15579.42,
   13920.24,
   10435.48,
   9258.374,
   8248.018,
   5850.66,
   4925.588,
   1983.182,
   508.1057,
   3.918925,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Z_dR_fx1033,Graph_from_VbbHcc_tags_Z_dR_fy1033,Graph_from_VbbHcc_tags_Z_dR_fex1033,Graph_from_VbbHcc_tags_Z_dR_fey1033);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1033 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1033","",100,0,11);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMaximum(1448600);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1033);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__34 = new TH1D("data_mc_ratio__34","",50,0,10);
   data_mc_ratio__34->SetBinContent(2,21.07795);
   data_mc_ratio__34->SetBinContent(3,0.7611294);
   data_mc_ratio__34->SetBinContent(4,0.5457995);
   data_mc_ratio__34->SetBinContent(5,0.5093528);
   data_mc_ratio__34->SetBinContent(6,0.471924);
   data_mc_ratio__34->SetBinContent(7,0.4792712);
   data_mc_ratio__34->SetBinContent(8,0.4864808);
   data_mc_ratio__34->SetBinContent(9,0.4645324);
   data_mc_ratio__34->SetBinContent(10,0.46431);
   data_mc_ratio__34->SetBinContent(11,0.4873419);
   data_mc_ratio__34->SetBinContent(12,0.4736486);
   data_mc_ratio__34->SetBinContent(13,0.4462459);
   data_mc_ratio__34->SetBinContent(14,0.4616843);
   data_mc_ratio__34->SetBinContent(15,0.4533398);
   data_mc_ratio__34->SetBinContent(16,0.463615);
   data_mc_ratio__34->SetBinContent(17,0.4580993);
   data_mc_ratio__34->SetBinContent(18,0.4985937);
   data_mc_ratio__34->SetBinContent(19,0.4686298);
   data_mc_ratio__34->SetBinContent(20,0.5172121);
   data_mc_ratio__34->SetBinContent(21,0.4570367);
   data_mc_ratio__34->SetBinContent(22,0.5334704);
   data_mc_ratio__34->SetBinContent(23,0.4428885);
   data_mc_ratio__34->SetBinContent(24,0.3479176);
   data_mc_ratio__34->SetBinContent(25,0.3805178);
   data_mc_ratio__34->SetBinContent(26,0.2628393);
   data_mc_ratio__34->SetBinContent(27,0.6683064);
   data_mc_ratio__34->SetBinContent(28,1.004269);
   data_mc_ratio__34->SetBinContent(29,5.262521);
   data_mc_ratio__34->SetBinError(2,0.8939042);
   data_mc_ratio__34->SetBinError(3,0.0009376594);
   data_mc_ratio__34->SetBinError(4,0.0006539621);
   data_mc_ratio__34->SetBinError(5,0.0007278444);
   data_mc_ratio__34->SetBinError(6,0.0007191992);
   data_mc_ratio__34->SetBinError(7,0.0007585703);
   data_mc_ratio__34->SetBinError(8,0.0007877543);
   data_mc_ratio__34->SetBinError(9,0.0007562937);
   data_mc_ratio__34->SetBinError(10,0.0007505897);
   data_mc_ratio__34->SetBinError(11,0.0007741088);
   data_mc_ratio__34->SetBinError(12,0.0007302855);
   data_mc_ratio__34->SetBinError(13,0.0006633546);
   data_mc_ratio__34->SetBinError(14,0.0006553534);
   data_mc_ratio__34->SetBinError(15,0.0006125061);
   data_mc_ratio__34->SetBinError(16,0.0006158145);
   data_mc_ratio__34->SetBinError(17,0.0007867012);
   data_mc_ratio__34->SetBinError(18,0.001056682);
   data_mc_ratio__34->SetBinError(19,0.001199303);
   data_mc_ratio__34->SetBinError(20,0.001589332);
   data_mc_ratio__34->SetBinError(21,0.00170427);
   data_mc_ratio__34->SetBinError(22,0.002444824);
   data_mc_ratio__34->SetBinError(23,0.002532405);
   data_mc_ratio__34->SetBinError(24,0.002576108);
   data_mc_ratio__34->SetBinError(25,0.003831709);
   data_mc_ratio__34->SetBinError(26,0.003806867);
   data_mc_ratio__34->SetBinError(27,0.01501149);
   data_mc_ratio__34->SetBinError(28,0.04278331);
   data_mc_ratio__34->SetBinError(29,1.012773);
   data_mc_ratio__34->SetMinimum(0.4);
   data_mc_ratio__34->SetMaximum(1.6);
   data_mc_ratio__34->SetEntries(75.51274);
   data_mc_ratio__34->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__34->SetLineColor(ci);
   data_mc_ratio__34->SetLineWidth(2);
   data_mc_ratio__34->SetMarkerStyle(20);
   data_mc_ratio__34->SetMarkerSize(1.2);
   data_mc_ratio__34->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__34->GetXaxis()->SetRange(1,50);
   data_mc_ratio__34->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__34->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__34->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__34->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__34->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__34->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__34->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__34->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__34->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__34->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__34->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__34->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__34->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__34->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1034[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1034[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1034[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1034[50] = {
   0,
   0.05658746,
   0.03908729,
   0.0318767,
   0.03601221,
   0.03648541,
   0.03756321,
   0.03825163,
   0.03730312,
   0.03672162,
   0.03632619,
   0.03479244,
   0.03271385,
   0.03168709,
   0.03003689,
   0.02996,
   0.03903727,
   0.05094789,
   0.06048843,
   0.07608721,
   0.08846517,
   0.1169223,
   0.1340622,
   0.1573262,
   0.2257433,
   0.2715834,
   0.6687048,
   0.9260889,
   0.7638305,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1034,Graph_from_mc_statistical_error_fy1034,Graph_from_mc_statistical_error_fex1034,Graph_from_mc_statistical_error_fey1034);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1034 = new TH1F("Graph_Graph_from_mc_statistical_error1034","",100,0,11);
   Graph_Graph_from_mc_statistical_error1034->SetMinimum(0.06651997);
   Graph_Graph_from_mc_statistical_error1034->SetMaximum(2.111307);
   Graph_Graph_from_mc_statistical_error1034->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1034->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1034);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_16->cd();
   Z_dR_VbbHcc_16->Modified();
   Z_dR_VbbHcc_16->cd();
   Z_dR_VbbHcc_16->SetSelected(Z_dR_VbbHcc_16);
}
