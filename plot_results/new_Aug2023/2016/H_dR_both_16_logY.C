void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:18:17 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(0,0,1,1);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.838153,6.525,11.26199);
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
   st->SetMaximum(2.176461e+09);
   
   TH1F *st_stack_213 = new TH1F("st_stack_213","",30,0,6);
   st_stack_213->SetMinimum(0.001499503);
   st_stack_213->SetMaximum(7.111696e+09);
   st_stack_213->SetDirectory(0);
   st_stack_213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_213->SetLineColor(ci);
   st_stack_213->GetXaxis()->SetRange(1,31);
   st_stack_213->GetXaxis()->SetLabelFont(42);
   st_stack_213->GetXaxis()->SetLabelSize(0.035);
   st_stack_213->GetXaxis()->SetTitleSize(0.035);
   st_stack_213->GetXaxis()->SetTitleFont(42);
   st_stack_213->GetYaxis()->SetTitle("Events/0.2");
   st_stack_213->GetYaxis()->SetLabelFont(42);
   st_stack_213->GetYaxis()->SetLabelSize(0.05);
   st_stack_213->GetYaxis()->SetTitleSize(0.057);
   st_stack_213->GetYaxis()->SetTitleOffset(1.2);
   st_stack_213->GetYaxis()->SetTitleFont(42);
   st_stack_213->GetZaxis()->SetLabelFont(42);
   st_stack_213->GetZaxis()->SetLabelSize(0.035);
   st_stack_213->GetZaxis()->SetTitleSize(0.035);
   st_stack_213->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_213);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,5.084611);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,9239.111);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,7889.993);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,6129.504);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,4908.327);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,5736.19);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,5642.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,5337.081);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,7789.423);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,4857.698);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,7226.197);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,9945.723);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,11213.62);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,14589.99);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,13375.18);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,7009.714);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,3956.463);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,2841.024);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2709.402);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,2252.281);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,832.5661);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,220.8444);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,135.5415);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,273.7632);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,23.52951);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,5.084611);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,1575.295);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1310.052);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1224.928);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,802.1043);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1484.491);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1330.083);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,891.948);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,1436.688);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,715.185);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1036.251);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1811.64);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1820.827);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1798.231);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,1782.881);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1366.531);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,672.4662);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,589.5313);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,622.4267);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,1100.611);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,301.8758);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,55.48975);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,46.34506);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,217.6745);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,18.29624);
   VbbHcc_both_H_dR_stack_1->SetEntries(9183);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,14.21891);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,21.22922);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,20.40719);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,22.10646);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,24.35466);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,27.86489);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,34.50877);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,30.17345);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,35.02518);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,41.0956);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,43.43272);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,52.06358);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,59.07346);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,55.1727);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,35.64293);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,18.81205);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,12.22914);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,10.11581);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,7.197857);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,3.891404);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,2.982659);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,1.205702);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.8104312);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.2820459);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.03296462);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.2678546);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,1.463814);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,1.792017);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,1.746775);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,1.769216);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,1.862357);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,1.984904);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,2.351764);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,2.060319);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,2.238129);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,2.466012);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,2.442933);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,2.727351);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,2.954504);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,2.816732);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,2.256374);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,1.498026);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,1.32389);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,1.190695);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.8731161);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.6481529);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.5744388);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.3129038);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.2643923);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.1004623);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.03296462);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.2429695);
   VbbHcc_both_H_dR_stack_2->SetEntries(9517);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.4213861);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,287.2477);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,451.2086);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,515.3604);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,568.0309);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,607.6108);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,628.5065);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,649.0769);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,688.2099);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,744.6633);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,827.6149);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,919.6626);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,984.5672);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,1082.133);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,1044.893);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,604.7361);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,378.9411);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,247.7215);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,157.9232);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,99.28488);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,56.2641);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,34.80079);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,16.26175);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,9.66808);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,3.283731);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,1.497014);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,0.3337707);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.1442879);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,4.01027);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,5.003695);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,5.303741);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,5.546509);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,5.70724);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,5.786644);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,5.853272);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,6.030991);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,6.269973);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,6.618646);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,7.000209);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,7.248676);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,7.611036);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,7.499487);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,5.683012);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,4.489829);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,3.610688);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,2.870582);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,2.273965);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,1.713081);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,1.330765);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,0.8991235);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,0.6981275);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.4072708);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.2819134);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.1218015);
   VbbHcc_both_H_dR_stack_3->SetEntries(232621);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(2,0.02707554);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,64.27311);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,94.2389);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,77.0967);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,72.19474);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,69.08301);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,64.95044);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,82.48438);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,79.86091);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,97.60601);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,114.9015);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,118.4181);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,127.3051);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,164.4266);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,152.1429);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,72.97529);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,54.29443);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,27.41438);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,17.14468);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,14.7778);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,8.405896);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,4.543057);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,1.166798);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,0.6511425);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.2927137);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.09128735);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,0.06054755);
   VbbHcc_both_H_dR_stack_4->SetBinError(2,0.02707554);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,2.989556);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,4.865423);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,3.807838);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,5.523604);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,5.464485);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,5.209791);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,6.390952);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,5.955246);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,6.450222);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,7.510976);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,6.58687);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,6.226607);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,8.873205);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,6.897691);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,4.837219);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,4.715634);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,3.13876);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,2.206718);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,3.021013);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.583118);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,0.8349976);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.4153437);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.2912422);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.1322153);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.06551001);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.06054755);
   VbbHcc_both_H_dR_stack_4->SetEntries(15013);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,7.374693);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,8.273672);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,12.05122);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,4.856293);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,7.408298);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,5.19733);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,7.84279);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,5.604373);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,10.01803);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,9.193823);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,11.8672);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,17.30932);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,16.87807);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,14.91774);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,8.983922);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,5.612979);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,3.128149);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,3.251853);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,2.395461);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,0.7527153);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.2854361);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,1.349275);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,0.05686358);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.051958);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,1.553947);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,5.720858);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,0.9583018);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,1.495866);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,0.6926048);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,1.736633);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,0.6848583);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,1.713974);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,1.412418);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,1.703582);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,5.53201);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.171788);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.098311);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,1.37583);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.076211);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.536708);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,0.984507);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.001539);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.234358);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.1327119);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.8324876);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,0.05686358);
   VbbHcc_both_H_dR_stack_5->SetEntries(3486);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(5,0.1195687);
   VbbHcc_both_H_dR_stack_6->SetBinContent(9,0.1243737);
   VbbHcc_both_H_dR_stack_6->SetBinContent(12,0.2487954);
   VbbHcc_both_H_dR_stack_6->SetBinContent(13,0.1142782);
   VbbHcc_both_H_dR_stack_6->SetBinContent(15,0.2531828);
   VbbHcc_both_H_dR_stack_6->SetBinContent(17,0.3247794);
   VbbHcc_both_H_dR_stack_6->SetBinError(5,0.1195687);
   VbbHcc_both_H_dR_stack_6->SetBinError(9,0.1243737);
   VbbHcc_both_H_dR_stack_6->SetBinError(12,0.1763999);
   VbbHcc_both_H_dR_stack_6->SetBinError(13,0.1142782);
   VbbHcc_both_H_dR_stack_6->SetBinError(15,0.1790835);
   VbbHcc_both_H_dR_stack_6->SetBinError(17,0.1913236);
   VbbHcc_both_H_dR_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.6681028);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.26109);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.1827233);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.1584265);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.177352);
   VbbHcc_both_H_dR_stack_7->SetBinContent(8,0.1943154);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.1730083);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.2720608);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.1759776);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.3584957);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,0.3449823);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.2667138);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.5513148);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.2419888);
   VbbHcc_both_H_dR_stack_7->SetBinContent(18,0.1772511);
   VbbHcc_both_H_dR_stack_7->SetBinContent(22,0.09353649);
   VbbHcc_both_H_dR_stack_7->SetBinContent(25,0.0686903);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.2537862);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.1507716);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.1292113);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.1120588);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.1254595);
   VbbHcc_both_H_dR_stack_7->SetBinError(8,0.137456);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.1229465);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.1578516);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.1251979);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.1793222);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,0.17314);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.1547797);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.2256159);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.1480706);
   VbbHcc_both_H_dR_stack_7->SetBinError(18,0.1259673);
   VbbHcc_both_H_dR_stack_7->SetBinError(22,0.09353649);
   VbbHcc_both_H_dR_stack_7->SetBinError(25,0.0686903);
   VbbHcc_both_H_dR_stack_7->SetEntries(49);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,1.689837);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,3.550909);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,3.904395);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.639332);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.404753);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,0.9359275);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,0.7120157);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.343537);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,1.336779);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,1.943685);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,0.8306547);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,2.099811);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,4.521913);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,2.525404);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.094208);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,0.8812702);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.6275142);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.2093602);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,0.5988263);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,0.8687827);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,0.8985472);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.7377469);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.5334213);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.4714634);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.3649017);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.5118687);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.5517233);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.6506214);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.4177057);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.653435);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,0.9734563);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,0.7214147);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.4569468);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.4411938);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.3634065);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.2093602);
   VbbHcc_both_H_dR_stack_8->SetEntries(158);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,1.55514);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,2.860613);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,3.097369);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,2.620838);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,1.871216);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,1.397532);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,0.9725567);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,0.9189422);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.025104);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,1.331674);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,1.79069);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,2.356794);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,2.940073);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,2.901935);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.007329);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.3418872);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.1384207);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.07157791);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.04719281);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.01886794);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.01031393);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.005452216);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002032795);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.04285435);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.05718448);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.05905033);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.05342019);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.04461497);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.0379355);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.03182093);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.03137874);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.03299736);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.0380086);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.04435167);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.05112119);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.05686186);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.05697556);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.03320002);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.01955745);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.01235292);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.008765437);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.007213225);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.004589852);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.003290662);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.00244036);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.001438294);
   VbbHcc_both_H_dR_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.5597447);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.192739);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,1.392978);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,1.343089);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.045756);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,0.7876059);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.5897016);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.5270603);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.5929673);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,0.7438585);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,0.8755547);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.017809);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.150406);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.110254);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.4590406);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.2000048);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.09508065);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.05181575);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.02987178);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.01561024);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.007072915);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.004240977);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.002036013);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.000677755);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0003242378);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.01409889);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.02033273);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.02165941);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.02109365);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.01851005);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.01610458);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.014028);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.01330654);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.01409679);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.01579129);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.01709659);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.01844207);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.01965662);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.01930796);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.0123928);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.008200492);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.005663641);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.004161967);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.003182447);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.002290383);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.001521719);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001192382);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.0008334811);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0004792731);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0003242378);
   VbbHcc_both_H_dR_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.006864318);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.01356885);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.007848424);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.005169042);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.00218387);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.008411953);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.004122407);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.002422398);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.006351877);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.001765897);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.008585443);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.006196313);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.002123896);
   VbbHcc_both_H_dR_stack_11->SetBinContent(23,0.001982459);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.003964777);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.005552035);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.003969299);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.003734477);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.00218387);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.004217589);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.00292035);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.002422398);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003667628);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.001765897);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.004297181);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003602834);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.002123896);
   VbbHcc_both_H_dR_stack_11->SetBinError(23,0.001982459);
   VbbHcc_both_H_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.0009164049);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.002473659);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.004390781);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.002053439);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.005298104);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.002216701);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.001505524);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.001764459);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.001625453);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.003315006);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.002168737);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003745272);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.00172729);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.004273287);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.000810064);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.0002692078);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0005292107);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.0008366868);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001135276);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.0007780981);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001218441);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.0007633071);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0006744183);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.0007208597);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.0006674002);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.0009587317);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0007710596);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001043154);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.0007058883);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001108095);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0004685847);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0002692078);
   VbbHcc_both_H_dR_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__584 = new TH1D("VbbHcc_both_H_dR__584","",30,0,6);
   VbbHcc_both_H_dR__584->SetBinContent(2,2);
   VbbHcc_both_H_dR__584->SetBinContent(3,4620);
   VbbHcc_both_H_dR__584->SetBinContent(4,5079);
   VbbHcc_both_H_dR__584->SetBinContent(5,4153);
   VbbHcc_both_H_dR__584->SetBinContent(6,4128);
   VbbHcc_both_H_dR__584->SetBinContent(7,4310);
   VbbHcc_both_H_dR__584->SetBinContent(8,4440);
   VbbHcc_both_H_dR__584->SetBinContent(9,4823);
   VbbHcc_both_H_dR__584->SetBinContent(10,5069);
   VbbHcc_both_H_dR__584->SetBinContent(11,5667);
   VbbHcc_both_H_dR__584->SetBinContent(12,6377);
   VbbHcc_both_H_dR__584->SetBinContent(13,7145);
   VbbHcc_both_H_dR__584->SetBinContent(14,8157);
   VbbHcc_both_H_dR__584->SetBinContent(15,9024);
   VbbHcc_both_H_dR__584->SetBinContent(16,9304);
   VbbHcc_both_H_dR__584->SetBinContent(17,5768);
   VbbHcc_both_H_dR__584->SetBinContent(18,3806);
   VbbHcc_both_H_dR__584->SetBinContent(19,2649);
   VbbHcc_both_H_dR__584->SetBinContent(20,1870);
   VbbHcc_both_H_dR__584->SetBinContent(21,1276);
   VbbHcc_both_H_dR__584->SetBinContent(22,793);
   VbbHcc_both_H_dR__584->SetBinContent(23,497);
   VbbHcc_both_H_dR__584->SetBinContent(24,293);
   VbbHcc_both_H_dR__584->SetBinContent(25,151);
   VbbHcc_both_H_dR__584->SetBinContent(26,57);
   VbbHcc_both_H_dR__584->SetBinContent(27,24);
   VbbHcc_both_H_dR__584->SetBinContent(28,9);
   VbbHcc_both_H_dR__584->SetEntries(99520);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__584->SetLineColor(ci);
   VbbHcc_both_H_dR__584->SetLineWidth(2);
   VbbHcc_both_H_dR__584->SetMarkerStyle(20);
   VbbHcc_both_H_dR__584->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__584->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__584->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__584->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__584->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__584->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__584->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__584->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__584->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__584->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__584->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__584->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__584->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__584->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__584->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__584->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1425[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1425[30] = {
   0,
   5.533072,
   9616.699,
   8472.818,
   6763.134,
   5582.287,
   6449.156,
   6372.239,
   6113.402,
   8596.24,
   5748.242,
   8223.451,
   11043.08,
   12400.69,
   15921.64,
   14649.4,
   7735.182,
   4415.725,
   3132.378,
   2898.171,
   2376.014,
   902.0082,
   263.4757,
   155.5347,
   285.0204,
   27.39072,
   1.62159,
   0.6621728,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1425[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1425[30] = {
   0,
   5.086729,
   1575.304,
   1310.073,
   1224.96,
   802.1454,
   1484.514,
   1330.107,
   891.995,
   1436.715,
   715.2474,
   1036.304,
   1811.668,
   1820.863,
   1798.273,
   1782.913,
   1366.554,
   672.5004,
   589.5526,
   622.4392,
   1100.618,
   301.8857,
   55.51512,
   46.36418,
   217.676,
   18.30153,
   0.2912962,
   0.2784525,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1425,Graph_from_VbbHcc_both_H_dR_fy1425,Graph_from_VbbHcc_both_H_dR_fex1425,Graph_from_VbbHcc_both_H_dR_fey1425);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1425 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1425","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetMinimum(19.49191);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetMaximum(19491.91);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1425);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   H_dR_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__585 = new TH1D("data_mc_ratio__585","",30,0,6);
   data_mc_ratio__585->SetBinContent(2,0.3614628);
   data_mc_ratio__585->SetBinContent(3,0.4804143);
   data_mc_ratio__585->SetBinContent(4,0.5994464);
   data_mc_ratio__585->SetBinContent(5,0.6140644);
   data_mc_ratio__585->SetBinContent(6,0.7394819);
   data_mc_ratio__585->SetBinContent(7,0.6683045);
   data_mc_ratio__585->SetBinContent(8,0.6967724);
   data_mc_ratio__585->SetBinContent(9,0.7889224);
   data_mc_ratio__585->SetBinContent(10,0.5896764);
   data_mc_ratio__585->SetBinContent(11,0.9858667);
   data_mc_ratio__585->SetBinContent(12,0.7754652);
   data_mc_ratio__585->SetBinContent(13,0.6470114);
   data_mc_ratio__585->SetBinContent(14,0.6577862);
   data_mc_ratio__585->SetBinContent(15,0.5667756);
   data_mc_ratio__585->SetBinContent(16,0.6351112);
   data_mc_ratio__585->SetBinContent(17,0.7456838);
   data_mc_ratio__585->SetBinContent(18,0.8619197);
   data_mc_ratio__585->SetBinContent(19,0.8456833);
   data_mc_ratio__585->SetBinContent(20,0.6452346);
   data_mc_ratio__585->SetBinContent(21,0.5370339);
   data_mc_ratio__585->SetBinContent(22,0.8791495);
   data_mc_ratio__585->SetBinContent(23,1.886322);
   data_mc_ratio__585->SetBinContent(24,1.883824);
   data_mc_ratio__585->SetBinContent(25,0.5297866);
   data_mc_ratio__585->SetBinContent(26,2.080997);
   data_mc_ratio__585->SetBinContent(27,14.80029);
   data_mc_ratio__585->SetBinContent(28,13.59162);
   data_mc_ratio__585->SetBinError(2,0.2555928);
   data_mc_ratio__585->SetBinError(3,0.007067974);
   data_mc_ratio__585->SetBinError(4,0.008411264);
   data_mc_ratio__585->SetBinError(5,0.009528685);
   data_mc_ratio__585->SetBinError(6,0.01150953);
   data_mc_ratio__585->SetBinError(7,0.01017972);
   data_mc_ratio__585->SetBinError(8,0.01045682);
   data_mc_ratio__585->SetBinError(9,0.01135993);
   data_mc_ratio__585->SetBinError(10,0.008282332);
   data_mc_ratio__585->SetBinError(11,0.01309609);
   data_mc_ratio__585->SetBinError(12,0.00971078);
   data_mc_ratio__585->SetBinError(13,0.007654394);
   data_mc_ratio__585->SetBinError(14,0.007283155);
   data_mc_ratio__585->SetBinError(15,0.00596639);
   data_mc_ratio__585->SetBinError(16,0.006584381);
   data_mc_ratio__585->SetBinError(17,0.00981843);
   data_mc_ratio__585->SetBinError(18,0.01397116);
   data_mc_ratio__585->SetBinError(19,0.01643111);
   data_mc_ratio__585->SetBinError(20,0.01492096);
   data_mc_ratio__585->SetBinError(21,0.01503406);
   data_mc_ratio__585->SetBinError(22,0.03121951);
   data_mc_ratio__585->SetBinError(23,0.08461311);
   data_mc_ratio__585->SetBinError(24,0.1100542);
   data_mc_ratio__585->SetBinError(25,0.04311342);
   data_mc_ratio__585->SetBinError(26,0.2756348);
   data_mc_ratio__585->SetBinError(27,3.021096);
   data_mc_ratio__585->SetBinError(28,4.530539);
   data_mc_ratio__585->SetMinimum(0.4);
   data_mc_ratio__585->SetMaximum(1.6);
   data_mc_ratio__585->SetEntries(33.18814);
   data_mc_ratio__585->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__585->SetLineColor(ci);
   data_mc_ratio__585->SetLineWidth(2);
   data_mc_ratio__585->SetMarkerStyle(20);
   data_mc_ratio__585->SetMarkerSize(1.2);
   data_mc_ratio__585->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__585->GetXaxis()->SetRange(1,31);
   data_mc_ratio__585->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__585->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__585->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__585->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__585->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__585->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__585->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__585->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__585->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__585->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__585->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__585->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__585->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__585->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__585->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__585->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__585->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1426[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1426[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1426[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1426[30] = {
   0,
   0.9193318,
   0.1638092,
   0.1546208,
   0.1811232,
   0.1436948,
   0.2301873,
   0.2087347,
   0.1459081,
   0.1671329,
   0.1244289,
   0.1260181,
   0.1640546,
   0.1468356,
   0.1129452,
   0.1217055,
   0.1766673,
   0.1522967,
   0.1882125,
   0.2147697,
   0.4632203,
   0.3346817,
   0.210703,
   0.2980954,
   0.7637207,
   0.6681654,
   0.1796362,
   0.4205133,
   0,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1426,Graph_from_mc_statistical_error_fy1426,Graph_from_mc_statistical_error_fex1426,Graph_from_mc_statistical_error_fey1426);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1426 = new TH1F("Graph_Graph_from_mc_statistical_error1426","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1426->SetMinimum(0.07260134);
   Graph_Graph_from_mc_statistical_error1426->SetMaximum(2.103198);
   Graph_Graph_from_mc_statistical_error1426->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1426->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1426->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1426);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
