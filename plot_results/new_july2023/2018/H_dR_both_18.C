void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Mon Jul 24 10:12:10 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(0,0,1,1);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-743.9963,6.525,743262.3);
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
   st->SetMaximum(637011.1);
   
   TH1F *st_stack_215 = new TH1F("st_stack_215","",30,0,6);
   st_stack_215->SetMinimum(0.01);
   st_stack_215->SetMaximum(668861.7);
   st_stack_215->SetDirectory(0);
   st_stack_215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_215->SetLineColor(ci);
   st_stack_215->GetXaxis()->SetRange(1,31);
   st_stack_215->GetXaxis()->SetLabelFont(42);
   st_stack_215->GetXaxis()->SetLabelSize(0.035);
   st_stack_215->GetXaxis()->SetTitleSize(0.035);
   st_stack_215->GetXaxis()->SetTitleFont(42);
   st_stack_215->GetYaxis()->SetTitle("Events/0.2");
   st_stack_215->GetYaxis()->SetLabelFont(42);
   st_stack_215->GetYaxis()->SetLabelSize(0.05);
   st_stack_215->GetYaxis()->SetTitleSize(0.057);
   st_stack_215->GetYaxis()->SetTitleOffset(1.2);
   st_stack_215->GetYaxis()->SetTitleFont(42);
   st_stack_215->GetZaxis()->SetLabelFont(42);
   st_stack_215->GetZaxis()->SetLabelSize(0.035);
   st_stack_215->GetZaxis()->SetTitleSize(0.035);
   st_stack_215->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_215);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,37.56592);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,104781.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,95141.47);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,70203.86);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,64588.75);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,64514.23);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,74052.34);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,71284.18);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,85551.74);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,89860.04);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,103480.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,125053.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,143314.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,157597.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,168238.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,113800.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,92407.67);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,65472.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,46787.02);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,39936.88);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,29108.53);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,22657);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,15666.82);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,10115.36);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,5235.317);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,1182.76);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,476.934);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,6.764344);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,22.41448);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,3999.966);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,4461.786);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,3260.085);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,3702.281);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,2914.977);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,3789.241);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,3309.194);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,4502.344);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,3652.922);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,4745.804);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,5592.329);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,5473.251);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,4947.209);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,5601.712);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,4526.029);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,4675.585);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,4098.759);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,2422.473);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,3445.641);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,2079.747);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,1980.35);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,1629.027);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,1366.595);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,1004.513);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,329.9742);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,102.0423);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,5.358193);
   VbbHcc_both_H_dR_stack_1->SetEntries(164216);

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
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,0.6491978);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,986.9253);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,1232.572);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,1122.398);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,981.9123);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,873.1996);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,852.4632);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,856.4435);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,975.8837);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,1121.481);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,1304.13);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,1505.704);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,1754.609);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,2003.474);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,2105.412);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,1289.974);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,894.2768);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,651.3428);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,458.6024);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,320.6704);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,230.2916);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,150.7247);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,97.4332);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,51.75721);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,30.94577);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,13.30871);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,3.290703);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,0.1777016);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,0.4212846);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,16.57372);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,17.80528);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,16.52493);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,15.51195);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,19.04419);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,16.20436);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,13.99204);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,15.09282);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,16.45577);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,17.68596);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,18.75447);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,19.85048);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,21.16646);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,21.70278);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,20.87188);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,13.16515);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,11.83111);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,9.220591);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,7.252205);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,6.139569);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,4.725498);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,4.408764);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,2.608614);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,2.073276);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,1.363461);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.5985976);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.1357676);
   VbbHcc_both_H_dR_stack_2->SetEntries(233695);

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
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,10.54373);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,11896.31);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,19763.99);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,21397.51);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,20589.03);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,18329.06);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,17058.59);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,17394.46);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,19190.53);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,22082.46);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,25873.46);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,30623.21);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,35897.14);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,41116.29);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,42450.58);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,24297.49);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,15296.95);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,10076.14);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,6702.286);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,4460.18);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,2885.081);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,1840.058);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,1103.12);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,583.5772);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,289.1462);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,115.0334);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,31.207);
   VbbHcc_both_H_dR_stack_3->SetBinContent(29,1.935887);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.943883);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,31.90863);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,40.2077);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,41.89248);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,41.29374);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,38.91771);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,37.50938);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,38.24601);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,40.92571);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,42.60659);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,46.38539);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,50.58831);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,55.70408);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,59.22409);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,60.25895);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,45.47642);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,36.20381);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,29.26847);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,23.47628);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,19.02395);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,15.28054);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,12.49034);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,9.817596);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,6.602029);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,4.560927);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,2.890695);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,1.528807);
   VbbHcc_both_H_dR_stack_3->SetBinError(29,0.3694529);
   VbbHcc_both_H_dR_stack_3->SetEntries(6104032);

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
   VbbHcc_both_H_dR_stack_4->SetBinContent(2,0.3209163);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,774.5858);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,886.2287);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,752.3801);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,763.0221);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,682.4674);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,689.5315);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,707.0743);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,773.3073);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,840.052);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,985.19);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,1150.957);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,1321.77);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,1489.725);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,1572.661);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,946.2125);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,669.5674);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,471.4826);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,343.0817);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,238.8607);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,166.2033);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,120.1777);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,72.30253);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,36.94882);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,21.40191);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,9.93411);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,1.399143);
   VbbHcc_both_H_dR_stack_4->SetBinError(2,0.1881925);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,19.34123);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,19.78656);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,19.16505);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,21.41055);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,18.43553);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,18.71935);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,21.41739);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,21.03674);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,20.35944);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,21.56133);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,26.74223);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,27.41084);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,25.53457);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,29.03176);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,20.77194);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,18.16263);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,16.5175);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,12.77177);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,9.120913);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,14.06119);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,8.956481);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,4.697422);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,3.358786);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,2.358292);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,1.737856);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.415417);
   VbbHcc_both_H_dR_stack_4->SetEntries(94684);

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
   VbbHcc_both_H_dR_stack_5->SetBinContent(2,0.293317);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,426.4219);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,538.1395);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,453.5813);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,405.0455);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,327.2615);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,390.6573);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,353.7548);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,384.1743);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,458.3815);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,454.1422);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,523.4345);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,660.013);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,710.8867);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,716.2013);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,436.3843);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,288.629);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,229.3078);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,179.2666);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,111.0154);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,78.84467);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,59.27877);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,57.01664);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,20.71738);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,14.80152);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,3.026214);
   VbbHcc_both_H_dR_stack_5->SetBinContent(28,0.946639);
   VbbHcc_both_H_dR_stack_5->SetBinContent(29,0.1311497);
   VbbHcc_both_H_dR_stack_5->SetBinError(2,0.2073624);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,15.1502);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,24.85125);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,23.73849);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,30.69832);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,18.74299);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,32.31138);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,20.75572);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,23.67913);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,32.72835);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,27.07222);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,25.7079);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,34.4066);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,34.92975);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,31.94149);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,34.9786);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,18.27093);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,14.53137);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,18.77908);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,9.304547);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,7.106795);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,6.909147);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,16.42504);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,4.203987);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,3.898415);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.8996569);
   VbbHcc_both_H_dR_stack_5->SetBinError(28,0.4298522);
   VbbHcc_both_H_dR_stack_5->SetBinError(29,0.1311497);
   VbbHcc_both_H_dR_stack_5->SetEntries(40778);

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
   VbbHcc_both_H_dR_stack_6->SetBinContent(3,3.376276);
   VbbHcc_both_H_dR_stack_6->SetBinContent(4,2.173624);
   VbbHcc_both_H_dR_stack_6->SetBinContent(5,2.599541);
   VbbHcc_both_H_dR_stack_6->SetBinContent(6,1.481697);
   VbbHcc_both_H_dR_stack_6->SetBinContent(7,2.344167);
   VbbHcc_both_H_dR_stack_6->SetBinContent(8,1.675849);
   VbbHcc_both_H_dR_stack_6->SetBinContent(9,1.670893);
   VbbHcc_both_H_dR_stack_6->SetBinContent(10,0.861463);
   VbbHcc_both_H_dR_stack_6->SetBinContent(11,1.555655);
   VbbHcc_both_H_dR_stack_6->SetBinContent(12,2.557635);
   VbbHcc_both_H_dR_stack_6->SetBinContent(13,3.668013);
   VbbHcc_both_H_dR_stack_6->SetBinContent(14,5.889936);
   VbbHcc_both_H_dR_stack_6->SetBinContent(15,4.859012);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,5.249288);
   VbbHcc_both_H_dR_stack_6->SetBinContent(17,2.453559);
   VbbHcc_both_H_dR_stack_6->SetBinContent(18,0.2709334);
   VbbHcc_both_H_dR_stack_6->SetBinContent(19,1.725569);
   VbbHcc_both_H_dR_stack_6->SetBinContent(20,0.5102837);
   VbbHcc_both_H_dR_stack_6->SetBinContent(21,0.3126157);
   VbbHcc_both_H_dR_stack_6->SetBinContent(22,0.3174146);
   VbbHcc_both_H_dR_stack_6->SetBinContent(23,0.5094932);
   VbbHcc_both_H_dR_stack_6->SetBinContent(26,0.2995157);
   VbbHcc_both_H_dR_stack_6->SetBinError(3,1.028249);
   VbbHcc_both_H_dR_stack_6->SetBinError(4,0.8222164);
   VbbHcc_both_H_dR_stack_6->SetBinError(5,0.9103906);
   VbbHcc_both_H_dR_stack_6->SetBinError(6,0.6790089);
   VbbHcc_both_H_dR_stack_6->SetBinError(7,0.8981838);
   VbbHcc_both_H_dR_stack_6->SetBinError(8,0.7669919);
   VbbHcc_both_H_dR_stack_6->SetBinError(9,0.7580977);
   VbbHcc_both_H_dR_stack_6->SetBinError(10,0.5008265);
   VbbHcc_both_H_dR_stack_6->SetBinError(11,0.7082363);
   VbbHcc_both_H_dR_stack_6->SetBinError(12,0.9204641);
   VbbHcc_both_H_dR_stack_6->SetBinError(13,1.084225);
   VbbHcc_both_H_dR_stack_6->SetBinError(14,1.419791);
   VbbHcc_both_H_dR_stack_6->SetBinError(15,1.245802);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,1.307664);
   VbbHcc_both_H_dR_stack_6->SetBinError(17,0.8726713);
   VbbHcc_both_H_dR_stack_6->SetBinError(18,0.2709334);
   VbbHcc_both_H_dR_stack_6->SetBinError(19,0.7237668);
   VbbHcc_both_H_dR_stack_6->SetBinError(20,0.3615155);
   VbbHcc_both_H_dR_stack_6->SetBinError(21,0.3126157);
   VbbHcc_both_H_dR_stack_6->SetBinError(22,0.3174146);
   VbbHcc_both_H_dR_stack_6->SetBinError(23,0.3684078);
   VbbHcc_both_H_dR_stack_6->SetBinError(26,0.2995157);
   VbbHcc_both_H_dR_stack_6->SetEntries(150);

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
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,8.751626);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,13.62577);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,8.12315);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,3.936041);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,5.32383);
   VbbHcc_both_H_dR_stack_7->SetBinContent(8,4.30363);
   VbbHcc_both_H_dR_stack_7->SetBinContent(9,2.914034);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,3.706303);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,5.384109);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,6.36986);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,9.014332);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,8.803908);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,9.040705);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,11.86932);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,6.272821);
   VbbHcc_both_H_dR_stack_7->SetBinContent(18,3.41976);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,3.714649);
   VbbHcc_both_H_dR_stack_7->SetBinContent(20,2.181527);
   VbbHcc_both_H_dR_stack_7->SetBinContent(21,1.847041);
   VbbHcc_both_H_dR_stack_7->SetBinContent(22,0.6438069);
   VbbHcc_both_H_dR_stack_7->SetBinContent(23,0.9449475);
   VbbHcc_both_H_dR_stack_7->SetBinContent(24,0.2217927);
   VbbHcc_both_H_dR_stack_7->SetBinContent(25,0.3011335);
   VbbHcc_both_H_dR_stack_7->SetBinContent(26,0.2493302);
   VbbHcc_both_H_dR_stack_7->SetBinContent(27,0.2695144);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,1.458713);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,1.819338);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,1.436428);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.9680899);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,1.140502);
   VbbHcc_both_H_dR_stack_7->SetBinError(8,1.058787);
   VbbHcc_both_H_dR_stack_7->SetBinError(9,0.8299186);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.9122181);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,1.135762);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,1.215984);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,1.540753);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,1.487021);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,1.485183);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,1.692898);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,1.261121);
   VbbHcc_both_H_dR_stack_7->SetBinError(18,0.967762);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.9364383);
   VbbHcc_both_H_dR_stack_7->SetBinError(20,0.8465017);
   VbbHcc_both_H_dR_stack_7->SetBinError(21,0.6487668);
   VbbHcc_both_H_dR_stack_7->SetBinError(22,0.3725531);
   VbbHcc_both_H_dR_stack_7->SetBinError(23,0.4740898);
   VbbHcc_both_H_dR_stack_7->SetBinError(24,0.2217927);
   VbbHcc_both_H_dR_stack_7->SetBinError(25,0.3011335);
   VbbHcc_both_H_dR_stack_7->SetBinError(26,0.2493302);
   VbbHcc_both_H_dR_stack_7->SetBinError(27,0.2695144);
   VbbHcc_both_H_dR_stack_7->SetEntries(523);

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
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,8.171069);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,12.81756);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,10.07033);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,7.262426);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,4.952784);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,5.480864);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,3.007006);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,5.64958);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,5.513574);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,6.845972);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,6.593228);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,8.369687);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,12.5122);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,11.82723);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,6.15415);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,4.016716);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,3.292108);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.8327326);
   VbbHcc_both_H_dR_stack_8->SetBinContent(21,2.023961);
   VbbHcc_both_H_dR_stack_8->SetBinContent(22,0.2228926);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.2243771);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.40834);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.75956);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.556655);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,1.295607);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,1.081773);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,1.173447);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.8446729);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,1.166661);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,1.147269);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.297351);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,1.235351);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.413758);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.722005);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.902039);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,1.195911);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.9869279);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.91173);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.4324814);
   VbbHcc_both_H_dR_stack_8->SetBinError(21,0.6888689);
   VbbHcc_both_H_dR_stack_8->SetBinError(22,0.2228926);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.2243771);
   VbbHcc_both_H_dR_stack_8->SetEntries(548);

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
   VbbHcc_both_H_dR_stack_9->SetBinContent(2,0.008224042);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,6.991405);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,9.900411);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,8.653913);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,5.606857);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,3.527271);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,3.180053);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,3.125363);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,3.34134);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,4.098867);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,4.96487);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,6.087476);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,7.410981);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,8.601583);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,8.905063);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,3.960129);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,2.270026);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,1.277292);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.9736499);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.7182561);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.4168289);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.2907477);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.1657326);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.09892859);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.03837798);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.005194037);
   VbbHcc_both_H_dR_stack_9->SetBinContent(28,0.005858152);
   VbbHcc_both_H_dR_stack_9->SetBinError(2,0.004800024);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.1468507);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.1766661);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.1673744);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.1274052);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.09752172);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.09674371);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.1385548);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.1029555);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.1186119);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.1292299);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.1712834);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.1453415);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.1592221);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.163063);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.1111601);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.07818132);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.06999799);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.05803407);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.0439342);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.03339877);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.03396604);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.02291769);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.0160367);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.01009747);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.003679007);
   VbbHcc_both_H_dR_stack_9->SetBinError(28,0.004184503);
   VbbHcc_both_H_dR_stack_9->SetEntries(37266);

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
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.0007200141);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,4.139394);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,6.744929);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,6.980202);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,6.321615);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,4.602182);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,3.450041);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,3.27791);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,3.454928);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,4.037026);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,4.658585);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,5.515351);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,6.462178);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,7.199401);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,7.30553);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,3.943319);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,2.538078);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,1.694916);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,1.182);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.8517706);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.5327335);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.3555339);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.2424645);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.1183746);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.07438111);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.03037356);
   VbbHcc_both_H_dR_stack_10->SetBinContent(28,0.006657069);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.0007200141);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.05138353);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.06564004);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.06686329);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.06364837);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.05425098);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.04688152);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.04565172);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.04691131);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.05067968);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.05441002);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.05924849);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.06411478);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.0676937);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.06819577);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.05006636);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.04001012);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.03268909);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.02724168);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.02303154);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.01815255);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.01480703);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.01222488);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.008436056);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.006657667);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.004232951);
   VbbHcc_both_H_dR_stack_10->SetBinError(28,0.001942502);
   VbbHcc_both_H_dR_stack_10->SetEntries(137175);

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
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.08105278);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.1978651);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.2395855);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.3521566);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.2121897);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.1395747);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.1083036);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.07926517);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.1148613);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.1298761);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.125034);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.1496981);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.1592326);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.1424716);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.062103);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.01937998);
   VbbHcc_both_H_dR_stack_11->SetBinContent(19,0.01276566);
   VbbHcc_both_H_dR_stack_11->SetBinContent(20,0.007985446);
   VbbHcc_both_H_dR_stack_11->SetBinContent(21,0.003308428);
   VbbHcc_both_H_dR_stack_11->SetBinContent(24,0.00680394);
   VbbHcc_both_H_dR_stack_11->SetBinContent(25,0.002499098);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.01530509);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.03041538);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.02595327);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.03637226);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.02370957);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.02114835);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.01656351);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.01423112);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.01765094);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.01905783);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.01864788);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.02765173);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.02070418);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.02007329);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.01306319);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.006691842);
   VbbHcc_both_H_dR_stack_11->SetBinError(19,0.006817401);
   VbbHcc_both_H_dR_stack_11->SetBinError(20,0.004682462);
   VbbHcc_both_H_dR_stack_11->SetBinError(21,0.002341966);
   VbbHcc_both_H_dR_stack_11->SetBinError(24,0.003956629);
   VbbHcc_both_H_dR_stack_11->SetBinError(25,0.002499098);
   VbbHcc_both_H_dR_stack_11->SetEntries(939);

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
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.03118602);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.07518204);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.1051894);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.1527943);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.1236691);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.08406875);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.06666511);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.05449967);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.05311715);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.0474315);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.06069486);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.07096668);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.07188005);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.06666173);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.03818928);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.02016867);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.01594435);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.009486218);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.006556257);
   VbbHcc_both_H_dR_stack_12->SetBinContent(22,0.003223926);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.004217361);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,0.0005913853);
   VbbHcc_both_H_dR_stack_12->SetBinContent(25,0.001764227);
   VbbHcc_both_H_dR_stack_12->SetBinContent(26,0.0004309483);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.003315903);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.005495979);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.006126956);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.007520068);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.006741458);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.005409911);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.004863461);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.004298641);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.004329717);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.00400172);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.004618676);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.004940531);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.004990575);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.004852084);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.005093485);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.002705341);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.002324098);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.001866761);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.001526067);
   VbbHcc_both_H_dR_stack_12->SetBinError(22,0.001022572);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.001230906);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,0.0004186972);
   VbbHcc_both_H_dR_stack_12->SetBinError(25,0.000795152);
   VbbHcc_both_H_dR_stack_12->SetBinError(26,0.0004309483);
   VbbHcc_both_H_dR_stack_12->SetEntries(3484);

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
   
   TH1D *VbbHcc_both_H_dR__429 = new TH1D("VbbHcc_both_H_dR__429","",30,0,6);
   VbbHcc_both_H_dR__429->SetBinContent(2,130);
   VbbHcc_both_H_dR__429->SetBinContent(3,133781);
   VbbHcc_both_H_dR__429->SetBinContent(4,153841);
   VbbHcc_both_H_dR__429->SetBinContent(5,126281);
   VbbHcc_both_H_dR__429->SetBinContent(6,120866);
   VbbHcc_both_H_dR__429->SetBinContent(7,120366);
   VbbHcc_both_H_dR__429->SetBinContent(8,124042);
   VbbHcc_both_H_dR__429->SetBinContent(9,132286);
   VbbHcc_both_H_dR__429->SetBinContent(10,143735);
   VbbHcc_both_H_dR__429->SetBinContent(11,161004);
   VbbHcc_both_H_dR__429->SetBinContent(12,182492);
   VbbHcc_both_H_dR__429->SetBinContent(13,209698);
   VbbHcc_both_H_dR__429->SetBinContent(14,241822);
   VbbHcc_both_H_dR__429->SetBinContent(15,272306);
   VbbHcc_both_H_dR__429->SetBinContent(16,286655);
   VbbHcc_both_H_dR__429->SetBinContent(17,193308);
   VbbHcc_both_H_dR__429->SetBinContent(18,144371);
   VbbHcc_both_H_dR__429->SetBinContent(19,112254);
   VbbHcc_both_H_dR__429->SetBinContent(20,87113);
   VbbHcc_both_H_dR__429->SetBinContent(21,67990);
   VbbHcc_both_H_dR__429->SetBinContent(22,51019);
   VbbHcc_both_H_dR__429->SetBinContent(23,37739);
   VbbHcc_both_H_dR__429->SetBinContent(24,25364);
   VbbHcc_both_H_dR__429->SetBinContent(25,15459);
   VbbHcc_both_H_dR__429->SetBinContent(26,8299);
   VbbHcc_both_H_dR__429->SetBinContent(27,3784);
   VbbHcc_both_H_dR__429->SetBinContent(28,1088);
   VbbHcc_both_H_dR__429->SetBinContent(29,81);
   VbbHcc_both_H_dR__429->SetEntries(3157203);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__429->SetLineColor(ci);
   VbbHcc_both_H_dR__429->SetLineWidth(2);
   VbbHcc_both_H_dR__429->SetMarkerStyle(20);
   VbbHcc_both_H_dR__429->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__429->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__429->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__429->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__429->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__429->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__429->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__429->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__429->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__429->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__429->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__429->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__429->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__429->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__429->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__429->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1429[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1429[30] = {
   0,
   49.38203,
   118897.2,
   117607.9,
   93966.5,
   87352.88,
   84747.3,
   93061.9,
   90610.09,
   106892.8,
   114383.2,
   132123.3,
   158888.1,
   182985.2,
   202960.4,
   215128.4,
   140793.2,
   109569.6,
   76912.32,
   54475.95,
   45073.37,
   32471.08,
   24829.56,
   16997.33,
   10808.89,
   5592.275,
   1324.367,
   513.79,
   9.009082,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1429[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1429[30] = {
   0,
   22.44005,
   4000.204,
   4462.117,
   3260.539,
   3702.733,
   2915.418,
   3789.646,
   3309.579,
   4502.667,
   3653.411,
   4746.19,
   5592.713,
   5473.747,
   4947.799,
   5602.245,
   4526.488,
   4675.815,
   4098.94,
   2422.711,
   3445.726,
   2079.872,
   1980.428,
   1629.152,
   1366.624,
   1004.536,
   329.9956,
   102.0573,
   5.374231,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1429,Graph_from_VbbHcc_both_H_dR_fy1429,Graph_from_VbbHcc_both_H_dR_fex1429,Graph_from_VbbHcc_both_H_dR_fey1429);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1429 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1429","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetMaximum(242803.7);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1429);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__430 = new TH1D("data_mc_ratio__430","",30,0,6);
   data_mc_ratio__430->SetBinContent(2,2.632537);
   data_mc_ratio__430->SetBinContent(3,1.125182);
   data_mc_ratio__430->SetBinContent(4,1.308084);
   data_mc_ratio__430->SetBinContent(5,1.343894);
   data_mc_ratio__430->SetBinContent(6,1.383652);
   data_mc_ratio__430->SetBinContent(7,1.420293);
   data_mc_ratio__430->SetBinContent(8,1.332898);
   data_mc_ratio__430->SetBinContent(9,1.459948);
   data_mc_ratio__430->SetBinContent(10,1.344665);
   data_mc_ratio__430->SetBinContent(11,1.407585);
   data_mc_ratio__430->SetBinContent(12,1.381225);
   data_mc_ratio__430->SetBinContent(13,1.319784);
   data_mc_ratio__430->SetBinContent(14,1.321538);
   data_mc_ratio__430->SetBinContent(15,1.341671);
   data_mc_ratio__430->SetBinContent(16,1.332483);
   data_mc_ratio__430->SetBinContent(17,1.372993);
   data_mc_ratio__430->SetBinContent(18,1.317619);
   data_mc_ratio__430->SetBinContent(19,1.459506);
   data_mc_ratio__430->SetBinContent(20,1.599109);
   data_mc_ratio__430->SetBinContent(21,1.508429);
   data_mc_ratio__430->SetBinContent(22,1.571213);
   data_mc_ratio__430->SetBinContent(23,1.519922);
   data_mc_ratio__430->SetBinContent(24,1.492235);
   data_mc_ratio__430->SetBinContent(25,1.430212);
   data_mc_ratio__430->SetBinContent(26,1.484012);
   data_mc_ratio__430->SetBinContent(27,2.857213);
   data_mc_ratio__430->SetBinContent(28,2.117597);
   data_mc_ratio__430->SetBinContent(29,8.990927);
   data_mc_ratio__430->SetBinError(2,0.2308888);
   data_mc_ratio__430->SetBinError(3,0.003076278);
   data_mc_ratio__430->SetBinError(4,0.003335028);
   data_mc_ratio__430->SetBinError(5,0.003781777);
   data_mc_ratio__430->SetBinError(6,0.003979925);
   data_mc_ratio__430->SetBinError(7,0.004093795);
   data_mc_ratio__430->SetBinError(8,0.003784535);
   data_mc_ratio__430->SetBinError(9,0.004014028);
   data_mc_ratio__430->SetBinError(10,0.003546769);
   data_mc_ratio__430->SetBinError(11,0.003507973);
   data_mc_ratio__430->SetBinError(12,0.003233275);
   data_mc_ratio__430->SetBinError(13,0.002882078);
   data_mc_ratio__430->SetBinError(14,0.002687397);
   data_mc_ratio__430->SetBinError(15,0.00257109);
   data_mc_ratio__430->SetBinError(16,0.002488755);
   data_mc_ratio__430->SetBinError(17,0.003122793);
   data_mc_ratio__430->SetBinError(18,0.003467766);
   data_mc_ratio__430->SetBinError(19,0.004356172);
   data_mc_ratio__430->SetBinError(20,0.005417971);
   data_mc_ratio__430->SetBinError(21,0.005784988);
   data_mc_ratio__430->SetBinError(22,0.006956154);
   data_mc_ratio__430->SetBinError(23,0.007823951);
   data_mc_ratio__430->SetBinError(24,0.009369755);
   data_mc_ratio__430->SetBinError(25,0.01150296);
   data_mc_ratio__430->SetBinError(26,0.01629012);
   data_mc_ratio__430->SetBinError(27,0.04644801);
   data_mc_ratio__430->SetBinError(28,0.06419908);
   data_mc_ratio__430->SetBinError(29,0.9989919);
   data_mc_ratio__430->SetMinimum(0.4);
   data_mc_ratio__430->SetMaximum(1.6);
   data_mc_ratio__430->SetEntries(78.31197);
   data_mc_ratio__430->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__430->SetLineColor(ci);
   data_mc_ratio__430->SetLineWidth(2);
   data_mc_ratio__430->SetMarkerStyle(20);
   data_mc_ratio__430->SetMarkerSize(1.2);
   data_mc_ratio__430->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__430->GetXaxis()->SetRange(1,31);
   data_mc_ratio__430->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__430->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__430->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__430->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__430->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__430->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__430->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__430->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__430->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__430->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__430->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__430->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__430->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__430->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__430->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__430->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__430->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1430[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1430[30] = {
   0,
   0.4544173,
   0.03364423,
   0.03794061,
   0.03469896,
   0.04238822,
   0.03440131,
   0.04072178,
   0.0365255,
   0.04212321,
   0.03194011,
   0.03592244,
   0.03519906,
   0.0299136,
   0.02437815,
   0.0260414,
   0.03214991,
   0.04267436,
   0.05329367,
   0.04447304,
   0.07644704,
   0.06405304,
   0.07976086,
   0.09584753,
   0.1264352,
   0.1796292,
   0.2491722,
   0.1986362,
   0.5965348,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1430,Graph_from_mc_statistical_error_fy1430,Graph_from_mc_statistical_error_fex1430,Graph_from_mc_statistical_error_fey1430);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1430 = new TH1F("Graph_Graph_from_mc_statistical_error1430","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1430->SetMinimum(0.2841582);
   Graph_Graph_from_mc_statistical_error1430->SetMaximum(1.715842);
   Graph_Graph_from_mc_statistical_error1430->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1430->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1430->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1430);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
