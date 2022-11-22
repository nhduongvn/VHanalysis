void H_dR_VbbHcc_16()
{
//=========Macro generated from canvas: H_dR_VbbHcc_16/H_dR_VbbHcc_16
//=========  (Tue Nov 22 09:17:14 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_16 = new TCanvas("H_dR_VbbHcc_16", "H_dR_VbbHcc_16",0,0,600,600);
   H_dR_VbbHcc_16->SetHighLightColor(2);
   H_dR_VbbHcc_16->Range(0,0,1,1);
   H_dR_VbbHcc_16->SetFillColor(0);
   H_dR_VbbHcc_16->SetFillStyle(4000);
   H_dR_VbbHcc_16->SetBorderMode(0);
   H_dR_VbbHcc_16->SetBorderSize(2);
   H_dR_VbbHcc_16->SetFrameFillStyle(1000);
   H_dR_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-3688.264,10.52419,3684585);
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
   st->SetMaximum(3157865);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",50,0,10);
   st_stack_21->SetMinimum(0.01);
   st_stack_21->SetMaximum(3315758);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetRange(1,50);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetLabelSize(0.035);
   st_stack_21->GetXaxis()->SetTitleSize(0.035);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetLabelSize(0.05);
   st_stack_21->GetYaxis()->SetTitleSize(0.057);
   st_stack_21->GetYaxis()->SetTitleOffset(1.2);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetLabelSize(0.035);
   st_stack_21->GetZaxis()->SetTitleSize(0.035);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_duong_H_dR_stack_1 = new TH1D("VbbHcc_duong_H_dR_stack_1","",50,0,10);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(2,1325.038);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(3,490656.4);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(4,657843.2);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(5,500007.2);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(6,486060.9);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(7,493343.7);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(8,525290.5);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(9,558980);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(10,612026.8);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(11,684674.1);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(12,853920.4);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(13,867040.7);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(14,985008.2);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(15,1119420);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(16,1203160);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(17,808994.1);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(18,622852.8);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(19,541499.8);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(20,398822);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(21,315840.7);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(22,214728.3);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(23,174235.7);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(24,148706.7);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(25,87577.76);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(26,46881.04);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(27,41244.38);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(28,7973.934);
   VbbHcc_duong_H_dR_stack_1->SetBinError(2,1325.038);
   VbbHcc_duong_H_dR_stack_1->SetBinError(3,25959.75);
   VbbHcc_duong_H_dR_stack_1->SetBinError(4,30079.91);
   VbbHcc_duong_H_dR_stack_1->SetBinError(5,26305.77);
   VbbHcc_duong_H_dR_stack_1->SetBinError(6,25856.59);
   VbbHcc_duong_H_dR_stack_1->SetBinError(7,26127.53);
   VbbHcc_duong_H_dR_stack_1->SetBinError(8,26773.38);
   VbbHcc_duong_H_dR_stack_1->SetBinError(9,27776.94);
   VbbHcc_duong_H_dR_stack_1->SetBinError(10,28998.21);
   VbbHcc_duong_H_dR_stack_1->SetBinError(11,30556.98);
   VbbHcc_duong_H_dR_stack_1->SetBinError(12,34231.26);
   VbbHcc_duong_H_dR_stack_1->SetBinError(13,34567.86);
   VbbHcc_duong_H_dR_stack_1->SetBinError(14,36751.43);
   VbbHcc_duong_H_dR_stack_1->SetBinError(15,39148.24);
   VbbHcc_duong_H_dR_stack_1->SetBinError(16,40655.7);
   VbbHcc_duong_H_dR_stack_1->SetBinError(17,33340.14);
   VbbHcc_duong_H_dR_stack_1->SetBinError(18,29247.2);
   VbbHcc_duong_H_dR_stack_1->SetBinError(19,27200.46);
   VbbHcc_duong_H_dR_stack_1->SetBinError(20,23330.39);
   VbbHcc_duong_H_dR_stack_1->SetBinError(21,20753.29);
   VbbHcc_duong_H_dR_stack_1->SetBinError(22,17110.91);
   VbbHcc_duong_H_dR_stack_1->SetBinError(23,15388.98);
   VbbHcc_duong_H_dR_stack_1->SetBinError(24,14155.35);
   VbbHcc_duong_H_dR_stack_1->SetBinError(25,10818.59);
   VbbHcc_duong_H_dR_stack_1->SetBinError(26,7874.393);
   VbbHcc_duong_H_dR_stack_1->SetBinError(27,7419.826);
   VbbHcc_duong_H_dR_stack_1->SetBinError(28,3260.744);
   VbbHcc_duong_H_dR_stack_1->SetEntries(9997);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_1,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_2 = new TH1D("VbbHcc_duong_H_dR_stack_2","",50,0,10);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(2,3.862892);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(3,3817.97);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(4,5814.695);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(5,6443.746);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(6,7548.797);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(7,8387.7);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(8,8776.552);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(9,9058.084);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(10,9092.825);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(11,9403.956);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(12,10047.06);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(13,10816.09);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(14,11855.51);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(15,12757.13);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(16,12903.4);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(17,8113.282);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(18,5718.955);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(19,4280.469);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(20,3194.505);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(21,2375.194);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(22,1717.812);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(23,1207.666);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(24,815.6564);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(25,472.6402);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(26,261.1538);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(27,120.3873);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(28,34.83428);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(29,2.37529);
   VbbHcc_duong_H_dR_stack_2->SetBinError(2,0.850895);
   VbbHcc_duong_H_dR_stack_2->SetBinError(3,26.91814);
   VbbHcc_duong_H_dR_stack_2->SetBinError(4,32.85846);
   VbbHcc_duong_H_dR_stack_2->SetBinError(5,34.07727);
   VbbHcc_duong_H_dR_stack_2->SetBinError(6,35.97856);
   VbbHcc_duong_H_dR_stack_2->SetBinError(7,37.08311);
   VbbHcc_duong_H_dR_stack_2->SetBinError(8,37.49758);
   VbbHcc_duong_H_dR_stack_2->SetBinError(9,38.15853);
   VbbHcc_duong_H_dR_stack_2->SetBinError(10,38.14081);
   VbbHcc_duong_H_dR_stack_2->SetBinError(11,39.00466);
   VbbHcc_duong_H_dR_stack_2->SetBinError(12,40.42356);
   VbbHcc_duong_H_dR_stack_2->SetBinError(13,41.99305);
   VbbHcc_duong_H_dR_stack_2->SetBinError(14,44.05528);
   VbbHcc_duong_H_dR_stack_2->SetBinError(15,45.52154);
   VbbHcc_duong_H_dR_stack_2->SetBinError(16,45.65149);
   VbbHcc_duong_H_dR_stack_2->SetBinError(17,34.69635);
   VbbHcc_duong_H_dR_stack_2->SetBinError(18,28.0304);
   VbbHcc_duong_H_dR_stack_2->SetBinError(19,23.50194);
   VbbHcc_duong_H_dR_stack_2->SetBinError(20,19.7305);
   VbbHcc_duong_H_dR_stack_2->SetBinError(21,16.61861);
   VbbHcc_duong_H_dR_stack_2->SetBinError(22,13.57726);
   VbbHcc_duong_H_dR_stack_2->SetBinError(23,11.2876);
   VbbHcc_duong_H_dR_stack_2->SetBinError(24,9.169226);
   VbbHcc_duong_H_dR_stack_2->SetBinError(25,6.712755);
   VbbHcc_duong_H_dR_stack_2->SetBinError(26,4.940464);
   VbbHcc_duong_H_dR_stack_2->SetBinError(27,3.362274);
   VbbHcc_duong_H_dR_stack_2->SetBinError(28,1.680503);
   VbbHcc_duong_H_dR_stack_2->SetBinError(29,0.5008434);
   VbbHcc_duong_H_dR_stack_2->SetEntries(2341547);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_2,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_3 = new TH1D("VbbHcc_duong_H_dR_stack_3","",50,0,10);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(2,43.14948);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(3,47583.13);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(4,83866.77);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(5,101874.7);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(6,122028.5);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(7,132856.7);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(8,136638.5);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(9,138161.7);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(10,140938.7);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(11,147297.4);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(12,156960.5);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(13,169069.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(14,183078.7);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(15,196464.3);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(16,194655.3);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(17,113231.2);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(18,73906.26);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(19,50752);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(20,35249.36);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(21,24299.9);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(22,16505.26);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(23,10816.06);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(24,6798.376);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(25,3754.787);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(26,1912.49);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(27,826.4178);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(28,244.9288);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(29,18.58737);
   VbbHcc_duong_H_dR_stack_3->SetBinError(2,1.65324);
   VbbHcc_duong_H_dR_stack_3->SetBinError(3,55.78996);
   VbbHcc_duong_H_dR_stack_3->SetBinError(4,74.15329);
   VbbHcc_duong_H_dR_stack_3->SetBinError(5,81.73978);
   VbbHcc_duong_H_dR_stack_3->SetBinError(6,89.42228);
   VbbHcc_duong_H_dR_stack_3->SetBinError(7,93.27955);
   VbbHcc_duong_H_dR_stack_3->SetBinError(8,94.6318);
   VbbHcc_duong_H_dR_stack_3->SetBinError(9,95.22711);
   VbbHcc_duong_H_dR_stack_3->SetBinError(10,96.2651);
   VbbHcc_duong_H_dR_stack_3->SetBinError(11,98.50453);
   VbbHcc_duong_H_dR_stack_3->SetBinError(12,101.7802);
   VbbHcc_duong_H_dR_stack_3->SetBinError(13,105.744);
   VbbHcc_duong_H_dR_stack_3->SetBinError(14,110.1498);
   VbbHcc_duong_H_dR_stack_3->SetBinError(15,114.1919);
   VbbHcc_duong_H_dR_stack_3->SetBinError(16,113.6954);
   VbbHcc_duong_H_dR_stack_3->SetBinError(17,86.50155);
   VbbHcc_duong_H_dR_stack_3->SetBinError(18,69.6436);
   VbbHcc_duong_H_dR_stack_3->SetBinError(19,57.50347);
   VbbHcc_duong_H_dR_stack_3->SetBinError(20,47.70862);
   VbbHcc_duong_H_dR_stack_3->SetBinError(21,39.45393);
   VbbHcc_duong_H_dR_stack_3->SetBinError(22,32.36678);
   VbbHcc_duong_H_dR_stack_3->SetBinError(23,26.06629);
   VbbHcc_duong_H_dR_stack_3->SetBinError(24,20.58013);
   VbbHcc_duong_H_dR_stack_3->SetBinError(25,15.22471);
   VbbHcc_duong_H_dR_stack_3->SetBinError(26,10.80765);
   VbbHcc_duong_H_dR_stack_3->SetBinError(27,7.077411);
   VbbHcc_duong_H_dR_stack_3->SetBinError(28,3.797457);
   VbbHcc_duong_H_dR_stack_3->SetBinError(29,1.046509);
   VbbHcc_duong_H_dR_stack_3->SetEntries(3.690801e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_3,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_4 = new TH1D("VbbHcc_duong_H_dR_stack_4","",50,0,10);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(2,2.701338);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(3,1410.719);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(4,1747.011);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(5,1694.498);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(6,1706.533);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(7,1749.043);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(8,1752.024);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(9,1861.724);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(10,1925.076);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(11,2169.573);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(12,2387.346);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(13,2685.663);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(14,2976.877);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(15,3399.177);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(16,3482.048);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(17,2212.745);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(18,1540.068);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(19,1116.716);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(20,844.7395);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(21,622.8042);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(22,442.0769);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(23,323.6293);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(24,215.3515);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(25,122.7253);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(26,62.51606);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(27,36.99437);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(28,8.567256);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(29,0.8051751);
   VbbHcc_duong_H_dR_stack_4->SetBinError(2,0.9017246);
   VbbHcc_duong_H_dR_stack_4->SetBinError(3,20.52507);
   VbbHcc_duong_H_dR_stack_4->SetBinError(4,22.82055);
   VbbHcc_duong_H_dR_stack_4->SetBinError(5,22.47801);
   VbbHcc_duong_H_dR_stack_4->SetBinError(6,22.5484);
   VbbHcc_duong_H_dR_stack_4->SetBinError(7,22.83645);
   VbbHcc_duong_H_dR_stack_4->SetBinError(8,22.84086);
   VbbHcc_duong_H_dR_stack_4->SetBinError(9,23.56114);
   VbbHcc_duong_H_dR_stack_4->SetBinError(10,23.93609);
   VbbHcc_duong_H_dR_stack_4->SetBinError(11,25.41229);
   VbbHcc_duong_H_dR_stack_4->SetBinError(12,26.66576);
   VbbHcc_duong_H_dR_stack_4->SetBinError(13,28.2839);
   VbbHcc_duong_H_dR_stack_4->SetBinError(14,29.78682);
   VbbHcc_duong_H_dR_stack_4->SetBinError(15,31.84292);
   VbbHcc_duong_H_dR_stack_4->SetBinError(16,32.19294);
   VbbHcc_duong_H_dR_stack_4->SetBinError(17,25.66908);
   VbbHcc_duong_H_dR_stack_4->SetBinError(18,21.36782);
   VbbHcc_duong_H_dR_stack_4->SetBinError(19,18.18051);
   VbbHcc_duong_H_dR_stack_4->SetBinError(20,15.78723);
   VbbHcc_duong_H_dR_stack_4->SetBinError(21,13.55172);
   VbbHcc_duong_H_dR_stack_4->SetBinError(22,11.39353);
   VbbHcc_duong_H_dR_stack_4->SetBinError(23,9.724543);
   VbbHcc_duong_H_dR_stack_4->SetBinError(24,7.895098);
   VbbHcc_duong_H_dR_stack_4->SetBinError(25,5.92229);
   VbbHcc_duong_H_dR_stack_4->SetBinError(26,4.23273);
   VbbHcc_duong_H_dR_stack_4->SetBinError(27,3.24187);
   VbbHcc_duong_H_dR_stack_4->SetBinError(28,1.52387);
   VbbHcc_duong_H_dR_stack_4->SetBinError(29,0.46869);
   VbbHcc_duong_H_dR_stack_4->SetEntries(131892);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_4,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_5 = new TH1D("VbbHcc_duong_H_dR_stack_5","",50,0,10);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(3,676.3541);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(4,1161.262);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(5,1233.151);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(6,1086.119);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(7,1090.911);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(8,1048.053);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(9,1068.73);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(10,1141.174);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(11,1167.135);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(12,1378.095);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(13,1425.753);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(14,1622.243);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(15,1770.693);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(16,1734.895);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(17,1134.223);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(18,662.6418);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(19,567.8194);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(20,422.3368);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(21,328.8764);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(22,231.3213);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(23,179.7583);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(24,118.1013);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(25,81.02997);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(26,46.07517);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(27,16.27638);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(28,11.09359);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(29,1.092919);
   VbbHcc_duong_H_dR_stack_5->SetBinError(3,27.25132);
   VbbHcc_duong_H_dR_stack_5->SetBinError(4,35.69181);
   VbbHcc_duong_H_dR_stack_5->SetBinError(5,36.75672);
   VbbHcc_duong_H_dR_stack_5->SetBinError(6,34.50094);
   VbbHcc_duong_H_dR_stack_5->SetBinError(7,34.66232);
   VbbHcc_duong_H_dR_stack_5->SetBinError(8,33.88917);
   VbbHcc_duong_H_dR_stack_5->SetBinError(9,34.21507);
   VbbHcc_duong_H_dR_stack_5->SetBinError(10,35.28958);
   VbbHcc_duong_H_dR_stack_5->SetBinError(11,35.78299);
   VbbHcc_duong_H_dR_stack_5->SetBinError(12,38.87815);
   VbbHcc_duong_H_dR_stack_5->SetBinError(13,39.47471);
   VbbHcc_duong_H_dR_stack_5->SetBinError(14,42.08387);
   VbbHcc_duong_H_dR_stack_5->SetBinError(15,44.01056);
   VbbHcc_duong_H_dR_stack_5->SetBinError(16,43.39726);
   VbbHcc_duong_H_dR_stack_5->SetBinError(17,35.11685);
   VbbHcc_duong_H_dR_stack_5->SetBinError(18,26.80068);
   VbbHcc_duong_H_dR_stack_5->SetBinError(19,24.87109);
   VbbHcc_duong_H_dR_stack_5->SetBinError(20,21.43607);
   VbbHcc_duong_H_dR_stack_5->SetBinError(21,18.81991);
   VbbHcc_duong_H_dR_stack_5->SetBinError(22,15.67354);
   VbbHcc_duong_H_dR_stack_5->SetBinError(23,13.96384);
   VbbHcc_duong_H_dR_stack_5->SetBinError(24,11.32303);
   VbbHcc_duong_H_dR_stack_5->SetBinError(25,9.236006);
   VbbHcc_duong_H_dR_stack_5->SetBinError(26,6.957193);
   VbbHcc_duong_H_dR_stack_5->SetBinError(27,4.080663);
   VbbHcc_duong_H_dR_stack_5->SetBinError(28,3.375085);
   VbbHcc_duong_H_dR_stack_5->SetBinError(29,1.092919);
   VbbHcc_duong_H_dR_stack_5->SetEntries(20027);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_5,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_6 = new TH1D("VbbHcc_duong_H_dR_stack_6","",50,0,10);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(2,0.0898518);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(3,21.0474);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(4,27.59928);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(5,27.65388);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(6,31.21801);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(7,29.21322);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(8,31.15335);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(9,31.93763);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(10,36.19821);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(11,39.60582);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(12,41.52396);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(13,46.71199);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(14,55.16768);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(15,58.4705);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(16,57.36782);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(17,33.36132);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(18,22.40696);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(19,16.97166);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(20,9.71071);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(21,9.393519);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(22,4.268565);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(23,3.541214);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(24,2.565923);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(25,1.114512);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(26,0.8448139);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(27,0.2665281);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(28,0.3322125);
   VbbHcc_duong_H_dR_stack_6->SetBinError(2,0.0898518);
   VbbHcc_duong_H_dR_stack_6->SetBinError(3,1.390131);
   VbbHcc_duong_H_dR_stack_6->SetBinError(4,1.587084);
   VbbHcc_duong_H_dR_stack_6->SetBinError(5,1.587832);
   VbbHcc_duong_H_dR_stack_6->SetBinError(6,1.688722);
   VbbHcc_duong_H_dR_stack_6->SetBinError(7,1.634046);
   VbbHcc_duong_H_dR_stack_6->SetBinError(8,1.692271);
   VbbHcc_duong_H_dR_stack_6->SetBinError(9,1.710869);
   VbbHcc_duong_H_dR_stack_6->SetBinError(10,1.819558);
   VbbHcc_duong_H_dR_stack_6->SetBinError(11,1.904633);
   VbbHcc_duong_H_dR_stack_6->SetBinError(12,1.950906);
   VbbHcc_duong_H_dR_stack_6->SetBinError(13,2.06805);
   VbbHcc_duong_H_dR_stack_6->SetBinError(14,2.24633);
   VbbHcc_duong_H_dR_stack_6->SetBinError(15,2.314581);
   VbbHcc_duong_H_dR_stack_6->SetBinError(16,2.293148);
   VbbHcc_duong_H_dR_stack_6->SetBinError(17,1.741747);
   VbbHcc_duong_H_dR_stack_6->SetBinError(18,1.427654);
   VbbHcc_duong_H_dR_stack_6->SetBinError(19,1.247849);
   VbbHcc_duong_H_dR_stack_6->SetBinError(20,0.9341714);
   VbbHcc_duong_H_dR_stack_6->SetBinError(21,0.9223489);
   VbbHcc_duong_H_dR_stack_6->SetBinError(22,0.6216995);
   VbbHcc_duong_H_dR_stack_6->SetBinError(23,0.5598738);
   VbbHcc_duong_H_dR_stack_6->SetBinError(24,0.4788052);
   VbbHcc_duong_H_dR_stack_6->SetBinError(25,0.3109075);
   VbbHcc_duong_H_dR_stack_6->SetBinError(26,0.2718452);
   VbbHcc_duong_H_dR_stack_6->SetBinError(27,0.1538901);
   VbbHcc_duong_H_dR_stack_6->SetBinError(28,0.1688273);
   VbbHcc_duong_H_dR_stack_6->SetEntries(7131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_6,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_7 = new TH1D("VbbHcc_duong_H_dR_stack_7","",50,0,10);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(3,43.28204);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(4,61.65049);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(5,64.75213);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(6,64.59852);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(7,75.39954);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(8,74.08719);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(9,67.50741);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(10,71.82387);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(11,72.38676);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(12,77.06284);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(13,86.32581);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(14,90.88761);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(15,102.1005);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(16,109.1427);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(17,59.3578);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(18,40.86627);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(19,27.79739);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(20,20.27509);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(21,13.69078);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(22,10.96932);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(23,7.339302);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(24,5.473052);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(25,2.987349);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(26,1.564451);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(27,1.307028);
   VbbHcc_duong_H_dR_stack_7->SetBinError(3,1.718795);
   VbbHcc_duong_H_dR_stack_7->SetBinError(4,2.049834);
   VbbHcc_duong_H_dR_stack_7->SetBinError(5,2.104057);
   VbbHcc_duong_H_dR_stack_7->SetBinError(6,2.102508);
   VbbHcc_duong_H_dR_stack_7->SetBinError(7,2.272489);
   VbbHcc_duong_H_dR_stack_7->SetBinError(8,2.251616);
   VbbHcc_duong_H_dR_stack_7->SetBinError(9,2.143929);
   VbbHcc_duong_H_dR_stack_7->SetBinError(10,2.216475);
   VbbHcc_duong_H_dR_stack_7->SetBinError(11,2.219569);
   VbbHcc_duong_H_dR_stack_7->SetBinError(12,2.295364);
   VbbHcc_duong_H_dR_stack_7->SetBinError(13,2.423438);
   VbbHcc_duong_H_dR_stack_7->SetBinError(14,2.489447);
   VbbHcc_duong_H_dR_stack_7->SetBinError(15,2.636955);
   VbbHcc_duong_H_dR_stack_7->SetBinError(16,2.728855);
   VbbHcc_duong_H_dR_stack_7->SetBinError(17,2.00907);
   VbbHcc_duong_H_dR_stack_7->SetBinError(18,1.664783);
   VbbHcc_duong_H_dR_stack_7->SetBinError(19,1.371106);
   VbbHcc_duong_H_dR_stack_7->SetBinError(20,1.173772);
   VbbHcc_duong_H_dR_stack_7->SetBinError(21,0.962048);
   VbbHcc_duong_H_dR_stack_7->SetBinError(22,0.8603533);
   VbbHcc_duong_H_dR_stack_7->SetBinError(23,0.6973704);
   VbbHcc_duong_H_dR_stack_7->SetBinError(24,0.6095746);
   VbbHcc_duong_H_dR_stack_7->SetBinError(25,0.4474004);
   VbbHcc_duong_H_dR_stack_7->SetBinError(26,0.31719);
   VbbHcc_duong_H_dR_stack_7->SetBinError(27,0.2903839);
   VbbHcc_duong_H_dR_stack_7->SetEntries(18712);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_7,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_8 = new TH1D("VbbHcc_duong_H_dR_stack_8","",50,0,10);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(3,32.38612);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(4,45.64104);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(5,61.94691);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(6,63.57209);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(7,61.50034);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(8,73.33482);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(9,78.01414);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(10,79.25175);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(11,73.87378);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(12,81.67935);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(13,96.85532);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(14,105.7988);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(15,111.4413);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(16,115.1973);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(17,56.87855);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(18,32.18258);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(19,24.07946);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(20,13.81519);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(21,11.82226);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(22,7.47421);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(23,6.172335);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(24,4.389091);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(25,1.147125);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(26,1.883851);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(27,0.9034587);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(28,0.2023712);
   VbbHcc_duong_H_dR_stack_8->SetBinError(3,2.489268);
   VbbHcc_duong_H_dR_stack_8->SetBinError(4,2.964648);
   VbbHcc_duong_H_dR_stack_8->SetBinError(5,3.454287);
   VbbHcc_duong_H_dR_stack_8->SetBinError(6,3.510204);
   VbbHcc_duong_H_dR_stack_8->SetBinError(7,3.447775);
   VbbHcc_duong_H_dR_stack_8->SetBinError(8,3.756849);
   VbbHcc_duong_H_dR_stack_8->SetBinError(9,3.879842);
   VbbHcc_duong_H_dR_stack_8->SetBinError(10,3.905369);
   VbbHcc_duong_H_dR_stack_8->SetBinError(11,3.760647);
   VbbHcc_duong_H_dR_stack_8->SetBinError(12,3.973661);
   VbbHcc_duong_H_dR_stack_8->SetBinError(13,4.316995);
   VbbHcc_duong_H_dR_stack_8->SetBinError(14,4.500815);
   VbbHcc_duong_H_dR_stack_8->SetBinError(15,4.629093);
   VbbHcc_duong_H_dR_stack_8->SetBinError(16,4.703216);
   VbbHcc_duong_H_dR_stack_8->SetBinError(17,3.297042);
   VbbHcc_duong_H_dR_stack_8->SetBinError(18,2.479884);
   VbbHcc_duong_H_dR_stack_8->SetBinError(19,2.1497);
   VbbHcc_duong_H_dR_stack_8->SetBinError(20,1.629204);
   VbbHcc_duong_H_dR_stack_8->SetBinError(21,1.488952);
   VbbHcc_duong_H_dR_stack_8->SetBinError(22,1.188821);
   VbbHcc_duong_H_dR_stack_8->SetBinError(23,1.079339);
   VbbHcc_duong_H_dR_stack_8->SetBinError(24,0.9010649);
   VbbHcc_duong_H_dR_stack_8->SetBinError(25,0.4702054);
   VbbHcc_duong_H_dR_stack_8->SetBinError(26,0.5978538);
   VbbHcc_duong_H_dR_stack_8->SetBinError(27,0.4062588);
   VbbHcc_duong_H_dR_stack_8->SetBinError(28,0.2023712);
   VbbHcc_duong_H_dR_stack_8->SetEntries(6580);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_8,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_9 = new TH1D("VbbHcc_duong_H_dR_stack_9","",50,0,10);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(2,0.01852473);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(3,16.72488);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(4,25.13383);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(5,26.57682);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(6,28.69033);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(7,28.79308);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(8,28.50723);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(9,27.95458);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(10,27.43306);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(11,28.53561);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(12,30.00767);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(13,32.05231);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(14,35.1816);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(15,38.46028);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(16,38.05722);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(17,18.51993);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(18,10.85828);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(19,7.012057);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(20,5.048085);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(21,3.555853);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(22,2.554122);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(23,1.723163);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(24,1.15721);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(25,0.626904);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(26,0.3247439);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(27,0.1556048);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(28,0.07523045);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(29,0.002661176);
   VbbHcc_duong_H_dR_stack_9->SetBinError(2,0.005211634);
   VbbHcc_duong_H_dR_stack_9->SetBinError(3,0.1599286);
   VbbHcc_duong_H_dR_stack_9->SetBinError(4,0.1956728);
   VbbHcc_duong_H_dR_stack_9->SetBinError(5,0.2014478);
   VbbHcc_duong_H_dR_stack_9->SetBinError(6,0.2092702);
   VbbHcc_duong_H_dR_stack_9->SetBinError(7,0.2094551);
   VbbHcc_duong_H_dR_stack_9->SetBinError(8,0.2079766);
   VbbHcc_duong_H_dR_stack_9->SetBinError(9,0.2054532);
   VbbHcc_duong_H_dR_stack_9->SetBinError(10,0.2033181);
   VbbHcc_duong_H_dR_stack_9->SetBinError(11,0.2073488);
   VbbHcc_duong_H_dR_stack_9->SetBinError(12,0.2124199);
   VbbHcc_duong_H_dR_stack_9->SetBinError(13,0.2196325);
   VbbHcc_duong_H_dR_stack_9->SetBinError(14,0.2300364);
   VbbHcc_duong_H_dR_stack_9->SetBinError(15,0.2404819);
   VbbHcc_duong_H_dR_stack_9->SetBinError(16,0.2395695);
   VbbHcc_duong_H_dR_stack_9->SetBinError(17,0.1663741);
   VbbHcc_duong_H_dR_stack_9->SetBinError(18,0.127048);
   VbbHcc_duong_H_dR_stack_9->SetBinError(19,0.1016579);
   VbbHcc_duong_H_dR_stack_9->SetBinError(20,0.08603178);
   VbbHcc_duong_H_dR_stack_9->SetBinError(21,0.07209148);
   VbbHcc_duong_H_dR_stack_9->SetBinError(22,0.06093004);
   VbbHcc_duong_H_dR_stack_9->SetBinError(23,0.05025948);
   VbbHcc_duong_H_dR_stack_9->SetBinError(24,0.04095051);
   VbbHcc_duong_H_dR_stack_9->SetBinError(25,0.02997033);
   VbbHcc_duong_H_dR_stack_9->SetBinError(26,0.02142275);
   VbbHcc_duong_H_dR_stack_9->SetBinError(27,0.01477795);
   VbbHcc_duong_H_dR_stack_9->SetBinError(28,0.01026171);
   VbbHcc_duong_H_dR_stack_9->SetBinError(29,0.001890494);
   VbbHcc_duong_H_dR_stack_9->SetEntries(327490);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_9,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_10 = new TH1D("VbbHcc_duong_H_dR_stack_10","",50,0,10);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(2,0.003378606);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(3,5.749125);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(4,9.321968);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(5,10.6527);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(6,11.46276);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(7,10.20045);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(8,8.509888);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(9,7.602357);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(10,7.415872);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(11,7.780626);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(12,8.699446);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(13,9.53692);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(14,10.7231);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(15,11.81806);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(16,11.73247);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(17,6.691514);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(18,4.404119);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(19,3.048854);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(20,2.22926);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(21,1.571859);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(22,1.071813);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(23,0.7571379);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(24,0.4891392);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(25,0.2753618);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(26,0.1466973);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(27,0.06760998);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(28,0.02165799);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(29,0.001584605);
   VbbHcc_duong_H_dR_stack_10->SetBinError(2,0.001134902);
   VbbHcc_duong_H_dR_stack_10->SetBinError(3,0.04690741);
   VbbHcc_duong_H_dR_stack_10->SetBinError(4,0.05978224);
   VbbHcc_duong_H_dR_stack_10->SetBinError(5,0.06397157);
   VbbHcc_duong_H_dR_stack_10->SetBinError(6,0.0664201);
   VbbHcc_duong_H_dR_stack_10->SetBinError(7,0.06261658);
   VbbHcc_duong_H_dR_stack_10->SetBinError(8,0.05715763);
   VbbHcc_duong_H_dR_stack_10->SetBinError(9,0.05397717);
   VbbHcc_duong_H_dR_stack_10->SetBinError(10,0.05330909);
   VbbHcc_duong_H_dR_stack_10->SetBinError(11,0.05459172);
   VbbHcc_duong_H_dR_stack_10->SetBinError(12,0.05771025);
   VbbHcc_duong_H_dR_stack_10->SetBinError(13,0.0604176);
   VbbHcc_duong_H_dR_stack_10->SetBinError(14,0.06406867);
   VbbHcc_duong_H_dR_stack_10->SetBinError(15,0.06723227);
   VbbHcc_duong_H_dR_stack_10->SetBinError(16,0.06700161);
   VbbHcc_duong_H_dR_stack_10->SetBinError(17,0.05054701);
   VbbHcc_duong_H_dR_stack_10->SetBinError(18,0.04094773);
   VbbHcc_duong_H_dR_stack_10->SetBinError(19,0.03401726);
   VbbHcc_duong_H_dR_stack_10->SetBinError(20,0.02904056);
   VbbHcc_duong_H_dR_stack_10->SetBinError(21,0.02431432);
   VbbHcc_duong_H_dR_stack_10->SetBinError(22,0.02004709);
   VbbHcc_duong_H_dR_stack_10->SetBinError(23,0.01683411);
   VbbHcc_duong_H_dR_stack_10->SetBinError(24,0.01348909);
   VbbHcc_duong_H_dR_stack_10->SetBinError(25,0.01004921);
   VbbHcc_duong_H_dR_stack_10->SetBinError(26,0.007297371);
   VbbHcc_duong_H_dR_stack_10->SetBinError(27,0.004923022);
   VbbHcc_duong_H_dR_stack_10->SetBinError(28,0.002774635);
   VbbHcc_duong_H_dR_stack_10->SetBinError(29,0.0007373279);
   VbbHcc_duong_H_dR_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_10,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_11 = new TH1D("VbbHcc_duong_H_dR_stack_11","",50,0,10);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(3,0.1559987);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(4,0.2881233);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(5,0.3278706);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(6,0.3960693);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(7,0.543813);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(8,0.4771363);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(9,0.5210042);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(10,0.5492055);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(11,0.5320603);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(12,0.5744916);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(13,0.5777567);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(14,0.5899849);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(15,0.6904587);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(16,0.6442489);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(17,0.2630699);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(18,0.1541306);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(19,0.06822428);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(20,0.06559388);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(21,0.03160332);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(22,0.01367401);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(23,0.02233483);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(24,0.0101844);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(25,0.001561075);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(26,0.005916441);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(27,0.003031947);
   VbbHcc_duong_H_dR_stack_11->SetBinError(3,0.01547676);
   VbbHcc_duong_H_dR_stack_11->SetBinError(4,0.02097447);
   VbbHcc_duong_H_dR_stack_11->SetBinError(5,0.02273569);
   VbbHcc_duong_H_dR_stack_11->SetBinError(6,0.02486394);
   VbbHcc_duong_H_dR_stack_11->SetBinError(7,0.02941928);
   VbbHcc_duong_H_dR_stack_11->SetBinError(8,0.0277025);
   VbbHcc_duong_H_dR_stack_11->SetBinError(9,0.02816749);
   VbbHcc_duong_H_dR_stack_11->SetBinError(10,0.02921577);
   VbbHcc_duong_H_dR_stack_11->SetBinError(11,0.02888092);
   VbbHcc_duong_H_dR_stack_11->SetBinError(12,0.03023421);
   VbbHcc_duong_H_dR_stack_11->SetBinError(13,0.02989693);
   VbbHcc_duong_H_dR_stack_11->SetBinError(14,0.03036514);
   VbbHcc_duong_H_dR_stack_11->SetBinError(15,0.03259757);
   VbbHcc_duong_H_dR_stack_11->SetBinError(16,0.03162234);
   VbbHcc_duong_H_dR_stack_11->SetBinError(17,0.02028474);
   VbbHcc_duong_H_dR_stack_11->SetBinError(18,0.01522652);
   VbbHcc_duong_H_dR_stack_11->SetBinError(19,0.01011729);
   VbbHcc_duong_H_dR_stack_11->SetBinError(20,0.009846735);
   VbbHcc_duong_H_dR_stack_11->SetBinError(21,0.006814568);
   VbbHcc_duong_H_dR_stack_11->SetBinError(22,0.004528919);
   VbbHcc_duong_H_dR_stack_11->SetBinError(23,0.005750488);
   VbbHcc_duong_H_dR_stack_11->SetBinError(24,0.003865401);
   VbbHcc_duong_H_dR_stack_11->SetBinError(25,0.001455521);
   VbbHcc_duong_H_dR_stack_11->SetBinError(26,0.002959386);
   VbbHcc_duong_H_dR_stack_11->SetBinError(27,0.002146872);
   VbbHcc_duong_H_dR_stack_11->SetEntries(5485);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_11,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_12 = new TH1D("VbbHcc_duong_H_dR_stack_12","",50,0,10);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(2,4.029045);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(3,1680.471);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(4,2874.547);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(5,3056.047);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(6,4006.523);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(7,4438.319);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(8,4658.172);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(9,4268.46);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(10,3834.269);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(11,3740.88);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(12,3794.592);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(13,3999.81);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(14,4292.288);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(15,4837.052);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(16,4771.739);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(17,2307.386);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(18,1498.749);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(19,965.2459);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(20,561.4586);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(21,343.6027);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(22,257.6878);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(23,181.194);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(24,98.31387);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(25,67.93056);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(26,16.79778);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(27,15.26386);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(28,11.35541);
   VbbHcc_duong_H_dR_stack_12->SetBinError(2,4.029045);
   VbbHcc_duong_H_dR_stack_12->SetBinError(3,82.035);
   VbbHcc_duong_H_dR_stack_12->SetBinError(4,107.6042);
   VbbHcc_duong_H_dR_stack_12->SetBinError(5,110.9486);
   VbbHcc_duong_H_dR_stack_12->SetBinError(6,127.049);
   VbbHcc_duong_H_dR_stack_12->SetBinError(7,133.7657);
   VbbHcc_duong_H_dR_stack_12->SetBinError(8,137.3427);
   VbbHcc_duong_H_dR_stack_12->SetBinError(9,131.4235);
   VbbHcc_duong_H_dR_stack_12->SetBinError(10,124.5198);
   VbbHcc_duong_H_dR_stack_12->SetBinError(11,122.8075);
   VbbHcc_duong_H_dR_stack_12->SetBinError(12,123.5604);
   VbbHcc_duong_H_dR_stack_12->SetBinError(13,127.0852);
   VbbHcc_duong_H_dR_stack_12->SetBinError(14,131.0892);
   VbbHcc_duong_H_dR_stack_12->SetBinError(15,139.5129);
   VbbHcc_duong_H_dR_stack_12->SetBinError(16,138.6415);
   VbbHcc_duong_H_dR_stack_12->SetBinError(17,96.22597);
   VbbHcc_duong_H_dR_stack_12->SetBinError(18,77.33006);
   VbbHcc_duong_H_dR_stack_12->SetBinError(19,61.8769);
   VbbHcc_duong_H_dR_stack_12->SetBinError(20,47.4441);
   VbbHcc_duong_H_dR_stack_12->SetBinError(21,36.7614);
   VbbHcc_duong_H_dR_stack_12->SetBinError(22,31.31025);
   VbbHcc_duong_H_dR_stack_12->SetBinError(23,26.76404);
   VbbHcc_duong_H_dR_stack_12->SetBinError(24,19.73057);
   VbbHcc_duong_H_dR_stack_12->SetBinError(25,16.46634);
   VbbHcc_duong_H_dR_stack_12->SetBinError(26,7.615954);
   VbbHcc_duong_H_dR_stack_12->SetBinError(27,7.662356);
   VbbHcc_duong_H_dR_stack_12->SetBinError(28,6.564915);
   VbbHcc_duong_H_dR_stack_12->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_H_dR__41 = new TH1D("VbbHcc_duong_H_dR__41","",50,0,10);
   VbbHcc_duong_H_dR__41->SetBinContent(2,319);
   VbbHcc_duong_H_dR__41->SetBinContent(3,350714);
   VbbHcc_duong_H_dR__41->SetBinContent(4,408368);
   VbbHcc_duong_H_dR__41->SetBinContent(5,333097);
   VbbHcc_duong_H_dR__41->SetBinContent(6,337336);
   VbbHcc_duong_H_dR__41->SetBinContent(7,345933);
   VbbHcc_duong_H_dR__41->SetBinContent(8,359787);
   VbbHcc_duong_H_dR__41->SetBinContent(9,384037);
   VbbHcc_duong_H_dR__41->SetBinContent(10,413704);
   VbbHcc_duong_H_dR__41->SetBinContent(11,450085);
   VbbHcc_duong_H_dR__41->SetBinContent(12,497196);
   VbbHcc_duong_H_dR__41->SetBinContent(13,550451);
   VbbHcc_duong_H_dR__41->SetBinContent(14,612667);
   VbbHcc_duong_H_dR__41->SetBinContent(15,681926);
   VbbHcc_duong_H_dR__41->SetBinContent(16,711331);
   VbbHcc_duong_H_dR__41->SetBinContent(17,480485);
   VbbHcc_duong_H_dR__41->SetBinContent(18,354852);
   VbbHcc_duong_H_dR__41->SetBinContent(19,273492);
   VbbHcc_duong_H_dR__41->SetBinContent(20,210775);
   VbbHcc_duong_H_dR__41->SetBinContent(21,160754);
   VbbHcc_duong_H_dR__41->SetBinContent(22,121379);
   VbbHcc_duong_H_dR__41->SetBinContent(23,88677);
   VbbHcc_duong_H_dR__41->SetBinContent(24,60493);
   VbbHcc_duong_H_dR__41->SetBinContent(25,36899);
   VbbHcc_duong_H_dR__41->SetBinContent(26,20257);
   VbbHcc_duong_H_dR__41->SetBinContent(27,9300);
   VbbHcc_duong_H_dR__41->SetBinContent(28,2980);
   VbbHcc_duong_H_dR__41->SetBinContent(29,219);
   VbbHcc_duong_H_dR__41->SetEntries(8257513);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR__41->SetLineColor(ci);
   VbbHcc_duong_H_dR__41->SetLineWidth(2);
   VbbHcc_duong_H_dR__41->SetMarkerStyle(20);
   VbbHcc_duong_H_dR__41->SetMarkerSize(1.2);
   VbbHcc_duong_H_dR__41->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR__41->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__41->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__41->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__41->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__41->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__41->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__41->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__41->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR__41->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__41->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__41->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__41->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__41->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__41->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_H_dR_fx1041[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_duong_H_dR_fy1041[50] = {
   0,
   1378.893,
   545944.4,
   753477.1,
   614501.3,
   622637.3,
   642072,
   678379.9,
   713612.2,
   769181.5,
   848675.8,
   1028728,
   1055309,
   1189132,
   1338971,
   1421039,
   936168,
   706290.4,
   599261,
   439145.6,
   343851.1,
   233908.8,
   186963.6,
   156766.6,
   92083.03,
   49184.84,
   42262.42,
   8285.345,
   22.865,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_duong_H_dR_fex1041[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_duong_H_dR_fey1041[50] = {
   0,
   1325.046,
   25959.97,
   30080.24,
   26306.18,
   25857.12,
   26128.1,
   26773.96,
   27777.47,
   28998.69,
   30557.44,
   34231.69,
   34568.32,
   36751.9,
   39148.72,
   40656.15,
   33340.44,
   29247.42,
   27200.62,
   23330.52,
   20753.38,
   17110.99,
   15389.04,
   14155.39,
   10818.62,
   7874.41,
   7419.836,
   3260.755,
   1.661377,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_duong_H_dR_fx1041,Graph_from_VbbHcc_duong_H_dR_fy1041,Graph_from_VbbHcc_duong_H_dR_fex1041,Graph_from_VbbHcc_duong_H_dR_fey1041);
   gre->SetName("Graph_from_VbbHcc_duong_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_H_dR1041 = new TH1F("Graph_Graph_from_VbbHcc_duong_H_dR1041","",100,0,11);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->SetMinimum(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->SetMaximum(1607865);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_H_dR1041->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_H_dR1041);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__42 = new TH1D("data_mc_ratio__42","",50,0,10);
   data_mc_ratio__42->SetBinContent(2,0.231345);
   data_mc_ratio__42->SetBinContent(3,0.6423988);
   data_mc_ratio__42->SetBinContent(4,0.541978);
   data_mc_ratio__42->SetBinContent(5,0.5420607);
   data_mc_ratio__42->SetBinContent(6,0.5417857);
   data_mc_ratio__42->SetBinContent(7,0.538776);
   data_mc_ratio__42->SetBinContent(8,0.5303621);
   data_mc_ratio__42->SetBinContent(9,0.5381592);
   data_mc_ratio__42->SetBinContent(10,0.5378496);
   data_mc_ratio__42->SetBinContent(11,0.530338);
   data_mc_ratio__42->SetBinContent(12,0.4833117);
   data_mc_ratio__42->SetBinContent(13,0.5216017);
   data_mc_ratio__42->SetBinContent(14,0.515222);
   data_mc_ratio__42->SetBinContent(15,0.509291);
   data_mc_ratio__42->SetBinContent(16,0.500571);
   data_mc_ratio__42->SetBinContent(17,0.5132465);
   data_mc_ratio__42->SetBinContent(18,0.5024166);
   data_mc_ratio__42->SetBinContent(19,0.4563821);
   data_mc_ratio__42->SetBinContent(20,0.4799661);
   data_mc_ratio__42->SetBinContent(21,0.4675105);
   data_mc_ratio__42->SetBinContent(22,0.518916);
   data_mc_ratio__42->SetBinContent(23,0.4743009);
   data_mc_ratio__42->SetBinContent(24,0.3858795);
   data_mc_ratio__42->SetBinContent(25,0.4007145);
   data_mc_ratio__42->SetBinContent(26,0.4118545);
   data_mc_ratio__42->SetBinContent(27,0.2200537);
   data_mc_ratio__42->SetBinContent(28,0.3596712);
   data_mc_ratio__42->SetBinContent(29,9.577958);
   data_mc_ratio__42->SetBinError(2,0.01295283);
   data_mc_ratio__42->SetBinError(3,0.001084746);
   data_mc_ratio__42->SetBinError(4,0.0008481171);
   data_mc_ratio__42->SetBinError(5,0.0009392097);
   data_mc_ratio__42->SetBinError(6,0.0009328165);
   data_mc_ratio__42->SetBinError(7,0.0009160354);
   data_mc_ratio__42->SetBinError(8,0.0008841985);
   data_mc_ratio__42->SetBinError(9,0.0008684089);
   data_mc_ratio__42->SetBinError(10,0.0008362113);
   data_mc_ratio__42->SetBinError(11,0.0007905066);
   data_mc_ratio__42->SetBinError(12,0.0006854306);
   data_mc_ratio__42->SetBinError(13,0.0007030393);
   data_mc_ratio__42->SetBinError(14,0.0006582368);
   data_mc_ratio__42->SetBinError(15,0.0006167333);
   data_mc_ratio__42->SetBinError(16,0.0005935124);
   data_mc_ratio__42->SetBinError(17,0.0007404336);
   data_mc_ratio__42->SetBinError(18,0.0008434131);
   data_mc_ratio__42->SetBinError(19,0.0008726825);
   data_mc_ratio__42->SetBinError(20,0.001045445);
   data_mc_ratio__42->SetBinError(21,0.001166032);
   data_mc_ratio__42->SetBinError(22,0.001489448);
   data_mc_ratio__42->SetBinError(23,0.001592753);
   data_mc_ratio__42->SetBinError(24,0.001568914);
   data_mc_ratio__42->SetBinError(25,0.002086064);
   data_mc_ratio__42->SetBinError(26,0.002893718);
   data_mc_ratio__42->SetBinError(27,0.00228185);
   data_mc_ratio__42->SetBinError(28,0.006588667);
   data_mc_ratio__42->SetBinError(29,0.6472184);
   data_mc_ratio__42->SetMinimum(0.4);
   data_mc_ratio__42->SetMaximum(1.6);
   data_mc_ratio__42->SetEntries(508.3214);
   data_mc_ratio__42->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__42->SetLineColor(ci);
   data_mc_ratio__42->SetLineWidth(2);
   data_mc_ratio__42->SetMarkerStyle(20);
   data_mc_ratio__42->SetMarkerSize(1.2);
   data_mc_ratio__42->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__42->GetXaxis()->SetRange(1,50);
   data_mc_ratio__42->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__42->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__42->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__42->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__42->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__42->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__42->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__42->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__42->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__42->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__42->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__42->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__42->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__42->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1042[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1042[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1042[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1042[50] = {
   0,
   0.9609493,
   0.04755058,
   0.03992191,
   0.042809,
   0.04152838,
   0.04069341,
   0.0394675,
   0.03892516,
   0.03770071,
   0.03600603,
   0.03327576,
   0.03275658,
   0.03090649,
   0.02923791,
   0.02861016,
   0.03561374,
   0.04140991,
   0.04539028,
   0.05312707,
   0.06035573,
   0.07315241,
   0.08231034,
   0.09029597,
   0.1174876,
   0.1600983,
   0.1755658,
   0.393557,
   0.07266026,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1042,Graph_from_mc_statistical_error_fy1042,Graph_from_mc_statistical_error_fex1042,Graph_from_mc_statistical_error_fey1042);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1042 = new TH1F("Graph_Graph_from_mc_statistical_error1042","",100,0,11);
   Graph_Graph_from_mc_statistical_error1042->SetMinimum(0.03514565);
   Graph_Graph_from_mc_statistical_error1042->SetMaximum(2.153139);
   Graph_Graph_from_mc_statistical_error1042->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1042->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1042);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_16->cd();
   H_dR_VbbHcc_16->Modified();
   H_dR_VbbHcc_16->cd();
   H_dR_VbbHcc_16->SetSelected(H_dR_VbbHcc_16);
}
