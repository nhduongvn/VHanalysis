void Sphericity_both_all()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(0,0,1,1);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-328.4908,1.052419,328462.3);
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
   st->SetMinimum(0.3);
   st->SetMaximum(281507.8);
   
   TH1F *st_stack_252 = new TH1F("st_stack_252","",25,0,1);
   st_stack_252->SetMinimum(0.3);
   st_stack_252->SetMaximum(295583.2);
   st_stack_252->SetDirectory(0);
   st_stack_252->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_252->SetLineColor(ci);
   st_stack_252->GetXaxis()->SetRange(1,25);
   st_stack_252->GetXaxis()->SetLabelFont(42);
   st_stack_252->GetXaxis()->SetLabelSize(0.035);
   st_stack_252->GetXaxis()->SetTitleSize(0.035);
   st_stack_252->GetXaxis()->SetTitleFont(42);
   st_stack_252->GetYaxis()->SetTitle("Events/0.04");
   st_stack_252->GetYaxis()->SetLabelFont(42);
   st_stack_252->GetYaxis()->SetLabelSize(0.05);
   st_stack_252->GetYaxis()->SetTitleSize(0.057);
   st_stack_252->GetYaxis()->SetTitleOffset(1.2);
   st_stack_252->GetYaxis()->SetTitleFont(42);
   st_stack_252->GetZaxis()->SetLabelFont(42);
   st_stack_252->GetZaxis()->SetLabelSize(0.035);
   st_stack_252->GetZaxis()->SetTitleSize(0.035);
   st_stack_252->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_252);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,94761.5);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,112221.3);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,83575.64);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,71412.62);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,51798.65);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,41978.73);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,36196.58);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,19679.61);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,59440.76);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,21244.05);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,15800.73);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,15473.23);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,10646.76);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,7808.93);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,8612.032);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,5366.907);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,4905.852);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,3189.56);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(19,1419.347);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(20,1120.349);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(21,867.538);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(22,133.7139);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(23,363.4301);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,4125.668);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,5482.618);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,4973.868);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,4804.135);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,4067.591);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,3385.711);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,3169.881);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,1647.031);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,26588.93);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,3024.284);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,2089.007);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,2904.58);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,1521.442);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,1044.558);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,1873.616);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,900.0912);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,954.9583);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,730.6061);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(19,495.3197);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(20,600.4183);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(21,708.1406);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(22,53.10377);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(23,338.0657);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(30761);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,557.1831);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,555.2725);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,429.3229);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,316.2324);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,246.0437);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,194.1022);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,165.4701);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,146.7967);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,121.8718);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,103.5332);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,79.47275);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,76.65738);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,65.68671);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,50.00581);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,44.33566);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,33.16763);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,23.72367);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,20.07731);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,9.273455);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,4.819141);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(21,1.490062);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(22,0.3475767);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(23,0.1386923);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(25,0.0782043);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,10.78327);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,10.37549);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,9.2343);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,8.078971);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,7.012982);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,6.262249);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,5.921033);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,5.619014);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,5.049379);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,4.532624);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,4.058479);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,4.064651);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,3.773533);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,3.201322);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,3.157225);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,2.668538);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,2.289926);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,2.034942);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,1.321992);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,1.015295);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(21,0.6139863);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(22,0.3104254);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(23,0.08463891);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(25,0.0782043);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(36922);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_3 = new TH1D("VbbHcc_both_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(1,10890.47);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(2,12143.5);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(3,9080.759);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(4,6876.344);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(5,5368.734);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(6,4269.932);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(7,3552.76);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(8,2957.835);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(9,2498.427);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(10,2107.736);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(11,1814.974);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(12,1542.201);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(13,1325.45);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(14,1099.043);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(15,912.4249);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(16,746.8584);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(17,565.5129);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(18,402.8289);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(19,243.3212);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(20,118.7289);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(21,42.84064);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(22,16.4862);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(23,3.966929);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(24,0.3559798);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(25,0.08377996);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(1,30.71878);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(2,31.82506);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(3,27.55736);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(4,23.77247);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(5,21.49476);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(6,19.02185);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(7,17.15988);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(8,15.81356);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(9,14.41628);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(10,13.15809);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(11,12.61777);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(12,11.30179);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(13,10.83492);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(14,9.409533);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(15,8.560679);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(16,8.644894);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(17,6.840612);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(18,5.898946);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(19,4.406169);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(20,3.105276);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(21,1.850043);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(22,1.133447);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(23,0.5622693);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(24,0.1485154);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(25,0.08377996);
   VbbHcc_both_Sphericity_all_stack_3->SetEntries(956114);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_4 = new TH1D("VbbHcc_both_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(1,1472.22);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(2,1547.303);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(3,1124.263);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(4,907.138);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(5,694.2898);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(6,550.2304);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(7,446.1136);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(8,367.808);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(9,322.6127);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(10,271.3077);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(11,229.6894);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(12,179.9026);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(13,164.3657);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(14,150.5693);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(15,109.8295);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(16,86.09682);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(17,73.27184);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(18,44.09172);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(19,25.22633);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(20,16.46612);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(21,5.35888);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(22,1.107331);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(23,0.0907664);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(1,28.25522);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(2,31.65917);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(3,28.91984);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(4,25.09058);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(5,22.13016);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(6,16.73101);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(7,15.16881);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(8,13.74795);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(9,14.59762);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(10,13.27552);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(11,11.17706);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(12,8.855617);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(13,8.617122);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(14,9.835464);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(15,8.077448);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(16,5.293308);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(17,6.211606);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(18,4.483325);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(19,3.532591);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(20,3.571512);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(21,1.419101);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(22,0.4624731);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(23,0.0907664);
   VbbHcc_both_Sphericity_all_stack_4->SetEntries(52923);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_5 = new TH1D("VbbHcc_both_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(1,157.9086);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(2,140.7318);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(3,124.6673);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(4,72.97163);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(5,68.06706);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(6,59.52278);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(7,44.52461);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(8,47.74665);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(9,31.83146);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(10,28.60765);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(11,24.75651);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(12,15.11021);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(13,10.998);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(14,9.373289);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(15,13.17261);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(16,8.269947);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(17,7.485262);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(18,5.55502);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(19,2.044551);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(20,0.3770127);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(21,0.01167852);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(22,0.1855336);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(1,11.5066);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(2,12.96225);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(3,9.520918);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(4,5.550526);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(5,6.609708);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(6,6.569967);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(7,5.771917);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(8,8.471551);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(9,7.02033);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(10,7.592965);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(11,3.765799);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(12,2.779945);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(13,1.309087);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(14,1.218765);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(15,3.174087);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(16,1.734537);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(17,2.405389);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(18,2.894234);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(19,0.6773772);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(20,0.2673083);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(21,0.01087313);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(22,0.1855336);
   VbbHcc_both_Sphericity_all_stack_5->SetEntries(8398);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_6 = new TH1D("VbbHcc_both_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(1,0.1344897);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(2,1.090283);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(4,1.032629);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(5,1.474964);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(6,0.1440206);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(7,0.39125);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(12,0.5144569);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(13,0.6599753);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(1,0.1344897);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(2,0.5285441);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(4,0.5227684);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(5,0.7940265);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(6,0.1440206);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(7,0.2859233);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(12,0.392193);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(13,0.6599753);
   VbbHcc_both_Sphericity_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_7 = new TH1D("VbbHcc_both_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(1,0.5883322);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(2,1.792427);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(3,0.9336229);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(4,1.24156);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(5,1.681872);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(6,0.4900519);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(7,0.7304148);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(8,0.2484375);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(9,0.1148755);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(10,0.4993215);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(11,0.1211458);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(12,0.4777578);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(13,0.6599753);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(14,0.2339761);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(15,0.09773476);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(1,0.2633477);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(2,0.587868);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(3,0.330589);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(4,0.5399915);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(5,0.8068572);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(6,0.2453998);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(7,0.3336489);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(8,0.1756725);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(9,0.1148755);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(10,0.2497591);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(11,0.1211458);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(12,0.3793271);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(13,0.6599753);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(14,0.1654823);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(15,0.09773476);
   VbbHcc_both_Sphericity_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_8 = new TH1D("VbbHcc_both_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(1,27.92279);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(2,28.72105);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(3,18.84749);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(4,17.94001);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(5,14.69682);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(6,10.06651);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(7,10.61847);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(8,10.14756);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(9,6.129452);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(10,6.689812);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(11,4.139518);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(12,4.576268);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(13,2.566427);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(14,2.419918);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(15,0.6050007);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(16,1.913846);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(17,0.8670788);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(18,0.2841914);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(19,0.4075756);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(20,0.6755316);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(1,2.906914);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(2,2.9389);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(3,2.392771);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(4,2.312261);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(5,2.089152);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(6,1.745013);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(7,1.831147);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(8,1.711598);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(9,1.362719);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(10,1.471525);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(11,1.129356);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(12,1.130927);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(13,0.8681406);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(14,0.8315766);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(15,0.428683);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(16,0.7436129);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(17,0.5027883);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(18,0.2841914);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(19,0.4075756);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(20,0.4882585);
   VbbHcc_both_Sphericity_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_9 = new TH1D("VbbHcc_both_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(1,25.03034);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(2,26.70124);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(3,19.47332);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(4,16.31292);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(5,13.52616);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(6,11.11115);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(7,9.420859);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(8,7.729798);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(9,6.838145);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(10,5.591046);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(11,4.737774);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(12,3.939182);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(13,3.269589);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(14,2.738664);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(15,2.26254);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(16,1.79985);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(17,1.334424);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(18,0.9255859);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(19,0.4695231);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(20,0.2046021);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(21,0.08094545);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(22,0.0162702);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(23,0.00166245);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(1,0.2451139);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(2,0.2468514);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(3,0.2383036);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(4,0.19971);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(5,0.1795749);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(6,0.1583276);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(7,0.1538577);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(8,0.1368111);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(9,0.1264295);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(10,0.1185562);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(11,0.1025575);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(12,0.09314814);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(13,0.08842239);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(14,0.07889732);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(15,0.07084048);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(16,0.07526029);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(17,0.05701808);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(18,0.04579142);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(19,0.03172318);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(20,0.02041396);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(21,0.01291593);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(22,0.005512135);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(23,0.00166245);
   VbbHcc_both_Sphericity_all_stack_9->SetEntries(84809);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_10 = new TH1D("VbbHcc_both_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(1,10.90307);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(2,11.94859);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(3,8.804004);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(4,6.787107);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(5,5.991279);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(6,4.794937);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(7,3.973358);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(8,3.494802);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(9,2.961225);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(10,2.591501);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(11,2.233086);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(12,1.888561);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(13,1.597147);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(14,1.429089);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(15,1.113948);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(16,0.9349922);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(17,0.6510982);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(18,0.4905647);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(19,0.3051533);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(20,0.1375639);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(21,0.03069049);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(22,0.01037485);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(23,0.004397464);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(1,0.0751312);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(2,0.0786078);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(3,0.06752048);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(4,0.0592976);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(5,0.05569893);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(6,0.04989032);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(7,0.04533084);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(8,0.04248846);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(9,0.03922879);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(10,0.03667722);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(11,0.03406095);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(12,0.0312875);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(13,0.02880393);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(14,0.0272837);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(15,0.02401502);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(16,0.02196804);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(17,0.01839011);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(18,0.01588048);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(19,0.0125254);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(20,0.008457268);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(21,0.003987967);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(22,0.002328098);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(23,0.001501719);
   VbbHcc_both_Sphericity_all_stack_10->SetEntries(150219);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_11 = new TH1D("VbbHcc_both_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(1,0.07863044);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(2,0.07960823);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(3,0.05489883);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(4,0.04964253);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(5,0.02520741);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(6,0.04103971);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(7,0.02796537);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(8,0.01221276);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(9,0.01987967);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(10,0.0223785);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(11,0.02007515);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(12,0.008814834);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(13,0.006589343);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(14,0.009346897);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(15,0.002009147);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(16,0.001999389);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(17,0.005550818);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(18,0.00283147);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(19,0.002416406);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(1,0.01408503);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(2,0.01437701);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(3,0.01196267);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(4,0.01158324);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(5,0.007479187);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(6,0.01032588);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(7,0.008336659);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(8,0.005250515);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(9,0.006941429);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(10,0.007719457);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(11,0.007294921);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(12,0.00449123);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(13,0.003906629);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(14,0.004968188);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(15,0.002009147);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(16,0.001999389);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(17,0.004075562);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(18,0.00283147);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(19,0.002416406);
   VbbHcc_both_Sphericity_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_12 = new TH1D("VbbHcc_both_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(1,0.04092518);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(2,0.03613912);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(3,0.02406756);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(4,0.02218375);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(5,0.02222061);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(6,0.01422802);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(7,0.01294806);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(8,0.01167414);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(9,0.01141575);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(10,0.008114267);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(11,0.007779291);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(12,0.006089045);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(13,0.003986129);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(14,0.00489818);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(15,0.00308586);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(16,0.00251997);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(17,0.002001576);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(22,0.0004371028);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(1,0.003702573);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(2,0.00342775);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(3,0.002723581);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(4,0.002702537);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(5,0.002696446);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(6,0.002124984);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(7,0.002057085);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(8,0.001935863);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(9,0.001948396);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(10,0.001631837);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(11,0.001626562);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(12,0.00136875);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(13,0.001102226);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(14,0.00118385);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(15,0.001045371);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(16,0.0009066011);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(17,0.0008260925);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(22,0.0004371028);
   VbbHcc_both_Sphericity_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity_all__692 = new TH1D("VbbHcc_both_Sphericity_all__692","",25,0,1);
   VbbHcc_both_Sphericity_all__692->SetBinContent(1,85872);
   VbbHcc_both_Sphericity_all__692->SetBinContent(2,87442);
   VbbHcc_both_Sphericity_all__692->SetBinContent(3,65216);
   VbbHcc_both_Sphericity_all__692->SetBinContent(4,49322);
   VbbHcc_both_Sphericity_all__692->SetBinContent(5,38710);
   VbbHcc_both_Sphericity_all__692->SetBinContent(6,31053);
   VbbHcc_both_Sphericity_all__692->SetBinContent(7,25512);
   VbbHcc_both_Sphericity_all__692->SetBinContent(8,21050);
   VbbHcc_both_Sphericity_all__692->SetBinContent(9,17452);
   VbbHcc_both_Sphericity_all__692->SetBinContent(10,14656);
   VbbHcc_both_Sphericity_all__692->SetBinContent(11,12578);
   VbbHcc_both_Sphericity_all__692->SetBinContent(12,10662);
   VbbHcc_both_Sphericity_all__692->SetBinContent(13,9236);
   VbbHcc_both_Sphericity_all__692->SetBinContent(14,7374);
   VbbHcc_both_Sphericity_all__692->SetBinContent(15,6226);
   VbbHcc_both_Sphericity_all__692->SetBinContent(16,4753);
   VbbHcc_both_Sphericity_all__692->SetBinContent(17,3784);
   VbbHcc_both_Sphericity_all__692->SetBinContent(18,2727);
   VbbHcc_both_Sphericity_all__692->SetBinContent(19,1526);
   VbbHcc_both_Sphericity_all__692->SetBinContent(20,631);
   VbbHcc_both_Sphericity_all__692->SetBinContent(21,244);
   VbbHcc_both_Sphericity_all__692->SetBinContent(22,74);
   VbbHcc_both_Sphericity_all__692->SetBinContent(23,27);
   VbbHcc_both_Sphericity_all__692->SetBinContent(24,4);
   VbbHcc_both_Sphericity_all__692->SetBinContent(25,1);
   VbbHcc_both_Sphericity_all__692->SetEntries(496156);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all__692->SetLineColor(ci);
   VbbHcc_both_Sphericity_all__692->SetLineWidth(2);
   VbbHcc_both_Sphericity_all__692->SetMarkerStyle(20);
   VbbHcc_both_Sphericity_all__692->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__692->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__692->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__692->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fx1503[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fy1503[25] = {
   107904,
   126678.5,
   94382.79,
   79628.7,
   58213.2,
   47079.18,
   40430.62,
   23221.44,
   62431.58,
   23770.63,
   17960.88,
   17298.51,
   12222.03,
   9124.757,
   9695.879,
   6245.953,
   5578.706,
   3663.816,
   1700.397,
   1261.758,
   917.3509,
   151.8676,
   367.6325,
   0.3559798,
   0.1619843};
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fex1503[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fey1503[25] = {
   4125.91,
   5482.827,
   4974.047,
   4804.27,
   4067.72,
   3385.819,
   3169.975,
   1647.196,
   26588.94,
   3024.355,
   2089.083,
   2904.62,
   1521.511,
   1044.653,
   1873.659,
   900.1542,
   955.009,
   730.6523,
   495.3543,
   600.4381,
   708.1447,
   53.11911,
   338.0662,
   0.1485154,
   0.114608};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_all_fx1503,Graph_from_VbbHcc_both_Sphericity_all_fy1503,Graph_from_VbbHcc_both_Sphericity_all_fex1503,Graph_from_VbbHcc_both_Sphericity_all_fey1503);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity_all1503 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity_all1503","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetMinimum(0.04263863);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetMaximum(145377.5);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity_all1503);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__693 = new TH1D("data_mc_ratio__693","",25,0,1);
   data_mc_ratio__693->SetBinContent(1,0.7958186);
   data_mc_ratio__693->SetBinContent(2,0.690267);
   data_mc_ratio__693->SetBinContent(3,0.6909735);
   data_mc_ratio__693->SetBinContent(4,0.6193998);
   data_mc_ratio__693->SetBinContent(5,0.6649694);
   data_mc_ratio__693->SetBinContent(6,0.659591);
   data_mc_ratio__693->SetBinContent(7,0.6310069);
   data_mc_ratio__693->SetBinContent(8,0.9064898);
   data_mc_ratio__693->SetBinContent(9,0.279538);
   data_mc_ratio__693->SetBinContent(10,0.6165591);
   data_mc_ratio__693->SetBinContent(11,0.7002996);
   data_mc_ratio__693->SetBinContent(12,0.6163536);
   data_mc_ratio__693->SetBinContent(13,0.7556848);
   data_mc_ratio__693->SetBinContent(14,0.8081311);
   data_mc_ratio__693->SetBinContent(15,0.6421285);
   data_mc_ratio__693->SetBinContent(16,0.7609727);
   data_mc_ratio__693->SetBinContent(17,0.6782935);
   data_mc_ratio__693->SetBinContent(18,0.744306);
   data_mc_ratio__693->SetBinContent(19,0.8974376);
   data_mc_ratio__693->SetBinContent(20,0.5000961);
   data_mc_ratio__693->SetBinContent(21,0.2659833);
   data_mc_ratio__693->SetBinContent(22,0.4872665);
   data_mc_ratio__693->SetBinContent(23,0.0734429);
   data_mc_ratio__693->SetBinContent(24,11.23659);
   data_mc_ratio__693->SetBinContent(25,6.173439);
   data_mc_ratio__693->SetBinError(1,0.002715741);
   data_mc_ratio__693->SetBinError(2,0.002334302);
   data_mc_ratio__693->SetBinError(3,0.002705729);
   data_mc_ratio__693->SetBinError(4,0.002789014);
   data_mc_ratio__693->SetBinError(5,0.003379793);
   data_mc_ratio__693->SetBinError(6,0.003743027);
   data_mc_ratio__693->SetBinError(7,0.003950589);
   data_mc_ratio__693->SetBinError(8,0.00624794);
   data_mc_ratio__693->SetBinError(9,0.002116013);
   data_mc_ratio__693->SetBinError(10,0.005092922);
   data_mc_ratio__693->SetBinError(11,0.006244219);
   data_mc_ratio__693->SetBinError(12,0.005969124);
   data_mc_ratio__693->SetBinError(13,0.007863189);
   data_mc_ratio__693->SetBinError(14,0.009410881);
   data_mc_ratio__693->SetBinError(15,0.008137994);
   data_mc_ratio__693->SetBinError(16,0.01103787);
   data_mc_ratio__693->SetBinError(17,0.01102661);
   data_mc_ratio__693->SetBinError(18,0.01425309);
   data_mc_ratio__693->SetBinError(19,0.02297349);
   data_mc_ratio__693->SetBinError(20,0.01990851);
   data_mc_ratio__693->SetBinError(21,0.01702783);
   data_mc_ratio__693->SetBinError(22,0.05664358);
   data_mc_ratio__693->SetBinError(23,0.01413409);
   data_mc_ratio__693->SetBinError(24,5.618296);
   data_mc_ratio__693->SetBinError(25,6.173439);
   data_mc_ratio__693->SetMinimum(0.4);
   data_mc_ratio__693->SetMaximum(1.6);
   data_mc_ratio__693->SetEntries(9.158923);
   data_mc_ratio__693->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__693->SetLineColor(ci);
   data_mc_ratio__693->SetLineWidth(2);
   data_mc_ratio__693->SetMarkerStyle(20);
   data_mc_ratio__693->SetMarkerSize(1.2);
   data_mc_ratio__693->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__693->GetXaxis()->SetRange(1,25);
   data_mc_ratio__693->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__693->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__693->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__693->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__693->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__693->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__693->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__693->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__693->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__693->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__693->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__693->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__693->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__693->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__693->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__693->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__693->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1504[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1504[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1504[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1504[25] = {
   0.03823687,
   0.04328143,
   0.05270078,
   0.0603334,
   0.06987625,
   0.07191754,
   0.0784053,
   0.07093428,
   0.4258893,
   0.1272307,
   0.1163129,
   0.1679115,
   0.1244893,
   0.1144855,
   0.1932428,
   0.144118,
   0.1711883,
   0.1994239,
   0.2913169,
   0.4758743,
   0.7719452,
   0.3497725,
   0.9195763,
   0.4172017,
   0.7075255};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1504,Graph_from_mc_statistical_error_fy1504,Graph_from_mc_statistical_error_fex1504,Graph_from_mc_statistical_error_fey1504);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1504 = new TH1F("Graph_Graph_from_mc_statistical_error1504","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1504->SetMinimum(0.0723813);
   Graph_Graph_from_mc_statistical_error1504->SetMaximum(2.103492);
   Graph_Graph_from_mc_statistical_error1504->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1504->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1504->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1504);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
