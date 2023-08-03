void H_mass_tags_17()
{
//=========Macro generated from canvas: H_mass_tags_17/H_mass_tags_17
//=========  (Thu Aug  3 12:22:54 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_17 = new TCanvas("H_mass_tags_17", "H_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_17->SetHighLightColor(2);
   H_mass_tags_17->Range(0,0,1,1);
   H_mass_tags_17->SetFillColor(0);
   H_mass_tags_17->SetFillStyle(4000);
   H_mass_tags_17->SetBorderMode(0);
   H_mass_tags_17->SetBorderSize(2);
   H_mass_tags_17->SetFrameFillStyle(1000);
   H_mass_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-47.12804,315.7258,47090.91);
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
   st->SetMaximum(40359.15);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",40,0,400);
   st_stack_6->SetMinimum(0.01);
   st_stack_6->SetMaximum(42377.11);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetRange(1,30);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetLabelSize(0.035);
   st_stack_6->GetXaxis()->SetTitleSize(0.035);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/10.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetLabelSize(0.05);
   st_stack_6->GetYaxis()->SetTitleSize(0.057);
   st_stack_6->GetYaxis()->SetTitleOffset(1.2);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetLabelSize(0.035);
   st_stack_6->GetZaxis()->SetTitleSize(0.035);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,281.9298);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,585.5571);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,3716.319);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,5448.892);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,5264.755);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,5951.528);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,4194.284);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,3101.958);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,4115.21);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,4253.595);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,4096.759);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,3265.863);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,3411.358);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,3868.988);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,3787.733);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,2819.27);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,4276.918);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,2599.322);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,2821.151);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,3079.834);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,2950.573);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,2564.051);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,17840.91);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,1570.289);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,2241.116);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,3208.329);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,2002.017);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,2172.323);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,2835.512);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,2149.189);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,1733.543);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,2083.914);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,1746.911);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,2524.448);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,2564.495);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,2653.694);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,1473.857);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,1464.429);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,80879.84);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,268.4851);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,278.9089);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,820.4774);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,1020.017);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,949.4505);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,1054.984);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,782.3972);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,675.2004);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,822.1658);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,823.5396);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,821.7182);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,726.0782);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,727.5982);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,859.9164);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,819.5579);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,621.7049);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,1387.74);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,617.5271);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,720.7714);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,725.5788);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,675.2662);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,669.8045);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,14832.19);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,402.0154);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,612.5984);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,812.518);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,552.4685);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,611.6418);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,721.3272);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,611.6175);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,547.1753);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,610.4109);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,481.9843);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,669.1211);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,718.4888);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,764.3432);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,476.2258);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,475.7516);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,15128.38);
   VbbHcc_tags_H_mass_stack_1->SetEntries(10314);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_2 = new TH1D("VbbHcc_tags_H_mass_stack_2","",40,0,400);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.09424774);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,3.682803);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,10.71015);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,14.00158);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,20.4498);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,24.90582);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,29.81768);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,25.66801);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,25.03482);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,22.04076);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,22.81252);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,21.2533);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,19.63381);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,19.78715);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,20.21392);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,16.65026);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,19.01024);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,17.68997);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,18.16907);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,13.25991);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,14.66042);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,16.12655);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,14.301);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,13.78799);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,11.31065);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,13.90498);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,13.11719);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,12.36538);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,10.48048);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,13.09603);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,7.376992);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,11.33473);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,7.870777);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,9.579696);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,10.25337);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,9.288859);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,9.774224);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,8.718229);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,394.1078);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.06664322);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.7192);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,1.283572);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,1.465469);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,1.771511);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,2.008199);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,2.211696);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,2.031441);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,1.9812);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,1.680167);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,1.836137);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,1.718677);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,1.679743);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,1.778055);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,1.785258);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,1.491207);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,1.734375);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,1.701079);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,1.640828);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.352206);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,1.533063);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,1.591162);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,1.507737);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,1.481141);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,1.20698);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.501207);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,1.410994);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,1.335072);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.257568);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,1.431882);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,1.016942);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,1.381601);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,0.9738615);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,1.218457);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,1.22991);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,1.187848);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,1.221733);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,1.101649);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,7.798175);
   VbbHcc_tags_H_mass_stack_2->SetEntries(11980);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_3 = new TH1D("VbbHcc_tags_H_mass_stack_3","",40,0,400);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(2,0.03514007);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,7.253783);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,77.0967);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,185.4324);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,273.538);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,353.2678);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,470.0544);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,563.7718);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,555.9567);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,534.0863);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,513.1867);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,515.145);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,484.5671);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,468.5958);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,433.6027);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,405.5518);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,388.2886);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,362.6707);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,341.2063);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,314.6814);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,307.0191);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,293.2584);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,281.6547);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,275.2854);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,276.2697);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,258.7595);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,243.1429);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,245.6197);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,239.036);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,229.5238);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,228.0191);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,215.5231);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,215.499);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,210.0715);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,202.8001);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,202.1048);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,188.9228);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,188.2763);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,187.5276);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,7131.344);
   VbbHcc_tags_H_mass_stack_3->SetBinError(2,0.03514007);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,0.6733602);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,2.161698);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,3.364451);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,4.097129);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,4.662621);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,5.41195);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,5.932989);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,5.901044);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,5.79022);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,5.667323);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,5.676499);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,5.510758);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,5.408292);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,5.205248);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,5.024299);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,4.916256);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,4.753842);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,4.607982);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,4.427069);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,4.378548);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,4.267616);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,4.183494);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,4.141474);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,4.157235);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,4.015694);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,3.894917);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,3.919366);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,3.864036);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,3.786287);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,3.779609);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,3.671729);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,3.667511);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,3.638334);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,3.563218);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,3.565856);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,3.438033);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,3.437062);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,3.43583);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,21.118);
   VbbHcc_tags_H_mass_stack_3->SetEntries(317372);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_4 = new TH1D("VbbHcc_tags_H_mass_stack_4","",40,0,400);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,0.6363343);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,8.889317);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,16.63432);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,43.39873);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,54.23472);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,67.68636);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,93.99526);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,89.80829);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,78.98703);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,44.84119);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,53.033);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,46.32219);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,39.78586);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,47.8391);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,40.85284);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,44.34794);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,41.8748);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,39.56374);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,38.7528);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,27.12667);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,27.89989);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,37.08027);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,27.58338);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,28.42967);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,23.56237);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,29.08788);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,26.86056);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,27.07051);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,23.5524);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,24.75951);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,24.69897);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,22.57424);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,30.82058);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,27.59109);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,27.69256);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,25.92319);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,17.14619);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,25.90984);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,987.5697);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,0.3908482);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,3.019223);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,3.264386);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,4.984331);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,6.376112);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,3.862966);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,6.382941);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,5.117411);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,7.220082);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,4.026941);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,5.665061);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,5.543605);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,3.874879);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,5.613431);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,4.74995);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,5.547229);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,4.823946);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,4.76373);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,4.745971);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,2.478737);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,3.558785);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,3.972808);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,3.579814);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,3.606174);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,2.338818);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,3.641453);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,2.546939);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,2.554126);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,2.242825);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,3.494687);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,3.543387);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,3.422498);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,4.548587);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,3.647567);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,3.658642);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,3.579246);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,1.963584);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,5.132816);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,18.63622);
   VbbHcc_tags_H_mass_stack_4->SetEntries(17051);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_5 = new TH1D("VbbHcc_tags_H_mass_stack_5","",40,0,400);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,0.3450127);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,2.637703);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,3.383188);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,6.22535);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,3.524066);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,6.54363);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,13.61145);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,13.03027);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,5.118655);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,5.763206);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,3.250034);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,5.994033);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,4.47233);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,3.686987);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,4.546046);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,3.874619);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,2.198013);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,5.856314);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,2.383871);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,4.955332);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,1.668922);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,2.291114);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,2.309755);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,2.679579);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,2.444194);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,4.428038);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,1.302329);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,1.522056);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,2.325498);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,3.59033);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,1.088933);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,3.118765);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,0.752356);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,1.379088);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,2.681585);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,2.233674);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,2.415463);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,108.0368);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,0.1547501);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,1.271926);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,1.270881);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,1.850094);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,0.7865453);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,1.799651);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,6.871688);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,6.873513);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,1.763793);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,1.804212);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,1.287805);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,1.804453);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.349793);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,1.315272);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,1.369522);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,1.37953);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,0.4906025);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,1.819843);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,0.5796667);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,1.783447);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,0.4612833);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,0.5825222);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,0.5978775);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,0.6489547);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.6906399);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,1.733737);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,0.3878623);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,0.5293212);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,0.6149224);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,1.359786);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,0.367648);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,1.354825);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,0.2731979);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,0.4162509);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,1.241821);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,1.221604);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,1.255846);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,6.374417);
   VbbHcc_tags_H_mass_stack_5->SetEntries(2254);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_6 = new TH1D("VbbHcc_tags_H_mass_stack_6","",40,0,400);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(6,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinError(6,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinError(7,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinError(10,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.3153059);
   VbbHcc_tags_H_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(31,0.4958844);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(32,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(35,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(36,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(37,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(40,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,3.223248);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(10,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(17,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(31,0.3506432);
   VbbHcc_tags_H_mass_stack_7->SetBinError(32,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(35,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(36,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(37,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(40,0.2479422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,0.8939683);
   VbbHcc_tags_H_mass_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_8 = new TH1D("VbbHcc_tags_H_mass_stack_8","",40,0,400);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.7596768);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,2.785482);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,3.291933);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,3.038707);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,0.7596768);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,1.266128);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(18,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(23,0.7596768);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(26,0.7596768);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(28,0.7596768);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(31,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(32,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(33,0.7596768);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(34,0.5064512);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,21.27095);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.4385996);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.8398543);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,0.9130179);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,0.8771992);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.4385996);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.5662297);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(16,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(18,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(23,0.4385996);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(26,0.4385996);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(28,0.4385996);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(31,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(32,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(33,0.4385996);
   VbbHcc_tags_H_mass_stack_8->SetBinError(34,0.3581151);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.2532256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,2.320851);
   VbbHcc_tags_H_mass_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_9 = new TH1D("VbbHcc_tags_H_mass_stack_9","",40,0,400);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.006460468);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.04522327);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.193814);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.3084873);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,0.6928851);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,1.472987);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,2.495356);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,2.613259);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,1.86546);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,1.713639);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,1.485908);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,0.9496887);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.7203421);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.4893804);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.4586932);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.428006);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.4134699);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.4490025);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.4522327);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.4603083);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.3973188);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.4344664);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.4780746);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.4813048);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.4877653);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.4958409);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.4845351);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.5087618);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.5265281);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.5184525);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.4990711);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.5087618);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.5184525);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.5507549);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.5168374);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.4861502);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.4877653);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.4586932);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,19.99192);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.003230234);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.008546395);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.01769272);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.02232136);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.03345281);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.04877546);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.06348457);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.06496706);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.05489022);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.05260919);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.04898892);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.0391645);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.03410919);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.02811417);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.02721843);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.0262922);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.02584187);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.02692938);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.02702607);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.02726631);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.02533212);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.02648989);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.02778752);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.02788124);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.02806774);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.02829913);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.02797464);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.02866548);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.02916169);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.0289372);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.02839116);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.02866548);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.0289372);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.02982505);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.02889209);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.02802123);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.02806774);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.02721843);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.1796922);
   VbbHcc_tags_H_mass_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_10 = new TH1D("VbbHcc_tags_H_mass_stack_10","",40,0,400);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.002487753);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.02238978);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.07421797);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.1372411);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.3586511);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,0.7293263);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,1.109123);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,1.049832);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,0.8400313);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,0.746326);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,0.6733519);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.5099894);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.3681875);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.279043);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.2674335);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.2549947);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.2541655);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.2637018);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.2475314);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.2670188);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.2719944);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.2632872);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.2587263);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.252507);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.2520923);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.2566532);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.2454583);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.2458729);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.2475314);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.2321903);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.2483607);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.2417267);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.2255563);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.2321903);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.224727);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.2305318);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.2251417);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.2288733);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,7.515502);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.001015621);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.003046863);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.005547312);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.00754345);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.0121945);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.01738957);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.0214446);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.02086354);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.01866276);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.01759107);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.01670895);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.01454148);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.01235556);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.01075632);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.01053018);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.01028238);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.01026565);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.01045646);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.01013079);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.01052202);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.0106196);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.01044823);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.01035734);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.0102321);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.01022369);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.01031576);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.01008827);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.01009679);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.01013079);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.009811831);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.01014774);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.0100113);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.009670646);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.009811831);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.009652853);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.009776726);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.009661754);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.009741494);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.05582221);
   VbbHcc_tags_H_mass_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(6,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.01264201);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01264201);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.01106176);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.007901256);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.006321005);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.004740753);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(30,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(34,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.04424703);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(6,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.002737075);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.004469625);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.004469625);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.004180952);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.003533549);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.002737075);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.002234813);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(28,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(30,0.002234813);
   VbbHcc_tags_H_mass_stack_11->SetBinError(34,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.008361903);
   VbbHcc_tags_H_mass_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_12 = new TH1D("VbbHcc_tags_H_mass_stack_12","",40,0,400);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(4,0.0002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(5,0.0002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.0002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.001038028);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.001038028);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.002906479);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.002698874);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.003736902);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.002698874);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.000622817);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.002283662);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(20,0.0008304226);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.0008304226);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.000622817);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.00145324);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(26,0.0008304226);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0008304226);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(28,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(29,0.000622817);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.000622817);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0008304226);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(35,0.0002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0008304226);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.001245634);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.01868451);
   VbbHcc_tags_H_mass_stack_12->SetBinError(4,0.0002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinError(5,0.0002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.0002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.0004642204);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0004642204);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.0007767892);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.0007485328);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.0008807962);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.0009284407);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.0006565067);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.0007485328);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.0003595835);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0006885501);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinError(20,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.0003595835);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.0005492729);
   VbbHcc_tags_H_mass_stack_12->SetBinError(26,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinError(28,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(29,0.0003595835);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.0003595835);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinError(35,0.0002076057);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0004152113);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.0005085279);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.0002935987);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.00196952);
   VbbHcc_tags_H_mass_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_mass__15 = new TH1D("VbbHcc_tags_H_mass__15","",40,0,400);
   VbbHcc_tags_H_mass__15->SetBinContent(3,25);
   VbbHcc_tags_H_mass__15->SetBinContent(4,353);
   VbbHcc_tags_H_mass__15->SetBinContent(5,1050);
   VbbHcc_tags_H_mass__15->SetBinContent(6,1527);
   VbbHcc_tags_H_mass__15->SetBinContent(7,1705);
   VbbHcc_tags_H_mass__15->SetBinContent(15,1448);
   VbbHcc_tags_H_mass__15->SetBinContent(16,1414);
   VbbHcc_tags_H_mass__15->SetBinContent(17,1335);
   VbbHcc_tags_H_mass__15->SetBinContent(18,1254);
   VbbHcc_tags_H_mass__15->SetBinContent(19,1186);
   VbbHcc_tags_H_mass__15->SetBinContent(20,1182);
   VbbHcc_tags_H_mass__15->SetBinContent(21,1062);
   VbbHcc_tags_H_mass__15->SetBinContent(22,1101);
   VbbHcc_tags_H_mass__15->SetBinContent(23,1034);
   VbbHcc_tags_H_mass__15->SetBinContent(24,1041);
   VbbHcc_tags_H_mass__15->SetBinContent(25,970);
   VbbHcc_tags_H_mass__15->SetBinContent(26,986);
   VbbHcc_tags_H_mass__15->SetBinContent(27,891);
   VbbHcc_tags_H_mass__15->SetBinContent(28,881);
   VbbHcc_tags_H_mass__15->SetBinContent(29,856);
   VbbHcc_tags_H_mass__15->SetBinContent(30,799);
   VbbHcc_tags_H_mass__15->SetBinContent(31,847);
   VbbHcc_tags_H_mass__15->SetBinContent(32,781);
   VbbHcc_tags_H_mass__15->SetBinContent(33,774);
   VbbHcc_tags_H_mass__15->SetBinContent(34,731);
   VbbHcc_tags_H_mass__15->SetBinContent(35,711);
   VbbHcc_tags_H_mass__15->SetBinContent(36,706);
   VbbHcc_tags_H_mass__15->SetBinContent(37,705);
   VbbHcc_tags_H_mass__15->SetBinContent(38,681);
   VbbHcc_tags_H_mass__15->SetBinContent(39,686);
   VbbHcc_tags_H_mass__15->SetBinContent(40,676);
   VbbHcc_tags_H_mass__15->SetBinContent(41,27380);
   VbbHcc_tags_H_mass__15->SetEntries(68570);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__15->SetLineColor(ci);
   VbbHcc_tags_H_mass__15->SetLineWidth(2);
   VbbHcc_tags_H_mass__15->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__15->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1011[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1011[40] = {
   0,
   0.03514007,
   289.9231,
   675.9541,
   3932.763,
   5784.483,
   5701.056,
   6522.691,
   4895.313,
   3794.275,
   4769.829,
   4842.525,
   4696.193,
   3822.973,
   3946.719,
   4375.966,
   4259.522,
   3274.299,
   4705.525,
   3001.202,
   3199.564,
   3430.605,
   3292.779,
   2901.79,
   18161.62,
   1892.583,
   2538.422,
   3498.423,
   2293.027,
   2453.108,
   3102.114,
   2418.642,
   1986.24,
   2335.669,
   2000.038,
   2766.456,
   2807.17,
   2881.23,
   1692.254,
   1690.189};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1011[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1011[40] = {
   0,
   0.03514007,
   268.4862,
   278.9348,
   820.4929,
   1020.039,
   949.487,
   1055.007,
   782.4514,
   675.2843,
   822.2491,
   823.5728,
   821.7615,
   726.1235,
   727.6328,
   859.9535,
   819.5902,
   621.7525,
   1387.758,
   617.5653,
   720.8049,
   725.5978,
   675.2933,
   669.8315,
   14832.19,
   402.0564,
   612.6176,
   812.5373,
   552.4928,
   611.6609,
   721.342,
   611.6413,
   547.2019,
   610.4333,
   482.0225,
   669.1418,
   718.5082,
   764.3613,
   476.2455,
   475.7948};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1011,Graph_from_VbbHcc_tags_H_mass_fy1011,Graph_from_VbbHcc_tags_H_mass_fex1011,Graph_from_VbbHcc_tags_H_mass_fey1011);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1011 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1011","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetMaximum(36293.19);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1011);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_mass","MC unc. (stat.)","fl");

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
   H_mass_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__16 = new TH1D("data_mc_ratio__16","",40,0,400);
   data_mc_ratio__16->SetBinContent(3,0.08622975);
   data_mc_ratio__16->SetBinContent(4,0.5222248);
   data_mc_ratio__16->SetBinContent(5,0.2669879);
   data_mc_ratio__16->SetBinContent(6,0.2639821);
   data_mc_ratio__16->SetBinContent(7,0.2990674);
   data_mc_ratio__16->SetBinContent(8,0.2712071);
   data_mc_ratio__16->SetBinContent(9,0.3550335);
   data_mc_ratio__16->SetBinContent(10,0.450679);
   data_mc_ratio__16->SetBinContent(11,0.3476016);
   data_mc_ratio__16->SetBinContent(12,0.350024);
   data_mc_ratio__16->SetBinContent(13,0.3394239);
   data_mc_ratio__16->SetBinContent(14,0.4156451);
   data_mc_ratio__16->SetBinContent(15,0.3668871);
   data_mc_ratio__16->SetBinContent(16,0.3231287);
   data_mc_ratio__16->SetBinContent(17,0.3134155);
   data_mc_ratio__16->SetBinContent(18,0.3829827);
   data_mc_ratio__16->SetBinContent(19,0.2520441);
   data_mc_ratio__16->SetBinContent(20,0.3938422);
   data_mc_ratio__16->SetBinContent(21,0.3319202);
   data_mc_ratio__16->SetBinContent(22,0.3209346);
   data_mc_ratio__16->SetBinContent(23,0.3140205);
   data_mc_ratio__16->SetBinContent(24,0.3587441);
   data_mc_ratio__16->SetBinContent(25,0.05340934);
   data_mc_ratio__16->SetBinContent(26,0.5209813);
   data_mc_ratio__16->SetBinContent(27,0.3510055);
   data_mc_ratio__16->SetBinContent(28,0.2518277);
   data_mc_ratio__16->SetBinContent(29,0.3733057);
   data_mc_ratio__16->SetBinContent(30,0.3257092);
   data_mc_ratio__16->SetBinContent(31,0.2730396);
   data_mc_ratio__16->SetBinContent(32,0.3229085);
   data_mc_ratio__16->SetBinContent(33,0.3896809);
   data_mc_ratio__16->SetBinContent(34,0.3129724);
   data_mc_ratio__16->SetBinContent(35,0.3554933);
   data_mc_ratio__16->SetBinContent(36,0.2552002);
   data_mc_ratio__16->SetBinContent(37,0.2511426);
   data_mc_ratio__16->SetBinContent(38,0.2363574);
   data_mc_ratio__16->SetBinContent(39,0.4053765);
   data_mc_ratio__16->SetBinContent(40,0.3999552);
   data_mc_ratio__16->SetBinContent(41,0.3057398);
   data_mc_ratio__16->SetBinError(3,0.01724595);
   data_mc_ratio__16->SetBinError(4,0.02779522);
   data_mc_ratio__16->SetBinError(5,0.008239424);
   data_mc_ratio__16->SetBinError(6,0.006755461);
   data_mc_ratio__16->SetBinError(7,0.007242807);
   data_mc_ratio__16->SetBinError(8,0.006448179);
   data_mc_ratio__16->SetBinError(9,0.008516171);
   data_mc_ratio__16->SetBinError(10,0.01089856);
   data_mc_ratio__16->SetBinError(11,0.008536689);
   data_mc_ratio__16->SetBinError(12,0.008501841);
   data_mc_ratio__16->SetBinError(13,0.008501552);
   data_mc_ratio__16->SetBinError(14,0.01042703);
   data_mc_ratio__16->SetBinError(15,0.009641578);
   data_mc_ratio__16->SetBinError(16,0.008593118);
   data_mc_ratio__16->SetBinError(17,0.008577877);
   data_mc_ratio__16->SetBinError(18,0.0108151);
   data_mc_ratio__16->SetBinError(19,0.007318705);
   data_mc_ratio__16->SetBinError(20,0.01145549);
   data_mc_ratio__16->SetBinError(21,0.01018524);
   data_mc_ratio__16->SetBinError(22,0.009672147);
   data_mc_ratio__16->SetBinError(23,0.009765573);
   data_mc_ratio__16->SetBinError(24,0.01111884);
   data_mc_ratio__16->SetBinError(25,0.001714871);
   data_mc_ratio__16->SetBinError(26,0.01659142);
   data_mc_ratio__16->SetBinError(27,0.01175913);
   data_mc_ratio__16->SetBinError(28,0.008484292);
   data_mc_ratio__16->SetBinError(29,0.01275933);
   data_mc_ratio__16->SetBinError(30,0.01152276);
   data_mc_ratio__16->SetBinError(31,0.009381751);
   data_mc_ratio__16->SetBinError(32,0.01155458);
   data_mc_ratio__16->SetBinError(33,0.01400679);
   data_mc_ratio__16->SetBinError(34,0.0115757);
   data_mc_ratio__16->SetBinError(35,0.01333204);
   data_mc_ratio__16->SetBinError(36,0.009604585);
   data_mc_ratio__16->SetBinError(37,0.009458577);
   data_mc_ratio__16->SetBinError(38,0.009057235);
   data_mc_ratio__16->SetBinError(39,0.01547735);
   data_mc_ratio__16->SetBinError(40,0.01538289);
   data_mc_ratio__16->SetBinError(41,0.05168227);
   data_mc_ratio__16->SetMinimum(0.4);
   data_mc_ratio__16->SetMaximum(1.6);
   data_mc_ratio__16->SetEntries(596.087);
   data_mc_ratio__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__16->SetLineColor(ci);
   data_mc_ratio__16->SetLineWidth(2);
   data_mc_ratio__16->SetMarkerStyle(20);
   data_mc_ratio__16->SetMarkerSize(1.2);
   data_mc_ratio__16->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__16->GetXaxis()->SetRange(1,30);
   data_mc_ratio__16->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__16->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__16->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__16->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__16->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__16->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1012[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1012[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1012[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1012[40] = {
   0,
   1,
   0.9260599,
   0.4126534,
   0.2086301,
   0.1763406,
   0.1665458,
   0.1617441,
   0.1598368,
   0.1779745,
   0.1723854,
   0.1700709,
   0.1749846,
   0.1899369,
   0.184364,
   0.1965174,
   0.1924137,
   0.1898887,
   0.294921,
   0.2057727,
   0.2252822,
   0.2115072,
   0.2050831,
   0.2308339,
   0.8166778,
   0.212438,
   0.241338,
   0.2322582,
   0.2409448,
   0.2493412,
   0.2325324,
   0.2528863,
   0.2754963,
   0.2613527,
   0.2410067,
   0.2418769,
   0.2559546,
   0.2652899,
   0.2814267,
   0.2815038};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1012,Graph_from_mc_statistical_error_fy1012,Graph_from_mc_statistical_error_fex1012,Graph_from_mc_statistical_error_fey1012);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1012 = new TH1F("Graph_Graph_from_mc_statistical_error1012","",100,0,440);
   Graph_Graph_from_mc_statistical_error1012->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1012->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1012->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1012->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1012);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->SetSelected(H_mass_tags_17);
}
