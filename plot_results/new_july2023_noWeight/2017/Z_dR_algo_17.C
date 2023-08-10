void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Thu Aug 10 12:28:22 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(0,0,1,1);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-356.3747,6.314516,356028.3);
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
   st->SetMaximum(305133.2);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0.01);
   st_stack_114->SetMaximum(320389.8);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetLabelSize(0.035);
   st_stack_114->GetXaxis()->SetTitleSize(0.035);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetLabelSize(0.05);
   st_stack_114->GetYaxis()->SetTitleSize(0.057);
   st_stack_114->GetYaxis()->SetTitleOffset(1.2);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetLabelSize(0.035);
   st_stack_114->GetZaxis()->SetTitleSize(0.035);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,36.64465);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,88690.36);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,119657.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,97402.59);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,81804.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,85227.06);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,79980.87);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,78896.16);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,78282.41);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,76387.84);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,69464.33);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,67822.21);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,66229.77);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,60642.53);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,92441.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,50065.36);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,62603.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,37456.98);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,33266.03);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,34455.68);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,30808.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,22784.74);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,22179.23);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,20468.89);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,36419.33);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,19914.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,17223.61);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,17097.33);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,9499.767);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,10863.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,13.81886);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,3150.394);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,15379.72);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,4283.099);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,3599.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,3989.103);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,3577.677);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,3556.63);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,3671.793);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,3843.994);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,3342.456);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,3199.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,3487.965);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,3219.638);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,21261.27);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,2757.161);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,15186.83);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,2346.834);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,2170.263);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2309.264);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2146.204);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,1764.472);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1722.884);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,1979.493);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,14916.42);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,1713.629);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,1897.335);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,1932.943);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,1072.959);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1230.812);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(116866);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.5730973);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,435.9914);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,710.3871);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,792.2256);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,818.3943);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,772.0415);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,765.4588);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,684.3881);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,641.1414);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,579.6967);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,528.5712);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,491.2177);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,454.1829);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,410.7969);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,375.0055);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,320.4633);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,306.3858);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,257.2524);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,245.13);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,230.6453);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,221.6715);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,220.0699);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,199.5137);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,181.6386);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,176.5583);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,158.6396);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,141.7558);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,108.5121);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,73.86489);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,63.3104);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3748938);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,8.107351);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,10.15285);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,10.61731);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,10.82975);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,10.4513);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,10.668);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,10.01373);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,9.834302);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,9.245778);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,8.82533);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,8.540874);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,8.031719);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,7.63377);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,7.21636);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,6.675227);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,6.593736);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,5.982105);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,5.945927);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,5.798904);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,5.761561);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,5.731627);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,5.505743);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,5.054699);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,5.025191);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,4.757146);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,4.553541);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,3.880178);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,3.272276);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,3.057085);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(147618);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,4.3504);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,8339.275);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,15915.39);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,18359.7);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,18429.24);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,16317.2);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,13581.33);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,11095.52);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,9115.944);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,7764.385);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,6837.69);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,6197.057);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,5673.015);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,5257.27);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,4898.746);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,4401.944);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,4041.514);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,3709.081);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,3438.447);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,3245.775);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,3103.412);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,3027.104);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,3003.177);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,3038.411);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,3060.168);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,2913.828);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,2592.078);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,2003.406);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,1201.303);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,845.2967);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.521914);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,23.05833);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,31.90024);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,34.23755);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,34.22396);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,32.08389);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,29.13453);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,26.18865);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,23.63836);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,21.73122);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,20.34254);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,19.33007);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,18.48368);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,17.77971);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,17.17254);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,16.28655);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,15.62537);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,14.96956);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,14.44296);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,14.05889);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,13.76233);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,13.62259);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,13.61153);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,13.74393);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,13.83384);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,13.51689);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,12.76941);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,11.2324);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,8.674389);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,7.216434);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(3230340);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.240921);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,518.319);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,730.5698);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,722.1533);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,647.1969);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,548.1281);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,472.7388);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,471.2192);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,424.0272);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,402.3998);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,376.1436);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,351.9064);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,326.2331);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,298.6689);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,294.8035);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,238.4284);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,229.0255);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,214.5517);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,177.9494);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,159.192);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,160.7332);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,158.5071);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,129.0181);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,116.6697);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,101.1872);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,115.0643);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,104.1871);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,85.11879);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,56.70065);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,42.15408);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.1432591);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,12.65572);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,16.29904);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,19.59575);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,22.53121);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,21.22478);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,17.15537);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,16.22653);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,15.74927);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,14.30835);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,14.06798);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,14.57566);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,14.28372);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,12.32249);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,12.30693);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,10.09229);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,11.31989);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,11.7868);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,9.418005);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,8.053932);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,9.992224);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,10.55721);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,8.403448);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,8.216855);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,6.654859);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,7.48275);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,7.66843);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,6.247722);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,5.079824);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,3.073901);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(52708);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.09281656);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,208.1494);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,252.8892);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,198.9796);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,180.8834);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,144.4487);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,163.1755);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,158.5699);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,149.4473);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,138.2941);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,146.5402);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,119.4641);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,126.5762);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,99.24244);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,114.1604);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,83.9904);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,91.0118);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,77.73684);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,47.1586);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,59.02071);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,48.98554);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,72.34085);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,42.03136);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,42.51091);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,35.24982);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,40.42971);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,25.57784);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,37.61931);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,13.92954);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,21.09153);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.08202873);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,13.23371);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,18.60065);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,14.3409);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,16.28459);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,10.86876);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,15.95809);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,14.60504);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,14.30972);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,11.04314);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,18.06174);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,13.71981);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,13.90242);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,9.873391);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,12.15617);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,12.57453);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,14.44242);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,11.2387);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,5.035744);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,8.612158);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,5.163704);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,11.41999);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,4.7977);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,4.933634);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,4.508392);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,5.246875);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,3.8258);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,4.959132);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,2.096507);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,7.116557);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(17207);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,3.153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,2.522447);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,2.522447);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,1.576529);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,2.207141);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,1.576529);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,0.6306118);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,0.9459177);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,0.9459177);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.9459177);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,1.261224);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,1.891835);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,0.9459177);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,0.6306118);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.576529);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(25,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.9970848);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,0.8918197);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.8918197);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.7050454);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.834221);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.7050454);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.4459099);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.5461258);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.5461258);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.5461258);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.6306118);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.7723385);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.5461258);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.4459099);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.7050454);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(25,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.3153059);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,5.950612);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,8.430034);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,9.421803);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,4.462959);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,2.975306);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,2.23148);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,1.983537);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,2.975306);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,2.975306);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,3.719133);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,1.983537);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,1.487653);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,2.479422);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,1.983537);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,1.487653);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,3.223248);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,1.735595);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,2.23148);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,1.487653);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.7438266);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,1.239711);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,0.4958844);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,0.9917687);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.9917687);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,1.239711);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,1.487653);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,0.7438266);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,0.4958844);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.2479422);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,1.214664);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,1.445739);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,1.528418);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,1.05193);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.8588969);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,0.7438266);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.7012864);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.8588969);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.8588969);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.960276);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.7012864);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.6073318);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.784062);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.7012864);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.6073318);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.8939683);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.6559934);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.7438266);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.6073318);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.4294485);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.5544156);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.3506432);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.4958844);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.4958844);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.5544156);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.6073318);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.4294485);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.3506432);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.2479422);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,12.15483);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,14.68709);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,18.23224);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,7.090317);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,3.798384);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,4.558061);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,3.798384);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,3.291933);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,4.05161);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,3.545159);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,4.05161);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,3.291933);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,2.27903);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,2.27903);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,3.291933);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,2.785482);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,2.025805);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,3.545159);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,2.27903);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,1.772579);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,1.772579);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,0.7596768);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,0.7596768);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,1.012902);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,2.27903);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,1.266128);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,1.012902);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,1.754398);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,1.928509);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.148691);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,1.339944);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,0.9807386);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.074345);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,0.9807386);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,0.9130179);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.012902);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,0.9474835);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.012902);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,0.9130179);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,0.7596768);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,0.7596768);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.9130179);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.8398543);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.7162302);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.9474835);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.7596768);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.669972);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.2532256);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.669972);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.2532256);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.4385996);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.4385996);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.5064512);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.7596768);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.5662297);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.5064512);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.006460468);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,7.426307);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,12.5543);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,11.49156);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,8.250017);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,4.953563);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,2.887829);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,2.34838);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,2.14649);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,2.170717);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,2.245012);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.228861);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.064119);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,2.030202);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,1.666801);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,1.640959);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,1.450375);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,1.427763);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.137042);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,1.1112);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.9044655);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.7994829);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.6735037);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.6331258);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.898005);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,1.011063);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.201647);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,1.078898);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.6605828);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.3747071);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.003230234);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.1095187);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.1423962);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.1362359);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1154328);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.08944598);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.06829481);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.06158659);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.05887982);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.05921116);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.06021592);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.05999893);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.05773902);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.05726267);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.05188524);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.05148145);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.04839964);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.04802088);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.04285389);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.04236412);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.03822064);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.03593408);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.03298162);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.03197768);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.03808389);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.04041021);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.04405451);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.04174382);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.03266372);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.02460073);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.001243877);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,2.018397);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,4.489151);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,5.381425);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,5.003701);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,3.559146);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,2.512631);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,1.960764);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.762988);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,1.744744);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,1.687111);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,1.665136);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,1.521261);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,1.388581);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,1.264193);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,1.114513);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,1.02993);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.977687);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.9076153);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.8532994);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.7587647);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.6795713);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.6036948);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.6094995);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.638938);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.7073512);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.6899369);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.5174527);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.3275542);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.2077274);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0007181525);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.02892886);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.04314298);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.04723639);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.04554846);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.03841501);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.03227694);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.02851285);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.02703664);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.02689638);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.02644843);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.02627562);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.02511481);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.02399461);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.02289469);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.02149664);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.02066483);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.0201339);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.01939898);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.01880956);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.01773706);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.01678593);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.0158211);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.01589698);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.01627636);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.01712559);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.01691347);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.01464749);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.01165385);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.009280576);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.06953105);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.09165457);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.07743231);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.0711113);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.03792603);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.02686427);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.01264201);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.02054326);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.01422226);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.02370377);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.02212352);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.02370377);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.01422226);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.01264201);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.01106176);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.01106176);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.01738276);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.01106176);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.01106176);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.006321005);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.009481507);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.007901256);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.01106176);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.006321005);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.006321005);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.009481507);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.007901256);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.006321005);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.0104822);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01203483);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01106176);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01060065);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.007741618);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.006515542);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.004469625);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.005697677);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.004740753);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.006120286);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.005912758);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.006120286);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.004740753);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.004469625);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.004180952);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.004180952);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.0052411);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.004180952);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.004180952);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.003160502);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.003870809);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.003533549);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.004180952);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.003160502);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.003160502);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.003870809);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.003533549);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.003160502);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.001580251);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.01474);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.02968761);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.0367462);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.02844197);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.02138338);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01245634);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.01287155);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.01328676);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.01328676);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.01224873);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.0110031);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01162592);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01141831);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.009757466);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.005605353);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.008511832);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.005812958);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.00622817);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.005190141);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.003944507);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.00332169);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.003736902);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.00332169);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.003114085);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.00477493);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.005190141);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.002698874);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.001660845);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001038028);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.001749316);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.002482603);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.002762014);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.002429962);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.002106967);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.001608106);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.001634689);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.001660845);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.001660845);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.001594649);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.001511392);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.001553578);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.001539645);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.001423273);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.001078751);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.001329325);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.001098546);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.001137103);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.001038028);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.0009049321);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.0008304226);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.0008807962);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.0008304226);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.0008040532);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.0009956417);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001038028);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.0007485328);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0005871975);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0004642204);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__312 = new TH1D("VbbHcc_algo_Z_dR__312","",30,0,6);
   VbbHcc_algo_Z_dR__312->SetBinContent(2,8);
   VbbHcc_algo_Z_dR__312->SetBinContent(3,14653);
   VbbHcc_algo_Z_dR__312->SetBinContent(4,18490);
   VbbHcc_algo_Z_dR__312->SetBinContent(5,15536);
   VbbHcc_algo_Z_dR__312->SetBinContent(6,14894);
   VbbHcc_algo_Z_dR__312->SetBinContent(7,14477);
   VbbHcc_algo_Z_dR__312->SetBinContent(8,14249);
   VbbHcc_algo_Z_dR__312->SetBinContent(9,13665);
   VbbHcc_algo_Z_dR__312->SetBinContent(10,13620);
   VbbHcc_algo_Z_dR__312->SetBinContent(11,12911);
   VbbHcc_algo_Z_dR__312->SetBinContent(12,12231);
   VbbHcc_algo_Z_dR__312->SetBinContent(13,11663);
   VbbHcc_algo_Z_dR__312->SetBinContent(14,11057);
   VbbHcc_algo_Z_dR__312->SetBinContent(15,10380);
   VbbHcc_algo_Z_dR__312->SetBinContent(16,9913);
   VbbHcc_algo_Z_dR__312->SetBinContent(17,8371);
   VbbHcc_algo_Z_dR__312->SetBinContent(18,7482);
   VbbHcc_algo_Z_dR__312->SetBinContent(19,6705);
   VbbHcc_algo_Z_dR__312->SetBinContent(20,6075);
   VbbHcc_algo_Z_dR__312->SetBinContent(21,5509);
   VbbHcc_algo_Z_dR__312->SetBinContent(22,5040);
   VbbHcc_algo_Z_dR__312->SetBinContent(23,4568);
   VbbHcc_algo_Z_dR__312->SetBinContent(24,4120);
   VbbHcc_algo_Z_dR__312->SetBinContent(25,3728);
   VbbHcc_algo_Z_dR__312->SetBinContent(26,3555);
   VbbHcc_algo_Z_dR__312->SetBinContent(27,3296);
   VbbHcc_algo_Z_dR__312->SetBinContent(28,3029);
   VbbHcc_algo_Z_dR__312->SetBinContent(29,2591);
   VbbHcc_algo_Z_dR__312->SetBinContent(30,1956);
   VbbHcc_algo_Z_dR__312->SetBinContent(31,1567);
   VbbHcc_algo_Z_dR__312->SetEntries(255368);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__312->SetLineColor(ci);
   VbbHcc_algo_Z_dR__312->SetLineWidth(2);
   VbbHcc_algo_Z_dR__312->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__312->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1227[30] = {
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
   5.9};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1227[30] = {
   0,
   41.90959,
   98222.88,
   137309.9,
   117522.8,
   101906.9,
   103026.4,
   94977.38,
   91316.6,
   88624.13,
   85284.53,
   77365.46,
   74993.08,
   72820.07,
   66717.65,
   98132.05,
   55118.06,
   67281.92,
   41722.11,
   37182.87,
   38156.38,
   34347.81,
   26266.06,
   25556.53,
   23850.94,
   39795.79,
   23146.61,
   20091.61,
   19336.93,
   10848.64};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1227[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1227[30] = {
   0,
   13.83478,
   3150.543,
   15379.78,
   4283.318,
   3599.797,
   3989.317,
   3577.889,
   3556.807,
   3671.944,
   3844.109,
   3342.608,
   3199.233,
   3488.08,
   3219.735,
   21261.29,
   2757.265,
   15186.85,
   2346.946,
   2170.346,
   2309.345,
   2146.285,
   1764.603,
   1722.974,
   1979.57,
   14916.43,
   1713.713,
   1897.403,
   1932.996,
   1073.013};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1227,Graph_from_VbbHcc_algo_Z_dR_fy1227,Graph_from_VbbHcc_algo_Z_dR_fex1227,Graph_from_VbbHcc_algo_Z_dR_fey1227);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1227 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1227","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetMaximum(167958.7);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1227);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_algo_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__313 = new TH1D("data_mc_ratio__313","",30,0,6);
   data_mc_ratio__313->SetBinContent(2,0.1908871);
   data_mc_ratio__313->SetBinContent(3,0.1491811);
   data_mc_ratio__313->SetBinContent(4,0.1346589);
   data_mc_ratio__313->SetBinContent(5,0.1321956);
   data_mc_ratio__313->SetBinContent(6,0.146153);
   data_mc_ratio__313->SetBinContent(7,0.1405173);
   data_mc_ratio__313->SetBinContent(8,0.1500252);
   data_mc_ratio__313->SetBinContent(9,0.1496442);
   data_mc_ratio__313->SetBinContent(10,0.1536828);
   data_mc_ratio__313->SetBinContent(11,0.1513874);
   data_mc_ratio__313->SetBinContent(12,0.1580938);
   data_mc_ratio__313->SetBinContent(13,0.155521);
   data_mc_ratio__313->SetBinContent(14,0.15184);
   data_mc_ratio__313->SetBinContent(15,0.155581);
   data_mc_ratio__313->SetBinContent(16,0.1010169);
   data_mc_ratio__313->SetBinContent(17,0.151874);
   data_mc_ratio__313->SetBinContent(18,0.1112037);
   data_mc_ratio__313->SetBinContent(19,0.1607062);
   data_mc_ratio__313->SetBinContent(20,0.1633817);
   data_mc_ratio__313->SetBinContent(21,0.1443795);
   data_mc_ratio__313->SetBinContent(22,0.1467342);
   data_mc_ratio__313->SetBinContent(23,0.1739126);
   data_mc_ratio__313->SetBinContent(24,0.1612112);
   data_mc_ratio__313->SetBinContent(25,0.1563041);
   data_mc_ratio__313->SetBinContent(26,0.08933106);
   data_mc_ratio__313->SetBinContent(27,0.1423967);
   data_mc_ratio__313->SetBinContent(28,0.1507594);
   data_mc_ratio__313->SetBinContent(29,0.1339923);
   data_mc_ratio__313->SetBinContent(30,0.1802991);
   data_mc_ratio__313->SetBinContent(31,0.1323793);
   data_mc_ratio__313->SetBinError(2,0.06748878);
   data_mc_ratio__313->SetBinError(3,0.001232397);
   data_mc_ratio__313->SetBinError(4,0.0009902994);
   data_mc_ratio__313->SetBinError(5,0.00106059);
   data_mc_ratio__313->SetBinError(6,0.001197573);
   data_mc_ratio__313->SetBinError(7,0.00116786);
   data_mc_ratio__313->SetBinError(8,0.001256817);
   data_mc_ratio__313->SetBinError(9,0.001280133);
   data_mc_ratio__313->SetBinError(10,0.001316851);
   data_mc_ratio__313->SetBinError(11,0.001332324);
   data_mc_ratio__313->SetBinError(12,0.001429499);
   data_mc_ratio__313->SetBinError(13,0.001440071);
   data_mc_ratio__313->SetBinError(14,0.001444001);
   data_mc_ratio__313->SetBinError(15,0.001527066);
   data_mc_ratio__313->SetBinError(16,0.001014593);
   data_mc_ratio__313->SetBinError(17,0.001659949);
   data_mc_ratio__313->SetBinError(18,0.001285614);
   data_mc_ratio__313->SetBinError(19,0.001962606);
   data_mc_ratio__313->SetBinError(20,0.002096188);
   data_mc_ratio__313->SetBinError(21,0.001945222);
   data_mc_ratio__313->SetBinError(22,0.002066884);
   data_mc_ratio__313->SetBinError(23,0.002573167);
   data_mc_ratio__313->SetBinError(24,0.002511578);
   data_mc_ratio__313->SetBinError(25,0.002559956);
   data_mc_ratio__313->SetBinError(26,0.001498244);
   data_mc_ratio__313->SetBinError(27,0.002480312);
   data_mc_ratio__313->SetBinError(28,0.00273927);
   data_mc_ratio__313->SetBinError(29,0.002632365);
   data_mc_ratio__313->SetBinError(30,0.004076704);
   data_mc_ratio__313->SetBinError(31,0.01416552);
   data_mc_ratio__313->SetMinimum(0.4);
   data_mc_ratio__313->SetMaximum(1.6);
   data_mc_ratio__313->SetEntries(1395.825);
   data_mc_ratio__313->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__313->SetLineColor(ci);
   data_mc_ratio__313->SetLineWidth(2);
   data_mc_ratio__313->SetMarkerStyle(20);
   data_mc_ratio__313->SetMarkerSize(1.2);
   data_mc_ratio__313->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__313->GetXaxis()->SetRange(1,30);
   data_mc_ratio__313->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__313->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__313->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__313->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__313->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__313->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__313->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__313->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__313->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__313->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__313->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__313->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__313->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__313->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1228[30] = {
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
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1228[30] = {
   0,
   0.33011,
   0.03207545,
   0.1120078,
   0.0364467,
   0.03532437,
   0.0387213,
   0.03767096,
   0.03895028,
   0.04143278,
   0.04507394,
   0.04320543,
   0.04266037,
   0.04789998,
   0.04825911,
   0.21666,
   0.05002471,
   0.2257196,
   0.05625186,
   0.0583695,
   0.06052316,
   0.0624868,
   0.06718186,
   0.06741816,
   0.08299759,
   0.3748243,
   0.07403735,
   0.09443757,
   0.09996397,
   0.09890761};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1228,Graph_from_mc_statistical_error_fy1228,Graph_from_mc_statistical_error_fex1228,Graph_from_mc_statistical_error_fey1228);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1228 = new TH1F("Graph_Graph_from_mc_statistical_error1228","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1228->SetMinimum(0.5502109);
   Graph_Graph_from_mc_statistical_error1228->SetMaximum(1.449789);
   Graph_Graph_from_mc_statistical_error1228->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1228->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1228);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
