void H_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Thu Aug 10 12:32:55 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(0,0,1,1);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetFillStyle(4000);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.858579,6.314516,11.96985);
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
   st->SetMaximum(9.049687e+09);
   
   TH1F *st_stack_233 = new TH1F("st_stack_233","",30,0,6);
   st_stack_233->SetMinimum(0.00143301);
   st_stack_233->SetMaximum(3.069045e+10);
   st_stack_233->SetDirectory(0);
   st_stack_233->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_233->SetLineColor(ci);
   st_stack_233->GetXaxis()->SetRange(1,30);
   st_stack_233->GetXaxis()->SetLabelFont(42);
   st_stack_233->GetXaxis()->SetLabelSize(0.035);
   st_stack_233->GetXaxis()->SetTitleSize(0.035);
   st_stack_233->GetXaxis()->SetTitleFont(42);
   st_stack_233->GetYaxis()->SetTitle("Events/0.2");
   st_stack_233->GetYaxis()->SetLabelFont(42);
   st_stack_233->GetYaxis()->SetLabelSize(0.05);
   st_stack_233->GetYaxis()->SetTitleSize(0.057);
   st_stack_233->GetYaxis()->SetTitleOffset(1.2);
   st_stack_233->GetYaxis()->SetTitleFont(42);
   st_stack_233->GetZaxis()->SetLabelFont(42);
   st_stack_233->GetZaxis()->SetLabelSize(0.035);
   st_stack_233->GetZaxis()->SetTitleSize(0.035);
   st_stack_233->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_233);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,5090.391);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,28413.66);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,22963.56);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,17423.78);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,12115.44);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,12043.55);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,10926.78);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,7355.012);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,10659.92);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,8123.338);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,5255.877);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,8003.081);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,6530.67);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,5743.356);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,3505.961);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,3190.772);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,2841.049);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,943.6421);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,1122.806);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,1943.692);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,305.5802);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,548.2086);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,727.5529);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,181.9466);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,37.68105);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,281.0134);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,11.75927);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,28.54175);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,739.7583);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,3435.71);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,2398.111);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,2549.679);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,1918.194);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1495.215);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,2638.451);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,1098.271);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,2318.216);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,2203.708);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,912.2823);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1770.765);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,1059.843);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,987.356);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,626.9125);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,566.1496);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,671.6012);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,119.1623);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,391.3342);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,609.2189);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,67.89185);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,277.6643);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,384.861);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,56.60384);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,23.97185);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,268.9246);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,8.315057);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,22.97343);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(10203);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,24.21551);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,76.10095);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,91.16493);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,80.53757);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,69.76247);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,60.31231);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,55.93705);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,43.48063);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,38.57796);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,34.51543);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,31.93978);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,29.14084);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,31.07617);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,28.6088);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,26.20459);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,24.91828);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,13.63376);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,10.32055);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,6.854694);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,4.421601);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,3.186607);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,1.907438);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,2.821766);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.9663232);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.3131301);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.3995642);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.3523464);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.3593382);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.04373405);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.05892);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,3.462922);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,3.760255);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,3.616244);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,3.412287);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,3.052287);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.039144);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,2.612587);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,2.442498);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,2.238559);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.198048);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,2.097839);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.226917);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.19024);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,1.979718);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,1.946236);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,1.323019);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.138664);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.9837154);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.6633438);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.6197615);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.3842797);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.6490409);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.3235287);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.1185289);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.2788479);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.2720034);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.2732148);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.04373405);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(10096);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,362.8917);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,1460.647);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,1841.841);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,1678.778);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,1439.257);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,1209.415);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,996.9781);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,849.6528);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,733.1835);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,646.9341);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,585.9173);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,535.7106);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,478.6768);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,453.9343);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,435.3459);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,385.1901);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,242.5185);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,163.8548);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,114.0136);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,76.56617);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,53.51492);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,34.94107);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,21.15846);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,13.45289);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,9.231466);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,4.534903);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,3.218917);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,1.424428);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,1.005878);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,0.6096963);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,1.006558);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,4.774572);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,9.600343);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,10.7993);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,10.30839);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,9.533854);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,8.728973);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,7.924679);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,7.297915);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,6.785364);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,6.378748);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,6.068422);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,5.796619);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,5.480695);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,5.341446);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,5.237123);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,4.924676);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,3.897982);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,3.205746);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,2.675164);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,2.185614);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,1.82774);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,1.484083);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.140626);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,0.9079718);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,0.7532719);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.5298637);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.4537578);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.2959937);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.254664);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.1957086);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.2418879);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(243289);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,74.93065);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,238.1243);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,265.0162);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,219.5341);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,168.7492);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,146.7153);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,118.5571);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,104.4934);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,94.10181);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,87.09409);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,76.63302);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,80.95852);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,73.09247);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,76.49925);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,67.46163);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,65.30217);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,31.90636);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,23.2875);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,13.06304);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,8.184734);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,9.375841);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,4.786785);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,5.983662);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,1.349997);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,0.9921776);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.13315);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,0.1448776);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,0.279517);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,0.346092);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,0.066575);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,3.96528);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,8.464984);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,10.99057);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,12.90354);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,11.45875);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,11.57074);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,9.745451);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,8.857947);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,8.006693);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,7.901787);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,7.743077);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.771856);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,6.764317);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,8.152477);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,4.940664);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,6.62795);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,3.433143);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,4.137771);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,1.468449);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,1.106536);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,2.892572);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,0.9302624);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,2.788338);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.4620708);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.3595113);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.09415127);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.1027791);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.279517);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.287336);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.066575);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(15464);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,9.165466);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,25.75041);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,28.33749);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,22.13341);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,16.08201);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,12.58823);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,6.217027);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,9.309206);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,7.467228);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,7.353164);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,8.410618);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,7.251916);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,8.819228);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,8.864559);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,5.27115);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,5.397604);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,4.207115);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,3.858067);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,1.681481);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,1.08449);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,2.061753);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,0.3375895);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.07139802);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.2180905);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.0002136538);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(27,0.0004273076);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.0002136538);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,0.9504192);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,3.206694);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,6.72259);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,6.520604);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,2.769669);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,2.096949);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,1.228847);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,1.750814);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,1.374622);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,1.338911);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,1.673199);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,1.315958);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,1.940475);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,2.006727);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,0.677359);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,0.7808865);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,0.634089);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,1.174356);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,0.3814868);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.305923);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,1.086428);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,0.1424223);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.07097136);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.1600378);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.0002136538);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(27,0.0003021521);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.0002136538);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(3789);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,0.4031079);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(14,0.2687386);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,0.2327345);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(14,0.1900269);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.1900269);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,0.9815278);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,0.6543518);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,0.4362346);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.5452932);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.4362346);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,0.4362346);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(17,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,0.1542322);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,0.3271759);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.267138);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.2438625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,0.1090586);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,0.1542322);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.2181173);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.1888951);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.1090586);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.1542322);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.1090586);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.1542322);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.1542322);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(17,0.1542322);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,1.945657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,8.998665);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,5.593764);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,5.836972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.432072);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,2.432072);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,1.945657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.188864);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,1.945657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,1.459243);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,0.7296215);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.7296215);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.6878937);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.479371);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.166381);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.191467);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.7690885);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.7690885);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,0.6878937);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.7296215);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.6878937);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.5957334);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.3439469);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.4212471);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.4212471);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,1.529207);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,6.229493);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,6.798308);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,5.047895);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,3.414268);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,2.405788);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,1.782014);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,1.531955);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,1.4083);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,1.312123);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,1.291514);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,1.140379);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.192589);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.169232);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.118396);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,0.9796269);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.6155299);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.335244);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.1566304);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1044203);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.07281939);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.04671433);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.03022692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01648741);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.005495803);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.005495803);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.002747902);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.04583727);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.09251495);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.09664648);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.08328001);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.06849114);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.0574929);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.04948131);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.04587844);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.04398789);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.0424593);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.04212453);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.03958314);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.04047912);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.04008076);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.03919976);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.03668732);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.02908106);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.0214618);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.01466978);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.01197783);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01000251);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.008011441);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.0064444);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.004759505);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.002747902);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.002747902);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.00194306);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.5954308);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,2.755524);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,3.223848);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,2.444381);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,1.620159);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.160428);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,0.8868805);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,0.7425878);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,0.6716947);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.596505);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.5284762);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.4969681);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.4529285);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.4486319);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.4121112);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.3866899);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.217334);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.1364156);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.07841212);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.04403968);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.02828565);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.01503794);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.01288966);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.007160924);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.003938508);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.00286437);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.001432185);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.001074139);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.001074139);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.0007160924);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.01460109);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.03141027);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.03397479);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.0295838);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.0240851);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.02038349);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.01781977);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.01630585);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.01550799);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.01461425);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.01375569);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.01333932);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.01273457);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.01267403);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.01214722);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.0117666);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.008821317);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.006988783);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.0052986);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.003970925);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.003182384);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.002320405);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.002148277);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.001601231);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.001187505);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.001012708);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.0007160924);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.0006201542);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.0006201542);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.0005063538);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.01914505);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.01094003);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.01914505);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.01094003);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.004737172);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.00723615);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.00723615);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.004737172);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.001786329);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.006073519);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.009288912);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.006073519);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.004644456);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.002143595);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.002858127);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.001429063);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.001786329);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.0007988707);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.001473045);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.001821706);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.001473045);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.00128814);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.001129774);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.000875119);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0010105);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.001129774);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.0006188026);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0006188026);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.0007988707);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__639 = new TH1D("VbbHcc_both_H_dR_Bj0__639","",30,0,6);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(1,4306);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(2,12917);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(3,12686);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(4,10040);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(5,8270);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(6,6876);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(7,5881);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(8,5109);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(9,4592);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(10,4118);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(11,3958);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(12,3713);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(13,3472);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(14,3428);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(15,3282);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(16,3099);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(17,1928);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(18,1307);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(19,985);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(20,653);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(21,497);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(22,345);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(23,226);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(24,130);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(25,79);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(26,48);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(27,22);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(28,21);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(29,12);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(30,7);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(31,11);
   VbbHcc_both_H_dR_Bj0__639->SetEntries(102047);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__639->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__639->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__639->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__639->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__639->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1465[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1465[30] = {
   5565.892,
   30233.27,
   25206.61,
   19438.69,
   13817.31,
   13478.84,
   12109.45,
   8365.416,
   11537.96,
   8902.556,
   5963.01,
   8658.863,
   7125.172,
   6314.721,
   4043.235,
   3673.655,
   3135.341,
   1146.165,
   1259.383,
   2034.097,
   373.8204,
   590.2432,
   757.6313,
   197.9575,
   48.22747,
   286.0853,
   15.48276,
   30.60885,
   1.354631,
   0.6096963};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1465[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1465[30] = {
   739.7882,
   3435.737,
   2398.174,
   2549.744,
   1918.257,
   1495.29,
   2638.483,
   1098.335,
   2318.242,
   2203.733,
   912.3398,
   1770.794,
   1059.883,
   987.4088,
   626.9575,
   566.2139,
   671.6231,
   119.2892,
   391.3477,
   609.2242,
   67.98952,
   277.6702,
   384.8734,
   56.61416,
   23.98667,
   268.9253,
   8.332504,
   22.97866,
   0.3839506,
   0.1957086};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1465,Graph_from_VbbHcc_both_H_dR_Bj0_fy1465,Graph_from_VbbHcc_both_H_dR_Bj0_fex1465,Graph_from_VbbHcc_both_H_dR_Bj0_fey1465);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01465 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01465","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetMinimum(0.3725889);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetMaximum(37035.87);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01465);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__640 = new TH1D("data_mc_ratio__640","",30,0,6);
   data_mc_ratio__640->SetBinContent(1,0.7736405);
   data_mc_ratio__640->SetBinContent(2,0.4272446);
   data_mc_ratio__640->SetBinContent(3,0.5032807);
   data_mc_ratio__640->SetBinContent(4,0.5164958);
   data_mc_ratio__640->SetBinContent(5,0.5985244);
   data_mc_ratio__640->SetBinContent(6,0.510133);
   data_mc_ratio__640->SetBinContent(7,0.4856538);
   data_mc_ratio__640->SetBinContent(8,0.6107287);
   data_mc_ratio__640->SetBinContent(9,0.3979905);
   data_mc_ratio__640->SetBinContent(10,0.4625638);
   data_mc_ratio__640->SetBinContent(11,0.6637588);
   data_mc_ratio__640->SetBinContent(12,0.4288092);
   data_mc_ratio__640->SetBinContent(13,0.4872865);
   data_mc_ratio__640->SetBinContent(14,0.5428585);
   data_mc_ratio__640->SetBinContent(15,0.8117262);
   data_mc_ratio__640->SetBinContent(16,0.8435741);
   data_mc_ratio__640->SetBinContent(17,0.6149252);
   data_mc_ratio__640->SetBinContent(18,1.140325);
   data_mc_ratio__640->SetBinContent(19,0.782129);
   data_mc_ratio__640->SetBinContent(20,0.321027);
   data_mc_ratio__640->SetBinContent(21,1.329515);
   data_mc_ratio__640->SetBinContent(22,0.5845048);
   data_mc_ratio__640->SetBinContent(23,0.2982981);
   data_mc_ratio__640->SetBinContent(24,0.6567065);
   data_mc_ratio__640->SetBinContent(25,1.638071);
   data_mc_ratio__640->SetBinContent(26,0.1677821);
   data_mc_ratio__640->SetBinContent(27,1.420935);
   data_mc_ratio__640->SetBinContent(28,0.6860761);
   data_mc_ratio__640->SetBinContent(29,8.858499);
   data_mc_ratio__640->SetBinContent(30,11.48113);
   data_mc_ratio__640->SetBinContent(31,9.83058);
   data_mc_ratio__640->SetBinError(1,0.01178969);
   data_mc_ratio__640->SetBinError(2,0.003759203);
   data_mc_ratio__640->SetBinError(3,0.004468357);
   data_mc_ratio__640->SetBinError(4,0.005154659);
   data_mc_ratio__640->SetBinError(5,0.006581564);
   data_mc_ratio__640->SetBinError(6,0.006151988);
   data_mc_ratio__640->SetBinError(7,0.00633288);
   data_mc_ratio__640->SetBinError(8,0.008544377);
   data_mc_ratio__640->SetBinError(9,0.005873159);
   data_mc_ratio__640->SetBinError(10,0.007208227);
   data_mc_ratio__640->SetBinError(11,0.01055048);
   data_mc_ratio__640->SetBinError(12,0.007037227);
   data_mc_ratio__640->SetBinError(13,0.00826979);
   data_mc_ratio__640->SetBinError(14,0.009271846);
   data_mc_ratio__640->SetBinError(15,0.01416904);
   data_mc_ratio__640->SetBinError(16,0.01515348);
   data_mc_ratio__640->SetBinError(17,0.01400454);
   data_mc_ratio__640->SetBinError(18,0.03154211);
   data_mc_ratio__640->SetBinError(19,0.0249207);
   data_mc_ratio__640->SetBinError(20,0.01256276);
   data_mc_ratio__640->SetBinError(21,0.05963692);
   data_mc_ratio__640->SetBinError(22,0.03146868);
   data_mc_ratio__640->SetBinError(23,0.0198425);
   data_mc_ratio__640->SetBinError(24,0.05759697);
   data_mc_ratio__640->SetBinError(25,0.1842973);
   data_mc_ratio__640->SetBinError(26,0.02421726);
   data_mc_ratio__640->SetBinError(27,0.3029444);
   data_mc_ratio__640->SetBinError(28,0.1497141);
   data_mc_ratio__640->SetBinError(29,2.557228);
   data_mc_ratio__640->SetBinError(30,4.339458);
   data_mc_ratio__640->SetBinError(31,3.713682);
   data_mc_ratio__640->SetMinimum(0.4);
   data_mc_ratio__640->SetMaximum(1.6);
   data_mc_ratio__640->SetEntries(32.17652);
   data_mc_ratio__640->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__640->SetLineColor(ci);
   data_mc_ratio__640->SetLineWidth(2);
   data_mc_ratio__640->SetMarkerStyle(20);
   data_mc_ratio__640->SetMarkerSize(1.2);
   data_mc_ratio__640->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__640->GetXaxis()->SetRange(1,30);
   data_mc_ratio__640->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__640->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__640->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__640->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__640->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__640->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__640->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__640->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__640->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__640->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__640->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__640->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__640->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__640->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1466[30] = {
   0.1329146,
   0.113641,
   0.09514066,
   0.1311685,
   0.1388299,
   0.1109361,
   0.2178863,
   0.1312948,
   0.2009229,
   0.2475394,
   0.1529999,
   0.2045065,
   0.1487518,
   0.1563662,
   0.1550633,
   0.1541282,
   0.2142106,
   0.1040768,
   0.3107456,
   0.299506,
   0.1818775,
   0.4704335,
   0.5079956,
   0.2859914,
   0.4973654,
   0.9400178,
   0.5381794,
   0.7507194,
   0.2834355,
   0.3209936};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1466,Graph_from_mc_statistical_error_fy1466,Graph_from_mc_statistical_error_fex1466,Graph_from_mc_statistical_error_fey1466);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1466 = new TH1F("Graph_Graph_from_mc_statistical_error1466","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1466->SetMinimum(0.05398397);
   Graph_Graph_from_mc_statistical_error1466->SetMaximum(2.128021);
   Graph_Graph_from_mc_statistical_error1466->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1466->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1466->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1466);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
