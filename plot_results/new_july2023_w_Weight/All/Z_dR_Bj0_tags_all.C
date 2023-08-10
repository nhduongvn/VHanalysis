void Z_dR_Bj0_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_all/Z_dR_Bj0_tags_all
//=========  (Thu Aug 10 12:23:32 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_all = new TCanvas("Z_dR_Bj0_tags_all", "Z_dR_Bj0_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_all->SetHighLightColor(2);
   Z_dR_Bj0_tags_all->Range(0,0,1,1);
   Z_dR_Bj0_tags_all->SetFillColor(0);
   Z_dR_Bj0_tags_all->SetFillStyle(4000);
   Z_dR_Bj0_tags_all->SetBorderMode(0);
   Z_dR_Bj0_tags_all->SetBorderSize(2);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-220.8446,6.314516,220923.7);
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
   st->SetMaximum(189342.2);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",30,0,6);
   st_stack_52->SetMinimum(0.3);
   st_stack_52->SetMaximum(198809.3);
   st_stack_52->SetDirectory(0);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->GetXaxis()->SetRange(1,30);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetLabelSize(0.035);
   st_stack_52->GetXaxis()->SetTitleSize(0.035);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/0.2");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetLabelSize(0.05);
   st_stack_52->GetYaxis()->SetTitleSize(0.057);
   st_stack_52->GetYaxis()->SetTitleOffset(1.2);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetLabelSize(0.035);
   st_stack_52->GetZaxis()->SetTitleSize(0.035);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(1,16520.41);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(2,78595.92);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(3,76271.16);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(4,71480.78);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(5,68463.52);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(6,44121.02);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(7,29709.18);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(8,26037.2);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(9,22877.87);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(10,24604.61);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(11,20285.49);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(12,19403.19);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(13,16273.59);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(14,14053);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(15,10273.35);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(16,10253.08);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(17,8265.867);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(18,6415.956);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(19,8045.28);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(20,5924.828);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(21,3705.174);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(22,3177.161);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(23,2534.077);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(24,2387.542);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(25,836.3677);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(26,2037.954);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(27,753.3282);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(28,1018.26);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(29,148.871);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(30,78.06072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(31,393.4674);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(1,1275.692);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(2,3960.449);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(3,4523.199);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(4,15196.35);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(5,15377.76);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(6,3404.661);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(7,3121.393);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(8,2477.377);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(9,1973.69);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(10,2497.48);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(11,2313.376);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(12,2269.806);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(13,1720.539);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(14,1979.446);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(15,1176.983);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(16,1289.769);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(17,1191.187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(18,1584.862);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(19,1270.889);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(20,1050.838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(21,773.6474);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(22,767.3399);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(23,615.1876);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(24,668.6891);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(25,124.782);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(26,659.4616);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(27,379.5534);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(28,528.7756);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(29,58.2155);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(30,41.49619);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(31,274.558);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetEntries(29294);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(1,67.07339);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(2,296.4624);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(3,380.4715);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(4,341.7915);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(5,280.1297);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(6,236.6299);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(7,194.956);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(8,150.5531);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(9,143.0195);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(10,128.3775);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(11,114.9131);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(12,107.6973);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(13,92.31422);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(14,79.94456);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(15,75.84028);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(16,63.81396);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(17,45.82253);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(18,37.01184);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(19,33.91023);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(20,28.24805);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(21,20.18496);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(22,16.89228);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(23,15.259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(24,11.48767);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(25,7.479377);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(26,5.139222);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(27,4.973549);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(28,3.85753);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(29,1.548378);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(30,0.9724486);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(31,0.5949187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(1,3.33791);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(2,6.78512);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(3,7.752051);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(4,7.374646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(5,6.651126);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(6,6.160645);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(7,5.616947);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(8,4.751925);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(9,4.802117);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(10,4.515791);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(11,4.243173);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(12,4.27133);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(13,3.882348);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(14,3.618871);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(15,3.500696);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(16,3.193037);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(17,2.656566);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(18,2.372481);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(19,2.343735);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(20,2.150328);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(21,1.742036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(22,1.5752);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(23,1.551198);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(24,1.3986);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(25,1.073526);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(26,0.9135864);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(27,0.919507);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(28,0.8176662);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(29,0.4405212);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(30,0.3288351);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(31,0.1720456);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetEntries(34591);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(1,870.0716);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(2,5109.447);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(3,7194.21);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(4,6945.838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(5,5811.287);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(6,4691.465);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(7,3828.092);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(8,3241.877);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(9,2788.669);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(10,2495.582);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(11,2252.823);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(12,2040.653);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(13,1843.943);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(14,1610.867);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(15,1378.524);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(16,1166.065);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(17,960.8758);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(18,796.2728);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(19,647.079);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(20,504.5418);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(21,411.1673);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(22,308.4946);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(23,241.6006);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(24,176.2772);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(25,129.9086);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(26,95.36924);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(27,63.88521);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(28,43.70969);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(29,27.4986);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(30,16.43337);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(31,31.58894);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(1,7.664022);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(2,18.54181);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(3,22.03796);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(4,21.67571);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(5,19.83248);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(6,17.81194);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(7,16.09851);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(8,14.80393);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(9,13.7306);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(10,12.99534);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(11,12.35141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(12,11.75916);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(13,11.18752);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(14,10.44986);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(15,9.665183);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(16,8.888463);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(17,8.068152);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(18,7.344855);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(19,6.615601);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(20,5.831047);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(21,5.259172);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(22,4.553352);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(23,4.03529);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(24,3.451647);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(25,2.955774);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(26,2.535377);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(27,2.068842);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(28,1.704484);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(29,1.363664);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(30,1.04938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(31,1.44982);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetEntries(880955);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(1,234.6685);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(2,1010.596);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(3,1171.521);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(4,940.7002);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(5,678.7439);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(6,534.1841);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(7,388.9258);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(8,337.0003);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(9,322.8594);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(10,299.4286);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(11,260.3491);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(12,259.2586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(13,209.2007);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(14,201.6271);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(15,164.5866);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(16,146.6198);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(17,105.6171);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(18,94.08826);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(19,80.44594);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(20,57.69846);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(21,49.39497);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(22,38.03175);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(23,23.95529);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(24,27.94713);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(25,19.35817);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(26,10.01306);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(27,9.041675);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(28,4.983475);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.703992);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.300755);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(31,3.034122);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(1,5.744832);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(2,19.24991);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(3,24.62551);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(4,22.69555);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(5,19.5943);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(6,17.44643);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(7,13.16259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(8,14.13291);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(9,14.04455);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(10,12.84323);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(11,12.33787);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(12,13.85904);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(13,10.43031);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(14,11.53684);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(15,8.666415);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(16,9.282613);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(17,6.732084);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(18,6.294538);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(19,6.090465);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(20,4.376888);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(21,4.208606);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(22,3.05001);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(23,2.168508);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(24,3.675109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(25,1.995779);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(26,1.213764);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(27,1.136604);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(28,0.9935421);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(29,0.6627474);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(30,0.3548576);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(31,0.8155007);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetEntries(50972);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(1,47.24102);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(2,128.8728);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(3,128.4111);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(4,77.62257);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(5,55.84121);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(6,38.49998);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(7,39.26764);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(8,31.52989);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(9,31.30408);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(10,23.19606);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(11,14.77221);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(12,25.55728);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(13,20.85243);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(14,13.08654);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(15,16.52381);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(16,11.3796);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(17,7.920752);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(18,7.61857);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(19,6.301001);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(20,9.194221);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(21,6.723843);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(22,5.791643);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(23,3.848239);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(24,2.362583);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(25,1.929114);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(26,2.179252);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(27,0.9141397);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(28,3.224286);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.3311095);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.1719556);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(31,0.3372757);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(1,5.326976);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(2,9.189432);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(3,14.75201);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(4,7.121736);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(5,5.604745);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(6,4.170762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(7,7.603724);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(8,3.727706);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(9,6.870244);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(10,3.554773);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(11,2.086054);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(12,4.374762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(13,3.445723);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(14,1.801489);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(15,3.440411);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(16,2.244206);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(17,1.081224);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(18,1.479567);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(19,1.066648);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(20,3.081691);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(21,2.499658);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(22,2.191286);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(23,1.512226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(24,0.5082016);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(25,0.5680311);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(26,0.6399783);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(27,0.3117318);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(28,2.119832);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(29,0.1852598);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(30,0.1695831);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(31,0.1977115);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetEntries(7669);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(1,0.9017179);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(2,0.4496752);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(3,0.9040853);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(7,0.2687386);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(8,0.586412);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(11,0.4496752);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(1,0.5672878);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(2,0.3427432);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(3,0.6392849);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(7,0.1900269);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(8,0.4715906);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(11,0.3427432);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(1,0.985311);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(2,1.841043);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(3,1.884916);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(4,0.2179625);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(5,0.5332684);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(6,0.3269437);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(7,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(8,0.7789864);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(9,0.6422496);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(10,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(11,0.6422496);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(12,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(13,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.2179625);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(1,0.5722886);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(2,0.5154557);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(3,0.7180371);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(4,0.1541227);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(5,0.3509582);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(6,0.188761);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(7,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(8,0.4898707);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(9,0.3674895);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(10,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(11,0.3674895);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(12,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(13,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(17,0.1541227);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(20,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(1,5.802795);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(2,20.95812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(3,21.03646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(4,19.44878);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(5,11.15744);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(6,8.994544);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(7,6.610983);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(8,7.472905);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(9,8.047904);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(10,7.686057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(11,6.232966);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(12,6.51238);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(13,4.713612);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(14,5.555722);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(15,3.398973);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(16,2.363749);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(17,0.7496584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.531657);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(19,1.06528);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(20,0.5226215);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(23,0.53264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(25,0.53264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(1,1.239065);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(2,2.347261);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(3,2.341611);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(4,2.264921);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(5,1.704665);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(6,1.522875);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(7,1.324605);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(8,1.38974);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(9,1.447929);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(10,1.405563);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(11,1.274642);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(12,1.304908);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(13,1.11354);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(14,1.214562);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(15,0.9446848);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(16,0.7892773);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(17,0.4328928);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(18,0.6266926);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(19,0.5332834);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(20,0.370435);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(23,0.3770883);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(25,0.3770883);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(1,3.779736);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(2,19.07349);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(3,23.33585);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(4,18.96186);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(5,13.60611);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(6,9.89628);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(7,7.640109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(8,6.683316);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(9,6.093314);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(10,6.032996);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(11,5.87326);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(12,5.925665);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(13,4.989758);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(14,3.966089);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(15,3.090486);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(16,2.400564);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.830709);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.236733);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(19,0.9097271);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.6181019);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.5349546);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.4357864);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.3304288);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.2649419);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.2066333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.1480125);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.07302051);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.05290254);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.01802184);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.006238477);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.0155301);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(1,0.08428124);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(2,0.1890514);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(3,0.2082072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(4,0.1867635);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1579351);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1352829);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1186786);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1113132);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(9,0.1063114);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(10,0.1056381);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(11,0.1042971);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(12,0.1050793);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(13,0.09595375);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(14,0.08576047);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(15,0.07562238);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(16,0.06689565);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(17,0.05813991);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(18,0.04792595);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(19,0.04077739);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03406962);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(21,0.03110807);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(22,0.02845143);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(23,0.0248522);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(24,0.02238403);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(25,0.01998395);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(26,0.01672369);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(27,0.01163785);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(28,0.01003154);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(29,0.005843187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(30,0.003637058);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(31,0.005581811);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetEntries(83441);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(1,1.490111);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(2,8.284797);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(3,10.90827);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(4,9.092969);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(5,6.71922);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(6,4.798267);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(7,3.614136);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(8,3.040595);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(9,2.639939);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(10,2.615241);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(11,2.376494);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(12,2.183026);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.937419);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.572437);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.304876);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(16,1.049664);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(17,0.8356147);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.6654731);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.4857267);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.3828185);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.3197015);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.2565845);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.2167933);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.1372109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.09330344);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.06860547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.0576286);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.02058164);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.01372109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.002744219);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.005488438);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(1,0.02674513);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(2,0.06306326);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(3,0.07236248);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(4,0.06606757);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(5,0.05679301);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(6,0.04799298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(7,0.04165218);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(8,0.03820452);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(9,0.03559856);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(10,0.03543164);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(11,0.03377566);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(12,0.03237166);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(13,0.0304963);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(14,0.02747402);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(15,0.02502765);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(16,0.02244712);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(17,0.02002804);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(18,0.01787313);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01526973);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(20,0.01355601);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01238819);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(22,0.01109815);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(23,0.01020137);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(24,0.008115772);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(25,0.006692437);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(26,0.005738718);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(27,0.005259622);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(28,0.003143225);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(29,0.002566433);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(30,0.001147744);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(31,0.001623154);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetEntries(146904);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.02061471);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.09101791);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.09354185);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.05312765);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.01809414);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.01377888);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.01326405);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.01230584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.01115109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.01115109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.007990586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.004315259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.01726103);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.008523299);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.002627789);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.01061838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.008416081);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(1,0.007035498);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(2,0.01417438);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(3,0.01456122);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(4,0.01115889);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(5,0.006570232);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(6,0.005761118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(7,0.005183774);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(8,0.005591805);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(9,0.00512691);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(10,0.00512691);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(11,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(12,0.004614198);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(13,0.003158712);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(14,0.006317423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(15,0.004402264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(16,0.002627789);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(17,0.00531);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(18,0.004336466);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetEntries(187);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.007805267);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.04721608);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.03589672);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.02652557);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.01689987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.00718245);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.006143749);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.006477848);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.005106057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.00438126);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.003342895);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.002766748);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.002778024);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.001821444);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.002501534);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.003250508);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.002120765);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.002801191);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.001429736);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.001613838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0005072625);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.0007148681);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(24,0.001106576);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(25,0.0006569226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(1,0.001434106);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(2,0.003679283);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(3,0.003198738);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(4,0.00276031);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(5,0.002199165);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(6,0.001388294);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(7,0.001367635);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(8,0.001403236);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(9,0.001255246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(10,0.001050076);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(11,0.0009830785);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(12,0.0009032443);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(13,0.0008920226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(14,0.0006989114);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(15,0.0008572663);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(16,0.0009995162);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(17,0.0008108974);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(18,0.0009081298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(19,0.0005932865);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0006673657);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0003645467);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0004195169);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(24,0.0005590015);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(25,0.0004662972);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all__142 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all__142","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(1,15165);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(2,65366);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(3,65225);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(4,52202);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(5,41760);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(6,33346);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(7,27157);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(8,22903);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(9,19936);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(10,17716);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(11,16151);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(12,14870);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(13,13346);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(14,11952);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(15,10663);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(16,9076);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(17,7381);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(18,6197);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(19,5137);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(20,4188);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(21,3554);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(22,2887);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(23,2324);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(24,1733);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(25,1446);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(26,1081);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(27,701);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(28,397);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(29,298);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(30,157);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(31,258);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetEntries(474602);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all__142->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fx1103[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fy1103[30] = {
   17752.45,
   85192.04,
   85203.97,
   79834.53,
   75321.89,
   49645.97,
   34178.68,
   29816.74,
   26181.47,
   27567.65,
   22943.93,
   21851.1,
   18451.79,
   15969.77,
   11916.63,
   11646.78,
   9389.75,
   7354.393,
   8815.612,
   6526.145,
   4193.878,
   3547.064,
   2819.821,
   2606.02,
   995.8762,
   2150.872,
   832.2737,
   1074.352,
   180.9848,
   96.94823};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fex1103[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fey1103[30] = {
   1275.744,
   3960.556,
   4523.352,
   15196.39,
   15377.79,
   3404.761,
   3121.477,
   2477.469,
   1973.806,
   2497.554,
   2313.448,
   2269.887,
   1720.615,
   1979.512,
   1177.065,
   1289.839,
   1191.236,
   1584.894,
   1270.924,
   1050.87,
   773.6828,
   767.3642,
   615.2086,
   668.7097,
   124.8395,
   659.4685,
   379.5619,
   528.7842,
   58.2372,
   41.51262};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fx1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fy1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fex1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fey1103);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetMinimum(49.89205);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetMaximum(104528.5);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__143 = new TH1D("data_mc_ratio__143","",30,0,6);
   data_mc_ratio__143->SetBinContent(1,0.8542483);
   data_mc_ratio__143->SetBinContent(2,0.7672783);
   data_mc_ratio__143->SetBinContent(3,0.765516);
   data_mc_ratio__143->SetBinContent(4,0.6538775);
   data_mc_ratio__143->SetBinContent(5,0.5544205);
   data_mc_ratio__143->SetBinContent(6,0.6716759);
   data_mc_ratio__143->SetBinContent(7,0.7945597);
   data_mc_ratio__143->SetBinContent(8,0.7681256);
   data_mc_ratio__143->SetBinContent(9,0.7614545);
   data_mc_ratio__143->SetBinContent(10,0.6426373);
   data_mc_ratio__143->SetBinContent(11,0.7039334);
   data_mc_ratio__143->SetBinContent(12,0.680515);
   data_mc_ratio__143->SetBinContent(13,0.7232903);
   data_mc_ratio__143->SetBinContent(14,0.748414);
   data_mc_ratio__143->SetBinContent(15,0.8947999);
   data_mc_ratio__143->SetBinContent(16,0.7792715);
   data_mc_ratio__143->SetBinContent(17,0.7860699);
   data_mc_ratio__143->SetBinContent(18,0.8426257);
   data_mc_ratio__143->SetBinContent(19,0.5827162);
   data_mc_ratio__143->SetBinContent(20,0.6417265);
   data_mc_ratio__143->SetBinContent(21,0.8474258);
   data_mc_ratio__143->SetBinContent(22,0.8139126);
   data_mc_ratio__143->SetBinContent(23,0.8241658);
   data_mc_ratio__143->SetBinContent(24,0.6649987);
   data_mc_ratio__143->SetBinContent(25,1.451988);
   data_mc_ratio__143->SetBinContent(26,0.5025869);
   data_mc_ratio__143->SetBinContent(27,0.8422709);
   data_mc_ratio__143->SetBinContent(28,0.3695251);
   data_mc_ratio__143->SetBinContent(29,1.646547);
   data_mc_ratio__143->SetBinContent(30,1.619421);
   data_mc_ratio__143->SetBinContent(31,0.6013352);
   data_mc_ratio__143->SetBinError(1,0.006936859);
   data_mc_ratio__143->SetBinError(2,0.003001076);
   data_mc_ratio__143->SetBinError(3,0.002997417);
   data_mc_ratio__143->SetBinError(4,0.002861889);
   data_mc_ratio__143->SetBinError(5,0.002713058);
   data_mc_ratio__143->SetBinError(6,0.003678222);
   data_mc_ratio__143->SetBinError(7,0.004821538);
   data_mc_ratio__143->SetBinError(8,0.005075585);
   data_mc_ratio__143->SetBinError(9,0.005392932);
   data_mc_ratio__143->SetBinError(10,0.004828176);
   data_mc_ratio__143->SetBinError(11,0.005539006);
   data_mc_ratio__143->SetBinError(12,0.005580617);
   data_mc_ratio__143->SetBinError(13,0.006260905);
   data_mc_ratio__143->SetBinError(14,0.006845759);
   data_mc_ratio__143->SetBinError(15,0.008665353);
   data_mc_ratio__143->SetBinError(16,0.008179779);
   data_mc_ratio__143->SetBinError(17,0.009149631);
   data_mc_ratio__143->SetBinError(18,0.01070395);
   data_mc_ratio__143->SetBinError(19,0.00813022);
   data_mc_ratio__143->SetBinError(20,0.009916231);
   data_mc_ratio__143->SetBinError(21,0.01421487);
   data_mc_ratio__143->SetBinError(22,0.01514797);
   data_mc_ratio__143->SetBinError(23,0.01709608);
   data_mc_ratio__143->SetBinError(24,0.01597429);
   data_mc_ratio__143->SetBinError(25,0.03818377);
   data_mc_ratio__143->SetBinError(26,0.01528616);
   data_mc_ratio__143->SetBinError(27,0.03181213);
   data_mc_ratio__143->SetBinError(28,0.01854593);
   data_mc_ratio__143->SetBinError(29,0.09538189);
   data_mc_ratio__143->SetBinError(30,0.1292439);
   data_mc_ratio__143->SetBinError(31,0.3866352);
   data_mc_ratio__143->SetMinimum(0.4);
   data_mc_ratio__143->SetMaximum(1.6);
   data_mc_ratio__143->SetEntries(450.8822);
   data_mc_ratio__143->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__143->SetLineColor(ci);
   data_mc_ratio__143->SetLineWidth(2);
   data_mc_ratio__143->SetMarkerStyle(20);
   data_mc_ratio__143->SetMarkerSize(1.2);
   data_mc_ratio__143->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__143->GetXaxis()->SetRange(1,30);
   data_mc_ratio__143->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__143->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__143->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__143->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__143->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__143->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__143->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__143->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__143->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__143->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__143->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__143->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__143->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__143->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1104[30] = {
   0.07186297,
   0.04648975,
   0.05308851,
   0.1903486,
   0.204161,
   0.06858081,
   0.0913282,
   0.08308988,
   0.0753894,
   0.09059727,
   0.1008305,
   0.1038798,
   0.09324925,
   0.1239537,
   0.09877498,
   0.1107464,
   0.1268656,
   0.215503,
   0.1441674,
   0.1610246,
   0.1844791,
   0.2163379,
   0.2181729,
   0.2566019,
   0.1253564,
   0.3066052,
   0.4560542,
   0.492189,
   0.3217794,
   0.4281937};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1104,Graph_from_mc_statistical_error_fy1104,Graph_from_mc_statistical_error_fex1104,Graph_from_mc_statistical_error_fey1104);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1104 = new TH1F("Graph_Graph_from_mc_statistical_error1104","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1104->SetMinimum(0.4093732);
   Graph_Graph_from_mc_statistical_error1104->SetMaximum(1.590627);
   Graph_Graph_from_mc_statistical_error1104->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1104->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1104);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->SetSelected(Z_dR_Bj0_tags_all);
}
