void H_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Thu Aug 10 10:41:05 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(0,0,1,1);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetFillStyle(4000);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.866757,6.314516,12.26181);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1.629639e+10);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",30,0,6);
   st_stack_47->SetMinimum(0.001407252);
   st_stack_47->SetMaximum(5.609898e+10);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetRange(1,30);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetLabelSize(0.035);
   st_stack_47->GetXaxis()->SetTitleSize(0.035);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.2");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetLabelSize(0.035);
   st_stack_47->GetZaxis()->SetTitleSize(0.035);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,8504.25);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,28447.57);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,22945.93);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,21287.09);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,15784.93);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,16430.35);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,13808.8);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,8770.917);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,8715.046);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,14309.21);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,9257.273);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,5854.48);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,6943.168);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,6820.97);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,4075.366);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,8027.584);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,3218.422);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,2767.301);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,2029.131);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,1014.77);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,756.6908);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,1560.131);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,1314.593);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,617.6291);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,417.7861);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,202.3952);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,269.4422);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,524.7538);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,121.4509);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,38.94556);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,785.4705);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,972.7887);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,2244.262);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,1906.779);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,2027.831);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,1603.271);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,1830.174);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,2268.698);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1170.495);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,1223.974);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,2433.983);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,1376.273);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,883.162);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1149.558);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,1150.058);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,697.5213);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,2543.832);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,768.5631);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,673.8128);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,551.6375);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,152.8002);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,132.5228);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,543.8803);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,537.0093);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,378.3883);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,100.7386);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,62.60521);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,77.31672);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,375.4117);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,50.53076);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,32.20977);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,525.2065);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(10038);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,50.71431);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,159.6426);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,161.7731);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,135.8699);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,106.5129);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,95.41792);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,78.05185);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,65.88274);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,58.1853);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,53.14975);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,43.89118);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,40.28129);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,33.55458);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,32.92145);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,26.52819);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,28.79027);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,20.35487);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,19.32271);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,14.29427);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,11.38065);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,8.655171);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,7.897465);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,8.506956);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,5.759144);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,4.86646);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,3.121396);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,3.376648);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,1.149449);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,1.207932);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.6858427);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,1.208217);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,3.002268);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,5.185848);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,5.123815);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,4.667161);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,4.148438);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,4.032649);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,3.5999);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,3.285139);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,3.088276);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,3.00398);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.610792);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,2.491866);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,2.212861);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,2.302594);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,2.033804);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,2.190477);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.79915);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.75059);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,1.587097);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.363688);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.09664);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.133853);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,1.216597);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.9573986);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.897458);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.7295302);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.8110323);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.3532218);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.4998173);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.3172992);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.4274688);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(14154);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,746.756);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,2763.026);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,3261.1);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,2881.892);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,2355.194);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1908.975);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,1554.013);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,1299.73);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,1132.398);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,998.3168);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,920.2887);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,829.8722);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,746.2827);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,655.3317);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,589.9393);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,497.7666);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,407.6021);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,337.5451);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,279.0038);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,220.8357);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,176.5194);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,143.6092);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,111.3321);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,89.98304);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,63.38362);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,45.97607);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,34.07891);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,21.60994);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,13.84465);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,9.652437);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,17.24346);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,7.339925);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,14.11173);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,15.35462);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,14.43763);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,13.05448);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,11.74856);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,10.59971);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,9.686485);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,9.043165);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,8.486827);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,8.151868);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,7.747355);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,7.345101);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,6.87724);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,6.531802);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,5.999512);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,5.423293);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,4.931494);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,4.488147);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,3.990692);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,3.562804);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,3.214851);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,2.828964);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,2.548441);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,2.140448);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.815772);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.561571);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,1.243063);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.9931068);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.8313618);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,1.10688);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(352917);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,141.0697);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,427.6808);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,458.438);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,374.0433);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,275.0471);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,202.4799);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,184.2904);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,156.4609);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,153.812);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,141.6333);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,116.8529);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,105.2971);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,99.4647);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,95.19931);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,70.74072);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,53.371);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,50.68082);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,38.44352);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,33.73629);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,27.31948);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,21.58745);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,17.40419);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,8.851883);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,8.953327);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,8.364232);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,5.131491);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,2.485566);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,3.182244);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,1.889879);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.4367026);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,2.811952);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,4.972984);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,13.18865);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,14.2151);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,15.42608);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,13.25465);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,8.881717);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,9.997768);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,7.950641);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,9.719297);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,10.20663);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,7.20644);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,6.845406);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,7.721076);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,9.432151);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,6.049891);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,3.854301);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,5.583814);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,3.447795);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,5.00572);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,4.804745);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,2.619524);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,2.446102);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.499066);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,1.42909);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,1.618057);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,1.188091);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.7002356);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.9958717);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.6468998);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.2208617);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.9785098);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(18490);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,20.36524);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,51.82975);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,38.43449);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,26.24175);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,25.67767);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,29.73511);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,21.96072);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,14.60339);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,10.44413);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,8.247518);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,9.404193);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,15.88539);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,8.757792);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,4.618976);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,6.971854);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,5.122267);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,5.776738);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,3.46503);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,4.235797);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,2.373618);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,2.088638);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,2.90841);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,1.574403);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,0.5708664);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,1.247396);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.01224321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.260869);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.1263986);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,0.02448642);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,0.01224321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(31,0.4032125);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.718139);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,11.90012);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,4.399815);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,3.57401);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,4.567772);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,5.74566);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,4.478537);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,3.257041);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,2.430376);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,1.373062);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,3.107012);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,4.199417);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,2.391516);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,0.8886501);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,2.284567);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,1.089253);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,2.261297);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,0.8272273);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,2.166709);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,0.7018186);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,0.672709);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,2.11074);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.5338433);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.3196512);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,0.5287933);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.01224321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.260869);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.1263986);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,0.01731451);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,0.01224321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(31,0.2069137);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(2375);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,0.9040853);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.4520427);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,0.6392849);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,3.187792);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(19,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.6134909);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.6134909);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(19,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,3.632387);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,8.103016);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,9.500088);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,6.147116);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,4.750044);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,4.191215);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,3.911801);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,3.632387);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,2.514729);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,2.794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,1.9559);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.9559);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,1.676486);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,1.007443);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.504692);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,1.629252);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.310569);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.152055);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,1.082167);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,1.045473);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,1.007443);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.8835858);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.4839599);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.7392609);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.7392609);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.6844226);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(22,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.4839599);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(25,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,2.441212);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,8.596813);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,9.236832);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,7.280205);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,5.293863);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,3.910967);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,3.216091);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,2.72922);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,2.587501);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,2.653789);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,2.603502);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,2.516642);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,2.162347);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.741763);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.328037);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,1.044601);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.701734);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.5760162);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.3908681);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2628645);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.2354352);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.176005);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.1691476);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.1622903);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.1188605);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.07314492);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.03885824);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01600045);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.01828623);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.004571557);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.009143115);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.07469986);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.1401799);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.1453043);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.1289998);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.1100027);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.09454949);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.08573955);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.07898349);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.0769055);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.07788436);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.07714291);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.07584515);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.07030395);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.06309743);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.05509627);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.04886437);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.04005008);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.03628561);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.02989043);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.02451225);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.02319812);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.02005763);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01966301);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.01926031);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.01648298);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.01293032);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.009424507);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.006047602);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.006465158);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.003232579);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.004571557);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.8838191);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,3.48747);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,4.431645);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,3.813748);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,2.865988);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,2.065232);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,1.633183);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,1.336186);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,1.201133);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,1.145559);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,1.08102);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.9883954);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.8832215);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.7607178);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.5999691);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.4655139);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.3973899);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.280862);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.215726);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1750906);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.1464068);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.1081618);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.1045763);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.06633125);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.0424281);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.04481841);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01792736);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.01314673);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.003585473);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0005975788);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.002390315);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.02298155);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.04565127);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.05146122);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.04773903);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.04138422);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.03513032);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.03124029);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.02825733);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.02679127);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.02616413);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.02541643);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.02430317);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.02297378);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.02132109);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01893486);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01667877);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01541012);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.0129552);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.011354);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.0102289);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.009353588);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.008039601);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.007905225);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.006295884);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.005035289);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.005175184);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.003273074);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.002802893);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.001463763);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.0005975788);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.001195158);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.03678905);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.02627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.01839453);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.01839453);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.007883368);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.01313895);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.005255579);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.005255579);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.005255579);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.005255579);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.005255579);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(21,0.005255579);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(28,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.009832288);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.0083098);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.006952477);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.006952477);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.004551465);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.005875916);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.003716255);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.003716255);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.003716255);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.003716255);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.003716255);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(17,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(21,0.003716255);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(28,0.002627789);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(64);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.003296225);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.01558215);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.01378421);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.0110873);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.00839039);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.005693479);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.004494852);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.004494852);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.002097598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.002097598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0009938492);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.002160856);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.002032371);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.001822741);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001585635);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.001306174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.001160566);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.001160566);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.000947598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0007928174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0007928174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__128 = new TH1D("VbbHcc_tags_H_dR_Bj1__128","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(1,11648);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(2,39395);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(3,39294);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(4,32153);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(5,26176);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(6,21866);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(7,18386);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(8,15688);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(9,14038);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(10,12732);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(11,11594);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(12,10683);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(13,9640);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(14,8648);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(15,7672);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(16,6643);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(17,5276);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(18,4407);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(19,3735);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(20,3142);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(21,2562);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(22,2101);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(23,1573);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(24,1293);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(25,987);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(26,749);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(27,554);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(28,321);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(29,246);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(30,166);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(31,277);
   VbbHcc_tags_H_dR_Bj1__128->SetEntries(313674);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__128->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__128->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__128->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__128->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1093[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1093[30] = {
   9470.827,
   31871.51,
   26892.98,
   24723.47,
   18561.72,
   18677.84,
   15656.25,
   10315.3,
   10075.79,
   15516.88,
   10354.55,
   6850.616,
   7836.236,
   7613.502,
   4773.863,
   8615.546,
   3705.337,
   3168.686,
   2361.996,
   1277.676,
   965.93,
   1732.794,
   1445.412,
   723.9624,
   496.3685,
   256.7547,
   309.701,
   550.8536,
   138.4397,
   49.73826};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1093[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1093[30] = {
   972.8359,
   2244.384,
   1906.907,
   2027.95,
   1603.392,
   1830.247,
   2268.752,
   1170.571,
   1224.052,
   2434.022,
   1376.323,
   883.2362,
   1149.612,
   1150.121,
   697.5854,
   2543.843,
   768.6082,
   673.8429,
   551.6853,
   152.936,
   132.6029,
   543.9007,
   537.0205,
   378.4013,
   100.7805,
   62.64705,
   77.34035,
   375.4153,
   50.54713,
   32.22282};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1093);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetMinimum(15.76389);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetMaximum(37525.73);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__129 = new TH1D("data_mc_ratio__129","",30,0,6);
   data_mc_ratio__129->SetBinContent(1,1.229882);
   data_mc_ratio__129->SetBinContent(2,1.236057);
   data_mc_ratio__129->SetBinContent(3,1.461125);
   data_mc_ratio__129->SetBinContent(4,1.300505);
   data_mc_ratio__129->SetBinContent(5,1.410214);
   data_mc_ratio__129->SetBinContent(6,1.170692);
   data_mc_ratio__129->SetBinContent(7,1.174355);
   data_mc_ratio__129->SetBinContent(8,1.520847);
   data_mc_ratio__129->SetBinContent(9,1.393241);
   data_mc_ratio__129->SetBinContent(10,0.8205259);
   data_mc_ratio__129->SetBinContent(11,1.119701);
   data_mc_ratio__129->SetBinContent(12,1.559422);
   data_mc_ratio__129->SetBinContent(13,1.230182);
   data_mc_ratio__129->SetBinContent(14,1.135877);
   data_mc_ratio__129->SetBinContent(15,1.607084);
   data_mc_ratio__129->SetBinContent(16,0.771048);
   data_mc_ratio__129->SetBinContent(17,1.423892);
   data_mc_ratio__129->SetBinContent(18,1.390797);
   data_mc_ratio__129->SetBinContent(19,1.58129);
   data_mc_ratio__129->SetBinContent(20,2.459152);
   data_mc_ratio__129->SetBinContent(21,2.652366);
   data_mc_ratio__129->SetBinContent(22,1.212493);
   data_mc_ratio__129->SetBinContent(23,1.088271);
   data_mc_ratio__129->SetBinContent(24,1.786004);
   data_mc_ratio__129->SetBinContent(25,1.988442);
   data_mc_ratio__129->SetBinContent(26,2.917181);
   data_mc_ratio__129->SetBinContent(27,1.788822);
   data_mc_ratio__129->SetBinContent(28,0.582732);
   data_mc_ratio__129->SetBinContent(29,1.776947);
   data_mc_ratio__129->SetBinContent(30,3.337471);
   data_mc_ratio__129->SetBinContent(31,0.3431833);
   data_mc_ratio__129->SetBinError(1,0.01139562);
   data_mc_ratio__129->SetBinError(2,0.006227561);
   data_mc_ratio__129->SetBinError(3,0.007370963);
   data_mc_ratio__129->SetBinError(4,0.007252728);
   data_mc_ratio__129->SetBinError(5,0.008716326);
   data_mc_ratio__129->SetBinError(6,0.007916951);
   data_mc_ratio__129->SetBinError(7,0.008660757);
   data_mc_ratio__129->SetBinError(8,0.01214233);
   data_mc_ratio__129->SetBinError(9,0.01175909);
   data_mc_ratio__129->SetBinError(10,0.007271835);
   data_mc_ratio__129->SetBinError(11,0.01039885);
   data_mc_ratio__129->SetBinError(12,0.01508749);
   data_mc_ratio__129->SetBinError(13,0.01252942);
   data_mc_ratio__129->SetBinError(14,0.01221444);
   data_mc_ratio__129->SetBinError(15,0.01834781);
   data_mc_ratio__129->SetBinError(16,0.009460178);
   data_mc_ratio__129->SetBinError(17,0.0196031);
   data_mc_ratio__129->SetBinError(18,0.0209504);
   data_mc_ratio__129->SetBinError(19,0.02587415);
   data_mc_ratio__129->SetBinError(20,0.04387147);
   data_mc_ratio__129->SetBinError(21,0.05240152);
   data_mc_ratio__129->SetBinError(22,0.02645246);
   data_mc_ratio__129->SetBinError(23,0.02743927);
   data_mc_ratio__129->SetBinError(24,0.04966875);
   data_mc_ratio__129->SetBinError(25,0.0632928);
   data_mc_ratio__129->SetBinError(26,0.1065915);
   data_mc_ratio__129->SetBinError(27,0.07599977);
   data_mc_ratio__129->SetBinError(28,0.03252493);
   data_mc_ratio__129->SetBinError(29,0.113294);
   data_mc_ratio__129->SetBinError(30,0.259038);
   data_mc_ratio__129->SetBinError(31,0.2242581);
   data_mc_ratio__129->SetMinimum(0.4);
   data_mc_ratio__129->SetMaximum(1.6);
   data_mc_ratio__129->SetEntries(254.6198);
   data_mc_ratio__129->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__129->SetLineColor(ci);
   data_mc_ratio__129->SetLineWidth(2);
   data_mc_ratio__129->SetMarkerStyle(20);
   data_mc_ratio__129->SetMarkerSize(1.2);
   data_mc_ratio__129->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__129->GetXaxis()->SetRange(1,30);
   data_mc_ratio__129->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__129->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__129->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__129->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__129->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__129->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__129->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__129->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__129->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__129->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__129->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__129->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__129->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__129->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1094[30] = {
   0.1027192,
   0.07041976,
   0.07090724,
   0.08202531,
   0.08638163,
   0.0979903,
   0.1449103,
   0.1134791,
   0.1214845,
   0.1568629,
   0.1329196,
   0.128928,
   0.1467046,
   0.1510633,
   0.146126,
   0.2952619,
   0.2074327,
   0.2126569,
   0.2335674,
   0.1196986,
   0.13728,
   0.3138866,
   0.3715345,
   0.5226809,
   0.2030357,
   0.2439958,
   0.2497259,
   0.6815156,
   0.3651202,
   0.6478478};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.1821813);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.817819);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}
