void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Mon Jul 24 10:11:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(0,0,1,1);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-44.25065,6.525,44216.4);
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
   st->SetMaximum(37895.56);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(0.01);
   st_stack_119->SetMaximum(39790.33);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetRange(1,31);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetLabelSize(0.035);
   st_stack_119->GetXaxis()->SetTitleSize(0.035);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.2");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetLabelSize(0.05);
   st_stack_119->GetYaxis()->SetTitleSize(0.057);
   st_stack_119->GetYaxis()->SetTitleOffset(1.2);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetLabelSize(0.035);
   st_stack_119->GetZaxis()->SetTitleSize(0.035);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,12989.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,12346.99);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,8214.743);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,7670.505);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,6304.134);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,7252.076);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,7669.559);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,8025.243);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,10358.65);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,12170.03);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,8927.14);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,8973.501);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,11431.53);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,11878.45);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,11396.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,11041.34);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,7936.03);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,7655.125);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,6726.021);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,6356.759);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,5257.293);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,3305.516);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,2484.495);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,1981.938);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,2008.575);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,1849.804);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,803.1208);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,339.612);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,334.1561);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,1610.759);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,1467.34);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,1140.481);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,1129.837);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,872.6825);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,1022.099);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,1189.279);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,1138.813);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,3265.401);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,2745.08);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,1177.986);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,1189.348);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,1361.849);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,2142.26);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,1498.689);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,1407.593);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,1059.172);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,1018.214);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,993.7023);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,1152.912);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,1037.935);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,681.9115);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,611.1028);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,453.7117);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,602.1705);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,750.7135);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,132.6227);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,78.50799);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,85.41147);
   VbbHcc_algo_H_dR_stack_1->SetEntries(13324);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,67.05961);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,80.77152);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,42.12008);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,38.2032);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,35.78068);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,40.70285);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,43.99777);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,72.51465);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,80.02773);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,88.34476);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,98.2445);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,110.4956);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,119.1409);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,117.3523);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,109.6168);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,101.1238);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,107.2165);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,93.8965);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,75.99754);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,65.7405);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,41.38947);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,32.9776);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,20.72353);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,16.24701);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,13.86149);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,11.8854);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,8.319142);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,5.926235);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,3.4092);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,4.383679);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,4.576527);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,3.175397);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,2.942417);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,2.802294);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,5.39115);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,2.905928);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,4.396044);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,3.951749);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,4.354275);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,4.325693);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,4.671404);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,4.725039);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,4.622314);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,4.267534);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,3.944916);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,4.895049);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,4.079844);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,3.614116);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,3.394931);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.700625);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.319751);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.78648);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,1.687954);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,1.881787);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,1.605502);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,1.355195);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,1.040591);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,0.7644096);
   VbbHcc_algo_H_dR_stack_2->SetEntries(21685);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,0.2821841);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,607.5724);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,1061.803);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,1008.294);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,864.8349);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,792.3668);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,769.8953);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,789.8266);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,870.8827);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,967.4797);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,1079.759);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,1156.99);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,1142.794);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,1123.468);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,1094.422);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,1024.492);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,963.1195);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,925.976);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,849.5765);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,723.8455);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,611.9044);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,478.2214);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,382.2385);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,301.6431);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,244.3901);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,204.2835);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,166.8709);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,130.7163);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,75.65373);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,58.3079);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.1612976);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,6.926682);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,9.650512);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,8.79565);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,8.156898);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,7.938502);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,7.584168);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,7.946752);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,8.761866);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,9.22664);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,9.0771);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,9.818175);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,9.475535);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,9.464411);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,9.174302);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,9.199566);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,8.408097);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,9.539926);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,8.099726);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,7.418328);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,6.767884);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,6.102094);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,5.718418);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,4.784196);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,4.283212);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,4.002229);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,3.565174);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,3.066212);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,2.442578);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,2.014123);
   VbbHcc_algo_H_dR_stack_3->SetEntries(319331);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,102.1591);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,103.3007);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,105.4276);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,79.47099);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,68.83059);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,71.22123);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,85.27905);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,71.96388);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,69.04191);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,78.21635);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,82.92628);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,77.40195);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,79.47267);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,80.28827);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,85.01507);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,78.58496);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,76.97127);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,64.44043);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,58.53433);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,39.74054);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,34.71685);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,34.29086);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,24.38938);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,27.98528);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,12.12258);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,16.79074);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,15.31946);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,11.33208);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,5.178264);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,8.893444);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,6.068614);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,11.09167);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,6.933552);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,5.132724);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,6.44896);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,10.62271);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,5.166631);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,5.323044);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,6.992114);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,5.28046);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,6.477803);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,6.928836);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,7.407536);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,8.335918);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,6.585888);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,8.536748);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,8.405097);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,4.496009);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,3.856613);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,5.307837);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,5.288505);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,3.651869);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,6.254017);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,2.028516);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,4.828418);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,5.121456);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,4.395493);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,1.424393);
   VbbHcc_algo_H_dR_stack_4->SetEntries(8300);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(2,0.1408283);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,47.61753);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,81.04063);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,55.83822);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,34.18952);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,30.79835);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,24.85077);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,49.15703);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,53.56621);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,43.53595);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,35.63004);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,36.33198);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,45.76718);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,47.9366);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,35.90836);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,42.43704);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,44.48512);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,34.9516);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,27.00023);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,16.83852);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,24.30717);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,10.07779);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,13.48065);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,9.953609);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,8.853968);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,6.679414);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,6.717342);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,8.345989);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,3.776001);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,1.027745);
   VbbHcc_algo_H_dR_stack_5->SetBinError(2,0.1408283);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,5.129782);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,11.87072);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,9.329849);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,6.655922);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,5.665104);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,4.919145);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,8.610155);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,14.53407);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,7.392451);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,6.265266);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,5.335914);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,7.425943);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,8.663445);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,5.908223);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,12.8898);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,12.25128);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,6.81551);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,5.713663);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,3.428665);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,11.66389);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,2.611663);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,3.524929);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,2.618366);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,2.850837);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,2.4692);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,2.890539);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,3.38878);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,1.069329);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,0.3884744);
   VbbHcc_algo_H_dR_stack_5->SetEntries(3417);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,0.3366028);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,0.4233786);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,0.3044658);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,0.419823);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,0.5189149);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.2709334);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.3366028);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.4233786);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.3044658);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.419823);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.3000556);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.2709334);
   VbbHcc_algo_H_dR_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,2.394587);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,4.843212);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,1.523537);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,0.3703745);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,0.4472728);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,0.7846456);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,1.430644);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,0.2032833);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,0.6977084);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,0.280205);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,1.058089);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,0.2352945);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,0.4116964);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,0.3026994);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,0.6102363);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,0.7507283);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,0.3185327);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,1.176191);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,0.194337);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,0.2148387);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.1716828);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,0.2183893);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,0.7852372);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,0.695358);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(31,0.2306934);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,0.7699253);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,1.080865);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,0.5861576);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,0.2737107);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.2848363);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.4547087);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.5901498);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.2032833);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.4041053);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.280205);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.4793176);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.2352945);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,0.267386);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.3026994);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.3567864);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.4378289);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.2402552);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.5397853);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.194337);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.2148387);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.1716828);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.2183893);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.4569698);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.4020434);
   VbbHcc_algo_H_dR_stack_7->SetBinError(31,0.2306934);
   VbbHcc_algo_H_dR_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,1.572881);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,5.612995);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,4.115777);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,0.6210932);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,0.7020644);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,0.7997202);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,0.5282762);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,1.046149);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,0.2263142);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,0.4425281);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,0.6817592);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,0.2478375);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,0.4264433);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,0.2191845);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,0.5494993);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,0.2214053);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,0.7112581);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,0.8403869);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,0.2399952);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,0.5484553);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,0.367177);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,0.5099375);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,0.4331686);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,0.6945934);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,0.430181);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,0.5993965);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,1.136988);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,0.9873851);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,0.3641761);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,0.4074553);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,0.4646133);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,0.3767805);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,0.5291489);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,0.2263142);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.3129166);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,0.4091076);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,0.2478375);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,0.3019534);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,0.2191845);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,0.3950311);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,0.2214053);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,0.4123792);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.4371546);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,0.2399952);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.3896082);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.2659641);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.3653064);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.3080806);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.4056779);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.304315);
   VbbHcc_algo_H_dR_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.00246295);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,1.677525);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,2.367167);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,1.781926);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,0.9149126);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,0.4337917);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,0.3050638);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,0.2906053);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,0.3404143);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,0.379129);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,0.4515093);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,0.3905717);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,0.4275316);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,0.2992426);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,0.3669848);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,0.3314986);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,0.318209);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,0.2522677);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,0.2897284);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,0.2233932);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,0.1456879);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,0.1231573);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.1002221);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,0.1018935);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,0.1017426);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,0.1830562);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,0.1634178);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.1748724);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.1123262);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.08151923);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.00246295);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.0694511);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.08645284);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.07057555);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.05086921);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.03538049);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.03481579);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.02776387);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.03171134);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.04988565);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.05195658);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.03290452);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.03402228);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.02859142);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.03194991);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.02978286);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.02971689);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.0277678);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.03131723);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.0241544);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.01889563);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.01782388);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.01595153);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.01631389);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.01630092);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.02452456);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.02176515);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.0223284);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.01841668);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.01537212);
   VbbHcc_algo_H_dR_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,0.5564677);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,1.105251);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,1.165978);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,0.9211949);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,0.6153257);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,0.3855081);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,0.3182906);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,0.3054258);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,0.3284323);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,0.3827079);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,0.3765178);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,0.3738636);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,0.3387256);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,0.2856296);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,0.288611);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,0.2554172);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,0.3011214);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,0.270926);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,0.2547302);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.2025042);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.1786335);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.1537517);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.1352138);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.1336282);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.1247329);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.1305862);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.1191874);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.06247849);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.04160383);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.01883345);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.0265585);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.02737314);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.02435183);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.01987156);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.01572852);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.01419183);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.01394509);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.01446086);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.01555861);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.01544775);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.01539627);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.01465666);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.01345496);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.01354062);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.01273047);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.01381397);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.01309391);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.01271944);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.01134311);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.01058594);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.009850296);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.009218322);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.009197789);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.008908144);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.009138164);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.00874165);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.006320186);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.00513896);
   VbbHcc_algo_H_dR_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.02552026);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.06560278);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.1116874);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.1309502);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.06322006);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.0332234);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.0197934);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.005027599);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.005774972);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.002397148);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.003533727);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.0133502);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.003974032);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.005688171);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.009566298);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.0102854);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.01165239);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.004804524);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.005114911);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.003272863);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.001255088);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.002477707);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,-0.002002356);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.006868942);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.009919239);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.009111729);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.01059134);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(30,0.009284008);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.0008006592);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.008174186);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.0138896);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01817807);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01909856);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.01274484);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.009529506);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.0067237);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.003556385);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.004133466);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.002397148);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.002671161);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.006014205);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.0028693);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.004051627);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.004810522);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.005212122);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.005861396);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.003400071);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.003616965);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.003272863);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.001255088);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.002477707);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.003108945);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.004156362);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.005318458);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.00532661);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.00531351);
   VbbHcc_algo_H_dR_stack_11->SetBinError(30,0.004902876);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.003067621);
   VbbHcc_algo_H_dR_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.004089381);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.01923433);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.03076588);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.04993438);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.03242753);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.01089863);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.009554332);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.003120661);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.004995);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.003703455);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.003244939);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.001484306);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.002601864);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.001989517);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.002497107);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.004685367);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.001848306);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.002601846);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.002044601);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.002175721);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.001265552);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.003373917);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.003742053);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.005031186);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.006091246);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.003574317);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.001987451);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.000601436);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.001176688);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.001244032);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.002622658);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.003274664);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.004571079);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.003750757);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.001917771);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001852931);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.001014339);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.001292906);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.001153781);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.001093117);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.0007535994);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.0008940044);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.0007980133);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.0009250192);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.001407661);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.0008492541);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.0009175058);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.0008413088);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.0008978082);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.0007317391);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001134485);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001141054);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001325535);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.001490081);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.001135347);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0008227146);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0004262041);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0006867008);
   VbbHcc_algo_H_dR_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__237 = new TH1D("VbbHcc_algo_H_dR__237","",30,0,6);
   VbbHcc_algo_H_dR__237->SetBinContent(2,2);
   VbbHcc_algo_H_dR__237->SetBinContent(3,12712);
   VbbHcc_algo_H_dR__237->SetBinContent(4,14987);
   VbbHcc_algo_H_dR__237->SetBinContent(5,12285);
   VbbHcc_algo_H_dR__237->SetBinContent(6,11754);
   VbbHcc_algo_H_dR__237->SetBinContent(7,11793);
   VbbHcc_algo_H_dR__237->SetBinContent(8,12131);
   VbbHcc_algo_H_dR__237->SetBinContent(9,12664);
   VbbHcc_algo_H_dR__237->SetBinContent(10,13006);
   VbbHcc_algo_H_dR__237->SetBinContent(11,13586);
   VbbHcc_algo_H_dR__237->SetBinContent(12,15064);
   VbbHcc_algo_H_dR__237->SetBinContent(13,16011);
   VbbHcc_algo_H_dR__237->SetBinContent(14,16802);
   VbbHcc_algo_H_dR__237->SetBinContent(15,17053);
   VbbHcc_algo_H_dR__237->SetBinContent(16,16783);
   VbbHcc_algo_H_dR__237->SetBinContent(17,15783);
   VbbHcc_algo_H_dR__237->SetBinContent(18,14913);
   VbbHcc_algo_H_dR__237->SetBinContent(19,13836);
   VbbHcc_algo_H_dR__237->SetBinContent(20,12272);
   VbbHcc_algo_H_dR__237->SetBinContent(21,10748);
   VbbHcc_algo_H_dR__237->SetBinContent(22,8739);
   VbbHcc_algo_H_dR__237->SetBinContent(23,7150);
   VbbHcc_algo_H_dR__237->SetBinContent(24,5816);
   VbbHcc_algo_H_dR__237->SetBinContent(25,4604);
   VbbHcc_algo_H_dR__237->SetBinContent(26,3445);
   VbbHcc_algo_H_dR__237->SetBinContent(27,2804);
   VbbHcc_algo_H_dR__237->SetBinContent(28,2301);
   VbbHcc_algo_H_dR__237->SetBinContent(29,1933);
   VbbHcc_algo_H_dR__237->SetBinContent(30,1193);
   VbbHcc_algo_H_dR__237->SetBinContent(31,901);
   VbbHcc_algo_H_dR__237->SetEntries(303100);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__237->SetLineColor(ci);
   VbbHcc_algo_H_dR__237->SetLineWidth(2);
   VbbHcc_algo_H_dR__237->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__237->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__237->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__237->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__237->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__237->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__237->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__237->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__237->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__237->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__237->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__237->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__237->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__237->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__237->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__237->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__237->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1237[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1237[30] = {
   0,
   0.4254754,
   13820.04,
   13687.92,
   9435.489,
   8690.212,
   7234.628,
   8161.065,
   8640.416,
   9096.074,
   11520.38,
   13453.85,
   10304.15,
   10351.26,
   12803.45,
   13208.13,
   12660.25,
   12230.21,
   9082.742,
   8692.894,
   7602.157,
   7099.568,
   5822.175,
   3769.131,
   2841.953,
   2280.313,
   2246.541,
   2053.591,
   966.8237,
   436.4847};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1237[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1237[30] = {
   0,
   0.2141392,
   1610.812,
   1467.44,
   1140.612,
   1129.912,
   872.7569,
   1022.174,
   1189.387,
   1138.96,
   3265.43,
   2745.114,
   1178.059,
   1189.436,
   1361.936,
   2142.305,
   1498.802,
   1407.693,
   1059.283,
   1018.305,
   993.7527,
   1153.003,
   1037.973,
   681.9691,
   611.1407,
   453.7873,
   602.1953,
   750.745,
   132.8078,
   78.68302};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1237,Graph_from_VbbHcc_algo_H_dR_fy1237,Graph_from_VbbHcc_algo_H_dR_fex1237,Graph_from_VbbHcc_algo_H_dR_fey1237);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1237 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1237","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetMaximum(17818.86);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1237);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_algo_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__238 = new TH1D("data_mc_ratio__238","",30,0,6);
   data_mc_ratio__238->SetBinContent(2,4.700624);
   data_mc_ratio__238->SetBinContent(3,0.919824);
   data_mc_ratio__238->SetBinContent(4,1.094907);
   data_mc_ratio__238->SetBinContent(5,1.301999);
   data_mc_ratio__238->SetBinContent(6,1.352556);
   data_mc_ratio__238->SetBinContent(7,1.630077);
   data_mc_ratio__238->SetBinContent(8,1.486448);
   data_mc_ratio__238->SetBinContent(9,1.46567);
   data_mc_ratio__238->SetBinContent(10,1.429848);
   data_mc_ratio__238->SetBinContent(11,1.179301);
   data_mc_ratio__238->SetBinContent(12,1.11968);
   data_mc_ratio__238->SetBinContent(13,1.553841);
   data_mc_ratio__238->SetBinContent(14,1.623184);
   data_mc_ratio__238->SetBinContent(15,1.331907);
   data_mc_ratio__238->SetBinContent(16,1.270657);
   data_mc_ratio__238->SetBinContent(17,1.246657);
   data_mc_ratio__238->SetBinContent(18,1.219357);
   data_mc_ratio__238->SetBinContent(19,1.523328);
   data_mc_ratio__238->SetBinContent(20,1.411728);
   data_mc_ratio__238->SetBinContent(21,1.413809);
   data_mc_ratio__238->SetBinContent(22,1.23092);
   data_mc_ratio__238->SetBinContent(23,1.228063);
   data_mc_ratio__238->SetBinContent(24,1.543061);
   data_mc_ratio__238->SetBinContent(25,1.620013);
   data_mc_ratio__238->SetBinContent(26,1.510757);
   data_mc_ratio__238->SetBinContent(27,1.248141);
   data_mc_ratio__238->SetBinContent(28,1.120476);
   data_mc_ratio__238->SetBinContent(29,1.99933);
   data_mc_ratio__238->SetBinContent(30,2.7332);
   data_mc_ratio__238->SetBinContent(31,2.238871);
   data_mc_ratio__238->SetBinError(2,3.323843);
   data_mc_ratio__238->SetBinError(3,0.008158265);
   data_mc_ratio__238->SetBinError(4,0.008943756);
   data_mc_ratio__238->SetBinError(5,0.0117469);
   data_mc_ratio__238->SetBinError(6,0.01247563);
   data_mc_ratio__238->SetBinError(7,0.01501053);
   data_mc_ratio__238->SetBinError(8,0.01349589);
   data_mc_ratio__238->SetBinError(9,0.01302419);
   data_mc_ratio__238->SetBinError(10,0.0125377);
   data_mc_ratio__238->SetBinError(11,0.01011763);
   data_mc_ratio__238->SetBinError(12,0.009122706);
   data_mc_ratio__238->SetBinError(13,0.01227997);
   data_mc_ratio__238->SetBinError(14,0.01252239);
   data_mc_ratio__238->SetBinError(15,0.01019937);
   data_mc_ratio__238->SetBinError(16,0.009808296);
   data_mc_ratio__238->SetBinError(17,0.009923213);
   data_mc_ratio__238->SetBinError(18,0.009985008);
   data_mc_ratio__238->SetBinError(19,0.01295055);
   data_mc_ratio__238->SetBinError(20,0.01274363);
   data_mc_ratio__238->SetBinError(21,0.01363726);
   data_mc_ratio__238->SetBinError(22,0.01316737);
   data_mc_ratio__238->SetBinError(23,0.01452338);
   data_mc_ratio__238->SetBinError(24,0.0202335);
   data_mc_ratio__238->SetBinError(25,0.0238754);
   data_mc_ratio__238->SetBinError(26,0.0257395);
   data_mc_ratio__238->SetBinError(27,0.02357082);
   data_mc_ratio__238->SetBinError(28,0.02335847);
   data_mc_ratio__238->SetBinError(29,0.04547457);
   data_mc_ratio__238->SetBinError(30,0.07913183);
   data_mc_ratio__238->SetBinError(31,0.4812101);
   data_mc_ratio__238->SetMinimum(0.4);
   data_mc_ratio__238->SetMaximum(1.6);
   data_mc_ratio__238->SetEntries(108.3216);
   data_mc_ratio__238->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__238->SetLineColor(ci);
   data_mc_ratio__238->SetLineWidth(2);
   data_mc_ratio__238->SetMarkerStyle(20);
   data_mc_ratio__238->SetMarkerSize(1.2);
   data_mc_ratio__238->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__238->GetXaxis()->SetRange(1,31);
   data_mc_ratio__238->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__238->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__238->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__238->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__238->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__238->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__238->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__238->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1238[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1238[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1238[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1238[30] = {
   0,
   0.503294,
   0.1165563,
   0.1072069,
   0.1208854,
   0.1300212,
   0.120636,
   0.1252501,
   0.1376539,
   0.1252144,
   0.283448,
   0.2040394,
   0.1143287,
   0.1149074,
   0.1063726,
   0.162196,
   0.1183864,
   0.1150996,
   0.1166259,
   0.1171423,
   0.1307198,
   0.1624046,
   0.1782792,
   0.1809354,
   0.2150425,
   0.1990022,
   0.2680545,
   0.3655767,
   0.137365,
   0.1802652};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1238,Graph_from_mc_statistical_error_fy1238,Graph_from_mc_statistical_error_fex1238,Graph_from_mc_statistical_error_fey1238);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1238 = new TH1F("Graph_Graph_from_mc_statistical_error1238","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1238->SetMinimum(0.3960472);
   Graph_Graph_from_mc_statistical_error1238->SetMaximum(1.603953);
   Graph_Graph_from_mc_statistical_error1238->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1238->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1238);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
