void H_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Thu Aug  3 10:21:02 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(0,0,1,1);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetFillStyle(4000);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-75.29592,6.314516,75230.62);
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
   st->SetMaximum(64476.22);
   
   TH1F *st_stack_42 = new TH1F("st_stack_42","",30,0,6);
   st_stack_42->SetMinimum(0.01);
   st_stack_42->SetMaximum(67700.03);
   st_stack_42->SetDirectory(0);
   st_stack_42->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_42->SetLineColor(ci);
   st_stack_42->GetXaxis()->SetRange(1,30);
   st_stack_42->GetXaxis()->SetLabelFont(42);
   st_stack_42->GetXaxis()->SetLabelSize(0.035);
   st_stack_42->GetXaxis()->SetTitleSize(0.035);
   st_stack_42->GetXaxis()->SetTitleFont(42);
   st_stack_42->GetYaxis()->SetTitle("Events/0.2");
   st_stack_42->GetYaxis()->SetLabelFont(42);
   st_stack_42->GetYaxis()->SetLabelSize(0.05);
   st_stack_42->GetYaxis()->SetTitleSize(0.057);
   st_stack_42->GetYaxis()->SetTitleOffset(1.2);
   st_stack_42->GetYaxis()->SetTitleFont(42);
   st_stack_42->GetZaxis()->SetLabelFont(42);
   st_stack_42->GetZaxis()->SetLabelSize(0.035);
   st_stack_42->GetZaxis()->SetTitleSize(0.035);
   st_stack_42->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_42);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,4525.572);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,20674.53);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,21881.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,16524.69);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,12743.31);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,27322.25);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,10834.67);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,10826.03);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,10434.93);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,7335.092);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,5555.769);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,6458.979);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,7365.244);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5324.829);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,5015.316);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,4815.391);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,4081.914);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,2170.063);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,17587.81);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,1040.234);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,1757.552);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,485.7416);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,655.4235);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,538.1393);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,612.7797);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,309.0671);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,364.8232);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,141.4121);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,56.53666);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,56.85235);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,103.8102);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,684.9345);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,1686.335);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,1826.552);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,1625.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1378.44);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,14882.94);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,1686.737);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,1391.449);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1724.818);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,1065.602);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,913.5743);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,992.6616);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1155.77);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,912.2473);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,907.5612);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,906.6669);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,822.9501);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,488.9154);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,14825.22);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,288.7017);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,547.2022);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,82.6424);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,278.8931);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,275.0906);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,278.5186);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,71.11146);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,270.624);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,43.606);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,32.21999);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,32.22365);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,45.04293);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(10314);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,25.01445);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,98.79788);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,122.5763);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,99.46942);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,79.58442);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,70.30486);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,59.78439);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,49.06109);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,45.29833);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,36.61516);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,35.98666);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,33.51837);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,32.43317);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,29.97776);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,27.83842);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,22.42875);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,20.19994);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,13.13425);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,14.42745);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,11.11516);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,9.462372);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,6.206863);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,5.29356);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,3.898297);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,5.796841);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,3.397027);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,1.182708);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,1.089058);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,1.00197);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.3393822);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.106893);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,2.022962);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,3.961171);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,4.410091);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,3.96542);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,3.430922);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.262298);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,3.066419);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,2.752893);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,2.58244);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,2.358018);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,2.341285);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.263153);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,2.227652);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,2.122861);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,2.097703);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.798857);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.736101);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.195955);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.453498);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,1.247374);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,1.191777);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.8993069);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.8096734);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.5984261);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.9797422);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.7484738);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.3376614);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.2324559);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.4012509);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.1284004);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.4086517);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(11980);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,375.8495);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,1808.77);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,2335.426);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,2113.789);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,1785.403);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1426.91);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,1183.99);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,997.833);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,877.1872);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,781.7817);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,704.9939);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,671.1243);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,608.5006);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,543.8767);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,494.4617);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,426.372);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,348.4275);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,289.6722);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,236.7478);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,198.0677);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,157.0526);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,133.2729);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,99.31662);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,75.63914);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,58.9829);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,44.29744);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,29.68129);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,20.4619);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,14.9248);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,8.961179);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,15.87253);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,4.816278);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,10.58362);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,12.07424);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,11.50113);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,10.5785);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,9.452088);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,8.599552);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,7.892275);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,7.411708);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,7.001471);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,6.643446);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,6.490902);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,6.181864);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,5.844575);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,5.572024);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,5.155293);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,4.66121);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,4.250325);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,3.830589);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,3.502999);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,3.118637);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,2.863709);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,2.466846);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,2.150853);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,1.913813);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,1.655101);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.352097);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,1.111684);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,0.9588925);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.7292533);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,0.9791554);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(317372);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,61.41005);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,281.2288);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,305.5425);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,256.7748);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,200.2354);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,173.6386);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,125.7345);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,121.9316);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,107.701);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,93.42223);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,89.30295);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,80.63601);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,85.0993);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,67.86268);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,62.9443);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,63.34579);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,40.17626);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,34.5113);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,26.18467);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,22.90893);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,21.29481);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,13.8277);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,11.80882);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,13.7983);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,9.887286);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,4.346731);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,3.407365);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,2.707166);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,1.191131);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,0.240921);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,1.321305);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,3.798491);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,10.55226);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,10.70246);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,12.13113);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,8.888997);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,10.66203);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,7.388797);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,6.894003);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,6.622611);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,4.491455);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,6.195048);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,5.527453);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,7.170386);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,3.759986);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,5.146823);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,6.425327);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,4.65631);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,3.735171);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,2.30255);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,3.365301);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,4.212333);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,1.729278);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,1.505288);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,1.805833);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,2.952195);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,0.8678929);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,0.8174412);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.6365482);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.4301198);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.1432591);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.5474068);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(17051);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,7.398674);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,26.88102);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,33.74);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,21.74033);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,32.65316);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,13.43757);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,8.626942);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,13.52867);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,11.38598);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,9.017523);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,10.13337);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,6.896213);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,7.033284);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,7.221531);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,5.613279);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,4.716014);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,4.820442);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,4.487801);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,3.586646);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,3.123085);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,1.437117);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,3.778359);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,0.5855074);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,1.088797);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,0.5800307);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,0.8666387);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,2.065533);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.3372293);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.2691794);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.5168254);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.1018572);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,0.85619);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,3.418949);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,3.805701);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,3.18677);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,9.858381);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,1.831633);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,1.07353);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,2.846994);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.516946);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,2.211406);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,2.475202);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,1.507851);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,1.428501);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,1.061664);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,1.743647);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.336383);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,0.9348939);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,1.365345);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,1.275005);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,1.246542);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.4815765);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,1.699243);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,0.2787173);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.3267065);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.215155);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.3461547);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,1.239692);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.16712);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.194506);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.3714913);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.09098732);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(2254);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,1.261224);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.6306118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,0.4958844);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,0.9917687);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.7438266);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.4958844);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,0.4958844);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,1.239711);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,0.3506432);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.4958844);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.4294485);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.3506432);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.3506432);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.5544156);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,7.849994);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,5.317738);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,4.811287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,2.27903);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,2.785482);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,1.266128);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,2.532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,1.266128);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,2.532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,1.772579);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,1.012902);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(21,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.409901);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.160426);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.103785);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.8398543);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.5662297);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.8007697);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.5662297);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.8007697);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.4385996);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.669972);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.4385996);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(21,0.3581151);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.3581151);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,1.145118);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,5.59315);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,6.911085);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,5.717514);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,4.155696);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,3.007348);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,2.324153);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,2.120648);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,2.031817);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,1.970443);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,2.00436);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,1.912298);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,1.755632);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.430994);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.18065);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,0.9157713);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.6008235);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.4506176);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.3262536);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.2148105);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.193814);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.1502059);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.1292094);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.1227489);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.05975932);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.05168374);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.0290721);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.02261164);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.008075584);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.004845351);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.004845351);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.0430058);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.0950452);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.1056514);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.09609606);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.0819264);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.06969374);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.06126809);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.05852431);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.05728544);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.05641361);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.05689706);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.05557504);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.05324989);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.04807517);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.04366793);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.03845878);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.03115125);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.02697777);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02295512);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.01862644);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.01769272);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.01557562);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01444604);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.01408026);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.009824372);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.009136481);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.006852361);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.006043214);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.003611511);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.002797464);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.002797464);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.4676976);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,2.315684);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,3.021791);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,2.656506);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,2.007202);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,1.451604);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,1.121562);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,0.9698091);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,0.8553725);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,0.7716181);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,0.7803253);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,0.6969855);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.6298162);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.5477203);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.4623075);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.369846);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.3039205);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.218093);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.1720696);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.1289485);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.1032418);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.08458361);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.07131559);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.05265744);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.03441392);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.02073128);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.01699965);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.008292511);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.007048634);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.001658502);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.004146255);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.01392549);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.03098615);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.03539649);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.03318818);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.02884852);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.02453308);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.02156451);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.02005262);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.0188324);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.01788666);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.01798729);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.01699965);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.01615976);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.0150698);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01384502);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01238336);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01122556);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.009509308);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.008446564);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.007312001);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.006542681);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.005922037);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.005437763);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.004672592);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.003777418);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.002931845);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.002654899);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.001854262);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.001709545);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.0008292511);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.001311161);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.009481507);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.02212352);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.01738276);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.02370377);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.006321005);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.006321005);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(23,0.004740753);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.003870809);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.005912758);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.0052411);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.006120286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(23,0.002737075);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001038028);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.00622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.008719438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.007681409);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.005397747);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.005812958);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.002906479);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.003114085);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.001868451);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.001868451);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.002698874);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.00145324);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.00145324);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0004642204);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.001137103);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.001345438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001262816);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001058585);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001098546);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0007767892);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.0008040532);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.0006565067);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0007485328);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0005492729);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005492729);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__83 = new TH1D("VbbHcc_tags_H_dR_Bj0__83","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(1,2304);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(2,8185);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(3,8438);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(4,6910);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(5,5725);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(6,4716);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(7,3938);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(8,3414);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(9,3074);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(10,2796);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(11,2524);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(12,2352);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(13,2087);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(14,1985);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(15,1813);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(16,1489);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(17,1242);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(18,1050);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(19,886);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(20,788);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(21,588);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(22,555);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(23,439);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(24,351);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(25,239);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(26,223);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(27,134);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(28,106);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(29,59);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(30,58);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(31,63);
   VbbHcc_tags_H_dR_Bj0__83->SetEntries(68560);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__83->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__83->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__83->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__83->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__83->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1083[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1083[30] = {
   4998.387,
   22907.75,
   24695.46,
   19030.43,
   14850.14,
   29014.3,
   12217.53,
   12014.02,
   11480.66,
   8260.949,
   6400.74,
   7256.546,
   8101.706,
   5977.271,
   5610.578,
   5335.564,
   4497.452,
   2513.553,
   17869.26,
   1275.794,
   1947.605,
   643.317,
   772.887,
   632.9928,
   688.4364,
   362.5542,
   401.2061,
   166.2918,
   73.93886,
   66.91716};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1083[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1083[30] = {
   684.9657,
   1686.41,
   1826.633,
   1625.129,
   1378.549,
   14882.94,
   1686.779,
   1391.494,
   1724.851,
   1065.64,
   913.6261,
   992.7023,
   1155.812,
   912.2771,
   907.5974,
   906.7074,
   822.979,
   488.9518,
   14825.22,
   288.748,
   547.2289,
   82.73282,
   278.9095,
   275.1059,
   278.5428,
   71.1417,
   270.6316,
   43.62649,
   32.24021,
   32.23461};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1083);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetMinimum(31.21429);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetMaximum(48283.5);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__84 = new TH1D("data_mc_ratio__84","",30,0,6);
   data_mc_ratio__84->SetBinContent(1,0.4609487);
   data_mc_ratio__84->SetBinContent(2,0.3573026);
   data_mc_ratio__84->SetBinContent(3,0.3416823);
   data_mc_ratio__84->SetBinContent(4,0.3631028);
   data_mc_ratio__84->SetBinContent(5,0.3855182);
   data_mc_ratio__84->SetBinContent(6,0.1625406);
   data_mc_ratio__84->SetBinContent(7,0.3223238);
   data_mc_ratio__84->SetBinContent(8,0.2841681);
   data_mc_ratio__84->SetBinContent(9,0.2677547);
   data_mc_ratio__84->SetBinContent(10,0.3384599);
   data_mc_ratio__84->SetBinContent(11,0.3943294);
   data_mc_ratio__84->SetBinContent(12,0.3241212);
   data_mc_ratio__84->SetBinContent(13,0.2576001);
   data_mc_ratio__84->SetBinContent(14,0.3320914);
   data_mc_ratio__84->SetBinContent(15,0.3231396);
   data_mc_ratio__84->SetBinContent(16,0.2790708);
   data_mc_ratio__84->SetBinContent(17,0.2761563);
   data_mc_ratio__84->SetBinContent(18,0.4177354);
   data_mc_ratio__84->SetBinContent(19,0.04958235);
   data_mc_ratio__84->SetBinContent(20,0.6176545);
   data_mc_ratio__84->SetBinContent(21,0.3019093);
   data_mc_ratio__84->SetBinContent(22,0.8627162);
   data_mc_ratio__84->SetBinContent(23,0.5680003);
   data_mc_ratio__84->SetBinContent(24,0.5545086);
   data_mc_ratio__84->SetBinContent(25,0.3471635);
   data_mc_ratio__84->SetBinContent(26,0.6150804);
   data_mc_ratio__84->SetBinContent(27,0.3339929);
   data_mc_ratio__84->SetBinContent(28,0.6374339);
   data_mc_ratio__84->SetBinContent(29,0.7979566);
   data_mc_ratio__84->SetBinContent(30,0.8667433);
   data_mc_ratio__84->SetBinContent(31,0.5154563);
   data_mc_ratio__84->SetBinError(1,0.009603098);
   data_mc_ratio__84->SetBinError(2,0.003949361);
   data_mc_ratio__84->SetBinError(3,0.003719655);
   data_mc_ratio__84->SetBinError(4,0.004368079);
   data_mc_ratio__84->SetBinError(5,0.005095153);
   data_mc_ratio__84->SetBinError(6,0.002366872);
   data_mc_ratio__84->SetBinError(7,0.005136349);
   data_mc_ratio__84->SetBinError(8,0.00486344);
   data_mc_ratio__84->SetBinError(9,0.00482931);
   data_mc_ratio__84->SetBinError(10,0.006400864);
   data_mc_ratio__84->SetBinError(11,0.007849003);
   data_mc_ratio__84->SetBinError(12,0.006683266);
   data_mc_ratio__84->SetBinError(13,0.005638774);
   data_mc_ratio__84->SetBinError(14,0.007453793);
   data_mc_ratio__84->SetBinError(15,0.007589117);
   data_mc_ratio__84->SetBinError(16,0.007232143);
   data_mc_ratio__84->SetBinError(17,0.007835996);
   data_mc_ratio__84->SetBinError(18,0.01289159);
   data_mc_ratio__84->SetBinError(19,0.001665752);
   data_mc_ratio__84->SetBinError(20,0.02200303);
   data_mc_ratio__84->SetBinError(21,0.01245053);
   data_mc_ratio__84->SetBinError(22,0.03662026);
   data_mc_ratio__84->SetBinError(23,0.02710917);
   data_mc_ratio__84->SetBinError(24,0.02959748);
   data_mc_ratio__84->SetBinError(25,0.02245614);
   data_mc_ratio__84->SetBinError(26,0.04118883);
   data_mc_ratio__84->SetBinError(27,0.02885259);
   data_mc_ratio__84->SetBinError(28,0.06191305);
   data_mc_ratio__84->SetBinError(29,0.1038851);
   data_mc_ratio__84->SetBinError(30,0.113809);
   data_mc_ratio__84->SetBinError(31,0.2008207);
   data_mc_ratio__84->SetMinimum(0.4);
   data_mc_ratio__84->SetMaximum(1.6);
   data_mc_ratio__84->SetEntries(246.2373);
   data_mc_ratio__84->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__84->SetLineColor(ci);
   data_mc_ratio__84->SetLineWidth(2);
   data_mc_ratio__84->SetMarkerStyle(20);
   data_mc_ratio__84->SetMarkerSize(1.2);
   data_mc_ratio__84->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__84->GetXaxis()->SetRange(1,30);
   data_mc_ratio__84->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__84->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__84->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__84->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__84->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__84->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__84->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__84->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__84->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__84->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__84->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__84->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__84->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__84->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__84->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__84->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__84->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1084[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1084[30] = {
   0.1370374,
   0.07361746,
   0.07396637,
   0.08539638,
   0.09283071,
   0.5129521,
   0.1380622,
   0.1158225,
   0.1502397,
   0.1289973,
   0.1427376,
   0.1368009,
   0.1426627,
   0.1526244,
   0.1617654,
   0.1699366,
   0.1829878,
   0.1945262,
   0.8296492,
   0.226328,
   0.2809753,
   0.1286035,
   0.3608672,
   0.4346114,
   0.4046021,
   0.1962236,
   0.6745451,
   0.2623491,
   0.4360388,
   0.4817092};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1084,Graph_from_mc_statistical_error_fy1084,Graph_from_mc_statistical_error_fex1084,Graph_from_mc_statistical_error_fey1084);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1084 = new TH1F("Graph_Graph_from_mc_statistical_error1084","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1084->SetMinimum(0.004420906);
   Graph_Graph_from_mc_statistical_error1084->SetMaximum(1.995579);
   Graph_Graph_from_mc_statistical_error1084->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1084->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1084);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}
