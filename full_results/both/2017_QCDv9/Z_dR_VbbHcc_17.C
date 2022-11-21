void Z_dR_VbbHcc_17()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_17/Z_dR_VbbHcc_17
//=========  (Mon Nov 21 13:07:00 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_17 = new TCanvas("Z_dR_VbbHcc_17", "Z_dR_VbbHcc_17",0,0,600,600);
   Z_dR_VbbHcc_17->SetHighLightColor(2);
   Z_dR_VbbHcc_17->Range(0,0,1,1);
   Z_dR_VbbHcc_17->SetFillColor(0);
   Z_dR_VbbHcc_17->SetFillStyle(4000);
   Z_dR_VbbHcc_17->SetBorderMode(0);
   Z_dR_VbbHcc_17->SetBorderSize(2);
   Z_dR_VbbHcc_17->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-5428.027,10.52419,5422609);
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
   st->SetMaximum(4647434);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",50,0,10);
   st_stack_18->SetMinimum(0.01);
   st_stack_18->SetMaximum(4879805);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetRange(1,50);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetLabelSize(0.035);
   st_stack_18->GetXaxis()->SetTitleSize(0.035);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetLabelSize(0.05);
   st_stack_18->GetYaxis()->SetTitleSize(0.057);
   st_stack_18->GetYaxis()->SetTitleOffset(1.2);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetLabelSize(0.035);
   st_stack_18->GetZaxis()->SetTitleSize(0.035);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_duong_Z_dR_stack_1 = new TH1D("VbbHcc_duong_Z_dR_stack_1","",50,0,10);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(3,1363857);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(4,1852892);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(5,1399637);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(6,1294953);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(7,1105083);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(8,1113904);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(9,1047033);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(10,1101187);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(11,1086086);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(12,1217471);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(13,1297533);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(14,1401329);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(15,1579966);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(16,1730137);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(17,1047464);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(18,646064.8);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(19,491729.6);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(20,332908);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(21,254492.4);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(22,163036.3);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(23,125052.6);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(24,89559.05);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(25,33983.55);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(26,26666.12);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(27,16204.41);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(28,6501.006);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(3,42456.61);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(4,49118.15);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(5,42851.53);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(6,41206.95);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(7,38208.51);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(8,38235.69);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(9,36918.78);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(10,37936.98);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(11,37649.94);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(12,39954.01);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(13,41293.85);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(14,42729.18);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(15,45575.04);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(16,47602.01);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(17,36962.42);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(18,29072.75);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(19,25288.16);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(20,20852.98);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(21,18203.93);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(22,14704.8);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(23,12715.6);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(24,10747.6);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(25,6620.754);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(26,5742.667);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(27,4578.553);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(28,2959.598);
   VbbHcc_duong_Z_dR_stack_1->SetEntries(17541);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_2 = new TH1D("VbbHcc_duong_Z_dR_stack_2","",50,0,10);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(2,3.46452);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(3,3419.881);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(4,6515.355);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(5,7632.05);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(6,9323.508);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(7,10948.21);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(8,12369.14);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(9,13834.03);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(10,15232.41);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(11,16620.07);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(12,17991.23);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(13,19252.12);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(14,20568.34);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(15,21433.33);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(16,20871.15);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(17,11594.49);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(18,7069.182);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(19,4625.932);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(20,2933.312);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(21,1941.44);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(22,1199.799);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(23,727.2309);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(24,420.8487);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(25,201.6376);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(26,94.34727);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(27,36.95459);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(28,8.138325);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(29,0.5623629);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(2,0.8607794);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(3,24.499);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(4,33.32191);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(5,36.24772);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(6,40.17046);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(7,43.59986);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(8,46.27142);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(9,48.92902);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(10,51.19697);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(11,53.50562);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(12,55.64225);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(13,57.47728);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(14,59.52761);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(15,60.77748);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(16,60.08473);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(17,45.49921);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(18,35.97344);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(19,29.41519);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(20,23.3661);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(21,19.21915);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(22,15.13865);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(23,11.74883);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(24,8.975658);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(25,6.110208);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(26,4.026278);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(27,2.531634);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(28,1.159646);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(29,0.3351711);
   VbbHcc_duong_Z_dR_stack_2->SetEntries(3055962);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_3 = new TH1D("VbbHcc_duong_Z_dR_stack_3","",50,0,10);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(2,28.83457);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(3,45656.44);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(4,91054.35);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(5,108460.3);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(6,132027.7);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(7,154476);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(8,175802.6);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(9,196729.4);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(10,218049);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(11,240606);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(12,264880.4);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(13,290367.1);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(14,315319.6);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(15,338243.4);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(16,331117.1);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(17,174627.3);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(18,100026.4);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(19,59629.94);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(20,35375.23);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(21,20547.47);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(22,11645.73);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(23,6299.299);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(24,3227.277);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(25,1538.14);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(26,651.9098);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(27,218.4732);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(28,49.20041);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(29,2.647044);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(2,1.427857);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(3,57.33782);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(4,81.19403);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(5,88.70715);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(6,97.91778);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(7,105.9563);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(8,113.0473);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(9,119.6112);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(10,125.9454);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(11,132.3438);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(12,138.9289);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(13,145.545);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(14,151.7855);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(15,157.3057);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(16,155.7379);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(17,113.0927);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(18,85.53683);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(19,66.01423);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(20,50.80406);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(21,38.66069);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(22,29.04797);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(23,21.29827);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(24,15.15687);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(25,10.45918);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(26,6.775358);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(27,3.862303);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(28,1.820281);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(29,0.4132415);
   VbbHcc_duong_Z_dR_stack_3->SetEntries(5.062272e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_4 = new TH1D("VbbHcc_duong_Z_dR_stack_4","",50,0,10);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(2,0.9854402);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(3,1593.901);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(4,4182.414);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(5,6009.057);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(6,5908.282);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(7,4838.416);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(8,3908.11);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(9,3310.377);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(10,2942.146);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(11,2755.679);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(12,2812.416);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(13,2832.892);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(14,3059.187);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(15,3230.311);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(16,3132.94);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(17,1633.022);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(18,1063.659);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(19,720.3748);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(20,524.3972);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(21,371.8968);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(22,228.9464);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(23,143.2762);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(24,87.27677);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(25,44.53948);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(26,24.60299);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(27,9.45457);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(28,4.538105);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(2,0.5798785);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(3,25.02323);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(4,40.46669);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(5,48.49277);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(6,48.11728);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(7,43.50528);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(8,39.08704);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(9,36.0133);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(10,33.85487);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(11,32.86878);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(12,33.17768);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(13,33.22602);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(14,34.58957);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(15,35.52023);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(16,35.03519);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(17,25.22019);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(18,20.36813);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(19,16.71848);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(20,14.26578);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(21,11.96478);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(22,9.382455);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(23,7.407522);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(24,5.727248);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(25,4.14079);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(26,2.978533);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(27,1.853047);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(28,1.469429);
   VbbHcc_duong_Z_dR_stack_4->SetEntries(148572);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_5 = new TH1D("VbbHcc_duong_Z_dR_stack_5","",50,0,10);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(2,6.301682);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(3,2792.195);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(4,3139.558);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(5,2166.874);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(6,1834.629);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(7,1676.326);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(8,1512.006);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(9,1472.444);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(10,1576.694);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(11,1651.193);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(12,1789.406);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(13,2005.776);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(14,2091.901);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(15,2499.279);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(16,2510.058);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(17,1455.915);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(18,1017.566);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(19,708.3115);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(20,511.5288);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(21,351.6029);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(22,248.4224);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(23,169.7845);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(24,98.26396);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(25,58.44197);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(26,26.25148);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(27,9.949732);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(28,1.404452);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(2,2.921052);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(3,61.03247);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(4,64.54356);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(5,53.79358);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(6,49.40386);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(7,47.1582);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(8,44.87802);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(9,43.98832);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(10,45.66352);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(11,46.86241);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(12,48.86135);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(13,51.42911);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(14,52.75592);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(15,57.69422);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(16,57.85521);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(17,43.91743);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(18,36.65433);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(19,30.56039);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(20,25.85201);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(21,21.40875);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(22,17.71608);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(23,14.77127);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(24,11.07418);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(25,8.584401);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(26,5.695984);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(27,3.448458);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(28,1.404452);
   VbbHcc_duong_Z_dR_stack_5->SetEntries(26540);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_6 = new TH1D("VbbHcc_duong_Z_dR_stack_6","",50,0,10);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(3,44.70898);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(4,49.9456);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(5,43.25882);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(6,46.29024);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(7,43.40196);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(8,51.19999);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(9,49.40216);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(10,65.28734);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(11,66.96007);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(12,72.9345);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(13,79.60089);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(14,91.59396);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(15,93.15303);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(16,102.6509);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(17,58.41787);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(18,37.19476);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(19,23.82455);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(20,21.20526);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(21,12.86888);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(22,12.64551);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(23,5.686928);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(24,5.849706);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(25,2.082125);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(26,0.252518);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(27,0.05813051);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(3,3.190755);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(4,3.403959);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(5,3.163904);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(6,3.303511);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(7,3.175194);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(8,3.457882);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(9,3.393094);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(10,3.950661);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(11,3.94676);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(12,4.137922);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(13,4.346747);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(14,4.665825);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(15,4.653634);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(16,4.901476);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(17,3.714304);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(18,2.942121);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(19,2.348324);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(20,2.209417);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(21,1.692569);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(22,1.716403);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(23,1.150612);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(24,1.186373);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(25,0.6989401);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(26,0.252518);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(27,0.05813051);
   VbbHcc_duong_Z_dR_stack_6->SetEntries(4860);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_7 = new TH1D("VbbHcc_duong_Z_dR_stack_7","",50,0,10);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(2,0.1802224);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(3,77.69821);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(4,127.7741);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(5,140.4393);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(6,155.4154);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(7,166.4244);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(8,160.1658);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(9,141.9768);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(10,131.1603);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(11,122.6246);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(12,121.9263);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(13,118.0121);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(14,119.5509);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(15,135.2964);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(16,116.6631);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(17,52.34903);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(18,26.83317);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(19,19.22706);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(20,14.43296);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(21,7.397516);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(22,6.075197);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(23,4.511907);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(24,2.815111);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(25,2.611137);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(26,0.3679384);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(27,0.188822);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(2,0.1802224);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(3,3.616729);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(4,4.634175);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(5,4.856921);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(6,5.094252);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(7,5.313166);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(8,5.186121);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(9,4.907154);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(10,4.694183);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(11,4.570823);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(12,4.563543);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(13,4.482038);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(14,4.469988);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(15,4.777152);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(16,4.453441);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(17,2.99767);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(18,2.106609);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(19,1.802421);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(20,1.569736);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(21,1.089513);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(22,0.9779039);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(23,0.8526037);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(24,0.653323);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(25,0.6538271);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(26,0.2601734);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(27,0.1357512);
   VbbHcc_duong_Z_dR_stack_7->SetEntries(12244);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_8 = new TH1D("VbbHcc_duong_Z_dR_stack_8","",50,0,10);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(3,53.18583);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(4,96.79048);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(5,119.1042);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(6,135.3458);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(7,137.348);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(8,135.5686);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(9,134.5641);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(10,121.4738);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(11,121.5581);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(12,124.9349);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(13,126.3168);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(14,138.8279);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(15,150.8377);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(16,135.1908);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(17,51.32196);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(18,24.16474);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(19,14.72585);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(20,10.05382);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(21,6.667272);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(22,3.187604);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(23,3.343711);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(24,1.456482);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(25,0.6289882);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(26,0.1937001);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(3,3.399855);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(4,4.587502);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(5,5.060719);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(6,5.469532);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(7,5.500335);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(8,5.444499);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(9,5.408621);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(10,5.162699);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(11,5.170656);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(12,5.217443);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(13,5.300913);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(14,5.510101);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(15,5.7372);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(16,5.415329);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(17,3.325037);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(18,2.301121);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(19,1.802493);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(20,1.455025);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(21,1.19557);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(22,0.8327566);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(23,0.8541942);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(24,0.5591331);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(25,0.3645903);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(26,0.1937001);
   VbbHcc_duong_Z_dR_stack_8->SetEntries(8846);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_9 = new TH1D("VbbHcc_duong_Z_dR_stack_9","",50,0,10);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(2,0.005942507);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(3,11.24551);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(4,26.4571);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(5,35.48664);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(6,44.35042);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(7,50.11581);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(8,51.89273);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(9,52.45598);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(10,50.95009);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(11,48.75699);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(12,47.70506);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(13,47.62851);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(14,49.18998);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(15,51.44382);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(16,48.47908);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(17,15.72158);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(18,5.818107);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(19,2.782084);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(20,1.311322);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(21,0.8148147);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(22,0.5732779);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(23,0.3169246);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(24,0.1868978);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(25,0.1010889);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(26,0.04088413);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(27,0.01284393);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(28,0.007867189);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(2,0.003477684);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(3,0.1466569);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(4,0.2255231);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(5,0.2616339);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(6,0.2921694);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(7,0.3109332);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(8,0.3162057);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(9,0.3180603);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(10,0.3134709);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(11,0.3066491);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(12,0.3033973);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(13,0.3031942);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(14,0.30804);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(15,0.3150545);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(16,0.3056819);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(17,0.1740955);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(18,0.1052468);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(19,0.0725067);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(20,0.04962929);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(21,0.03907925);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(22,0.03274431);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(23,0.0239219);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(24,0.01837924);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(25,0.01342137);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(26,0.008493112);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(27,0.005508214);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(28,0.003987314);
   VbbHcc_duong_Z_dR_stack_9->SetEntries(365953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_10 = new TH1D("VbbHcc_duong_Z_dR_stack_10","",50,0,10);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(2,0.005013258);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(3,5.004951);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(4,10.52091);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(5,14.29279);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(6,17.58629);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(7,18.66403);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(8,17.38152);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(9,14.49651);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(10,11.7944);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(11,10.15724);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(12,9.313321);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(13,9.348539);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(14,9.661449);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(15,10.22583);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(16,9.722511);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(17,3.944612);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(18,1.820165);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(19,0.920323);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(20,0.5045556);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(21,0.3009386);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(22,0.1623521);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(23,0.08984902);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(24,0.04881743);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(25,0.02457676);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(26,0.005542263);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(27,0.004570254);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(28,0.001265747);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(2,0.00151519);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(3,0.04699695);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(4,0.06812504);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(5,0.07950821);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(6,0.0882532);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(7,0.09101751);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(8,0.08785672);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(9,0.08023816);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(10,0.0723731);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(11,0.06712814);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(12,0.06428025);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(13,0.06437456);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(14,0.06544901);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(15,0.06734418);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(16,0.06569692);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(17,0.04177383);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(18,0.02836138);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(19,0.02016288);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(20,0.01488428);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(21,0.01148251);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(22,0.008410902);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(23,0.006258488);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(24,0.00460092);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(25,0.003221836);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(26,0.001546454);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(27,0.001384231);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(28,0.0007353976);
   VbbHcc_duong_Z_dR_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_11 = new TH1D("VbbHcc_duong_Z_dR_stack_11","",50,0,10);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(3,0.3501012);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(4,0.5902128);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(5,0.8479976);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(6,1.024201);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(7,0.9178421);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(8,0.8972193);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(9,0.8353682);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(10,0.7537633);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(11,0.7310162);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(12,0.6658431);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(13,0.6593918);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(14,0.7203625);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(15,0.6654829);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(16,0.6674402);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(17,0.2813095);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(18,0.1194671);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(19,0.05324679);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(20,0.04440727);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(21,0.0126912);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(22,0.01527674);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(23,0.01062894);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(24,0.005865016);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(25,0.00514705);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(3,0.02548927);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(4,0.03245682);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(5,0.03938405);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(6,0.04338787);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(7,0.04103125);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(8,0.04065645);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(9,0.03904466);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(10,0.03701044);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(11,0.03656537);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(12,0.03508108);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(13,0.03468617);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(14,0.03616659);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(15,0.03442249);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(16,0.03517431);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(17,0.02218838);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(18,0.01497521);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(19,0.009354985);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(20,0.008949968);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(21,0.004540249);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(22,0.004916016);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(23,0.00427903);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(24,0.003081434);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(25,0.002998255);
   VbbHcc_duong_Z_dR_stack_11->SetEntries(7275);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_12 = new TH1D("VbbHcc_duong_Z_dR_stack_12","",50,0,10);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(3,2275.992);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(4,5080.279);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(5,8014.051);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(6,8905.598);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(7,7422.839);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(8,5144.516);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(9,3821.824);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(10,3165.744);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(11,3080.039);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(12,2794.036);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(13,2899.22);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(14,3175.391);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(15,3307.382);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(16,3163.28);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(17,1497.031);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(18,891.8808);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(19,594.6207);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(20,245.2893);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(21,205.0647);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(22,104.5731);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(23,83.01652);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(24,34.34565);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(25,15.0385);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(26,5.003533);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(27,5.512161);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(3,109.3797);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(4,162.9625);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(5,204.3419);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(6,215.1282);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(7,197.5043);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(8,163.725);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(9,140.6444);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(10,128.9154);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(11,126.6571);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(12,121.245);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(13,122.4799);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(14,128.4797);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(15,130.3243);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(16,127.6892);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(17,88.51623);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(18,67.68337);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(19,55.74415);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(20,34.0216);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(21,33.02943);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(22,22.50371);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(23,20.36514);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(24,13.12053);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(25,8.617866);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(26,5.003533);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(27,5.512161);
   VbbHcc_duong_Z_dR_stack_12->SetEntries(14601);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_Z_dR__35 = new TH1D("VbbHcc_duong_Z_dR__35","",50,0,10);
   VbbHcc_duong_Z_dR__35->SetBinContent(2,200);
   VbbHcc_duong_Z_dR__35->SetBinContent(3,348613);
   VbbHcc_duong_Z_dR__35->SetBinContent(4,366528);
   VbbHcc_duong_Z_dR__35->SetBinContent(5,254716);
   VbbHcc_duong_Z_dR__35->SetBinContent(6,223301);
   VbbHcc_duong_Z_dR__35->SetBinContent(7,206335);
   VbbHcc_duong_Z_dR__35->SetBinContent(8,195913);
   VbbHcc_duong_Z_dR__35->SetBinContent(9,193167);
   VbbHcc_duong_Z_dR__35->SetBinContent(10,194667);
   VbbHcc_duong_Z_dR__35->SetBinContent(11,201509);
   VbbHcc_duong_Z_dR__35->SetBinContent(12,212961);
   VbbHcc_duong_Z_dR__35->SetBinContent(13,228294);
   VbbHcc_duong_Z_dR__35->SetBinContent(14,249431);
   VbbHcc_duong_Z_dR__35->SetBinContent(15,274609);
   VbbHcc_duong_Z_dR__35->SetBinContent(16,281642);
   VbbHcc_duong_Z_dR__35->SetBinContent(17,165688);
   VbbHcc_duong_Z_dR__35->SetBinContent(18,106544);
   VbbHcc_duong_Z_dR__35->SetBinContent(19,71838);
   VbbHcc_duong_Z_dR__35->SetBinContent(20,48554);
   VbbHcc_duong_Z_dR__35->SetBinContent(21,32201);
   VbbHcc_duong_Z_dR__35->SetBinContent(22,21342);
   VbbHcc_duong_Z_dR__35->SetBinContent(23,13402);
   VbbHcc_duong_Z_dR__35->SetBinContent(24,7766);
   VbbHcc_duong_Z_dR__35->SetBinContent(25,4220);
   VbbHcc_duong_Z_dR__35->SetBinContent(26,2005);
   VbbHcc_duong_Z_dR__35->SetBinContent(27,791);
   VbbHcc_duong_Z_dR__35->SetBinContent(28,184);
   VbbHcc_duong_Z_dR__35->SetBinContent(29,12);
   VbbHcc_duong_Z_dR__35->SetEntries(3906433);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR__35->SetLineColor(ci);
   VbbHcc_duong_Z_dR__35->SetLineWidth(2);
   VbbHcc_duong_Z_dR__35->SetMarkerStyle(20);
   VbbHcc_duong_Z_dR__35->SetMarkerSize(1.2);
   VbbHcc_duong_Z_dR__35->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR__35->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__35->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__35->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__35->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__35->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__35->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__35->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__35->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR__35->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__35->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__35->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__35->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__35->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__35->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_Z_dR_fx1035[50] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_dR_fy1035[50] = {
   0,
   39.77739,
   1419787,
   1963176,
   1532273,
   1453353,
   1284861,
   1313057,
   1266595,
   1342534,
   1351170,
   1508116,
   1615272,
   1745953,
   1949121,
   2091345,
   1238454,
   756229.5,
   558070.4,
   372545.3,
   277938,
   176486.4,
   132489.2,
   93437.43,
   35846.81,
   27469.09,
   16485.02,
   6564.297,
   3.209407,
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
   Double_t Graph_from_VbbHcc_duong_Z_dR_fex1035[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_duong_Z_dR_fey1035[50] = {
   0,
   3.41775,
   42456.84,
   49118.56,
   42852.19,
   41207.71,
   38209.24,
   38236.29,
   36919.32,
   37937.49,
   37650.47,
   39954.51,
   41294.38,
   42729.73,
   45575.59,
   47602.52,
   36962.77,
   29073.01,
   25288.35,
   20853.1,
   18204.03,
   14704.86,
   12715.65,
   10747.63,
   6620.777,
   5742.679,
   4578.561,
   2959.599,
   0.5320792,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_duong_Z_dR_fx1035,Graph_from_VbbHcc_duong_Z_dR_fy1035,Graph_from_VbbHcc_duong_Z_dR_fex1035,Graph_from_VbbHcc_duong_Z_dR_fey1035);
   gre->SetName("Graph_from_VbbHcc_duong_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_Z_dR1035 = new TH1F("Graph_Graph_from_VbbHcc_duong_Z_dR1035","",100,0,11);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->SetMinimum(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->SetMaximum(2352842);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_Z_dR1035);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_VbbHcc_17->cd();
  
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
   
   TH1D *data_mc_ratio__36 = new TH1D("data_mc_ratio__36","",50,0,10);
   data_mc_ratio__36->SetBinContent(2,5.027982);
   data_mc_ratio__36->SetBinContent(3,0.2455389);
   data_mc_ratio__36->SetBinContent(4,0.1867015);
   data_mc_ratio__36->SetBinContent(5,0.1662341);
   data_mc_ratio__36->SetBinContent(6,0.1536454);
   data_mc_ratio__36->SetBinContent(7,0.1605893);
   data_mc_ratio__36->SetBinContent(8,0.1492037);
   data_mc_ratio__36->SetBinContent(9,0.1525089);
   data_mc_ratio__36->SetBinContent(10,0.1449997);
   data_mc_ratio__36->SetBinContent(11,0.1491367);
   data_mc_ratio__36->SetBinContent(12,0.1412099);
   data_mc_ratio__36->SetBinContent(13,0.1413347);
   data_mc_ratio__36->SetBinContent(14,0.1428624);
   data_mc_ratio__36->SetBinContent(15,0.1408886);
   data_mc_ratio__36->SetBinContent(16,0.1346703);
   data_mc_ratio__36->SetBinContent(17,0.1337862);
   data_mc_ratio__36->SetBinContent(18,0.1408885);
   data_mc_ratio__36->SetBinContent(19,0.1287257);
   data_mc_ratio__36->SetBinContent(20,0.1303304);
   data_mc_ratio__36->SetBinContent(21,0.1158568);
   data_mc_ratio__36->SetBinContent(22,0.1209272);
   data_mc_ratio__36->SetBinContent(23,0.1011554);
   data_mc_ratio__36->SetBinContent(24,0.08311444);
   data_mc_ratio__36->SetBinContent(25,0.1177232);
   data_mc_ratio__36->SetBinContent(26,0.07299112);
   data_mc_ratio__36->SetBinContent(27,0.04798296);
   data_mc_ratio__36->SetBinContent(28,0.02803042);
   data_mc_ratio__36->SetBinContent(29,3.739009);
   data_mc_ratio__36->SetBinError(2,0.355532);
   data_mc_ratio__36->SetBinError(3,0.0004158613);
   data_mc_ratio__36->SetBinError(4,0.0003083857);
   data_mc_ratio__36->SetBinError(5,0.000329376);
   data_mc_ratio__36->SetBinError(6,0.0003251429);
   data_mc_ratio__36->SetBinError(7,0.0003535332);
   data_mc_ratio__36->SetBinError(8,0.0003370916);
   data_mc_ratio__36->SetBinError(9,0.0003469995);
   data_mc_ratio__36->SetBinError(10,0.0003286403);
   data_mc_ratio__36->SetBinError(11,0.0003322287);
   data_mc_ratio__36->SetBinError(12,0.0003059956);
   data_mc_ratio__36->SetBinError(13,0.0002958023);
   data_mc_ratio__36->SetBinError(14,0.0002860505);
   data_mc_ratio__36->SetBinError(15,0.0002688553);
   data_mc_ratio__36->SetBinError(16,0.0002537599);
   data_mc_ratio__36->SetBinError(17,0.0003286743);
   data_mc_ratio__36->SetBinError(18,0.0004316293);
   data_mc_ratio__36->SetBinError(19,0.000480273);
   data_mc_ratio__36->SetBinError(20,0.0005914709);
   data_mc_ratio__36->SetBinError(21,0.0006456346);
   data_mc_ratio__36->SetBinError(22,0.0008277636);
   data_mc_ratio__36->SetBinError(23,0.0008737844);
   data_mc_ratio__36->SetBinError(24,0.0009431436);
   data_mc_ratio__36->SetBinError(25,0.001812199);
   data_mc_ratio__36->SetBinError(26,0.001630095);
   data_mc_ratio__36->SetBinError(27,0.001706078);
   data_mc_ratio__36->SetBinError(28,0.00206643);
   data_mc_ratio__36->SetBinError(29,1.079359);
   data_mc_ratio__36->SetMinimum(0.4);
   data_mc_ratio__36->SetMaximum(1.6);
   data_mc_ratio__36->SetEntries(79.81898);
   data_mc_ratio__36->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__36->SetLineColor(ci);
   data_mc_ratio__36->SetLineWidth(2);
   data_mc_ratio__36->SetMarkerStyle(20);
   data_mc_ratio__36->SetMarkerSize(1.2);
   data_mc_ratio__36->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__36->GetXaxis()->SetRange(1,50);
   data_mc_ratio__36->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__36->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__36->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__36->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__36->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__36->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1036[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1036[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1036[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1036[50] = {
   0,
   0.08592193,
   0.02990367,
   0.02501994,
   0.02796641,
   0.02835355,
   0.02973803,
   0.02912004,
   0.02914849,
   0.02825812,
   0.02786508,
   0.02649299,
   0.02556497,
   0.02447359,
   0.02338264,
   0.02276168,
   0.0298459,
   0.03844469,
   0.04531391,
   0.05597467,
   0.06549674,
   0.0833201,
   0.09597501,
   0.1150249,
   0.1846964,
   0.2090596,
   0.2777407,
   0.4508631,
   0.1657874,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1036,Graph_from_mc_statistical_error_fy1036,Graph_from_mc_statistical_error_fex1036,Graph_from_mc_statistical_error_fey1036);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1036 = new TH1F("Graph_Graph_from_mc_statistical_error1036","",100,0,11);
   Graph_Graph_from_mc_statistical_error1036->SetMinimum(0.4589643);
   Graph_Graph_from_mc_statistical_error1036->SetMaximum(1.541036);
   Graph_Graph_from_mc_statistical_error1036->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1036->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1036);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_17->cd();
   Z_dR_VbbHcc_17->Modified();
   Z_dR_VbbHcc_17->cd();
   Z_dR_VbbHcc_17->SetSelected(Z_dR_VbbHcc_17);
}
