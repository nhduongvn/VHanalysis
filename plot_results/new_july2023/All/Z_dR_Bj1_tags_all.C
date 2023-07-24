void Z_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_all/Z_dR_Bj1_tags_all
//=========  (Mon Jul 24 10:11:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_all = new TCanvas("Z_dR_Bj1_tags_all", "Z_dR_Bj1_tags_all",0,0,600,600);
   Z_dR_Bj1_tags_all->SetHighLightColor(2);
   Z_dR_Bj1_tags_all->Range(0,0,1,1);
   Z_dR_Bj1_tags_all->SetFillColor(0);
   Z_dR_Bj1_tags_all->SetFillStyle(4000);
   Z_dR_Bj1_tags_all->SetBorderMode(0);
   Z_dR_Bj1_tags_all->SetBorderSize(2);
   Z_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3086.91,6.314516,3084123);
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
   st->SetMaximum(2643240);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",30,0,6);
   st_stack_56->SetMinimum(0.3);
   st_stack_56->SetMaximum(2775402);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetRange(1,30);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetLabelSize(0.035);
   st_stack_56->GetXaxis()->SetTitleSize(0.035);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/0.2");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetLabelSize(0.05);
   st_stack_56->GetYaxis()->SetTitleSize(0.057);
   st_stack_56->GetYaxis()->SetTitleOffset(1.2);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetLabelSize(0.035);
   st_stack_56->GetZaxis()->SetTitleSize(0.035);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(1,265497.2);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(2,1091131);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(3,866675);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(4,658314.2);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(5,458916.3);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(6,369258.6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(7,284193.9);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(8,228725.7);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(9,196703.6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(10,174458.3);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(11,172237.1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(12,149904);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(13,153895.3);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(14,117046.8);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(15,103925.3);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(16,99616.21);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(17,66702.63);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(18,66161.12);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(19,58977.73);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(20,57434.93);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(21,39803.12);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(22,32036.84);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(23,26264.77);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(24,19255.93);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(25,17213.67);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(26,11984.38);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(27,9790.54);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(28,5872.878);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(29,2358.911);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(30,1491.445);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(31,3268.022);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(1,4145.511);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(2,31567.8);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(3,13087.39);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(4,23868.8);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(5,10220.46);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(6,10030.37);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(7,8029.272);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(8,6973.616);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(9,6713.691);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(10,6096.812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(11,15681.16);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(12,6428.911);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(13,20958.75);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(14,5157.25);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(15,4790.981);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(16,6004.434);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(17,3553.971);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(18,4583.322);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(19,3766.536);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(20,14690.48);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(21,2919.331);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(22,2749.424);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(23,1950.96);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(24,1471.793);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(25,2189.637);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(26,1167.227);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(27,1105.125);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(28,880.8655);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(29,304.4592);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(30,438.7056);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(31,750.248);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetEntries(488683);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(1,1177.829);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(2,6079.633);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(3,8095.761);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(4,7751.682);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(5,6593.794);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(6,5445.659);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(7,4475.16);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(8,3827.949);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(9,3333.312);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(10,2914.419);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(11,2632.23);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(12,2368.698);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(13,2127.151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(14,1870.768);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(15,1604.322);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(16,1390.491);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(17,1157.759);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(18,968.6095);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(19,774.8227);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(20,643.8256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(21,525.0752);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(22,390.0756);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(23,320.9561);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(24,238.8323);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(25,180.3546);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(26,135.4014);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(27,89.25093);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(28,56.20833);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(29,40.13865);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(30,29.038);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(31,46.12667);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(1,14.41885);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(2,31.06686);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(3,35.57456);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(4,34.73163);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(5,31.93839);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(6,29.09245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(7,26.40006);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(8,24.3712);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(9,22.79105);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(10,21.29332);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(11,20.17827);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(12,19.17468);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(13,18.28443);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(14,17.10609);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(15,15.80899);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(16,14.8026);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(17,13.48594);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(18,12.5122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(19,11.10241);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(20,10.27343);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(21,9.33855);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(22,8.001529);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(23,7.406441);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(24,6.426245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(25,5.645349);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(26,4.95619);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(27,3.939631);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(28,3.136182);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(29,2.682906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(30,2.33515);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(31,2.878908);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetEntries(822483);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(1,11188.05);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(2,78958.36);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(3,128335.6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(4,133468.1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(5,116801.1);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(6,94610.74);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(7,76634.97);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(8,64138.13);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(9,55954.38);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(10,50441.22);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(11,46461.54);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(12,42784.3);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(13,38553.86);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(14,33477.56);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(15,28585.79);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(16,23911.15);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(17,19337.69);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(18,15482.53);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(19,12278.93);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(20,9591.012);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(21,7344.714);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(22,5511.748);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(23,4083.374);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(24,2940.99);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(25,2073.75);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(26,1415.672);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(27,932.991);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(28,587.7281);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(29,387.8152);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(30,246.863);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(31,422.8234);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(1,26.58098);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(2,70.59087);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(3,90.17186);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(4,92.04583);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(5,86.11132);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(6,77.48692);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(7,69.72748);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(8,63.78115);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(9,59.58789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(10,56.59085);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(11,54.33109);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(12,52.1669);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(13,49.52164);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(14,46.13935);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(15,42.61486);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(16,38.96684);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(17,35.03002);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(18,31.33191);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(19,27.88372);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(20,24.6378);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(21,21.55388);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(22,18.65463);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(23,16.04463);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(24,13.61828);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(25,11.42025);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(26,9.435144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(27,7.650579);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(28,6.068591);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(29,4.929272);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(30,3.934483);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(31,5.14223);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetEntries(1.800198e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(1,2540.378);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(2,8175.551);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(3,8474.062);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(4,5874.702);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(5,3535.395);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(6,2422.426);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(7,1943.832);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(8,1490.593);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(9,1362.784);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(10,1143.782);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(11,1038.736);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(12,931.8131);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(13,867.2675);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(14,817.5486);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(15,698.8515);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(16,616.8899);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(17,513.1242);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(18,438.4411);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(19,380.9991);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(20,344.9665);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(21,288.2135);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(22,243.828);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(23,211.9296);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(24,159.6218);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(25,134.2906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(26,89.63971);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(27,75.34492);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(28,38.30087);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(29,23.10746);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(30,18.13827);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(31,20.94023);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(1,18.73518);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(2,50.69534);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(3,62.08143);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(4,61.20429);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(5,47.61085);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(6,37.52687);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(7,33.87099);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(8,28.98171);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(9,29.6106);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(10,24.70339);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(11,23.88495);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(12,21.87446);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(13,22.45152);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(14,22.61504);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(15,19.86037);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(16,19.01296);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(17,15.79551);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(18,15.55093);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(19,13.55191);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(20,12.8414);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(21,11.33043);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(22,9.870699);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(23,9.614143);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(24,7.188527);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(25,7.762688);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(26,5.249778);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(27,5.721924);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(28,2.419616);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(29,4.238419);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(30,4.08382);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(31,3.365779);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetEntries(340933);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(1,1562.925);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(2,4903.632);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(3,3881.21);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(4,2556.372);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(5,2012.25);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(6,1473.952);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(7,1202.187);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(8,1030.939);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(9,878.0683);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(10,800.6872);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(11,669.7299);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(12,658.4834);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(13,554.8703);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(14,553.2058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(15,472.5131);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(16,421.9696);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(17,330.5623);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(18,298.828);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(19,244.7557);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(20,193.4406);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(21,189.6348);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(22,170.8728);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(23,118.55);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(24,98.25325);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(25,74.96023);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(26,64.11281);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(27,38.45238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(28,21.96562);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(29,22.03479);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(30,12.68329);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(31,11.66426);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(1,29.46728);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(2,73.82122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(3,68.7357);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(4,60.25113);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(5,57.00576);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(6,43.02959);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(7,40.54698);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(8,39.21807);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(9,34.87045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(10,33.70573);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(11,31.4959);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(12,33.06159);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(13,25.27751);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(14,29.82356);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(15,24.62599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(16,26.85303);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(17,21.19683);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(18,21.18049);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(19,16.03768);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(20,11.86943);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(21,17.16745);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(22,15.67673);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(23,12.86064);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(24,7.48682);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(25,6.436054);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(26,6.451117);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(27,4.441528);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(28,2.48537);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(29,6.620671);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(30,3.617287);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(31,2.282506);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetEntries(194636);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(1,7.04364);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(2,22.60215);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(3,17.38843);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(4,14.49543);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(5,11.59296);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(6,9.432481);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(7,10.85174);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(8,7.444975);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(9,5.260776);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(10,5.668548);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(11,4.85565);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(12,5.66893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(13,4.599788);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(14,3.651265);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(15,2.646599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(16,1.320081);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(17,1.404486);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(18,1.95773);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(19,2.848214);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(20,1.412438);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(21,0.9217742);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(22,1.496843);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(23,0.2577581);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(24,1.295228);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(25,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(26,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(27,0.6640161);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(28,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(31,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(1,1.085665);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(2,1.977404);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(3,1.674828);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(4,1.595125);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(5,1.452595);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(6,1.281444);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(7,1.450332);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(8,1.106893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(9,0.9345946);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(10,1.030203);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(11,0.870297);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(12,1.029832);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(13,0.8775098);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(14,0.7864788);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(15,0.6968332);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(16,0.4148911);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(17,0.3794715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(18,0.625301);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(19,0.7254138);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(20,0.5664133);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(21,0.4434258);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(22,0.5410065);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(23,0.1488167);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(24,0.5020352);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(25,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(26,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(27,0.4177081);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(28,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(31,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetEntries(1108);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(1,14.75973);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(2,49.28751);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(3,44.26304);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(4,33.09983);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(5,16.29128);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(6,11.02041);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(7,12.34315);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(8,7.509573);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(9,5.699963);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(10,6.811491);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(11,4.970463);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(12,5.776046);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(13,4.468449);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(14,3.545033);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(15,3.078089);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(16,1.881901);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(17,1.794468);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(18,2.608371);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(19,2.260279);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(20,2.215614);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(21,1.661236);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(22,1.745896);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(23,0.7008551);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.9708541);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(25,0.3822846);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(26,0.4564715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(27,0.769239);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(31,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(1,1.264793);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(2,2.319377);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(3,2.079578);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(4,1.898385);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(5,1.514266);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(6,1.28444);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(7,1.457423);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(8,1.071116);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(9,0.9198486);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(10,1.041411);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(11,0.8354381);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(12,1.013565);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(13,0.843831);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(14,0.7548559);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(15,0.6960248);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(16,0.4301582);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(17,0.377009);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(18,0.6459051);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(19,0.6783417);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(20,0.6036276);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(21,0.4859106);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(22,0.5450771);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(23,0.2113157);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(24,0.4689616);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(25,0.156067);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(26,0.2385091);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(27,0.4234104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(31,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetEntries(2838);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(1,19.7157);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(2,74.08684);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(3,69.21862);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(4,41.1517);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(5,23.54809);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(6,16.93157);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(7,13.51472);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(8,10.1879);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(9,7.802503);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(10,9.247814);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(11,5.288114);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(12,6.886268);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(13,6.990073);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(14,6.497778);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(15,5.222776);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(16,2.80043);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(17,3.922754);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(18,3.952311);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(19,1.515186);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(20,2.094822);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(21,1.369897);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(22,1.8501);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(23,1.350581);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.7516297);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(25,0.5381511);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(26,0.7709459);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(27,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(31,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(1,1.936515);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(2,3.743728);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(3,3.629768);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(4,2.785768);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(5,2.109813);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(6,1.787622);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(7,1.607052);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(8,1.38903);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(9,1.220858);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(10,1.323313);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(11,1.001145);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(12,1.149789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(13,1.151298);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(14,1.099845);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(15,0.9883424);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(16,0.724143);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(17,0.857518);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(18,0.8638054);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(19,0.5369459);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(20,0.6328918);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(21,0.5187796);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(22,0.5855784);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(23,0.5114135);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(24,0.3764492);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(25,0.3107017);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(26,0.3863969);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(27,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(31,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetEntries(1788);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(1,7.965751);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(2,34.41441);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(3,41.34616);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(4,34.14719);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(5,23.40128);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(6,14.63931);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(7,10.33461);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(8,7.795633);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(9,6.59276);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(10,6.0995);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(11,5.700698);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(12,5.494193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(13,4.707552);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(14,4.031613);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(15,3.292425);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(16,2.869945);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(17,2.406048);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(18,1.877793);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(19,1.611141);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(20,1.392852);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(21,1.227035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(22,0.9772303);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.8897967);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.6777971);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.4737399);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.344014);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.185724);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.08889802);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.03491501);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.01032484);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.01241295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(1,0.1183727);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(2,0.2458208);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(3,0.2682522);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(4,0.2430136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(5,0.2006089);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1587893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1337342);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1162087);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(9,0.1067354);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(10,0.1035367);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(11,0.1003011);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(12,0.0981556);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(13,0.09070363);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(14,0.08404996);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(15,0.07553238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(16,0.0709453);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(17,0.06509454);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(18,0.05725911);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(19,0.05323092);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(20,0.04931536);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(21,0.04658322);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(22,0.0413049);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(23,0.03953682);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(24,0.03495126);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(25,0.02890224);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(26,0.02461007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(27,0.01816397);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(28,0.01249123);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(29,0.0076139);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(30,0.004332009);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(31,0.004467162);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetEntries(135628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(1,7.220506);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(2,27.47214);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(3,32.3027);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(4,26.38257);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(5,17.681);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(6,11.18597);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(7,7.531228);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(8,5.64363);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(9,4.727892);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(10,4.126981);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(11,3.621888);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(12,3.255045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(13,3.04151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(14,2.669192);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(15,2.192844);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(16,1.890335);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(17,1.691857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(18,1.482428);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(19,1.327752);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(20,1.152543);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(21,1.025243);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.8733049);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.7145222);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.588591);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.4790857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.2696568);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.216273);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.09581715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.04380212);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.02053225);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.01779461);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(1,0.05880274);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(2,0.1146991);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(3,0.124375);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(4,0.1124015);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(5,0.0920168);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(6,0.07318979);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(7,0.06005464);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(8,0.05198679);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(9,0.04758252);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(10,0.04445596);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(11,0.04164676);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(12,0.03948137);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(13,0.03816439);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(14,0.03575227);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(15,0.03240541);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(16,0.03008729);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(17,0.02846397);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(18,0.02664407);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(19,0.02521577);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(20,0.02349321);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(21,0.02215783);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(22,0.02045016);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(23,0.01849786);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(24,0.01678883);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(25,0.01514678);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(26,0.01136369);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(27,0.01017688);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(28,0.006773846);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(29,0.004579956);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(30,0.003135681);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(31,0.002919161);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetEntries(374655);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.3644311);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(2,1.496439);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(3,1.438242);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.8082582);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.4423287);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.2212922);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.223838);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.1395324);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.1142423);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.1340491);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.1202186);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.1336369);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.07947071);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.09199099);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.05381542);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(16,0.04220034);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.04506317);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(18,0.03044308);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.06149369);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(20,0.03067934);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(21,0.01907755);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(22,0.02362907);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(23,0.02566857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.01634254);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.01206104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.02138706);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.00659102);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(28,0.005010769);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(1,0.02815064);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(2,0.05791533);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(3,0.0574587);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(4,0.04293027);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(5,0.03173487);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(6,0.02232193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(7,0.0225525);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(8,0.01784611);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(9,0.01596265);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(10,0.01746605);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(11,0.01659262);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(12,0.01749311);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(13,0.01327198);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(14,0.01444173);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(15,0.01080099);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(16,0.009507113);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(17,0.01044735);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(18,0.008379913);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(19,0.01127949);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(20,0.008402599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(21,0.006541235);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(22,0.007290126);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(23,0.007612116);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(24,0.005942011);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(25,0.005487903);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(26,0.007263188);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(27,0.003893142);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(28,0.003557999);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(29,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetEntries(2879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(1,0.1575104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.7173504);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.6881811);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.4048857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.1841958);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.1147058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.08485391);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.07058173);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.06624815);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.05160945);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.05722076);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.04473597);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.04208708);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.03990837);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.03392387);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.02459951);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.02290551);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.02125561);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.0229979);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.01883619);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.0148122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.0155274);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.01269177);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.01110082);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(25,0.007239723);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(26,0.004530247);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.003492892);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.0009800828);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(1,0.006831443);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(2,0.01447311);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(3,0.01422462);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(4,0.01095753);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(5,0.007403919);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(6,0.005881336);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(7,0.00499435);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(8,0.004580059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(9,0.004428898);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(10,0.003881411);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(11,0.004153262);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(12,0.003668172);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(13,0.003508406);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(14,0.003419473);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(15,0.003206739);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(16,0.002682083);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(17,0.002598199);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(18,0.002542631);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(19,0.00259192);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(20,0.002340892);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(21,0.00212244);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(22,0.002145102);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(23,0.001941112);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(24,0.001789682);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(25,0.001429856);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(26,0.001160072);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0009857478);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0005068917);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetEntries(10461);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all__111 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all__111","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(1,209939);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(2,808449);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(3,724262);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(4,536271);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(5,417709);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(6,329827);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(7,266929);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(8,221625);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(9,190987);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(10,168592);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(11,151934);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(12,138729);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(13,126179);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(14,112154);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(15,100023);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(16,88343);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(17,73089);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(18,61707);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(19,52681);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(20,44676);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(21,37414);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(22,31241);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(23,25271);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(24,20737);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(25,15892);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(26,11774);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(27,8084);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(28,5032);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(29,3234);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(30,1879);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetBinContent(31,3288);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetEntries(4987980);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all__111->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1_all__111->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__111->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__111->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fx1111[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fy1111[30] = {
   282023.6,
   1189458,
   1015668,
   808115.6,
   587952,
   473274.9,
   368505,
   299252.1,
   258262.4,
   229790.5,
   223064,
   196674.6,
   196022.3,
   153786.4,
   135303.3,
   125967.5,
   88053.05,
   83361.46,
   72666.89,
   68216.5,
   48157,
   38360.35,
   31003.54,
   22697.94,
   19679.01,
   13691.28,
   10928.63,
   6577.357,
   2832.088,
   1798.199};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fex1111[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fey1111[30] = {
   4145.769,
   31568.02,
   13088.08,
   23869.16,
   10221.14,
   10030.87,
   8029.792,
   6974.121,
   6714.15,
   6097.255,
   15681.32,
   6429.274,
   20958.85,
   5157.621,
   4791.301,
   6004.669,
   3554.268,
   4583.522,
   3766.714,
   14690.51,
   2919.498,
   2749.562,
   1951.106,
   1471.906,
   2189.697,
   1167.305,
   1105.182,
   880.8988,
   304.6123,
   438.7634};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fx1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fy1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fex1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fey1111);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetMinimum(1223.492);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetMaximum(1342993);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__112 = new TH1D("data_mc_ratio__112","",30,0,6);
   data_mc_ratio__112->SetBinContent(1,0.7444021);
   data_mc_ratio__112->SetBinContent(2,0.6796785);
   data_mc_ratio__112->SetBinContent(3,0.7130891);
   data_mc_ratio__112->SetBinContent(4,0.6636068);
   data_mc_ratio__112->SetBinContent(5,0.7104474);
   data_mc_ratio__112->SetBinContent(6,0.6969036);
   data_mc_ratio__112->SetBinContent(7,0.7243566);
   data_mc_ratio__112->SetBinContent(8,0.7405964);
   data_mc_ratio__112->SetBinContent(9,0.7395075);
   data_mc_ratio__112->SetBinContent(10,0.7336769);
   data_mc_ratio__112->SetBinContent(11,0.681123);
   data_mc_ratio__112->SetBinContent(12,0.7053733);
   data_mc_ratio__112->SetBinContent(13,0.6436971);
   data_mc_ratio__112->SetBinContent(14,0.7292842);
   data_mc_ratio__112->SetBinContent(15,0.7392503);
   data_mc_ratio__112->SetBinContent(16,0.7013156);
   data_mc_ratio__112->SetBinContent(17,0.8300564);
   data_mc_ratio__112->SetBinContent(18,0.7402342);
   data_mc_ratio__112->SetBinContent(19,0.7249657);
   data_mc_ratio__112->SetBinContent(20,0.6549149);
   data_mc_ratio__112->SetBinContent(21,0.7769172);
   data_mc_ratio__112->SetBinContent(22,0.8144086);
   data_mc_ratio__112->SetBinContent(23,0.8151006);
   data_mc_ratio__112->SetBinContent(24,0.9136072);
   data_mc_ratio__112->SetBinContent(25,0.8075612);
   data_mc_ratio__112->SetBinContent(26,0.8599636);
   data_mc_ratio__112->SetBinContent(27,0.7397084);
   data_mc_ratio__112->SetBinContent(28,0.7650489);
   data_mc_ratio__112->SetBinContent(29,1.141914);
   data_mc_ratio__112->SetBinContent(30,1.044934);
   data_mc_ratio__112->SetBinContent(31,0.8720986);
   data_mc_ratio__112->SetBinError(1,0.001624655);
   data_mc_ratio__112->SetBinError(2,0.0007559224);
   data_mc_ratio__112->SetBinError(3,0.0008379072);
   data_mc_ratio__112->SetBinError(4,0.0009061888);
   data_mc_ratio__112->SetBinError(5,0.001099246);
   data_mc_ratio__112->SetBinError(6,0.001213472);
   data_mc_ratio__112->SetBinError(7,0.001402021);
   data_mc_ratio__112->SetBinError(8,0.001573158);
   data_mc_ratio__112->SetBinError(9,0.001692157);
   data_mc_ratio__112->SetBinError(10,0.001786843);
   data_mc_ratio__112->SetBinError(11,0.001747423);
   data_mc_ratio__112->SetBinError(12,0.001893806);
   data_mc_ratio__112->SetBinError(13,0.001812124);
   data_mc_ratio__112->SetBinError(14,0.002177657);
   data_mc_ratio__112->SetBinError(15,0.002337446);
   data_mc_ratio__112->SetBinError(16,0.00235954);
   data_mc_ratio__112->SetBinError(17,0.003070306);
   data_mc_ratio__112->SetBinError(18,0.002979902);
   data_mc_ratio__112->SetBinError(19,0.003158569);
   data_mc_ratio__112->SetBinError(20,0.003098473);
   data_mc_ratio__112->SetBinError(21,0.004016591);
   data_mc_ratio__112->SetBinError(22,0.004607654);
   data_mc_ratio__112->SetBinError(23,0.005127433);
   data_mc_ratio__112->SetBinError(24,0.006344341);
   data_mc_ratio__112->SetBinError(25,0.006405988);
   data_mc_ratio__112->SetBinError(26,0.007925343);
   data_mc_ratio__112->SetBinError(27,0.008227112);
   data_mc_ratio__112->SetBinError(28,0.01078497);
   data_mc_ratio__112->SetBinError(29,0.02007998);
   data_mc_ratio__112->SetBinError(30,0.02410602);
   data_mc_ratio__112->SetBinError(31,0.1742149);
   data_mc_ratio__112->SetMinimum(0.4);
   data_mc_ratio__112->SetMaximum(1.6);
   data_mc_ratio__112->SetEntries(3309.863);
   data_mc_ratio__112->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__112->SetLineColor(ci);
   data_mc_ratio__112->SetLineWidth(2);
   data_mc_ratio__112->SetMarkerStyle(20);
   data_mc_ratio__112->SetMarkerSize(1.2);
   data_mc_ratio__112->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__112->GetXaxis()->SetRange(1,30);
   data_mc_ratio__112->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__112->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__112->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__112->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__112->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__112->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__112->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__112->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1112[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1112[30] = {
   0.01470008,
   0.02653984,
   0.01288618,
   0.02953681,
   0.01738431,
   0.0211946,
   0.02179019,
   0.02330517,
   0.02599739,
   0.02653397,
   0.07029964,
   0.03268991,
   0.1069207,
   0.03353756,
   0.03541156,
   0.04766838,
   0.04036507,
   0.05498371,
   0.05183536,
   0.2153513,
   0.06062458,
   0.07167718,
   0.06293173,
   0.06484758,
   0.1112707,
   0.08525904,
   0.1011272,
   0.133929,
   0.1075575,
   0.2440016};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1112,Graph_from_mc_statistical_error_fy1112,Graph_from_mc_statistical_error_fex1112,Graph_from_mc_statistical_error_fey1112);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1112 = new TH1F("Graph_Graph_from_mc_statistical_error1112","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1112->SetMinimum(0.7071981);
   Graph_Graph_from_mc_statistical_error1112->SetMaximum(1.292802);
   Graph_Graph_from_mc_statistical_error1112->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1112->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1112);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->SetSelected(Z_dR_Bj1_tags_all);
}
