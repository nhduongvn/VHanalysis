void Z_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Tue Aug 22 09:16:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(0,0,1,1);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetFillStyle(4000);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.854906,6.314516,11.84032);
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
   st->SetMaximum(6.971752e+09);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",30,0,6);
   st_stack_54->SetMinimum(0.001444738);
   st_stack_54->SetMaximum(2.348552e+10);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetRange(1,30);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetLabelSize(0.035);
   st_stack_54->GetXaxis()->SetTitleSize(0.035);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Events/0.2");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetLabelSize(0.05);
   st_stack_54->GetYaxis()->SetTitleSize(0.057);
   st_stack_54->GetYaxis()->SetTitleOffset(1.2);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetLabelSize(0.035);
   st_stack_54->GetZaxis()->SetTitleSize(0.035);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,4754.886);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,22777.73);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,23493.85);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,19348.99);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,14601.69);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,12434.35);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,10129.03);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9349.841);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,7330.117);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,25941.08);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,7553.957);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,5666.982);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,22360.28);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,4066.863);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,4338.639);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,3379.589);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,2607.901);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,1892.635);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,1619.814);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,1865.467);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1180.786);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,1476.53);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,911.5596);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,308.4565);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,681.8944);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,648.0785);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,99.65293);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,873.6854);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,82.84188);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,11.89232);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,55.53366);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,637.099);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,1736.39);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,1871.687);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,1815.004);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,1528.206);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,1402.773);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,1608.087);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1229.345);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1065.209);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,17112.37);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1157.814);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,985.6592);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,17054.16);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,736.9851);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,862.8148);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,771.8251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,618.2272);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,486.3135);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,477.5244);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,548.6167);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,395.4233);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,542.2361);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,387.644);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,75.8816);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,380.8111);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,379.9268);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,39.21401);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,464.8609);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,38.09277);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,8.330559);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,35.99794);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(9351);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,22.72729);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,99.95588);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,115.3991);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,106.4903);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,94.89732);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,81.54659);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,60.88706);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,52.48307);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,47.14947);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,41.18117);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,36.51548);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,33.12214);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,32.75802);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,25.15321);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,20.81776);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,18.31499);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,16.98863);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,13.23808);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,10.02216);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,7.359815);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,5.245954);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,5.333109);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,6.075772);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,3.882519);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,2.347094);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.9183076);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.441959);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.7338718);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.8389543);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.6695717);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.7809641);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,1.927302);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,3.888693);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,4.192695);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,3.938601);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,3.941634);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,3.630126);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,2.954522);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,2.850534);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,2.713965);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,2.493677);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,2.376796);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,2.23085);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,2.299959);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,1.947059);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,1.70289);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,1.698076);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,1.610042);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.457405);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.22897);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.9650163);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.8762077);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.9410745);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,1.04358);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.8361223);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.6292214);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.3202715);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4895686);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.3868688);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.4590547);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.3803935);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.3890826);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(11598);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,307.4124);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,1666.969);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,2294.632);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,2236.98);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,1933.788);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,1563.779);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,1257.562);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,1076.974);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,920.5199);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,807.9784);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,735.881);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,677.3429);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,603.2121);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,532.5832);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,449.4743);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,385.003);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,301.775);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,248.6063);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,206);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,165.0985);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,127.1764);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,96.89331);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,75.27201);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,58.18446);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,42.05693);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,32.32387);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,19.33093);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,12.8595);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,8.88045);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,5.393732);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,9.167493);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,4.442369);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,10.3348);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,12.17224);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,12.0332);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,11.17582);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,10.05769);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,8.994813);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,8.339496);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,7.713585);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,7.229476);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,6.894226);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,6.614521);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,6.257021);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,5.870914);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,5.395475);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,4.987437);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,4.40937);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,4.004872);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,3.639672);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,3.264412);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,2.853611);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,2.49628);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,2.194524);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,1.920607);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,1.629532);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.432671);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,1.101618);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,0.8969758);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,0.7552644);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.5814868);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,0.7619258);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(305979);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,79.55882);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,315.206);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,375.9577);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,277.3056);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,203.1354);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,176.2861);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,130.5469);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,104.2948);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,109.4738);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,81.51347);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,89.60167);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,75.21994);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,56.64812);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,57.12415);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,53.82934);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,36.49714);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,33.04274);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,35.93262);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,17.38831);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,18.3443);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,15.26408);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,12.84363);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,11.86678);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,5.092171);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,3.272405);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,4.120433);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,1.29455);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,1.531333);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,1.07877);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.7707193);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,0.8580026);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,2.981126);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,11.12948);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,12.45123);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,10.49462);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,10.18721);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,10.74181);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,7.86569);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,5.523742);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,8.199298);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,5.792436);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,7.894157);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,5.708885);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,4.441054);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,3.321747);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,4.517196);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,3.99642);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.851724);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,5.819924);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,1.702029);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,1.889263);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,3.461494);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,3.365672);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,3.307239);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,0.938491);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,0.5163936);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,0.8424214);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,0.4216501);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.5950599);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.2946983);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.4603731);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.3807109);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(17592);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,17.43225);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,48.36879);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,38.11019);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,39.12892);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,22.22454);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,12.69917);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,11.37323);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,8.427556);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,7.375354);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,7.873976);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,7.401535);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,3.982214);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,4.0663);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,4.262392);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,2.252629);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,3.17834);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,1.534172);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,2.069529);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,2.168571);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,1.956292);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,1.240014);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,1.119528);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,1.592543);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,1.770241);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.4908987);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.2878626);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.09299345);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.182441);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.418672);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,2.191597);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,5.061034);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,4.373024);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,10.91455);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,3.267336);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,2.371266);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,2.085341);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,1.577776);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,1.942139);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,2.185375);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,2.149064);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,0.6672581);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,0.8255875);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,1.314917);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,0.6985138);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,1.268369);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,0.4363576);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,0.5235992);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,0.6044615);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,0.5747316);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.4047183);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.3920515);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,0.6427882);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,1.203323);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.2609469);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.1446303);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.05244031);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.1290053);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.4162609);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(2041);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,0.6306118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,0.4459099);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,1.325933);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,0.7955596);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,0.7955596);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.7955596);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.5303731);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,0.5303731);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(16,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(26,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,0.5929751);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.4593166);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.4593166);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.4593166);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.3750304);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.3750304);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(16,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(26,0.2651865);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,1.772579);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,7.849994);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,4.05161);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,6.077415);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,4.304835);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.785482);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,2.27903);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,2.27903);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,1.772579);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(20,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,0.669972);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.409901);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,1.240547);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.044076);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.8398543);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.669972);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(20,0.3581151);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,1.24687);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,5.743356);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,6.993456);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,5.961396);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,4.490025);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,3.194701);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,2.529273);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,2.109343);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,2.025357);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,1.896147);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,1.883226);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,1.813776);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.540822);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.277557);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,0.9916818);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,0.7914073);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.5701363);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.4021641);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.2535733);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.1808931);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.1760477);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.1324396);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.1324396);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.07429538);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.05652909);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.03230234);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.02745699);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.01130582);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.004845351);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.04487584);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.09631298);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.1062791);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.09812417);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.08515818);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.07183186);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.06391456);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.0583681);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.0571943);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.05533985);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.05515098);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.05412449);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.04988594);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.04542471);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.04002102);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.03575214);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.03034529);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.02548611);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.02023736);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.01709279);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.01686232);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.01462551);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.01462551);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.01095426);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.00955516);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.007223022);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.006659297);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.004273198);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.002797464);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.4991045);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,2.416846);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,3.20607);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,2.731552);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,2.078045);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,1.448632);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,1.066068);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,0.9013385);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,0.8295461);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,0.7493944);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,0.7184155);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.637772);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.5630292);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.4991045);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.4179693);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.291595);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.2566823);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.1878403);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.1637456);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.1155562);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.09490362);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.07375929);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.06638336);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.04769767);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.0275368);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.02507816);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.01081803);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.005409014);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.002950371);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.001475186);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.0009834572);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.01566601);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.03447365);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.03970537);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.03664945);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.03196614);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.02668958);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.02289576);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.02105265);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.02019682);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.01919632);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.01879536);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.01770906);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.01663904);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.01566601);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01433623);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01197437);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.01123468);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.009610747);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.008973204);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.007538056);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.006831312);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.006022421);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.00571337);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.004842965);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.00367976);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.003511644);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.002306411);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.001630879);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.001204484);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.0008516989);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.0006954092);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.01106176);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.03634578);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.03002477);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.007901256);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.004180952);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.007578618);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.006888155);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.005474151);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.004180952);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.003533549);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.002737075);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.003114085);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.01266394);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.01474);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.00622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.00332169);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.002698874);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.002283662);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(16,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.0008040532);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.001621452);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.001749316);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.001137103);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.0007485328);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.0006885501);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(16,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__147 = new TH1D("VbbHcc_tags_Z_dR_Bj1__147","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(1,2411);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(2,9168);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(3,8655);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(4,6911);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(5,5490);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(6,4452);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(7,3615);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(8,3046);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(9,2586);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(10,2340);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(11,2099);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(12,1914);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(13,1718);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(14,1469);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(15,1315);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(16,1128);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(17,929);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(18,787);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(19,650);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(20,578);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(21,436);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(22,365);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(23,302);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(24,217);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(25,185);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(26,123);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(27,85);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(28,56);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(29,37);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(30,21);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(31,31);
   VbbHcc_tags_Z_dR_Bj1__147->SetEntries(63148);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__147->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__147->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__147->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__147->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1107[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1107[30] = {
   5185.815,
   24925.93,
   26333.04,
   22024.27,
   16867.42,
   14275.34,
   11597.21,
   10597.59,
   8420.04,
   26884.62,
   8426.972,
   6461.914,
   23060.08,
   4688.79,
   4867.185,
   3825.704,
   2962.069,
   2193.832,
   1856.319,
   2059.029,
   1330.236,
   1593.179,
   1006.566,
   377.508,
   730.146,
   686.0531,
   121.8516,
   889.0095,
   94.06652,
   18.72943};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1107[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1107[30] = {
   637.1285,
   1736.468,
   1871.778,
   1815.111,
   1528.29,
   1402.857,
   1608.136,
   1229.39,
   1065.274,
   17112.37,
   1157.866,
   985.701,
   17054.16,
   737.0199,
   862.8455,
   771.8548,
   618.2572,
   486.3675,
   477.5434,
   548.6309,
   395.45,
   542.2533,
   387.6662,
   75.92585,
   380.8156,
   379.9306,
   39.23483,
   464.8623,
   38.10643,
   8.372155};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1107);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetMinimum(9.321548);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetMaximum(48395.65);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__148 = new TH1D("data_mc_ratio__148","",30,0,6);
   data_mc_ratio__148->SetBinContent(1,0.4649221);
   data_mc_ratio__148->SetBinContent(2,0.3678097);
   data_mc_ratio__148->SetBinContent(3,0.3286745);
   data_mc_ratio__148->SetBinContent(4,0.3137901);
   data_mc_ratio__148->SetBinContent(5,0.3254796);
   data_mc_ratio__148->SetBinContent(6,0.3118664);
   data_mc_ratio__148->SetBinContent(7,0.3117128);
   data_mc_ratio__148->SetBinContent(8,0.2874237);
   data_mc_ratio__148->SetBinContent(9,0.3071244);
   data_mc_ratio__148->SetBinContent(10,0.08703862);
   data_mc_ratio__148->SetBinContent(11,0.2490812);
   data_mc_ratio__148->SetBinContent(12,0.2961971);
   data_mc_ratio__148->SetBinContent(13,0.07450104);
   data_mc_ratio__148->SetBinContent(14,0.3133005);
   data_mc_ratio__148->SetBinContent(15,0.2701767);
   data_mc_ratio__148->SetBinContent(16,0.2948477);
   data_mc_ratio__148->SetBinContent(17,0.3136322);
   data_mc_ratio__148->SetBinContent(18,0.3587331);
   data_mc_ratio__148->SetBinContent(19,0.3501554);
   data_mc_ratio__148->SetBinContent(20,0.2807148);
   data_mc_ratio__148->SetBinContent(21,0.3277613);
   data_mc_ratio__148->SetBinContent(22,0.2291017);
   data_mc_ratio__148->SetBinContent(23,0.3000301);
   data_mc_ratio__148->SetBinContent(24,0.5748222);
   data_mc_ratio__148->SetBinContent(25,0.253374);
   data_mc_ratio__148->SetBinContent(26,0.1792864);
   data_mc_ratio__148->SetBinContent(27,0.6975696);
   data_mc_ratio__148->SetBinContent(28,0.06299145);
   data_mc_ratio__148->SetBinContent(29,0.3933387);
   data_mc_ratio__148->SetBinContent(30,1.12123);
   data_mc_ratio__148->SetBinContent(31,0.4672706);
   data_mc_ratio__148->SetBinError(1,0.00946851);
   data_mc_ratio__148->SetBinError(2,0.003841368);
   data_mc_ratio__148->SetBinError(3,0.003532909);
   data_mc_ratio__148->SetBinError(4,0.003774582);
   data_mc_ratio__148->SetBinError(5,0.004392761);
   data_mc_ratio__148->SetBinError(6,0.004674024);
   data_mc_ratio__148->SetBinError(7,0.005184425);
   data_mc_ratio__148->SetBinError(8,0.005207841);
   data_mc_ratio__148->SetBinError(9,0.006039488);
   data_mc_ratio__148->SetBinError(10,0.001799302);
   data_mc_ratio__148->SetBinError(11,0.005436691);
   data_mc_ratio__148->SetBinError(12,0.006770329);
   data_mc_ratio__148->SetBinError(13,0.001797425);
   data_mc_ratio__148->SetBinError(14,0.008174292);
   data_mc_ratio__148->SetBinError(15,0.007450494);
   data_mc_ratio__148->SetBinError(16,0.008778963);
   data_mc_ratio__148->SetBinError(17,0.01028994);
   data_mc_ratio__148->SetBinError(18,0.01278745);
   data_mc_ratio__148->SetBinError(19,0.01373422);
   data_mc_ratio__148->SetBinError(20,0.0116762);
   data_mc_ratio__148->SetBinError(21,0.01569692);
   data_mc_ratio__148->SetBinError(22,0.01199173);
   data_mc_ratio__148->SetBinError(23,0.01726479);
   data_mc_ratio__148->SetBinError(24,0.03902147);
   data_mc_ratio__148->SetBinError(25,0.01862843);
   data_mc_ratio__148->SetBinError(26,0.01616571);
   data_mc_ratio__148->SetBinError(27,0.07566205);
   data_mc_ratio__148->SetBinError(28,0.008417587);
   data_mc_ratio__148->SetBinError(29,0.06466448);
   data_mc_ratio__148->SetBinError(30,0.2446725);
   data_mc_ratio__148->SetBinError(31,0.2671539);
   data_mc_ratio__148->SetMinimum(0.4);
   data_mc_ratio__148->SetMaximum(1.6);
   data_mc_ratio__148->SetEntries(192.3093);
   data_mc_ratio__148->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__148->SetLineColor(ci);
   data_mc_ratio__148->SetLineWidth(2);
   data_mc_ratio__148->SetMarkerStyle(20);
   data_mc_ratio__148->SetMarkerSize(1.2);
   data_mc_ratio__148->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__148->GetXaxis()->SetRange(1,30);
   data_mc_ratio__148->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__148->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__148->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__148->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__148->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__148->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1108[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1108[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1108[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1108[30] = {
   0.1228599,
   0.06966514,
   0.07108097,
   0.08241413,
   0.09060602,
   0.09827131,
   0.1386658,
   0.1160066,
   0.1265165,
   0.6365116,
   0.1374,
   0.1525401,
   0.7395535,
   0.1571877,
   0.1772782,
   0.201755,
   0.2087248,
   0.2216977,
   0.2572529,
   0.2664513,
   0.297278,
   0.3403594,
   0.3851375,
   0.2011238,
   0.5215608,
   0.5537919,
   0.3219886,
   0.5228992,
   0.4051009,
   0.4470053};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1108,Graph_from_mc_statistical_error_fy1108,Graph_from_mc_statistical_error_fex1108,Graph_from_mc_statistical_error_fey1108);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1108 = new TH1F("Graph_Graph_from_mc_statistical_error1108","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1108->SetMinimum(0.1125358);
   Graph_Graph_from_mc_statistical_error1108->SetMaximum(1.887464);
   Graph_Graph_from_mc_statistical_error1108->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1108->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1108->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1108);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
