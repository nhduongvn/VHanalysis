void ZMass_VbbHcc_all()
{
//=========Macro generated from canvas: ZMass_VbbHcc_all/ZMass_VbbHcc_all
//=========  (Tue Sep 20 13:13:08 2022) by ROOT version 6.14/09
   TCanvas *ZMass_VbbHcc_all = new TCanvas("ZMass_VbbHcc_all", "ZMass_VbbHcc_all",0,0,600,600);
   ZMass_VbbHcc_all->SetHighLightColor(2);
   ZMass_VbbHcc_all->Range(0,0,1,1);
   ZMass_VbbHcc_all->SetFillColor(0);
   ZMass_VbbHcc_all->SetFillStyle(4000);
   ZMass_VbbHcc_all->SetBorderMode(0);
   ZMass_VbbHcc_all->SetBorderSize(2);
   ZMass_VbbHcc_all->SetFrameFillStyle(1000);
   ZMass_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-411.6566,315.7258,411545);
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
   st->SetMaximum(352713.6);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",30,0,300);
   st_stack_4->SetMinimum(0.3);
   st_stack_4->SetMaximum(370349.3);
   st_stack_4->SetDirectory(0);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->GetXaxis()->SetRange(1,30);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetLabelSize(0.035);
   st_stack_4->GetXaxis()->SetTitleSize(0.035);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/10.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetLabelSize(0.05);
   st_stack_4->GetYaxis()->SetTitleSize(0.057);
   st_stack_4->GetYaxis()->SetTitleOffset(1.2);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetLabelSize(0.035);
   st_stack_4->GetZaxis()->SetTitleSize(0.035);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VbbHcc_ZMass_all_stack_1 = new TH1D("VbbHcc_ZMass_all_stack_1","",30,0,300);
   VbbHcc_ZMass_all_stack_1->SetBinContent(2,299.9653);
   VbbHcc_ZMass_all_stack_1->SetBinContent(3,25685.97);
   VbbHcc_ZMass_all_stack_1->SetBinContent(4,101928.5);
   VbbHcc_ZMass_all_stack_1->SetBinContent(5,148940.7);
   VbbHcc_ZMass_all_stack_1->SetBinContent(6,146423.9);
   VbbHcc_ZMass_all_stack_1->SetBinContent(7,125909.3);
   VbbHcc_ZMass_all_stack_1->SetBinContent(8,110323.8);
   VbbHcc_ZMass_all_stack_1->SetBinContent(9,99672.56);
   VbbHcc_ZMass_all_stack_1->SetBinContent(10,85424.28);
   VbbHcc_ZMass_all_stack_1->SetBinContent(11,88746.51);
   VbbHcc_ZMass_all_stack_1->SetBinContent(12,83268.69);
   VbbHcc_ZMass_all_stack_1->SetBinContent(13,81922.61);
   VbbHcc_ZMass_all_stack_1->SetBinContent(14,70216.98);
   VbbHcc_ZMass_all_stack_1->SetBinContent(15,80530.03);
   VbbHcc_ZMass_all_stack_1->SetBinContent(16,66597.35);
   VbbHcc_ZMass_all_stack_1->SetBinContent(17,70713.36);
   VbbHcc_ZMass_all_stack_1->SetBinContent(18,68116.75);
   VbbHcc_ZMass_all_stack_1->SetBinContent(19,59316.25);
   VbbHcc_ZMass_all_stack_1->SetBinContent(20,57966.9);
   VbbHcc_ZMass_all_stack_1->SetBinContent(21,48048.99);
   VbbHcc_ZMass_all_stack_1->SetBinContent(22,45148.96);
   VbbHcc_ZMass_all_stack_1->SetBinContent(23,42447.52);
   VbbHcc_ZMass_all_stack_1->SetBinContent(24,39791.08);
   VbbHcc_ZMass_all_stack_1->SetBinContent(25,30979.14);
   VbbHcc_ZMass_all_stack_1->SetBinContent(26,29516.54);
   VbbHcc_ZMass_all_stack_1->SetBinContent(27,25389.19);
   VbbHcc_ZMass_all_stack_1->SetBinContent(28,20558.89);
   VbbHcc_ZMass_all_stack_1->SetBinContent(29,22984.72);
   VbbHcc_ZMass_all_stack_1->SetBinContent(30,18758.69);
   VbbHcc_ZMass_all_stack_1->SetBinContent(31,242593.3);
   VbbHcc_ZMass_all_stack_1->SetBinError(2,189.9283);
   VbbHcc_ZMass_all_stack_1->SetBinError(3,2538.439);
   VbbHcc_ZMass_all_stack_1->SetBinError(4,5186.838);
   VbbHcc_ZMass_all_stack_1->SetBinError(5,6209.298);
   VbbHcc_ZMass_all_stack_1->SetBinError(6,5991.167);
   VbbHcc_ZMass_all_stack_1->SetBinError(7,5446.018);
   VbbHcc_ZMass_all_stack_1->SetBinError(8,4993.993);
   VbbHcc_ZMass_all_stack_1->SetBinError(9,4839.867);
   VbbHcc_ZMass_all_stack_1->SetBinError(10,4371.269);
   VbbHcc_ZMass_all_stack_1->SetBinError(11,4592.031);
   VbbHcc_ZMass_all_stack_1->SetBinError(12,4433.051);
   VbbHcc_ZMass_all_stack_1->SetBinError(13,4412.281);
   VbbHcc_ZMass_all_stack_1->SetBinError(14,4028.345);
   VbbHcc_ZMass_all_stack_1->SetBinError(15,4435.211);
   VbbHcc_ZMass_all_stack_1->SetBinError(16,3870.878);
   VbbHcc_ZMass_all_stack_1->SetBinError(17,4066.088);
   VbbHcc_ZMass_all_stack_1->SetBinError(18,3995.375);
   VbbHcc_ZMass_all_stack_1->SetBinError(19,3670.151);
   VbbHcc_ZMass_all_stack_1->SetBinError(20,3615.328);
   VbbHcc_ZMass_all_stack_1->SetBinError(21,3269.876);
   VbbHcc_ZMass_all_stack_1->SetBinError(22,3127.539);
   VbbHcc_ZMass_all_stack_1->SetBinError(23,3045.178);
   VbbHcc_ZMass_all_stack_1->SetBinError(24,2942.304);
   VbbHcc_ZMass_all_stack_1->SetBinError(25,2553.287);
   VbbHcc_ZMass_all_stack_1->SetBinError(26,2457.038);
   VbbHcc_ZMass_all_stack_1->SetBinError(27,2218.023);
   VbbHcc_ZMass_all_stack_1->SetBinError(28,1867.205);
   VbbHcc_ZMass_all_stack_1->SetBinError(29,2069.072);
   VbbHcc_ZMass_all_stack_1->SetBinError(30,1857.032);
   VbbHcc_ZMass_all_stack_1->SetBinError(31,6048.052);
   VbbHcc_ZMass_all_stack_1->SetEntries(51654);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_ZMass_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_1->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_1,"");
   
   TH1D *VbbHcc_ZMass_all_stack_2 = new TH1D("VbbHcc_ZMass_all_stack_2","",30,0,300);
   VbbHcc_ZMass_all_stack_2->SetBinContent(2,0.9291183);
   VbbHcc_ZMass_all_stack_2->SetBinContent(3,86.3678);
   VbbHcc_ZMass_all_stack_2->SetBinContent(4,308.3893);
   VbbHcc_ZMass_all_stack_2->SetBinContent(5,531.7732);
   VbbHcc_ZMass_all_stack_2->SetBinContent(6,632.7425);
   VbbHcc_ZMass_all_stack_2->SetBinContent(7,716.5166);
   VbbHcc_ZMass_all_stack_2->SetBinContent(8,761.9022);
   VbbHcc_ZMass_all_stack_2->SetBinContent(9,854.4878);
   VbbHcc_ZMass_all_stack_2->SetBinContent(10,906.473);
   VbbHcc_ZMass_all_stack_2->SetBinContent(11,907.7194);
   VbbHcc_ZMass_all_stack_2->SetBinContent(12,887.9988);
   VbbHcc_ZMass_all_stack_2->SetBinContent(13,868.3204);
   VbbHcc_ZMass_all_stack_2->SetBinContent(14,815.5345);
   VbbHcc_ZMass_all_stack_2->SetBinContent(15,773.084);
   VbbHcc_ZMass_all_stack_2->SetBinContent(16,687.6793);
   VbbHcc_ZMass_all_stack_2->SetBinContent(17,635.4374);
   VbbHcc_ZMass_all_stack_2->SetBinContent(18,554.5165);
   VbbHcc_ZMass_all_stack_2->SetBinContent(19,553.4422);
   VbbHcc_ZMass_all_stack_2->SetBinContent(20,494.9985);
   VbbHcc_ZMass_all_stack_2->SetBinContent(21,441.3569);
   VbbHcc_ZMass_all_stack_2->SetBinContent(22,407.7263);
   VbbHcc_ZMass_all_stack_2->SetBinContent(23,389.0642);
   VbbHcc_ZMass_all_stack_2->SetBinContent(24,350.3266);
   VbbHcc_ZMass_all_stack_2->SetBinContent(25,335.3775);
   VbbHcc_ZMass_all_stack_2->SetBinContent(26,309.8609);
   VbbHcc_ZMass_all_stack_2->SetBinContent(27,288.2697);
   VbbHcc_ZMass_all_stack_2->SetBinContent(28,275.3993);
   VbbHcc_ZMass_all_stack_2->SetBinContent(29,231.4774);
   VbbHcc_ZMass_all_stack_2->SetBinContent(30,196.6141);
   VbbHcc_ZMass_all_stack_2->SetBinContent(31,2983.415);
   VbbHcc_ZMass_all_stack_2->SetBinError(2,0.2550688);
   VbbHcc_ZMass_all_stack_2->SetBinError(3,3.663851);
   VbbHcc_ZMass_all_stack_2->SetBinError(4,6.929804);
   VbbHcc_ZMass_all_stack_2->SetBinError(5,9.327154);
   VbbHcc_ZMass_all_stack_2->SetBinError(6,10.21455);
   VbbHcc_ZMass_all_stack_2->SetBinError(7,10.84524);
   VbbHcc_ZMass_all_stack_2->SetBinError(8,11.23623);
   VbbHcc_ZMass_all_stack_2->SetBinError(9,12.1534);
   VbbHcc_ZMass_all_stack_2->SetBinError(10,12.64785);
   VbbHcc_ZMass_all_stack_2->SetBinError(11,12.63096);
   VbbHcc_ZMass_all_stack_2->SetBinError(12,12.50736);
   VbbHcc_ZMass_all_stack_2->SetBinError(13,12.32796);
   VbbHcc_ZMass_all_stack_2->SetBinError(14,12.10198);
   VbbHcc_ZMass_all_stack_2->SetBinError(15,11.85261);
   VbbHcc_ZMass_all_stack_2->SetBinError(16,11.12541);
   VbbHcc_ZMass_all_stack_2->SetBinError(17,10.78855);
   VbbHcc_ZMass_all_stack_2->SetBinError(18,10.02352);
   VbbHcc_ZMass_all_stack_2->SetBinError(19,10.27384);
   VbbHcc_ZMass_all_stack_2->SetBinError(20,9.774073);
   VbbHcc_ZMass_all_stack_2->SetBinError(21,9.135657);
   VbbHcc_ZMass_all_stack_2->SetBinError(22,8.740817);
   VbbHcc_ZMass_all_stack_2->SetBinError(23,8.567149);
   VbbHcc_ZMass_all_stack_2->SetBinError(24,8.276865);
   VbbHcc_ZMass_all_stack_2->SetBinError(25,8.134527);
   VbbHcc_ZMass_all_stack_2->SetBinError(26,7.845566);
   VbbHcc_ZMass_all_stack_2->SetBinError(27,7.563038);
   VbbHcc_ZMass_all_stack_2->SetBinError(28,7.512882);
   VbbHcc_ZMass_all_stack_2->SetBinError(29,6.880217);
   VbbHcc_ZMass_all_stack_2->SetBinError(30,6.132794);
   VbbHcc_ZMass_all_stack_2->SetBinError(31,25.26645);
   VbbHcc_ZMass_all_stack_2->SetEntries(236928);

   ci = TColor::GetColor("#660066");
   VbbHcc_ZMass_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_2->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_2,"");
   
   TH1D *VbbHcc_ZMass_all_stack_3 = new TH1D("VbbHcc_ZMass_all_stack_3","",30,0,300);
   VbbHcc_ZMass_all_stack_3->SetBinContent(2,19.00196);
   VbbHcc_ZMass_all_stack_3->SetBinContent(3,1283.02);
   VbbHcc_ZMass_all_stack_3->SetBinContent(4,5441.917);
   VbbHcc_ZMass_all_stack_3->SetBinContent(5,8751.221);
   VbbHcc_ZMass_all_stack_3->SetBinContent(6,10862.11);
   VbbHcc_ZMass_all_stack_3->SetBinContent(7,12415.81);
   VbbHcc_ZMass_all_stack_3->SetBinContent(8,13870.97);
   VbbHcc_ZMass_all_stack_3->SetBinContent(9,15141.82);
   VbbHcc_ZMass_all_stack_3->SetBinContent(10,16036.54);
   VbbHcc_ZMass_all_stack_3->SetBinContent(11,16616.38);
   VbbHcc_ZMass_all_stack_3->SetBinContent(12,16943.23);
   VbbHcc_ZMass_all_stack_3->SetBinContent(13,16631.37);
   VbbHcc_ZMass_all_stack_3->SetBinContent(14,15696.04);
   VbbHcc_ZMass_all_stack_3->SetBinContent(15,14378.74);
   VbbHcc_ZMass_all_stack_3->SetBinContent(16,12846.47);
   VbbHcc_ZMass_all_stack_3->SetBinContent(17,11551.11);
   VbbHcc_ZMass_all_stack_3->SetBinContent(18,10316.18);
   VbbHcc_ZMass_all_stack_3->SetBinContent(19,9348.529);
   VbbHcc_ZMass_all_stack_3->SetBinContent(20,8397.268);
   VbbHcc_ZMass_all_stack_3->SetBinContent(21,7563.542);
   VbbHcc_ZMass_all_stack_3->SetBinContent(22,6873.892);
   VbbHcc_ZMass_all_stack_3->SetBinContent(23,6217.626);
   VbbHcc_ZMass_all_stack_3->SetBinContent(24,5627.271);
   VbbHcc_ZMass_all_stack_3->SetBinContent(25,5058.527);
   VbbHcc_ZMass_all_stack_3->SetBinContent(26,4596.681);
   VbbHcc_ZMass_all_stack_3->SetBinContent(27,4104.356);
   VbbHcc_ZMass_all_stack_3->SetBinContent(28,3774.024);
   VbbHcc_ZMass_all_stack_3->SetBinContent(29,3374.416);
   VbbHcc_ZMass_all_stack_3->SetBinContent(30,3076.741);
   VbbHcc_ZMass_all_stack_3->SetBinContent(31,33515.75);
   VbbHcc_ZMass_all_stack_3->SetBinError(2,1.149549);
   VbbHcc_ZMass_all_stack_3->SetBinError(3,9.536626);
   VbbHcc_ZMass_all_stack_3->SetBinError(4,19.71902);
   VbbHcc_ZMass_all_stack_3->SetBinError(5,24.98831);
   VbbHcc_ZMass_all_stack_3->SetBinError(6,27.80676);
   VbbHcc_ZMass_all_stack_3->SetBinError(7,29.77228);
   VbbHcc_ZMass_all_stack_3->SetBinError(8,31.47664);
   VbbHcc_ZMass_all_stack_3->SetBinError(9,32.89341);
   VbbHcc_ZMass_all_stack_3->SetBinError(10,33.88065);
   VbbHcc_ZMass_all_stack_3->SetBinError(11,34.50197);
   VbbHcc_ZMass_all_stack_3->SetBinError(12,34.88341);
   VbbHcc_ZMass_all_stack_3->SetBinError(13,34.56038);
   VbbHcc_ZMass_all_stack_3->SetBinError(14,33.54911);
   VbbHcc_ZMass_all_stack_3->SetBinError(15,32.08062);
   VbbHcc_ZMass_all_stack_3->SetBinError(16,30.27817);
   VbbHcc_ZMass_all_stack_3->SetBinError(17,28.67639);
   VbbHcc_ZMass_all_stack_3->SetBinError(18,27.08827);
   VbbHcc_ZMass_all_stack_3->SetBinError(19,25.76467);
   VbbHcc_ZMass_all_stack_3->SetBinError(20,24.3902);
   VbbHcc_ZMass_all_stack_3->SetBinError(21,23.15504);
   VbbHcc_ZMass_all_stack_3->SetBinError(22,22.06609);
   VbbHcc_ZMass_all_stack_3->SetBinError(23,20.96499);
   VbbHcc_ZMass_all_stack_3->SetBinError(24,19.96937);
   VbbHcc_ZMass_all_stack_3->SetBinError(25,18.92891);
   VbbHcc_ZMass_all_stack_3->SetBinError(26,18.02996);
   VbbHcc_ZMass_all_stack_3->SetBinError(27,17.03498);
   VbbHcc_ZMass_all_stack_3->SetBinError(28,16.35211);
   VbbHcc_ZMass_all_stack_3->SetBinError(29,15.45366);
   VbbHcc_ZMass_all_stack_3->SetBinError(30,14.74507);
   VbbHcc_ZMass_all_stack_3->SetBinError(31,48.73675);
   VbbHcc_ZMass_all_stack_3->SetEntries(4563270);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_ZMass_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_3->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_3,"");
   
   TH1D *VbbHcc_ZMass_all_stack_4 = new TH1D("VbbHcc_ZMass_all_stack_4","",30,0,300);
   VbbHcc_ZMass_all_stack_4->SetBinContent(2,0.1211915);
   VbbHcc_ZMass_all_stack_4->SetBinContent(3,36.6935);
   VbbHcc_ZMass_all_stack_4->SetBinContent(4,142.4877);
   VbbHcc_ZMass_all_stack_4->SetBinContent(5,272.0174);
   VbbHcc_ZMass_all_stack_4->SetBinContent(6,433.7953);
   VbbHcc_ZMass_all_stack_4->SetBinContent(7,693.3361);
   VbbHcc_ZMass_all_stack_4->SetBinContent(8,1084.204);
   VbbHcc_ZMass_all_stack_4->SetBinContent(9,1541.528);
   VbbHcc_ZMass_all_stack_4->SetBinContent(10,1383.522);
   VbbHcc_ZMass_all_stack_4->SetBinContent(11,766.1294);
   VbbHcc_ZMass_all_stack_4->SetBinContent(12,538.209);
   VbbHcc_ZMass_all_stack_4->SetBinContent(13,420.8107);
   VbbHcc_ZMass_all_stack_4->SetBinContent(14,429.2038);
   VbbHcc_ZMass_all_stack_4->SetBinContent(15,427.8743);
   VbbHcc_ZMass_all_stack_4->SetBinContent(16,401.4384);
   VbbHcc_ZMass_all_stack_4->SetBinContent(17,400.0742);
   VbbHcc_ZMass_all_stack_4->SetBinContent(18,386.8821);
   VbbHcc_ZMass_all_stack_4->SetBinContent(19,372.9308);
   VbbHcc_ZMass_all_stack_4->SetBinContent(20,352.7041);
   VbbHcc_ZMass_all_stack_4->SetBinContent(21,349.0703);
   VbbHcc_ZMass_all_stack_4->SetBinContent(22,295.0617);
   VbbHcc_ZMass_all_stack_4->SetBinContent(23,300.4575);
   VbbHcc_ZMass_all_stack_4->SetBinContent(24,290.4618);
   VbbHcc_ZMass_all_stack_4->SetBinContent(25,259.4764);
   VbbHcc_ZMass_all_stack_4->SetBinContent(26,237.0526);
   VbbHcc_ZMass_all_stack_4->SetBinContent(27,224.5353);
   VbbHcc_ZMass_all_stack_4->SetBinContent(28,220.2409);
   VbbHcc_ZMass_all_stack_4->SetBinContent(29,204.1534);
   VbbHcc_ZMass_all_stack_4->SetBinContent(30,189.6432);
   VbbHcc_ZMass_all_stack_4->SetBinContent(31,2520.473);
   VbbHcc_ZMass_all_stack_4->SetBinError(2,0.1211915);
   VbbHcc_ZMass_all_stack_4->SetBinError(3,3.288948);
   VbbHcc_ZMass_all_stack_4->SetBinError(4,6.418683);
   VbbHcc_ZMass_all_stack_4->SetBinError(5,8.922423);
   VbbHcc_ZMass_all_stack_4->SetBinError(6,11.10292);
   VbbHcc_ZMass_all_stack_4->SetBinError(7,13.85183);
   VbbHcc_ZMass_all_stack_4->SetBinError(8,17.06303);
   VbbHcc_ZMass_all_stack_4->SetBinError(9,20.14132);
   VbbHcc_ZMass_all_stack_4->SetBinError(10,18.66805);
   VbbHcc_ZMass_all_stack_4->SetBinError(11,13.90263);
   VbbHcc_ZMass_all_stack_4->SetBinError(12,12.08231);
   VbbHcc_ZMass_all_stack_4->SetBinError(13,10.7468);
   VbbHcc_ZMass_all_stack_4->SetBinError(14,10.78934);
   VbbHcc_ZMass_all_stack_4->SetBinError(15,10.83411);
   VbbHcc_ZMass_all_stack_4->SetBinError(16,10.60151);
   VbbHcc_ZMass_all_stack_4->SetBinError(17,10.48577);
   VbbHcc_ZMass_all_stack_4->SetBinError(18,10.26595);
   VbbHcc_ZMass_all_stack_4->SetBinError(19,10.07212);
   VbbHcc_ZMass_all_stack_4->SetBinError(20,9.654585);
   VbbHcc_ZMass_all_stack_4->SetBinError(21,9.637098);
   VbbHcc_ZMass_all_stack_4->SetBinError(22,8.703123);
   VbbHcc_ZMass_all_stack_4->SetBinError(23,8.805758);
   VbbHcc_ZMass_all_stack_4->SetBinError(24,8.466123);
   VbbHcc_ZMass_all_stack_4->SetBinError(25,8.096701);
   VbbHcc_ZMass_all_stack_4->SetBinError(26,7.687578);
   VbbHcc_ZMass_all_stack_4->SetBinError(27,7.399887);
   VbbHcc_ZMass_all_stack_4->SetBinError(28,7.332967);
   VbbHcc_ZMass_all_stack_4->SetBinError(29,7.05555);
   VbbHcc_ZMass_all_stack_4->SetBinError(30,6.719922);
   VbbHcc_ZMass_all_stack_4->SetBinError(31,21.30146);
   VbbHcc_ZMass_all_stack_4->SetEntries(95489);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_ZMass_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_4->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_4,"");
   
   TH1D *VbbHcc_ZMass_all_stack_5 = new TH1D("VbbHcc_ZMass_all_stack_5","",30,0,300);
   VbbHcc_ZMass_all_stack_5->SetBinContent(3,27.51978);
   VbbHcc_ZMass_all_stack_5->SetBinContent(4,124.7006);
   VbbHcc_ZMass_all_stack_5->SetBinContent(5,188.7273);
   VbbHcc_ZMass_all_stack_5->SetBinContent(6,222.1645);
   VbbHcc_ZMass_all_stack_5->SetBinContent(7,210.7803);
   VbbHcc_ZMass_all_stack_5->SetBinContent(8,212.5087);
   VbbHcc_ZMass_all_stack_5->SetBinContent(9,193.2753);
   VbbHcc_ZMass_all_stack_5->SetBinContent(10,154.5462);
   VbbHcc_ZMass_all_stack_5->SetBinContent(11,141.8774);
   VbbHcc_ZMass_all_stack_5->SetBinContent(12,139.5359);
   VbbHcc_ZMass_all_stack_5->SetBinContent(13,126.8401);
   VbbHcc_ZMass_all_stack_5->SetBinContent(14,125.6357);
   VbbHcc_ZMass_all_stack_5->SetBinContent(15,124.9637);
   VbbHcc_ZMass_all_stack_5->SetBinContent(16,106.7914);
   VbbHcc_ZMass_all_stack_5->SetBinContent(17,91.04693);
   VbbHcc_ZMass_all_stack_5->SetBinContent(18,91.11137);
   VbbHcc_ZMass_all_stack_5->SetBinContent(19,79.23409);
   VbbHcc_ZMass_all_stack_5->SetBinContent(20,106.4712);
   VbbHcc_ZMass_all_stack_5->SetBinContent(21,88.10957);
   VbbHcc_ZMass_all_stack_5->SetBinContent(22,83.37223);
   VbbHcc_ZMass_all_stack_5->SetBinContent(23,79.44763);
   VbbHcc_ZMass_all_stack_5->SetBinContent(24,61.95966);
   VbbHcc_ZMass_all_stack_5->SetBinContent(25,78.05089);
   VbbHcc_ZMass_all_stack_5->SetBinContent(26,58.43882);
   VbbHcc_ZMass_all_stack_5->SetBinContent(27,57.16979);
   VbbHcc_ZMass_all_stack_5->SetBinContent(28,49.6358);
   VbbHcc_ZMass_all_stack_5->SetBinContent(29,41.47374);
   VbbHcc_ZMass_all_stack_5->SetBinContent(30,47.78626);
   VbbHcc_ZMass_all_stack_5->SetBinContent(31,809.0316);
   VbbHcc_ZMass_all_stack_5->SetBinError(3,4.832788);
   VbbHcc_ZMass_all_stack_5->SetBinError(4,10.70348);
   VbbHcc_ZMass_all_stack_5->SetBinError(5,13.10914);
   VbbHcc_ZMass_all_stack_5->SetBinError(6,13.44793);
   VbbHcc_ZMass_all_stack_5->SetBinError(7,12.38856);
   VbbHcc_ZMass_all_stack_5->SetBinError(8,12.44837);
   VbbHcc_ZMass_all_stack_5->SetBinError(9,12.02863);
   VbbHcc_ZMass_all_stack_5->SetBinError(10,9.938663);
   VbbHcc_ZMass_all_stack_5->SetBinError(11,9.447263);
   VbbHcc_ZMass_all_stack_5->SetBinError(12,9.685642);
   VbbHcc_ZMass_all_stack_5->SetBinError(13,9.370448);
   VbbHcc_ZMass_all_stack_5->SetBinError(14,9.387615);
   VbbHcc_ZMass_all_stack_5->SetBinError(15,9.369538);
   VbbHcc_ZMass_all_stack_5->SetBinError(16,8.95501);
   VbbHcc_ZMass_all_stack_5->SetBinError(17,7.93928);
   VbbHcc_ZMass_all_stack_5->SetBinError(18,7.62857);
   VbbHcc_ZMass_all_stack_5->SetBinError(19,7.291674);
   VbbHcc_ZMass_all_stack_5->SetBinError(20,9.21275);
   VbbHcc_ZMass_all_stack_5->SetBinError(21,8.113225);
   VbbHcc_ZMass_all_stack_5->SetBinError(22,7.59018);
   VbbHcc_ZMass_all_stack_5->SetBinError(23,7.26494);
   VbbHcc_ZMass_all_stack_5->SetBinError(24,6.216158);
   VbbHcc_ZMass_all_stack_5->SetBinError(25,7.893875);
   VbbHcc_ZMass_all_stack_5->SetBinError(26,6.146756);
   VbbHcc_ZMass_all_stack_5->SetBinError(27,6.136469);
   VbbHcc_ZMass_all_stack_5->SetBinError(28,5.48056);
   VbbHcc_ZMass_all_stack_5->SetBinError(29,4.49449);
   VbbHcc_ZMass_all_stack_5->SetBinError(30,5.603745);
   VbbHcc_ZMass_all_stack_5->SetBinError(31,18.15623);
   VbbHcc_ZMass_all_stack_5->SetEntries(24313);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_ZMass_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_5->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_5,"");
   
   TH1D *VbbHcc_ZMass_all_stack_6 = new TH1D("VbbHcc_ZMass_all_stack_6","",30,0,300);
   VbbHcc_ZMass_all_stack_6->SetBinContent(2,0.2125611);
   VbbHcc_ZMass_all_stack_6->SetBinContent(3,1.186216);
   VbbHcc_ZMass_all_stack_6->SetBinContent(4,1.731588);
   VbbHcc_ZMass_all_stack_6->SetBinContent(5,2.967496);
   VbbHcc_ZMass_all_stack_6->SetBinContent(6,3.100807);
   VbbHcc_ZMass_all_stack_6->SetBinContent(7,2.272612);
   VbbHcc_ZMass_all_stack_6->SetBinContent(8,1.681723);
   VbbHcc_ZMass_all_stack_6->SetBinContent(9,2.042804);
   VbbHcc_ZMass_all_stack_6->SetBinContent(10,2.053991);
   VbbHcc_ZMass_all_stack_6->SetBinContent(11,1.56255);
   VbbHcc_ZMass_all_stack_6->SetBinContent(12,1.360702);
   VbbHcc_ZMass_all_stack_6->SetBinContent(13,2.172342);
   VbbHcc_ZMass_all_stack_6->SetBinContent(14,2.810896);
   VbbHcc_ZMass_all_stack_6->SetBinContent(15,1.800919);
   VbbHcc_ZMass_all_stack_6->SetBinContent(16,2.383136);
   VbbHcc_ZMass_all_stack_6->SetBinContent(17,1.655472);
   VbbHcc_ZMass_all_stack_6->SetBinContent(18,0.800046);
   VbbHcc_ZMass_all_stack_6->SetBinContent(19,1.446162);
   VbbHcc_ZMass_all_stack_6->SetBinContent(20,0.8569491);
   VbbHcc_ZMass_all_stack_6->SetBinContent(21,1.093026);
   VbbHcc_ZMass_all_stack_6->SetBinContent(22,1.676223);
   VbbHcc_ZMass_all_stack_6->SetBinContent(23,0.6608855);
   VbbHcc_ZMass_all_stack_6->SetBinContent(24,1.54381);
   VbbHcc_ZMass_all_stack_6->SetBinContent(25,0.5414541);
   VbbHcc_ZMass_all_stack_6->SetBinContent(26,0.7336691);
   VbbHcc_ZMass_all_stack_6->SetBinContent(27,0.2773818);
   VbbHcc_ZMass_all_stack_6->SetBinContent(28,1.021503);
   VbbHcc_ZMass_all_stack_6->SetBinContent(29,0.3239231);
   VbbHcc_ZMass_all_stack_6->SetBinContent(30,0.6302238);
   VbbHcc_ZMass_all_stack_6->SetBinContent(31,10.33086);
   VbbHcc_ZMass_all_stack_6->SetBinError(2,0.2125611);
   VbbHcc_ZMass_all_stack_6->SetBinError(3,0.421058);
   VbbHcc_ZMass_all_stack_6->SetBinError(4,0.554836);
   VbbHcc_ZMass_all_stack_6->SetBinError(5,0.7491793);
   VbbHcc_ZMass_all_stack_6->SetBinError(6,0.7861711);
   VbbHcc_ZMass_all_stack_6->SetBinError(7,0.6542349);
   VbbHcc_ZMass_all_stack_6->SetBinError(8,0.5286914);
   VbbHcc_ZMass_all_stack_6->SetBinError(9,0.6191759);
   VbbHcc_ZMass_all_stack_6->SetBinError(10,0.5869352);
   VbbHcc_ZMass_all_stack_6->SetBinError(11,0.5136039);
   VbbHcc_ZMass_all_stack_6->SetBinError(12,0.5051196);
   VbbHcc_ZMass_all_stack_6->SetBinError(13,0.6386329);
   VbbHcc_ZMass_all_stack_6->SetBinError(14,0.7252546);
   VbbHcc_ZMass_all_stack_6->SetBinError(15,0.5443689);
   VbbHcc_ZMass_all_stack_6->SetBinError(16,0.6585263);
   VbbHcc_ZMass_all_stack_6->SetBinError(17,0.5140785);
   VbbHcc_ZMass_all_stack_6->SetBinError(18,0.3366483);
   VbbHcc_ZMass_all_stack_6->SetBinError(19,0.4815275);
   VbbHcc_ZMass_all_stack_6->SetBinError(20,0.388949);
   VbbHcc_ZMass_all_stack_6->SetBinError(21,0.4998577);
   VbbHcc_ZMass_all_stack_6->SetBinError(22,0.5457274);
   VbbHcc_ZMass_all_stack_6->SetBinError(23,0.3842129);
   VbbHcc_ZMass_all_stack_6->SetBinError(24,0.588804);
   VbbHcc_ZMass_all_stack_6->SetBinError(25,0.2210478);
   VbbHcc_ZMass_all_stack_6->SetBinError(26,0.3224209);
   VbbHcc_ZMass_all_stack_6->SetBinError(27,0.2773818);
   VbbHcc_ZMass_all_stack_6->SetBinError(28,0.4318149);
   VbbHcc_ZMass_all_stack_6->SetBinError(29,0.1908489);
   VbbHcc_ZMass_all_stack_6->SetBinError(30,0.313899);
   VbbHcc_ZMass_all_stack_6->SetBinError(31,1.353279);
   VbbHcc_ZMass_all_stack_6->SetEntries(365);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_ZMass_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_6->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_6,"");
   
   TH1D *VbbHcc_ZMass_all_stack_7 = new TH1D("VbbHcc_ZMass_all_stack_7","",30,0,300);
   VbbHcc_ZMass_all_stack_7->SetBinContent(2,0.181765);
   VbbHcc_ZMass_all_stack_7->SetBinContent(3,0.8238667);
   VbbHcc_ZMass_all_stack_7->SetBinContent(4,3.629367);
   VbbHcc_ZMass_all_stack_7->SetBinContent(5,3.330605);
   VbbHcc_ZMass_all_stack_7->SetBinContent(6,5.667288);
   VbbHcc_ZMass_all_stack_7->SetBinContent(7,11.16977);
   VbbHcc_ZMass_all_stack_7->SetBinContent(8,15.9379);
   VbbHcc_ZMass_all_stack_7->SetBinContent(9,25.46157);
   VbbHcc_ZMass_all_stack_7->SetBinContent(10,23.74158);
   VbbHcc_ZMass_all_stack_7->SetBinContent(11,10.72442);
   VbbHcc_ZMass_all_stack_7->SetBinContent(12,3.903502);
   VbbHcc_ZMass_all_stack_7->SetBinContent(13,3.518166);
   VbbHcc_ZMass_all_stack_7->SetBinContent(14,2.083337);
   VbbHcc_ZMass_all_stack_7->SetBinContent(15,2.347304);
   VbbHcc_ZMass_all_stack_7->SetBinContent(16,1.735967);
   VbbHcc_ZMass_all_stack_7->SetBinContent(17,1.38575);
   VbbHcc_ZMass_all_stack_7->SetBinContent(18,0.9723865);
   VbbHcc_ZMass_all_stack_7->SetBinContent(19,2.000077);
   VbbHcc_ZMass_all_stack_7->SetBinContent(20,1.460346);
   VbbHcc_ZMass_all_stack_7->SetBinContent(21,1.577021);
   VbbHcc_ZMass_all_stack_7->SetBinContent(22,1.70104);
   VbbHcc_ZMass_all_stack_7->SetBinContent(23,0.1828711);
   VbbHcc_ZMass_all_stack_7->SetBinContent(24,0.6280824);
   VbbHcc_ZMass_all_stack_7->SetBinContent(25,0.5714353);
   VbbHcc_ZMass_all_stack_7->SetBinContent(26,0.5839139);
   VbbHcc_ZMass_all_stack_7->SetBinContent(27,0.3799594);
   VbbHcc_ZMass_all_stack_7->SetBinContent(28,0.5188643);
   VbbHcc_ZMass_all_stack_7->SetBinContent(29,0.5683094);
   VbbHcc_ZMass_all_stack_7->SetBinContent(30,0.455288);
   VbbHcc_ZMass_all_stack_7->SetBinContent(31,8.794356);
   VbbHcc_ZMass_all_stack_7->SetBinError(2,0.181765);
   VbbHcc_ZMass_all_stack_7->SetBinError(3,0.3721496);
   VbbHcc_ZMass_all_stack_7->SetBinError(4,0.6908458);
   VbbHcc_ZMass_all_stack_7->SetBinError(5,0.6254182);
   VbbHcc_ZMass_all_stack_7->SetBinError(6,0.8480724);
   VbbHcc_ZMass_all_stack_7->SetBinError(7,1.174813);
   VbbHcc_ZMass_all_stack_7->SetBinError(8,1.389966);
   VbbHcc_ZMass_all_stack_7->SetBinError(9,1.811037);
   VbbHcc_ZMass_all_stack_7->SetBinError(10,1.746318);
   VbbHcc_ZMass_all_stack_7->SetBinError(11,1.216577);
   VbbHcc_ZMass_all_stack_7->SetBinError(12,0.7312324);
   VbbHcc_ZMass_all_stack_7->SetBinError(13,0.703318);
   VbbHcc_ZMass_all_stack_7->SetBinError(14,0.46773);
   VbbHcc_ZMass_all_stack_7->SetBinError(15,0.5788457);
   VbbHcc_ZMass_all_stack_7->SetBinError(16,0.4652175);
   VbbHcc_ZMass_all_stack_7->SetBinError(17,0.4444193);
   VbbHcc_ZMass_all_stack_7->SetBinError(18,0.356148);
   VbbHcc_ZMass_all_stack_7->SetBinError(19,0.497129);
   VbbHcc_ZMass_all_stack_7->SetBinError(20,0.3984134);
   VbbHcc_ZMass_all_stack_7->SetBinError(21,0.4171806);
   VbbHcc_ZMass_all_stack_7->SetBinError(22,0.4337935);
   VbbHcc_ZMass_all_stack_7->SetBinError(23,0.1828711);
   VbbHcc_ZMass_all_stack_7->SetBinError(24,0.2924886);
   VbbHcc_ZMass_all_stack_7->SetBinError(25,0.2021966);
   VbbHcc_ZMass_all_stack_7->SetBinError(26,0.2759053);
   VbbHcc_ZMass_all_stack_7->SetBinError(27,0.1967007);
   VbbHcc_ZMass_all_stack_7->SetBinError(28,0.2090729);
   VbbHcc_ZMass_all_stack_7->SetBinError(29,0.2488478);
   VbbHcc_ZMass_all_stack_7->SetBinError(30,0.2443275);
   VbbHcc_ZMass_all_stack_7->SetBinError(31,1.007676);
   VbbHcc_ZMass_all_stack_7->SetEntries(1328);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_ZMass_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_7->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_7,"");
   
   TH1D *VbbHcc_ZMass_all_stack_8 = new TH1D("VbbHcc_ZMass_all_stack_8","",30,0,300);
   VbbHcc_ZMass_all_stack_8->SetBinContent(2,0.6292857);
   VbbHcc_ZMass_all_stack_8->SetBinContent(3,3.000536);
   VbbHcc_ZMass_all_stack_8->SetBinContent(4,11.43095);
   VbbHcc_ZMass_all_stack_8->SetBinContent(5,20.45756);
   VbbHcc_ZMass_all_stack_8->SetBinContent(6,25.78043);
   VbbHcc_ZMass_all_stack_8->SetBinContent(7,39.11876);
   VbbHcc_ZMass_all_stack_8->SetBinContent(8,69.25411);
   VbbHcc_ZMass_all_stack_8->SetBinContent(9,103.2642);
   VbbHcc_ZMass_all_stack_8->SetBinContent(10,80.07087);
   VbbHcc_ZMass_all_stack_8->SetBinContent(11,42.55142);
   VbbHcc_ZMass_all_stack_8->SetBinContent(12,23.09805);
   VbbHcc_ZMass_all_stack_8->SetBinContent(13,18.94273);
   VbbHcc_ZMass_all_stack_8->SetBinContent(14,12.8274);
   VbbHcc_ZMass_all_stack_8->SetBinContent(15,12.56621);
   VbbHcc_ZMass_all_stack_8->SetBinContent(16,13.25934);
   VbbHcc_ZMass_all_stack_8->SetBinContent(17,11.33295);
   VbbHcc_ZMass_all_stack_8->SetBinContent(18,8.045971);
   VbbHcc_ZMass_all_stack_8->SetBinContent(19,6.862788);
   VbbHcc_ZMass_all_stack_8->SetBinContent(20,8.521682);
   VbbHcc_ZMass_all_stack_8->SetBinContent(21,7.294571);
   VbbHcc_ZMass_all_stack_8->SetBinContent(22,6.265555);
   VbbHcc_ZMass_all_stack_8->SetBinContent(23,3.344317);
   VbbHcc_ZMass_all_stack_8->SetBinContent(24,4.184709);
   VbbHcc_ZMass_all_stack_8->SetBinContent(25,3.385435);
   VbbHcc_ZMass_all_stack_8->SetBinContent(26,3.388973);
   VbbHcc_ZMass_all_stack_8->SetBinContent(27,4.109529);
   VbbHcc_ZMass_all_stack_8->SetBinContent(28,3.816847);
   VbbHcc_ZMass_all_stack_8->SetBinContent(29,1.332966);
   VbbHcc_ZMass_all_stack_8->SetBinContent(30,3.109232);
   VbbHcc_ZMass_all_stack_8->SetBinContent(31,30.66435);
   VbbHcc_ZMass_all_stack_8->SetBinError(2,0.3640258);
   VbbHcc_ZMass_all_stack_8->SetBinError(3,0.8028712);
   VbbHcc_ZMass_all_stack_8->SetBinError(4,1.517352);
   VbbHcc_ZMass_all_stack_8->SetBinError(5,2.078368);
   VbbHcc_ZMass_all_stack_8->SetBinError(6,2.31715);
   VbbHcc_ZMass_all_stack_8->SetBinError(7,2.865718);
   VbbHcc_ZMass_all_stack_8->SetBinError(8,3.803008);
   VbbHcc_ZMass_all_stack_8->SetBinError(9,4.61187);
   VbbHcc_ZMass_all_stack_8->SetBinError(10,4.075231);
   VbbHcc_ZMass_all_stack_8->SetBinError(11,2.98604);
   VbbHcc_ZMass_all_stack_8->SetBinError(12,2.190988);
   VbbHcc_ZMass_all_stack_8->SetBinError(13,1.976082);
   VbbHcc_ZMass_all_stack_8->SetBinError(14,1.641255);
   VbbHcc_ZMass_all_stack_8->SetBinError(15,1.613886);
   VbbHcc_ZMass_all_stack_8->SetBinError(16,1.652349);
   VbbHcc_ZMass_all_stack_8->SetBinError(17,1.552138);
   VbbHcc_ZMass_all_stack_8->SetBinError(18,1.299951);
   VbbHcc_ZMass_all_stack_8->SetBinError(19,1.187278);
   VbbHcc_ZMass_all_stack_8->SetBinError(20,1.304649);
   VbbHcc_ZMass_all_stack_8->SetBinError(21,1.240215);
   VbbHcc_ZMass_all_stack_8->SetBinError(22,1.133221);
   VbbHcc_ZMass_all_stack_8->SetBinError(23,0.8257143);
   VbbHcc_ZMass_all_stack_8->SetBinError(24,0.9428445);
   VbbHcc_ZMass_all_stack_8->SetBinError(25,0.8091);
   VbbHcc_ZMass_all_stack_8->SetBinError(26,0.8301971);
   VbbHcc_ZMass_all_stack_8->SetBinError(27,0.9080227);
   VbbHcc_ZMass_all_stack_8->SetBinError(28,0.8827761);
   VbbHcc_ZMass_all_stack_8->SetBinError(29,0.5142188);
   VbbHcc_ZMass_all_stack_8->SetBinError(30,0.8075872);
   VbbHcc_ZMass_all_stack_8->SetBinError(31,2.530239);
   VbbHcc_ZMass_all_stack_8->SetEntries(2883);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_ZMass_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_8->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_8,"");
   
   TH1D *VbbHcc_ZMass_all_stack_9 = new TH1D("VbbHcc_ZMass_all_stack_9","",30,0,300);
   VbbHcc_ZMass_all_stack_9->SetBinContent(2,0.02509948);
   VbbHcc_ZMass_all_stack_9->SetBinContent(3,1.708536);
   VbbHcc_ZMass_all_stack_9->SetBinContent(4,5.89272);
   VbbHcc_ZMass_all_stack_9->SetBinContent(5,8.814329);
   VbbHcc_ZMass_all_stack_9->SetBinContent(6,11.26987);
   VbbHcc_ZMass_all_stack_9->SetBinContent(7,16.47573);
   VbbHcc_ZMass_all_stack_9->SetBinContent(8,25.24006);
   VbbHcc_ZMass_all_stack_9->SetBinContent(9,36.39212);
   VbbHcc_ZMass_all_stack_9->SetBinContent(10,39.83409);
   VbbHcc_ZMass_all_stack_9->SetBinContent(11,39.7164);
   VbbHcc_ZMass_all_stack_9->SetBinContent(12,42.27821);
   VbbHcc_ZMass_all_stack_9->SetBinContent(13,38.48975);
   VbbHcc_ZMass_all_stack_9->SetBinContent(14,24.3781);
   VbbHcc_ZMass_all_stack_9->SetBinContent(15,13.85135);
   VbbHcc_ZMass_all_stack_9->SetBinContent(16,9.397926);
   VbbHcc_ZMass_all_stack_9->SetBinContent(17,7.953818);
   VbbHcc_ZMass_all_stack_9->SetBinContent(18,7.030102);
   VbbHcc_ZMass_all_stack_9->SetBinContent(19,6.41047);
   VbbHcc_ZMass_all_stack_9->SetBinContent(20,5.815458);
   VbbHcc_ZMass_all_stack_9->SetBinContent(21,4.858588);
   VbbHcc_ZMass_all_stack_9->SetBinContent(22,4.543131);
   VbbHcc_ZMass_all_stack_9->SetBinContent(23,4.018162);
   VbbHcc_ZMass_all_stack_9->SetBinContent(24,3.556142);
   VbbHcc_ZMass_all_stack_9->SetBinContent(25,3.28678);
   VbbHcc_ZMass_all_stack_9->SetBinContent(26,2.919886);
   VbbHcc_ZMass_all_stack_9->SetBinContent(27,2.611793);
   VbbHcc_ZMass_all_stack_9->SetBinContent(28,2.370069);
   VbbHcc_ZMass_all_stack_9->SetBinContent(29,2.171297);
   VbbHcc_ZMass_all_stack_9->SetBinContent(30,1.932824);
   VbbHcc_ZMass_all_stack_9->SetBinContent(31,18.13611);
   VbbHcc_ZMass_all_stack_9->SetBinError(2,0.006649004);
   VbbHcc_ZMass_all_stack_9->SetBinError(3,0.05494417);
   VbbHcc_ZMass_all_stack_9->SetBinError(4,0.1020462);
   VbbHcc_ZMass_all_stack_9->SetBinError(5,0.1245211);
   VbbHcc_ZMass_all_stack_9->SetBinError(6,0.1414282);
   VbbHcc_ZMass_all_stack_9->SetBinError(7,0.1714258);
   VbbHcc_ZMass_all_stack_9->SetBinError(8,0.2110546);
   VbbHcc_ZMass_all_stack_9->SetBinError(9,0.253863);
   VbbHcc_ZMass_all_stack_9->SetBinError(10,0.2649955);
   VbbHcc_ZMass_all_stack_9->SetBinError(11,0.2655475);
   VbbHcc_ZMass_all_stack_9->SetBinError(12,0.2742038);
   VbbHcc_ZMass_all_stack_9->SetBinError(13,0.2615115);
   VbbHcc_ZMass_all_stack_9->SetBinError(14,0.2072903);
   VbbHcc_ZMass_all_stack_9->SetBinError(15,0.1557614);
   VbbHcc_ZMass_all_stack_9->SetBinError(16,0.1289806);
   VbbHcc_ZMass_all_stack_9->SetBinError(17,0.1182941);
   VbbHcc_ZMass_all_stack_9->SetBinError(18,0.1111616);
   VbbHcc_ZMass_all_stack_9->SetBinError(19,0.1062667);
   VbbHcc_ZMass_all_stack_9->SetBinError(20,0.1012524);
   VbbHcc_ZMass_all_stack_9->SetBinError(21,0.09255217);
   VbbHcc_ZMass_all_stack_9->SetBinError(22,0.08897851);
   VbbHcc_ZMass_all_stack_9->SetBinError(23,0.08431742);
   VbbHcc_ZMass_all_stack_9->SetBinError(24,0.07909472);
   VbbHcc_ZMass_all_stack_9->SetBinError(25,0.07639953);
   VbbHcc_ZMass_all_stack_9->SetBinError(26,0.07161943);
   VbbHcc_ZMass_all_stack_9->SetBinError(27,0.06805258);
   VbbHcc_ZMass_all_stack_9->SetBinError(28,0.0644531);
   VbbHcc_ZMass_all_stack_9->SetBinError(29,0.06195043);
   VbbHcc_ZMass_all_stack_9->SetBinError(30,0.05796005);
   VbbHcc_ZMass_all_stack_9->SetBinError(31,0.1783484);
   VbbHcc_ZMass_all_stack_9->SetEntries(249013);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_ZMass_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_9->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_9,"");
   
   TH1D *VbbHcc_ZMass_all_stack_10 = new TH1D("VbbHcc_ZMass_all_stack_10","",30,0,300);
   VbbHcc_ZMass_all_stack_10->SetBinContent(2,0.001186205);
   VbbHcc_ZMass_all_stack_10->SetBinContent(3,0.05139711);
   VbbHcc_ZMass_all_stack_10->SetBinContent(4,0.3435833);
   VbbHcc_ZMass_all_stack_10->SetBinContent(5,0.7062582);
   VbbHcc_ZMass_all_stack_10->SetBinContent(6,1.370216);
   VbbHcc_ZMass_all_stack_10->SetBinContent(7,2.707728);
   VbbHcc_ZMass_all_stack_10->SetBinContent(8,5.298184);
   VbbHcc_ZMass_all_stack_10->SetBinContent(9,8.094254);
   VbbHcc_ZMass_all_stack_10->SetBinContent(10,9.0334);
   VbbHcc_ZMass_all_stack_10->SetBinContent(11,8.927597);
   VbbHcc_ZMass_all_stack_10->SetBinContent(12,9.713896);
   VbbHcc_ZMass_all_stack_10->SetBinContent(13,8.719927);
   VbbHcc_ZMass_all_stack_10->SetBinContent(14,5.669896);
   VbbHcc_ZMass_all_stack_10->SetBinContent(15,3.144259);
   VbbHcc_ZMass_all_stack_10->SetBinContent(16,2.342145);
   VbbHcc_ZMass_all_stack_10->SetBinContent(17,2.040627);
   VbbHcc_ZMass_all_stack_10->SetBinContent(18,1.972242);
   VbbHcc_ZMass_all_stack_10->SetBinContent(19,1.740611);
   VbbHcc_ZMass_all_stack_10->SetBinContent(20,1.671214);
   VbbHcc_ZMass_all_stack_10->SetBinContent(21,1.543224);
   VbbHcc_ZMass_all_stack_10->SetBinContent(22,1.389244);
   VbbHcc_ZMass_all_stack_10->SetBinContent(23,1.247338);
   VbbHcc_ZMass_all_stack_10->SetBinContent(24,1.126125);
   VbbHcc_ZMass_all_stack_10->SetBinContent(25,0.9829661);
   VbbHcc_ZMass_all_stack_10->SetBinContent(26,0.8461541);
   VbbHcc_ZMass_all_stack_10->SetBinContent(27,0.8005357);
   VbbHcc_ZMass_all_stack_10->SetBinContent(28,0.6916068);
   VbbHcc_ZMass_all_stack_10->SetBinContent(29,0.6060349);
   VbbHcc_ZMass_all_stack_10->SetBinContent(30,0.5746578);
   VbbHcc_ZMass_all_stack_10->SetBinContent(31,4.842369);
   VbbHcc_ZMass_all_stack_10->SetBinError(2,0.0006865685);
   VbbHcc_ZMass_all_stack_10->SetBinError(3,0.004620678);
   VbbHcc_ZMass_all_stack_10->SetBinError(4,0.01186944);
   VbbHcc_ZMass_all_stack_10->SetBinError(5,0.01702466);
   VbbHcc_ZMass_all_stack_10->SetBinError(6,0.02375842);
   VbbHcc_ZMass_all_stack_10->SetBinError(7,0.03335751);
   VbbHcc_ZMass_all_stack_10->SetBinError(8,0.04660372);
   VbbHcc_ZMass_all_stack_10->SetBinError(9,0.0576742);
   VbbHcc_ZMass_all_stack_10->SetBinError(10,0.06092854);
   VbbHcc_ZMass_all_stack_10->SetBinError(11,0.06048651);
   VbbHcc_ZMass_all_stack_10->SetBinError(12,0.06312586);
   VbbHcc_ZMass_all_stack_10->SetBinError(13,0.05984126);
   VbbHcc_ZMass_all_stack_10->SetBinError(14,0.04830206);
   VbbHcc_ZMass_all_stack_10->SetBinError(15,0.03595939);
   VbbHcc_ZMass_all_stack_10->SetBinError(16,0.03103174);
   VbbHcc_ZMass_all_stack_10->SetBinError(17,0.02889362);
   VbbHcc_ZMass_all_stack_10->SetBinError(18,0.02843026);
   VbbHcc_ZMass_all_stack_10->SetBinError(19,0.0267054);
   VbbHcc_ZMass_all_stack_10->SetBinError(20,0.02623101);
   VbbHcc_ZMass_all_stack_10->SetBinError(21,0.02513235);
   VbbHcc_ZMass_all_stack_10->SetBinError(22,0.02388769);
   VbbHcc_ZMass_all_stack_10->SetBinError(23,0.02263414);
   VbbHcc_ZMass_all_stack_10->SetBinError(24,0.02152513);
   VbbHcc_ZMass_all_stack_10->SetBinError(25,0.02008976);
   VbbHcc_ZMass_all_stack_10->SetBinError(26,0.01864581);
   VbbHcc_ZMass_all_stack_10->SetBinError(27,0.01810907);
   VbbHcc_ZMass_all_stack_10->SetBinError(28,0.01682589);
   VbbHcc_ZMass_all_stack_10->SetBinError(29,0.01578612);
   VbbHcc_ZMass_all_stack_10->SetBinError(30,0.01535232);
   VbbHcc_ZMass_all_stack_10->SetBinError(31,0.04448946);
   VbbHcc_ZMass_all_stack_10->SetEntries(218730);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_ZMass_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_10->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_10,"");
   
   TH1D *VbbHcc_ZMass_all_stack_11 = new TH1D("VbbHcc_ZMass_all_stack_11","",30,0,300);
   VbbHcc_ZMass_all_stack_11->SetBinContent(2,0.003090375);
   VbbHcc_ZMass_all_stack_11->SetBinContent(3,0.06435716);
   VbbHcc_ZMass_all_stack_11->SetBinContent(4,0.2469199);
   VbbHcc_ZMass_all_stack_11->SetBinContent(5,0.3847865);
   VbbHcc_ZMass_all_stack_11->SetBinContent(6,0.5722049);
   VbbHcc_ZMass_all_stack_11->SetBinContent(7,1.088472);
   VbbHcc_ZMass_all_stack_11->SetBinContent(8,2.138106);
   VbbHcc_ZMass_all_stack_11->SetBinContent(9,2.904073);
   VbbHcc_ZMass_all_stack_11->SetBinContent(10,2.426854);
   VbbHcc_ZMass_all_stack_11->SetBinContent(11,1.197993);
   VbbHcc_ZMass_all_stack_11->SetBinContent(12,0.8479116);
   VbbHcc_ZMass_all_stack_11->SetBinContent(13,0.6577279);
   VbbHcc_ZMass_all_stack_11->SetBinContent(14,0.439717);
   VbbHcc_ZMass_all_stack_11->SetBinContent(15,0.356326);
   VbbHcc_ZMass_all_stack_11->SetBinContent(16,0.2598384);
   VbbHcc_ZMass_all_stack_11->SetBinContent(17,0.2619003);
   VbbHcc_ZMass_all_stack_11->SetBinContent(18,0.1648587);
   VbbHcc_ZMass_all_stack_11->SetBinContent(19,0.1650746);
   VbbHcc_ZMass_all_stack_11->SetBinContent(20,0.1333041);
   VbbHcc_ZMass_all_stack_11->SetBinContent(21,0.1563331);
   VbbHcc_ZMass_all_stack_11->SetBinContent(22,0.1210065);
   VbbHcc_ZMass_all_stack_11->SetBinContent(23,0.05556987);
   VbbHcc_ZMass_all_stack_11->SetBinContent(24,0.07213781);
   VbbHcc_ZMass_all_stack_11->SetBinContent(25,0.09808981);
   VbbHcc_ZMass_all_stack_11->SetBinContent(26,0.08322474);
   VbbHcc_ZMass_all_stack_11->SetBinContent(27,0.06590299);
   VbbHcc_ZMass_all_stack_11->SetBinContent(28,0.05701958);
   VbbHcc_ZMass_all_stack_11->SetBinContent(29,0.04297881);
   VbbHcc_ZMass_all_stack_11->SetBinContent(30,0.06955693);
   VbbHcc_ZMass_all_stack_11->SetBinContent(31,0.7011707);
   VbbHcc_ZMass_all_stack_11->SetBinError(2,0.002185225);
   VbbHcc_ZMass_all_stack_11->SetBinError(3,0.01106395);
   VbbHcc_ZMass_all_stack_11->SetBinError(4,0.02219488);
   VbbHcc_ZMass_all_stack_11->SetBinError(5,0.0277291);
   VbbHcc_ZMass_all_stack_11->SetBinError(6,0.0343755);
   VbbHcc_ZMass_all_stack_11->SetBinError(7,0.04723269);
   VbbHcc_ZMass_all_stack_11->SetBinError(8,0.0657878);
   VbbHcc_ZMass_all_stack_11->SetBinError(9,0.07688976);
   VbbHcc_ZMass_all_stack_11->SetBinError(10,0.06970067);
   VbbHcc_ZMass_all_stack_11->SetBinError(11,0.04813541);
   VbbHcc_ZMass_all_stack_11->SetBinError(12,0.04174754);
   VbbHcc_ZMass_all_stack_11->SetBinError(13,0.03558261);
   VbbHcc_ZMass_all_stack_11->SetBinError(14,0.02941267);
   VbbHcc_ZMass_all_stack_11->SetBinError(15,0.02623332);
   VbbHcc_ZMass_all_stack_11->SetBinError(16,0.02349325);
   VbbHcc_ZMass_all_stack_11->SetBinError(17,0.02192324);
   VbbHcc_ZMass_all_stack_11->SetBinError(18,0.01797499);
   VbbHcc_ZMass_all_stack_11->SetBinError(19,0.01810401);
   VbbHcc_ZMass_all_stack_11->SetBinError(20,0.01581319);
   VbbHcc_ZMass_all_stack_11->SetBinError(21,0.01732206);
   VbbHcc_ZMass_all_stack_11->SetBinError(22,0.01505884);
   VbbHcc_ZMass_all_stack_11->SetBinError(23,0.009941377);
   VbbHcc_ZMass_all_stack_11->SetBinError(24,0.01117858);
   VbbHcc_ZMass_all_stack_11->SetBinError(25,0.01336362);
   VbbHcc_ZMass_all_stack_11->SetBinError(26,0.01262625);
   VbbHcc_ZMass_all_stack_11->SetBinError(27,0.01193952);
   VbbHcc_ZMass_all_stack_11->SetBinError(28,0.01003511);
   VbbHcc_ZMass_all_stack_11->SetBinError(29,0.009053275);
   VbbHcc_ZMass_all_stack_11->SetBinError(30,0.01123662);
   VbbHcc_ZMass_all_stack_11->SetBinError(31,0.03622954);
   VbbHcc_ZMass_all_stack_11->SetEntries(9805);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_ZMass_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_11->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_11,"");
   
   TH1D *VbbHcc_ZMass_all_stack_12 = new TH1D("VbbHcc_ZMass_all_stack_12","",30,0,300);
   VbbHcc_ZMass_all_stack_12->SetBinContent(2,0.00076961);
   VbbHcc_ZMass_all_stack_12->SetBinContent(3,0.007066651);
   VbbHcc_ZMass_all_stack_12->SetBinContent(4,0.03744461);
   VbbHcc_ZMass_all_stack_12->SetBinContent(5,0.07490627);
   VbbHcc_ZMass_all_stack_12->SetBinContent(6,0.1576335);
   VbbHcc_ZMass_all_stack_12->SetBinContent(7,0.3400486);
   VbbHcc_ZMass_all_stack_12->SetBinContent(8,0.6602727);
   VbbHcc_ZMass_all_stack_12->SetBinContent(9,0.978361);
   VbbHcc_ZMass_all_stack_12->SetBinContent(10,0.8026408);
   VbbHcc_ZMass_all_stack_12->SetBinContent(11,0.3402421);
   VbbHcc_ZMass_all_stack_12->SetBinContent(12,0.203996);
   VbbHcc_ZMass_all_stack_12->SetBinContent(13,0.188148);
   VbbHcc_ZMass_all_stack_12->SetBinContent(14,0.1505751);
   VbbHcc_ZMass_all_stack_12->SetBinContent(15,0.09453333);
   VbbHcc_ZMass_all_stack_12->SetBinContent(16,0.07594776);
   VbbHcc_ZMass_all_stack_12->SetBinContent(17,0.08002119);
   VbbHcc_ZMass_all_stack_12->SetBinContent(18,0.06878277);
   VbbHcc_ZMass_all_stack_12->SetBinContent(19,0.06570842);
   VbbHcc_ZMass_all_stack_12->SetBinContent(20,0.05826765);
   VbbHcc_ZMass_all_stack_12->SetBinContent(21,0.05095184);
   VbbHcc_ZMass_all_stack_12->SetBinContent(22,0.05168742);
   VbbHcc_ZMass_all_stack_12->SetBinContent(23,0.04709292);
   VbbHcc_ZMass_all_stack_12->SetBinContent(24,0.04287667);
   VbbHcc_ZMass_all_stack_12->SetBinContent(25,0.04073312);
   VbbHcc_ZMass_all_stack_12->SetBinContent(26,0.04091441);
   VbbHcc_ZMass_all_stack_12->SetBinContent(27,0.03439865);
   VbbHcc_ZMass_all_stack_12->SetBinContent(28,0.0287341);
   VbbHcc_ZMass_all_stack_12->SetBinContent(29,0.02262746);
   VbbHcc_ZMass_all_stack_12->SetBinContent(30,0.01852885);
   VbbHcc_ZMass_all_stack_12->SetBinContent(31,0.3242958);
   VbbHcc_ZMass_all_stack_12->SetBinError(2,0.0005441965);
   VbbHcc_ZMass_all_stack_12->SetBinError(3,0.001293486);
   VbbHcc_ZMass_all_stack_12->SetBinError(4,0.003111537);
   VbbHcc_ZMass_all_stack_12->SetBinError(5,0.004233101);
   VbbHcc_ZMass_all_stack_12->SetBinError(6,0.006393879);
   VbbHcc_ZMass_all_stack_12->SetBinError(7,0.009218291);
   VbbHcc_ZMass_all_stack_12->SetBinError(8,0.01285165);
   VbbHcc_ZMass_all_stack_12->SetBinError(9,0.01565433);
   VbbHcc_ZMass_all_stack_12->SetBinError(10,0.01418093);
   VbbHcc_ZMass_all_stack_12->SetBinError(11,0.009153016);
   VbbHcc_ZMass_all_stack_12->SetBinError(12,0.007003861);
   VbbHcc_ZMass_all_stack_12->SetBinError(13,0.00684165);
   VbbHcc_ZMass_all_stack_12->SetBinError(14,0.005996179);
   VbbHcc_ZMass_all_stack_12->SetBinError(15,0.004811785);
   VbbHcc_ZMass_all_stack_12->SetBinError(16,0.004233032);
   VbbHcc_ZMass_all_stack_12->SetBinError(17,0.004436932);
   VbbHcc_ZMass_all_stack_12->SetBinError(18,0.004038863);
   VbbHcc_ZMass_all_stack_12->SetBinError(19,0.003933887);
   VbbHcc_ZMass_all_stack_12->SetBinError(20,0.003748064);
   VbbHcc_ZMass_all_stack_12->SetBinError(21,0.003424597);
   VbbHcc_ZMass_all_stack_12->SetBinError(22,0.003556457);
   VbbHcc_ZMass_all_stack_12->SetBinError(23,0.003416598);
   VbbHcc_ZMass_all_stack_12->SetBinError(24,0.00322624);
   VbbHcc_ZMass_all_stack_12->SetBinError(25,0.00312262);
   VbbHcc_ZMass_all_stack_12->SetBinError(26,0.003135068);
   VbbHcc_ZMass_all_stack_12->SetBinError(27,0.002895478);
   VbbHcc_ZMass_all_stack_12->SetBinError(28,0.00250395);
   VbbHcc_ZMass_all_stack_12->SetBinError(29,0.002319262);
   VbbHcc_ZMass_all_stack_12->SetBinError(30,0.002066403);
   VbbHcc_ZMass_all_stack_12->SetBinError(31,0.008597162);
   VbbHcc_ZMass_all_stack_12->SetEntries(24305);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_ZMass_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all_stack_12->SetLineColor(ci);
   VbbHcc_ZMass_all_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_ZMass_all__7 = new TH1D("VbbHcc_ZMass_all__7","",30,0,300);
   VbbHcc_ZMass_all__7->SetBinContent(2,55);
   VbbHcc_ZMass_all__7->SetBinContent(3,3276);
   VbbHcc_ZMass_all__7->SetBinContent(4,13141);
   VbbHcc_ZMass_all__7->SetBinContent(5,21430);
   VbbHcc_ZMass_all__7->SetBinContent(6,25967);
   VbbHcc_ZMass_all__7->SetBinContent(7,26967);
   VbbHcc_ZMass_all__7->SetBinContent(8,26759);
   VbbHcc_ZMass_all__7->SetBinContent(9,25708);
   VbbHcc_ZMass_all__7->SetBinContent(10,24544);
   VbbHcc_ZMass_all__7->SetBinContent(11,22584);
   VbbHcc_ZMass_all__7->SetBinContent(12,21854);
   VbbHcc_ZMass_all__7->SetBinContent(13,20676);
   VbbHcc_ZMass_all__7->SetBinContent(14,20111);
   VbbHcc_ZMass_all__7->SetBinContent(15,18648);
   VbbHcc_ZMass_all__7->SetBinContent(16,17798);
   VbbHcc_ZMass_all__7->SetBinContent(17,17034);
   VbbHcc_ZMass_all__7->SetBinContent(18,16076);
   VbbHcc_ZMass_all__7->SetBinContent(19,15001);
   VbbHcc_ZMass_all__7->SetBinContent(20,14191);
   VbbHcc_ZMass_all__7->SetBinContent(21,13310);
   VbbHcc_ZMass_all__7->SetBinContent(22,12221);
   VbbHcc_ZMass_all__7->SetBinContent(23,11531);
   VbbHcc_ZMass_all__7->SetBinContent(24,10786);
   VbbHcc_ZMass_all__7->SetBinContent(25,10544);
   VbbHcc_ZMass_all__7->SetBinContent(26,9471);
   VbbHcc_ZMass_all__7->SetBinContent(27,8965);
   VbbHcc_ZMass_all__7->SetBinContent(28,8319);
   VbbHcc_ZMass_all__7->SetBinContent(29,7557);
   VbbHcc_ZMass_all__7->SetBinContent(30,7026);
   VbbHcc_ZMass_all__7->SetBinContent(31,118475);
   VbbHcc_ZMass_all__7->SetBinError(2,7.416198);
   VbbHcc_ZMass_all__7->SetBinError(3,57.23635);
   VbbHcc_ZMass_all__7->SetBinError(4,114.6342);
   VbbHcc_ZMass_all__7->SetBinError(5,146.3899);
   VbbHcc_ZMass_all__7->SetBinError(6,161.1428);
   VbbHcc_ZMass_all__7->SetBinError(7,164.2163);
   VbbHcc_ZMass_all__7->SetBinError(8,163.5818);
   VbbHcc_ZMass_all__7->SetBinError(9,160.3371);
   VbbHcc_ZMass_all__7->SetBinError(10,156.6652);
   VbbHcc_ZMass_all__7->SetBinError(11,150.2797);
   VbbHcc_ZMass_all__7->SetBinError(12,147.831);
   VbbHcc_ZMass_all__7->SetBinError(13,143.7915);
   VbbHcc_ZMass_all__7->SetBinError(14,141.8133);
   VbbHcc_ZMass_all__7->SetBinError(15,136.5577);
   VbbHcc_ZMass_all__7->SetBinError(16,133.4091);
   VbbHcc_ZMass_all__7->SetBinError(17,130.5144);
   VbbHcc_ZMass_all__7->SetBinError(18,126.7912);
   VbbHcc_ZMass_all__7->SetBinError(19,122.4786);
   VbbHcc_ZMass_all__7->SetBinError(20,119.126);
   VbbHcc_ZMass_all__7->SetBinError(21,115.369);
   VbbHcc_ZMass_all__7->SetBinError(22,110.5486);
   VbbHcc_ZMass_all__7->SetBinError(23,107.3825);
   VbbHcc_ZMass_all__7->SetBinError(24,103.8557);
   VbbHcc_ZMass_all__7->SetBinError(25,102.684);
   VbbHcc_ZMass_all__7->SetBinError(26,97.31906);
   VbbHcc_ZMass_all__7->SetBinError(27,94.68368);
   VbbHcc_ZMass_all__7->SetBinError(28,91.20855);
   VbbHcc_ZMass_all__7->SetBinError(29,86.93101);
   VbbHcc_ZMass_all__7->SetBinError(30,83.82124);
   VbbHcc_ZMass_all__7->SetBinError(31,344.202);
   VbbHcc_ZMass_all__7->SetEntries(570025);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_all__7->SetLineColor(ci);
   VbbHcc_ZMass_all__7->SetLineWidth(2);
   VbbHcc_ZMass_all__7->SetMarkerStyle(20);
   VbbHcc_ZMass_all__7->SetMarkerSize(1.2);
   VbbHcc_ZMass_all__7->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_all__7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all__7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all__7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all__7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all__7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all__7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all__7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all__7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_all__7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all__7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_all__7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_all__7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_all__7->GetZaxis()->SetTitleFont(42);
   VbbHcc_ZMass_all__7->Draw("same E");
   
   Double_t Graph_from_VbbHcc_ZMass_all_fx1007[30] = {
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
   295};
   Double_t Graph_from_VbbHcc_ZMass_all_fy1007[30] = {
   0,
   321.0713,
   27126.42,
   107969.3,
   158721.1,
   158622.7,
   140018.9,
   126373.6,
   117582.8,
   104063.3,
   107283.6,
   101859.1,
   100042.6,
   87331.76,
   96268.85,
   80669.19,
   83415.74,
   79484.49,
   69689.07,
   67336.86,
   56507.65,
   52824.76,
   49443.67,
   46132.25,
   36719.48,
   34727.17,
   30071.8,
   24886.69,
   26841.31,
   22276.27};
   Double_t Graph_from_VbbHcc_ZMass_all_fex1007[30] = {
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
   Double_t Graph_from_VbbHcc_ZMass_all_fey1007[30] = {
   0,
   189.9326,
   2538.466,
   5186.896,
   6209.376,
   5991.266,
   5446.143,
   4994.151,
   4840.054,
   4371.472,
   4592.21,
   4433.233,
   4412.457,
   4028.528,
   4435.366,
   3871.037,
   4066.225,
   3995.501,
   3670.277,
   3615.448,
   3269.995,
   3127.651,
   3045.284,
   2942.402,
   2553.395,
   2457.136,
   2218.123,
   1867.314,
   2069.159,
   1857.121};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_ZMass_all_fx1007,Graph_from_VbbHcc_ZMass_all_fy1007,Graph_from_VbbHcc_ZMass_all_fex1007,Graph_from_VbbHcc_ZMass_all_fey1007);
   gre->SetName("Graph_from_VbbHcc_ZMass_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_ZMass_all1007 = new TH1F("Graph_Graph_from_VbbHcc_ZMass_all1007","",100,0,330);
   Graph_Graph_from_VbbHcc_ZMass_all1007->SetMinimum(0);
   Graph_Graph_from_VbbHcc_ZMass_all1007->SetMaximum(181423.6);
   Graph_Graph_from_VbbHcc_ZMass_all1007->SetDirectory(0);
   Graph_Graph_from_VbbHcc_ZMass_all1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_ZMass_all1007->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass_all1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_ZMass_all1007);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_ZMass_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_ZMass_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   ZMass_VbbHcc_all->cd();
  
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",30,0,300);
   data_mc_ratio__8->SetBinContent(2,0.1713015);
   data_mc_ratio__8->SetBinContent(3,0.1207679);
   data_mc_ratio__8->SetBinContent(4,0.1217105);
   data_mc_ratio__8->SetBinContent(5,0.1350167);
   data_mc_ratio__8->SetBinContent(6,0.163703);
   data_mc_ratio__8->SetBinContent(7,0.1925954);
   data_mc_ratio__8->SetBinContent(8,0.2117451);
   data_mc_ratio__8->SetBinContent(9,0.2186374);
   data_mc_ratio__8->SetBinContent(10,0.2358564);
   data_mc_ratio__8->SetBinContent(11,0.2105074);
   data_mc_ratio__8->SetBinContent(12,0.2145513);
   data_mc_ratio__8->SetBinContent(13,0.2066719);
   data_mc_ratio__8->SetBinContent(14,0.2302828);
   data_mc_ratio__8->SetBinContent(15,0.1937075);
   data_mc_ratio__8->SetBinContent(16,0.2206295);
   data_mc_ratio__8->SetBinContent(17,0.2042061);
   data_mc_ratio__8->SetBinContent(18,0.2022533);
   data_mc_ratio__8->SetBinContent(19,0.2152561);
   data_mc_ratio__8->SetBinContent(20,0.2107464);
   data_mc_ratio__8->SetBinContent(21,0.2355433);
   data_mc_ratio__8->SetBinContent(22,0.2313499);
   data_mc_ratio__8->SetBinContent(23,0.2332149);
   data_mc_ratio__8->SetBinContent(24,0.2338061);
   data_mc_ratio__8->SetBinContent(25,0.2871501);
   data_mc_ratio__8->SetBinContent(26,0.272726);
   data_mc_ratio__8->SetBinContent(27,0.2981198);
   data_mc_ratio__8->SetBinContent(28,0.334275);
   data_mc_ratio__8->SetBinContent(29,0.2815436);
   data_mc_ratio__8->SetBinContent(30,0.3154029);
   data_mc_ratio__8->SetBinContent(31,0.4193868);
   data_mc_ratio__8->SetBinError(2,0.02309829);
   data_mc_ratio__8->SetBinError(3,0.002109986);
   data_mc_ratio__8->SetBinError(4,0.00106173);
   data_mc_ratio__8->SetBinError(5,0.0009223088);
   data_mc_ratio__8->SetBinError(6,0.001015888);
   data_mc_ratio__8->SetBinError(7,0.001172815);
   data_mc_ratio__8->SetBinError(8,0.00129443);
   data_mc_ratio__8->SetBinError(9,0.001363611);
   data_mc_ratio__8->SetBinError(10,0.00150548);
   data_mc_ratio__8->SetBinError(11,0.00140077);
   data_mc_ratio__8->SetBinError(12,0.001451329);
   data_mc_ratio__8->SetBinError(13,0.001437302);
   data_mc_ratio__8->SetBinError(14,0.001623845);
   data_mc_ratio__8->SetBinError(15,0.001418503);
   data_mc_ratio__8->SetBinError(16,0.001653781);
   data_mc_ratio__8->SetBinError(17,0.001564625);
   data_mc_ratio__8->SetBinError(18,0.001595169);
   data_mc_ratio__8->SetBinError(19,0.0017575);
   data_mc_ratio__8->SetBinError(20,0.001769105);
   data_mc_ratio__8->SetBinError(21,0.002041652);
   data_mc_ratio__8->SetBinError(22,0.002092743);
   data_mc_ratio__8->SetBinError(23,0.002171815);
   data_mc_ratio__8->SetBinError(24,0.002251259);
   data_mc_ratio__8->SetBinError(25,0.002796445);
   data_mc_ratio__8->SetBinError(26,0.00280239);
   data_mc_ratio__8->SetBinError(27,0.003148587);
   data_mc_ratio__8->SetBinError(28,0.003664952);
   data_mc_ratio__8->SetBinError(29,0.003238702);
   data_mc_ratio__8->SetBinError(30,0.003762805);
   data_mc_ratio__8->SetBinError(31,0.009061559);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(2512.32);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__8->GetXaxis()->SetRange(1,30);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__8->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1008[30] = {
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
   295};
   Double_t Graph_from_mc_statistical_error_fy1008[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1008[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1008[30] = {
   0,
   0.5915587,
   0.09357911,
   0.04804048,
   0.03912129,
   0.03777056,
   0.03889576,
   0.03951893,
   0.04116294,
   0.04200781,
   0.04280439,
   0.04352321,
   0.04410577,
   0.04612902,
   0.0460727,
   0.04798657,
   0.0487465,
   0.05026768,
   0.05266646,
   0.05369196,
   0.05786818,
   0.05920805,
   0.06159097,
   0.06378189,
   0.0695379,
   0.07075545,
   0.07376089,
   0.07503264,
   0.07708858,
   0.0833677};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1008,Graph_from_mc_statistical_error_fy1008,Graph_from_mc_statistical_error_fex1008,Graph_from_mc_statistical_error_fey1008);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1008 = new TH1F("Graph_Graph_from_mc_statistical_error1008","",100,0,330);
   Graph_Graph_from_mc_statistical_error1008->SetMinimum(0.2901295);
   Graph_Graph_from_mc_statistical_error1008->SetMaximum(1.70987);
   Graph_Graph_from_mc_statistical_error1008->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1008->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1008);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   ZMass_VbbHcc_all->cd();
   ZMass_VbbHcc_all->Modified();
   ZMass_VbbHcc_all->cd();
   ZMass_VbbHcc_all->SetSelected(ZMass_VbbHcc_all);
}
