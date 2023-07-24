void Z_dR_Bj0_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Mon Jul 24 10:12:19 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(0,0,1,1);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetFillStyle(4000);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1340.907,6.314516,1339576);
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
   st->SetMaximum(1148080);
   
   TH1F *st_stack_243 = new TH1F("st_stack_243","",30,0,6);
   st_stack_243->SetMinimum(0.01);
   st_stack_243->SetMaximum(1205484);
   st_stack_243->SetDirectory(0);
   st_stack_243->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_243->SetLineColor(ci);
   st_stack_243->GetXaxis()->SetRange(1,30);
   st_stack_243->GetXaxis()->SetLabelFont(42);
   st_stack_243->GetXaxis()->SetLabelSize(0.035);
   st_stack_243->GetXaxis()->SetTitleSize(0.035);
   st_stack_243->GetXaxis()->SetTitleFont(42);
   st_stack_243->GetYaxis()->SetTitle("Events/0.2");
   st_stack_243->GetYaxis()->SetLabelFont(42);
   st_stack_243->GetYaxis()->SetLabelSize(0.05);
   st_stack_243->GetYaxis()->SetTitleSize(0.057);
   st_stack_243->GetYaxis()->SetTitleOffset(1.2);
   st_stack_243->GetYaxis()->SetTitleFont(42);
   st_stack_243->GetZaxis()->SetLabelFont(42);
   st_stack_243->GetZaxis()->SetLabelSize(0.035);
   st_stack_243->GetZaxis()->SetTitleSize(0.035);
   st_stack_243->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_243);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,92985.48);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,332811.8);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,265943.1);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,190563.3);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,140636.8);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,106039);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,85988.25);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,69795.64);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,56851.4);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,49110.84);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,43661.89);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,43163.48);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,40189.9);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,34557.21);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,31629.16);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,31222.39);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,21071.59);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,17382.99);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,15601.52);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,11998.09);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,12663.42);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,10498.91);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,8236.473);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,7403.884);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,5985.683);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,5009.696);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,2828.794);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,4663.164);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,1158.562);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,655.4806);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,913.277);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,2349.246);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,6644.888);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,6344.911);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,5585.584);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,4746.522);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,4462.697);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,4581.669);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,3799.866);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,2701.455);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,2475.841);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,2804.271);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,2409.822);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,2833.096);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,2128.158);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,2010.683);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,2242.287);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,2210.159);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,1367.187);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,1359.681);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,1101.579);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,1249.46);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,1145.257);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,965.5042);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,953.5337);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,812.8044);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,1709.542);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,396.3543);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,1835.286);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,361.4418);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,115.6089);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,358.9779);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(164216);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,394.9365);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,2086.954);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,2654.251);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,2468.051);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,2045.669);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,1692.222);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,1413.371);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,1217.915);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,1025.546);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,901.0783);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,811.3811);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,740.812);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,663.0976);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,580.2664);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,513.2405);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,428.8761);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,356.5349);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,308.6285);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,247.686);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,196.989);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,169.8124);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,129.76);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,102.2875);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,74.79415);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,59.09682);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,43.32884);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,29.96071);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,20.81663);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,14.62081);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,11.32761);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,15.7625);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,8.342426);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,18.60723);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,20.92763);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,20.30708);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,18.36271);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,16.74143);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,15.34352);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,14.2664);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,13.04453);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,12.17198);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,11.52651);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,11.08381);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,10.43841);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,9.766897);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,9.252563);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,8.437418);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,7.720729);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,7.200931);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,6.464025);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,5.761271);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,5.484519);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,4.753766);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,4.201181);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,3.654817);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,3.180904);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,2.813387);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,2.309432);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,1.999591);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,1.568209);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,1.50911);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,1.766902);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(233695);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,4189.613);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,28886.96);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,44760.65);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,45023.13);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,38578.22);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,30973.67);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,25236.87);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,21060.06);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,18410.47);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,16592.84);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,15268.53);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,14041.02);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,12538.26);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,10887.79);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,9247.932);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,7776.827);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,6335.197);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,5086.364);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,4069.257);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,3197.127);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,2487.257);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,1857.246);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,1390.3);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,1019.619);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,720.7101);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,501.3044);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,334.0089);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,206.8524);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,139.1391);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,88.53936);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,148.2956);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,16.14552);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,42.40955);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,52.90458);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,53.117);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,49.18458);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,44.05516);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,39.76591);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,36.32486);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,33.97493);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,32.25844);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,30.96554);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,29.70757);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,28.06683);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,26.15378);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,24.10098);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,22.09314);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,19.93911);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,17.85221);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,15.96346);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,14.14506);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,12.46729);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,10.77006);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,9.312705);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,7.965145);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,6.691139);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,5.576339);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,4.553187);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,3.580788);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,2.933155);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,2.342361);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,3.023723);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(6104032);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,819.8044);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,2748.356);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,2665.678);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,1803.464);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,1115.339);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,827.9614);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,617.9837);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,519.6812);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,442.9315);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,409.8818);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,357.4169);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,299.4231);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,289.7982);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,253.3729);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,238.2174);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,208.9071);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,191.9092);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,165.8097);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,149.3434);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,132.9122);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,97.26533);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,81.74967);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,71.0148);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,62.11849);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,49.42769);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,35.41051);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,22.02805);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,16.31864);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,8.009967);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,5.285103);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,6.2058);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,11.20286);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,31.74167);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,33.08231);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,29.59109);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,24.95262);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,22.02054);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,16.50508);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,14.1853);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,13.93844);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,13.65464);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,10.48325);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,10.92392);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,10.46175);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,11.11307);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,10.34317);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,9.191774);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,9.731029);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,9.436147);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,9.987378);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,8.918058);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,4.926584);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,4.545578);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,4.06887);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,5.49552);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,3.404532);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,2.665563);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,1.952102);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,1.890684);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,1.174169);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,1.053431);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,1.113953);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(94684);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,533.2376);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,1395.833);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,1164.974);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,757.7632);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,575.9888);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,435.5185);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,339.6952);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,292.9657);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,245.3036);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,196.6594);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,226.0028);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,195.4694);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,129.2372);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,126.3276);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,143.6963);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,135.9387);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,92.40257);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,73.65656);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,79.58282);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,57.74978);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,68.34826);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,47.5925);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,34.50442);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,35.45304);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,25.64062);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,16.55288);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,18.13291);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,12.87552);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,3.064967);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,1.446688);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,2.659172);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,25.63499);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,37.92082);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,39.61488);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,32.26776);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,29.92888);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,24.44337);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,23.66636);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,21.2854);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,22.44176);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,12.41499);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,18.14865);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,19.13608);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,8.742637);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,10.35538);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,15.0637);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,17.94626);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,8.610727);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,7.093765);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,12.93832);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,5.895335);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,7.863233);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,6.678703);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,4.305263);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,5.163052);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,4.939485);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,3.29306);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,3.899699);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,3.774767);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.7071944);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.4613341);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.7061845);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(40778);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,1.445242);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(2,8.382402);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,5.491919);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(4,3.179532);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,2.312387);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(6,3.179532);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,2.601435);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(8,3.46858);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(9,1.445242);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(10,1.73429);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,2.023338);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(12,1.156193);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(13,1.156193);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(14,1.156193);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(15,1.445242);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(16,0.2890483);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(17,0.2890483);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(18,1.156193);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(19,0.2890483);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(22,0.5780967);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(23,0.5780967);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.6463317);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(2,1.556573);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,1.259933);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(4,0.9586649);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.8175522);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(6,0.9586649);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.867145);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(8,1.001293);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(9,0.6463317);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(10,0.708021);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.76475);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(12,0.5780967);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(13,0.5780967);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(14,0.5780967);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(15,0.6463317);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(16,0.2890483);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(17,0.2890483);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(18,0.5780967);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(19,0.2890483);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(22,0.4087761);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(23,0.4087761);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,9.951867);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,30.27026);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,21.56238);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,13.68382);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,5.390595);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,1.243983);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,3.317289);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,2.695297);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(9,2.695297);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,3.109959);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,2.487967);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,1.451314);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(13,1.451314);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(14,0.8293223);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(15,1.243983);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,0.6219917);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(17,0.6219917);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(18,0.6219917);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(19,0.8293223);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(20,0.6219917);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(21,0.8293223);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(22,0.6219917);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,1.243983);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(25,0.2073306);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(26,0.6219917);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(27,0.2073306);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,1.436428);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,2.505185);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,2.114365);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,1.684361);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,1.057183);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.5078541);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.8293223);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.747541);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(9,0.747541);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.8029878);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.7182142);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.5485451);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(13,0.5485451);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(14,0.4146611);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(15,0.5078541);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.3591071);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(17,0.3591071);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(18,0.3591071);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(19,0.4146611);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(20,0.3591071);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(21,0.4146611);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(22,0.3591071);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.5078541);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(25,0.2073306);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(26,0.3591071);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(27,0.2073306);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,7.007035);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,23.082);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,21.43328);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,15.2506);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,8.24357);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,5.976588);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,4.740053);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,3.503517);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,3.503517);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,3.297428);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,3.091339);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,1.854803);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,1.854803);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,1.236536);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,0.824357);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,1.236536);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,1.648714);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,1.236536);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,1.030446);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.2060893);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(21,0.6182678);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(22,1.236536);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.4121785);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.2060893);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.2060893);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,1.201697);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,2.181044);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,2.101706);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,1.772847);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,1.303423);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,1.109825);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.9883693);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.8497278);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.8497278);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.824357);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.7981802);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.6182678);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.6182678);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.5048135);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.4121785);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.5048135);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.5829084);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.5048135);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.4608296);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.2060893);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(21,0.3569571);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(22,0.5048135);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.2914542);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.2060893);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.2060893);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(548);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,2.957798);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,13.84268);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,15.66673);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,12.33863);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,8.155658);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,5.469868);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,3.885824);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,2.905225);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,2.722362);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,2.432068);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,2.29035);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,2.038915);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,1.842338);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,1.506328);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,1.302894);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,1.142889);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.836595);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.8023083);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.6560185);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.4320122);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.4114402);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.3977255);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.3565815);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.2857223);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.2057201);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.1394325);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.09143115);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.03428668);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.02057201);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.009143115);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.08222451);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.17788);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1892371);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.1679386);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.1365358);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.1118164);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.09424507);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.08149049);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.0788842);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.07455984);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.07235491);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.06826791);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.06489357);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.05867821);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.05457222);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.05111156);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.04372952);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.04282405);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.03872355);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.03142426);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.03066694);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.03015149);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.02854937);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.02555578);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.0216848);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.0178525);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.01445653);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.008852783);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.006857336);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.004571557);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,3.086241);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,12.96913);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,15.59276);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,12.49638);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,8.399678);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,5.434455);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,3.591175);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,2.764919);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,2.33331);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,1.990527);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,1.861164);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,1.646551);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,1.431343);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,1.347883);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,1.10406);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.9597929);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.8363909);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.7225273);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.6325095);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.5341456);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.4888386);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.3892824);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.366629);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.2670728);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.2104391);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.1454593);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.08644097);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.0441147);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.0226535);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.01251904);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.00774988);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.04289343);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.08792881);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.09641338);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.08631137);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.07076315);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.05691855);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.04626943);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.04059916);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.03729598);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.03444767);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.0333095);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.03133022);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.02921109);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.02834666);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.02565501);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.02392019);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.02232958);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.02075405);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.01941822);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.01784455);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.01707098);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.0152338);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.01478391);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.012618);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.01120054);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.009312077);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.007178532);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.00512823);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.003674882);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.002731878);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.00214943);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.143373);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.6008011);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.421016);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.2116459);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.1479245);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.08647895);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.047791);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.05461829);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.05006676);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.06372133);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.04551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.05234252);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(13,0.02503338);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.03186067);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(15,0.03641219);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(16,0.03641219);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.01137881);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(19,0.009103048);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(20,0.009103048);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(21,0.01137881);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(22,0.01593033);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(24,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(25,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.0180633);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.03697675);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.03095371);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.02194665);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.01834778);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.01402874);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.01042885);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.01114891);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.01067427);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.0120422);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.01017752);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.01091417);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(13,0.007547848);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.008515121);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(15,0.009103048);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(16,0.009103048);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.005088758);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(19,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(20,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(21,0.005088758);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(22,0.0060211);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(23,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(24,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(25,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(26,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(28,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.05573616);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.2702904);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.2478162);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.1321486);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.06112999);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.03835607);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.03146396);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.02756843);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.02037666);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.01917804);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.0152825);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.01408387);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.01648112);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.01228593);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.01288524);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.01048799);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.008690047);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.008989704);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.003895538);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.004794509);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.004794509);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.00659245);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.00659245);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.003595882);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.004494852);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(26,0.002397254);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(28,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(29,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.004086774);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.008999687);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.008617413);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.006292793);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.004279955);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.00339023);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.003070568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.002874207);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.002471033);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.002397254);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.002139978);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.002054343);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.002222314);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.00191874);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.001964981);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.001772794);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.001613701);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.001641288);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.001080428);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.001198627);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.001405515);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.001405515);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.001038042);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.001160566);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(26,0.0008475574);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(28,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(29,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__485 = new TH1D("VbbHcc_both_Z_dR_Bj0__485","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(1,124252);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(2,516636);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(3,467167);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(4,346960);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(5,267025);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(6,209367);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(7,169307);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(8,141064);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(9,119962);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(10,105768);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(11,95191);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(12,86190);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(13,77830);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(14,69842);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(15,61720);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(16,54393);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(17,45391);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(18,37843);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(19,32271);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(20,27755);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(21,23078);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(22,19288);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(23,16023);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(24,12818);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(25,9822);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(26,7188);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(27,4790);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(28,3140);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(29,1939);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(30,1200);
   VbbHcc_both_Z_dR_Bj0__485->SetBinContent(31,1954);
   VbbHcc_both_Z_dR_Bj0__485->SetEntries(3157203);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__485->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__485->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__485->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__485->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__485->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__485->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__485->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__485->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__485->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__485->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__485->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__485->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__485->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__485->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__485->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__485->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__485->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__485->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__485->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1485[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1485[30] = {
   98947.72,
   368019.3,
   317269.1,
   240673,
   182984.8,
   139989.8,
   113614.4,
   92901.68,
   76988.42,
   67223.95,
   60337.03,
   58448.42,
   53818.07,
   46411.09,
   41778.21,
   39777.23,
   28051.88,
   23022.01,
   20150.84,
   15584.67,
   15488.47,
   12618.5,
   9836.305,
   8597.88,
   6841.399,
   5607.204,
   3233.311,
   4920.109,
   1323.441,
   762.0945};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1485[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1485[30] = {
   2349.483,
   6645.235,
   6345.377,
   5586.046,
   4746.973,
   4463.067,
   4581.959,
   3800.153,
   2701.83,
   2476.151,
   2804.544,
   2410.132,
   2833.287,
   2128.395,
   2010.932,
   2242.502,
   2210.301,
   1367.373,
   1359.888,
   1101.737,
   1249.568,
   1145.346,
   965.5765,
   953.604,
   812.8603,
   1709.559,
   396.4112,
   1835.296,
   361.4597,
   115.6482};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1485,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1485);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetMinimum(581.8016);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetMaximum(412066.4);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01485);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__486 = new TH1D("data_mc_ratio__486","",30,0,6);
   data_mc_ratio__486->SetBinContent(1,1.255734);
   data_mc_ratio__486->SetBinContent(2,1.403828);
   data_mc_ratio__486->SetBinContent(3,1.472463);
   data_mc_ratio__486->SetBinContent(4,1.441624);
   data_mc_ratio__486->SetBinContent(5,1.459275);
   data_mc_ratio__486->SetBinContent(6,1.495588);
   data_mc_ratio__486->SetBinContent(7,1.49019);
   data_mc_ratio__486->SetBinContent(8,1.518422);
   data_mc_ratio__486->SetBinContent(9,1.558182);
   data_mc_ratio__486->SetBinContent(10,1.573368);
   data_mc_ratio__486->SetBinContent(11,1.577655);
   data_mc_ratio__486->SetBinContent(12,1.474634);
   data_mc_ratio__486->SetBinContent(13,1.446168);
   data_mc_ratio__486->SetBinContent(14,1.504856);
   data_mc_ratio__486->SetBinContent(15,1.477325);
   data_mc_ratio__486->SetBinContent(16,1.36744);
   data_mc_ratio__486->SetBinContent(17,1.618109);
   data_mc_ratio__486->SetBinContent(18,1.643775);
   data_mc_ratio__486->SetBinContent(19,1.601472);
   data_mc_ratio__486->SetBinContent(20,1.780916);
   data_mc_ratio__486->SetBinContent(21,1.490012);
   data_mc_ratio__486->SetBinContent(22,1.528549);
   data_mc_ratio__486->SetBinContent(23,1.628965);
   data_mc_ratio__486->SetBinContent(24,1.490833);
   data_mc_ratio__486->SetBinContent(25,1.435671);
   data_mc_ratio__486->SetBinContent(26,1.281922);
   data_mc_ratio__486->SetBinContent(27,1.481453);
   data_mc_ratio__486->SetBinContent(28,0.6381972);
   data_mc_ratio__486->SetBinContent(29,1.465121);
   data_mc_ratio__486->SetBinContent(30,1.574608);
   data_mc_ratio__486->SetBinContent(31,1.798904);
   data_mc_ratio__486->SetBinError(1,0.003562426);
   data_mc_ratio__486->SetBinError(2,0.001953087);
   data_mc_ratio__486->SetBinError(3,0.002154311);
   data_mc_ratio__486->SetBinError(4,0.002447442);
   data_mc_ratio__486->SetBinError(5,0.002823976);
   data_mc_ratio__486->SetBinError(6,0.00326857);
   data_mc_ratio__486->SetBinError(7,0.003621631);
   data_mc_ratio__486->SetBinError(8,0.004042821);
   data_mc_ratio__486->SetBinError(9,0.004498797);
   data_mc_ratio__486->SetBinError(10,0.004837858);
   data_mc_ratio__486->SetBinError(11,0.00511345);
   data_mc_ratio__486->SetBinError(12,0.005022913);
   data_mc_ratio__486->SetBinError(13,0.005183766);
   data_mc_ratio__486->SetBinError(14,0.005694251);
   data_mc_ratio__486->SetBinError(15,0.005946523);
   data_mc_ratio__486->SetBinError(16,0.00586323);
   data_mc_ratio__486->SetBinError(17,0.007594915);
   data_mc_ratio__486->SetBinError(18,0.008449859);
   data_mc_ratio__486->SetBinError(19,0.00891483);
   data_mc_ratio__486->SetBinError(20,0.01068988);
   data_mc_ratio__486->SetBinError(21,0.009808229);
   data_mc_ratio__486->SetBinError(22,0.01100616);
   data_mc_ratio__486->SetBinError(23,0.01286886);
   data_mc_ratio__486->SetBinError(24,0.01316797);
   data_mc_ratio__486->SetBinError(25,0.01448622);
   data_mc_ratio__486->SetBinError(26,0.0151202);
   data_mc_ratio__486->SetBinError(27,0.02140525);
   data_mc_ratio__486->SetBinError(28,0.01138912);
   data_mc_ratio__486->SetBinError(29,0.03327243);
   data_mc_ratio__486->SetBinError(30,0.04545501);
   data_mc_ratio__486->SetBinError(31,0.5959334);
   data_mc_ratio__486->SetMinimum(0.4);
   data_mc_ratio__486->SetMaximum(1.6);
   data_mc_ratio__486->SetEntries(2845.988);
   data_mc_ratio__486->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__486->SetLineColor(ci);
   data_mc_ratio__486->SetLineWidth(2);
   data_mc_ratio__486->SetMarkerStyle(20);
   data_mc_ratio__486->SetMarkerSize(1.2);
   data_mc_ratio__486->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__486->GetXaxis()->SetRange(1,30);
   data_mc_ratio__486->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__486->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__486->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__486->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__486->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__486->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__486->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__486->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__486->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__486->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__486->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__486->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__486->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__486->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1486[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1486[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1486[30] = {
   0.0237447,
   0.01805675,
   0.01999998,
   0.02321011,
   0.0259419,
   0.03188138,
   0.04032904,
   0.0409051,
   0.03509398,
   0.03683435,
   0.04648131,
   0.04123519,
   0.05264564,
   0.04585963,
   0.0481335,
   0.05637652,
   0.07879331,
   0.05939417,
   0.06748544,
   0.07069361,
   0.08067733,
   0.09076719,
   0.09816456,
   0.1109115,
   0.1188149,
   0.3048861,
   0.1226023,
   0.3730193,
   0.2731212,
   0.1517505};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1486,Graph_from_mc_statistical_error_fy1486,Graph_from_mc_statistical_error_fex1486,Graph_from_mc_statistical_error_fey1486);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1486 = new TH1F("Graph_Graph_from_mc_statistical_error1486","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1486->SetMinimum(0.5523769);
   Graph_Graph_from_mc_statistical_error1486->SetMaximum(1.447623);
   Graph_Graph_from_mc_statistical_error1486->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1486->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1486->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1486);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}
