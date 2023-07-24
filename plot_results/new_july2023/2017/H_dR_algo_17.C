void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Mon Jul 24 10:11:42 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(0,0,1,1);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-33.82008,6.525,33796.26);
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
   st->SetMaximum(28965);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(30413.25);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetRange(1,31);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetLabelSize(0.035);
   st_stack_118->GetXaxis()->SetTitleSize(0.035);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.2");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetLabelSize(0.05);
   st_stack_118->GetYaxis()->SetTitleSize(0.057);
   st_stack_118->GetYaxis()->SetTitleOffset(1.2);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetLabelSize(0.035);
   st_stack_118->GetZaxis()->SetTitleSize(0.035);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,10115.98);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,9888.145);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,8164.31);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,7719.75);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,5025.877);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,5987.881);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,6084.524);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,9604.703);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,8667.903);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,8749.899);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,11921.19);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,9017.881);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,9673.848);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,8815.627);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,8232.364);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,8717.958);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,6427.111);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,7405.356);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,5066.624);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,5400.059);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,4035.857);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,2705.535);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,2864.874);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,3619.019);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,2254.342);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,2454.136);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,1737.003);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,1243.673);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,1113.37);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,1230.235);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,1288.01);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,1229.673);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,1172.416);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,846.699);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,916.6247);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,928.8704);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,1294.25);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,1249.646);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,1269.813);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,2402.705);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,1176.016);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,1139.82);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,1091.861);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,1073.99);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,1671.055);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,901.0558);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,1717.649);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,1085.058);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,914.7625);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,792.8954);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,788.3106);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,713.0113);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,853.5801);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,675.6174);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,746.7926);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,520.3775);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,449.1766);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,485.4023);
   VbbHcc_algo_H_dR_stack_1->SetEntries(13510);

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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.05467641);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,50.54358);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,61.3792);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,48.27014);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,34.53553);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,32);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,38.79679);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,46.22895);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,49.44893);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,60.21029);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,76.03541);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,90.98682);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,81.52508);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,89.17393);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,95.90888);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,85.52645);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,80.93436);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,74.77033);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,66.8683);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,61.23514);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,47.29319);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,38.86334);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,28.26853);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,19.26265);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,19.09418);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,12.13492);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,11.50609);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,10.53815);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,5.377805);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,5.708658);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.05467641);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,3.610976);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,3.891664);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,3.352706);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,2.610175);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,2.406047);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,2.794083);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,2.964694);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,2.918023);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,3.261796);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,3.853084);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,4.099931);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,3.734783);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,3.884641);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,4.038289);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,3.574158);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,3.664189);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,3.503617);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,3.260083);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,3.181628);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,2.779769);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.496473);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.124128);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.709755);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,1.806479);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,1.400436);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,1.524144);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,1.441733);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,1.034141);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,1.113376);
   VbbHcc_algo_H_dR_stack_2->SetEntries(19837);

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
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,0.4195533);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,447.5958);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,797.8618);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,824.1083);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,722.3696);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,678.1349);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,670.3259);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,699.1924);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,755.7301);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,805.8694);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,857.6038);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,921.3201);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,901.4494);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,879.211);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,836.9955);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,772.4017);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,746.4154);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,718.7043);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,662.587);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,601.4617);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,505.4955);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,423.1442);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,351.3646);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,274.0852);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,236.5536);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,185.0281);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,158.489);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,122.6804);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,72.20529);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,54.26512);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.1674927);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,5.679032);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,7.623042);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,7.78926);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,7.319427);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,7.109633);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,7.045448);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,7.190902);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,7.452327);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,7.682429);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,7.92714);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,8.239654);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,8.113228);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,8.00481);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,7.80623);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,7.488561);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,7.371616);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,7.255041);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,6.973479);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,6.634416);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,6.058861);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,5.558994);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,5.069381);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,4.468571);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,4.153949);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,3.667286);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,3.378379);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,2.955442);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,2.264809);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,1.947035);
   VbbHcc_algo_H_dR_stack_3->SetEntries(257832);

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
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,77.97203);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,78.7216);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,71.6397);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,77.66228);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,57.89725);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,61.1473);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,64.38264);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,63.23032);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,58.90543);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,62.93779);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,65.41659);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,76.9684);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,82.16582);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,62.89343);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,52.12313);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,52.26046);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,52.35622);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,57.03797);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,43.67714);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,42.14781);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,34.24598);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,26.65083);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,20.40329);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,13.68564);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,17.82776);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,12.36086);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,7.062127);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,5.605128);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,4.503176);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,6.25375);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,5.929537);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,5.438914);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,9.933944);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,6.505346);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,6.151407);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,8.183178);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,6.652733);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,6.611788);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,5.94583);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,6.566926);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,8.046509);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,8.724519);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,5.587234);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,3.373761);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,4.636783);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,4.82469);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,5.882372);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,4.560836);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,5.348922);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,5.321313);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,4.906573);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,3.707434);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,1.978713);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,3.109527);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,3.534586);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,1.39892);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,1.109816);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,1.149174);
   VbbHcc_algo_H_dR_stack_4->SetEntries(8463);

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
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,42.21015);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,61.39464);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,48.13257);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,33.49005);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,33.87159);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,35.72514);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,41.29566);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,36.76148);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,20.20414);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,33.37728);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,33.19526);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,35.90572);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,22.30762);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,31.43782);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,30.1496);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,25.29975);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,26.89715);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,24.73997);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,20.24552);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,19.27756);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,9.676245);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,5.695815);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,15.59842);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,4.747605);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,4.02539);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,4.725028);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,4.752662);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,9.82814);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,2.179602);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,4.752097);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,10.13766);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,9.711382);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,7.507649);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,5.05031);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,5.80404);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,9.965792);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,7.387131);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,3.09322);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,9.195412);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,5.113513);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,9.037965);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,3.347807);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,4.357367);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,4.110057);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,3.844636);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,4.271299);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,3.72905);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,3.698163);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,3.885119);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,2.616853);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,1.003647);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,6.26939);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,0.9687406);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,1.528368);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,1.657322);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,1.684457);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,5.795057);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,1.292064);
   VbbHcc_algo_H_dR_stack_5->SetEntries(3604);

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
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,0.4363072);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,0.2563355);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,0.1527423);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,0.2511971);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,0.2480412);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,0.232992);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,0.7372236);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,0.2562129);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,0.2528531);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,0.2358588);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,0.249543);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.5250994);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,0.3556608);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.2486027);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(28,0.4252684);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.3087835);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.2563355);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.1527423);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.2511971);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.2480412);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.232992);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.4259446);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.2562129);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.2528531);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.2358588);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.249543);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.3365971);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.2516082);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.2486027);
   VbbHcc_algo_H_dR_stack_6->SetBinError(28,0.3071735);
   VbbHcc_algo_H_dR_stack_6->SetEntries(22);

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
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,1.438552);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,5.119603);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,1.903529);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,1.214219);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,0.6437262);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,0.4809849);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,0.3316146);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,0.3673062);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,0.3355193);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,1.039922);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,0.6692102);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,0.6573036);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,0.2928441);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,0.180515);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,0.5316846);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,0.3464365);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,0.351697);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,0.4602047);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,0.3251586);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.1207762);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,0.1845236);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,0.1912474);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,0.1323524);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,0.4262945);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,0.4866749);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,0.9443574);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,0.5840175);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,0.4606413);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.3242628);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.2818632);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.2344921);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.2597271);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.2449267);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.4321773);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.3452689);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.3297018);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,0.2116525);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.180515);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.3071335);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.2450843);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.2488352);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.2741576);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.2305445);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.1207762);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.1845236);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.1912474);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.1323524);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.2892264);
   VbbHcc_algo_H_dR_stack_7->SetEntries(106);

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
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,1.308721);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,2.13446);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,3.649609);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,2.29115);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,0.2674509);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,0.519162);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,0.9403141);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,0.3166778);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,0.1937502);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,0.6785961);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,0.5081993);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,0.4747472);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,0.2373516);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,0.128935);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,0.638104);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,0.2063222);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,0.4294743);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,0.2265207);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,0.6699188);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,0.2319182);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,0.397986);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,0.2310936);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(29,1.196114);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,0.2701236);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,0.5408957);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,0.6825868);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,0.8491689);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,0.6994142);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,0.2674509);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,0.3571738);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,0.4707248);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,0.2239857);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.1937502);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,0.3979757);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,0.3601129);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,0.3356983);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,0.2373516);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,0.128935);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,0.3697373);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.2063222);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,0.304866);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.2265207);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.3870586);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.2319182);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.2866298);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.2310936);
   VbbHcc_algo_H_dR_stack_8->SetBinError(29,0.5374893);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.2701236);
   VbbHcc_algo_H_dR_stack_8->SetEntries(86);

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
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,1.249138);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,1.685918);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,1.319445);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,0.7471887);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,0.4004143);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,0.198475);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,0.2072495);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,0.219196);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,0.2424056);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,0.2318841);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,0.2791734);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,0.2714715);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,0.2686262);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,0.2153004);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,0.2181186);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,0.2150959);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,0.1855725);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,0.1851687);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,0.1672606);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,0.1491296);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,0.1139216);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.1009782);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,0.08540762);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,0.1094522);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,0.1649066);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,0.1652633);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.1570255);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.09184164);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.02904654);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.04971216);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.05753855);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.05112161);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.03901431);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.02832629);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.01958936);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.01987848);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.01994236);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.02160561);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.02114652);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.02283886);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.02278649);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.0225036);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.02018338);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.02008544);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.01988113);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.01890962);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.0187234);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.01764792);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.01681235);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.01454503);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.01379505);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.01254562);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.01502459);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.01784242);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.01772803);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.01727745);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.01358382);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.007357979);
   VbbHcc_algo_H_dR_stack_9->SetEntries(5585);

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
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,0.3870297);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,0.7687148);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,0.8109513);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,0.6407017);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,0.4279662);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,0.2681254);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,0.2213748);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,0.2124272);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,0.2284285);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,0.2661778);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,0.2618725);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,0.2600265);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,0.2355876);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,0.1986587);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,0.2007323);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,0.1776456);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,0.2094334);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,0.1884322);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,0.1771678);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.140844);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.1242417);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.1069361);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.09404275);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.09293994);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.08675316);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.09082423);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.0828962);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.04345451);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.02893594);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.01309889);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.01847175);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.01903834);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.01693698);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.0138209);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.01093937);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.009870585);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.009698971);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.0100577);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.0108212);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.01074409);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.01070829);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.01019388);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.00935808);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.009417657);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.008854188);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.009607775);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.009106969);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.008846518);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.007889264);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.007362645);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.006850996);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.00641145);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.00639717);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.006195718);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.0063557);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.006079919);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.004395763);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.003574206);
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
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.02000996);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.03697512);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.0677085);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.09445466);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.05285838);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.04754456);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.01116943);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.001979228);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.01054393);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.005711551);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.004344103);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.003426301);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.01019134);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.006178594);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.001763249);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.004213226);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.00272508);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.005357768);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.0034727);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.008008158);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.004898459);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.005227984);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.003483627);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.01543924);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.01036172);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01484595);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.006231256);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(30,0.002001327);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.001979228);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.00588718);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.008983631);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01144514);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01389957);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.01024125);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.009162388);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.004571465);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.001979228);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.004345137);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.003307358);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.002389355);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.002453121);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.004572939);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.003114254);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.001763249);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.002551897);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.001933997);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.003122237);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.00245559);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.003650166);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.002851731);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.003079139);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.002467515);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.00532721);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.00431288);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.005312251);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.003603335);
   VbbHcc_algo_H_dR_stack_11->SetBinError(30,0.001854945);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.001979228);
   VbbHcc_algo_H_dR_stack_11->SetEntries(279);

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
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.002818119);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.01412085);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.02378991);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.03380718);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.03261365);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.01729679);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.008144253);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.003796815);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.002960474);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.00381722);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.002882378);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.003108765);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.001989842);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.0009150975);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.001385759);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.001661366);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.001669442);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.001267729);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.001207866);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.0009191215);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.001894281);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.00151603);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.005189817);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.00578753);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.007084404);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.003904939);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.001443175);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.001110492);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.0007996089);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.001840629);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.002375771);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.002822745);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.002822102);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.002055085);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001368405);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.0009547611);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.0008580558);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.0009398886);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.0008140437);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.000844008);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.0007262661);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.0004671927);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.0005722095);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.0006155821);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.0006357732);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.0005687614);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.0005478035);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.0004679082);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.0006462709);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.0006195792);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001130682);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001186276);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.001316886);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.0009703074);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0005788827);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0005577087);
   VbbHcc_algo_H_dR_stack_12->SetEntries(816);

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
   
   TH1D *VbbHcc_algo_H_dR__235 = new TH1D("VbbHcc_algo_H_dR__235","",30,0,6);
   VbbHcc_algo_H_dR__235->SetBinContent(2,1);
   VbbHcc_algo_H_dR__235->SetBinContent(3,1326);
   VbbHcc_algo_H_dR__235->SetBinContent(4,1447);
   VbbHcc_algo_H_dR__235->SetBinContent(5,1042);
   VbbHcc_algo_H_dR__235->SetBinContent(6,1066);
   VbbHcc_algo_H_dR__235->SetBinContent(7,1036);
   VbbHcc_algo_H_dR__235->SetBinContent(8,1073);
   VbbHcc_algo_H_dR__235->SetBinContent(9,1130);
   VbbHcc_algo_H_dR__235->SetBinContent(10,1232);
   VbbHcc_algo_H_dR__235->SetBinContent(11,1242);
   VbbHcc_algo_H_dR__235->SetBinContent(12,1469);
   VbbHcc_algo_H_dR__235->SetBinContent(13,1569);
   VbbHcc_algo_H_dR__235->SetBinContent(14,1721);
   VbbHcc_algo_H_dR__235->SetBinContent(15,1693);
   VbbHcc_algo_H_dR__235->SetBinContent(16,1783);
   VbbHcc_algo_H_dR__235->SetBinContent(17,1580);
   VbbHcc_algo_H_dR__235->SetBinContent(18,1493);
   VbbHcc_algo_H_dR__235->SetBinContent(19,1376);
   VbbHcc_algo_H_dR__235->SetBinContent(20,1271);
   VbbHcc_algo_H_dR__235->SetBinContent(21,1051);
   VbbHcc_algo_H_dR__235->SetBinContent(22,912);
   VbbHcc_algo_H_dR__235->SetBinContent(23,767);
   VbbHcc_algo_H_dR__235->SetBinContent(24,569);
   VbbHcc_algo_H_dR__235->SetBinContent(25,466);
   VbbHcc_algo_H_dR__235->SetBinContent(26,384);
   VbbHcc_algo_H_dR__235->SetBinContent(27,286);
   VbbHcc_algo_H_dR__235->SetBinContent(28,246);
   VbbHcc_algo_H_dR__235->SetBinContent(29,243);
   VbbHcc_algo_H_dR__235->SetBinContent(30,151);
   VbbHcc_algo_H_dR__235->SetBinContent(31,118);
   VbbHcc_algo_H_dR__235->SetEntries(29772);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__235->SetLineColor(ci);
   VbbHcc_algo_H_dR__235->SetLineWidth(2);
   VbbHcc_algo_H_dR__235->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__235->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__235->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__235->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__235->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__235->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__235->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__235->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__235->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__235->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__235->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__235->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__235->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__235->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__235->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__235->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__235->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1235[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1235[30] = {
   0,
   0.4742297,
   10738.71,
   10897.7,
   9164.492,
   8592.829,
   5829.606,
   6795.408,
   6936.556,
   10511.62,
   9614.228,
   9781.845,
   13034.25,
   10115.16,
   10748.76,
   9844.195,
   9173.756,
   9623.995,
   7301.465,
   8217.636,
   5794.597,
   6015.323,
   4543.179,
   3118.146,
   3194.603,
   3893.324,
   2474.274,
   2642.281,
   1883.907,
   1337.098};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1235[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1235[30] = {
   0,
   0.1761912,
   1230.278,
   1288.093,
   1229.753,
   1172.508,
   846.7724,
   916.6951,
   928.9925,
   1294.313,
   1249.696,
   1269.891,
   2402.737,
   1176.113,
   1139.893,
   1091.92,
   1074.035,
   1671.086,
   901.115,
   1717.68,
   1085.099,
   914.8107,
   792.9411,
   788.3457,
   713.0646,
   853.595,
   675.6378,
   746.8121,
   520.3929,
   449.2223};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1235,Graph_from_VbbHcc_algo_H_dR_fy1235,Graph_from_VbbHcc_algo_H_dR_fex1235,Graph_from_VbbHcc_algo_H_dR_fey1235);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1235 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1235","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetMaximum(16980.69);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__236 = new TH1D("data_mc_ratio__236","",30,0,6);
   data_mc_ratio__236->SetBinContent(2,2.108683);
   data_mc_ratio__236->SetBinContent(3,0.1234785);
   data_mc_ratio__236->SetBinContent(4,0.1327803);
   data_mc_ratio__236->SetBinContent(5,0.1136997);
   data_mc_ratio__236->SetBinContent(6,0.1240569);
   data_mc_ratio__236->SetBinContent(7,0.1777136);
   data_mc_ratio__236->SetBinContent(8,0.1579008);
   data_mc_ratio__236->SetBinContent(9,0.162905);
   data_mc_ratio__236->SetBinContent(10,0.1172036);
   data_mc_ratio__236->SetBinContent(11,0.1291835);
   data_mc_ratio__236->SetBinContent(12,0.1501762);
   data_mc_ratio__236->SetBinContent(13,0.1203752);
   data_mc_ratio__236->SetBinContent(14,0.1701407);
   data_mc_ratio__236->SetBinContent(15,0.1575065);
   data_mc_ratio__236->SetBinContent(16,0.181122);
   data_mc_ratio__236->SetBinContent(17,0.1722304);
   data_mc_ratio__236->SetBinContent(18,0.1551331);
   data_mc_ratio__236->SetBinContent(19,0.1884553);
   data_mc_ratio__236->SetBinContent(20,0.1546673);
   data_mc_ratio__236->SetBinContent(21,0.1813759);
   data_mc_ratio__236->SetBinContent(22,0.1516128);
   data_mc_ratio__236->SetBinContent(23,0.1688245);
   data_mc_ratio__236->SetBinContent(24,0.1824802);
   data_mc_ratio__236->SetBinContent(25,0.145871);
   data_mc_ratio__236->SetBinContent(26,0.09863038);
   data_mc_ratio__236->SetBinContent(27,0.1155895);
   data_mc_ratio__236->SetBinContent(28,0.09310139);
   data_mc_ratio__236->SetBinContent(29,0.1289873);
   data_mc_ratio__236->SetBinContent(30,0.1129311);
   data_mc_ratio__236->SetBinContent(31,0.0999927);
   data_mc_ratio__236->SetBinError(2,2.108683);
   data_mc_ratio__236->SetBinError(3,0.003390936);
   data_mc_ratio__236->SetBinError(4,0.003490595);
   data_mc_ratio__236->SetBinError(5,0.003522293);
   data_mc_ratio__236->SetBinError(6,0.00379964);
   data_mc_ratio__236->SetBinError(7,0.005521291);
   data_mc_ratio__236->SetBinError(8,0.004820414);
   data_mc_ratio__236->SetBinError(9,0.004846133);
   data_mc_ratio__236->SetBinError(10,0.003339149);
   data_mc_ratio__236->SetBinError(11,0.003665611);
   data_mc_ratio__236->SetBinError(12,0.003918232);
   data_mc_ratio__236->SetBinError(13,0.003038963);
   data_mc_ratio__236->SetBinError(14,0.004101264);
   data_mc_ratio__236->SetBinError(15,0.003827984);
   data_mc_ratio__236->SetBinError(16,0.004289389);
   data_mc_ratio__236->SetBinError(17,0.004332927);
   data_mc_ratio__236->SetBinError(18,0.004014898);
   data_mc_ratio__236->SetBinError(19,0.005080416);
   data_mc_ratio__236->SetBinError(20,0.004338363);
   data_mc_ratio__236->SetBinError(21,0.005594717);
   data_mc_ratio__236->SetBinError(22,0.005020401);
   data_mc_ratio__236->SetBinError(23,0.006095901);
   data_mc_ratio__236->SetBinError(24,0.007649969);
   data_mc_ratio__236->SetBinError(25,0.006757345);
   data_mc_ratio__236->SetBinError(26,0.005033211);
   data_mc_ratio__236->SetBinError(27,0.006834948);
   data_mc_ratio__236->SetBinError(28,0.005935928);
   data_mc_ratio__236->SetBinError(29,0.008274538);
   data_mc_ratio__236->SetBinError(30,0.009190206);
   data_mc_ratio__236->SetBinError(31,0.04214795);
   data_mc_ratio__236->SetMinimum(0.4);
   data_mc_ratio__236->SetMaximum(1.6);
   data_mc_ratio__236->SetEntries(7.511311);
   data_mc_ratio__236->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__236->SetLineColor(ci);
   data_mc_ratio__236->SetLineWidth(2);
   data_mc_ratio__236->SetMarkerStyle(20);
   data_mc_ratio__236->SetMarkerSize(1.2);
   data_mc_ratio__236->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__236->GetXaxis()->SetRange(1,31);
   data_mc_ratio__236->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__236->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__236->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__236->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__236->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__236->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__236->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__236->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1236[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1236[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1236[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1236[30] = {
   0,
   0.3715313,
   0.1145648,
   0.1181986,
   0.1341867,
   0.136452,
   0.1452538,
   0.1348992,
   0.133927,
   0.1231316,
   0.129984,
   0.1298212,
   0.1843403,
   0.1162723,
   0.1060488,
   0.1109201,
   0.1170769,
   0.1736375,
   0.1234156,
   0.2090236,
   0.1872605,
   0.1520801,
   0.1745344,
   0.2528251,
   0.2232091,
   0.2192458,
   0.2730651,
   0.2826392,
   0.2762307,
   0.3359682};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1236,Graph_from_mc_statistical_error_fy1236,Graph_from_mc_statistical_error_fex1236,Graph_from_mc_statistical_error_fey1236);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1236 = new TH1F("Graph_Graph_from_mc_statistical_error1236","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1236->SetMinimum(0.5541624);
   Graph_Graph_from_mc_statistical_error1236->SetMaximum(1.445838);
   Graph_Graph_from_mc_statistical_error1236->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1236->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1236);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
