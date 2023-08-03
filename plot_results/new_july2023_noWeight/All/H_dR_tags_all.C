void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Thu Aug  3 10:20:58 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(0,0,1,1);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-146.3308,6.525,146484.4);
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
   st->SetMaximum(125544.1);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0.3);
   st_stack_24->SetMaximum(131821.3);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetLabelSize(0.035);
   st_stack_24->GetXaxis()->SetTitleSize(0.035);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetLabelSize(0.05);
   st_stack_24->GetYaxis()->SetTitleSize(0.057);
   st_stack_24->GetYaxis()->SetTitleOffset(1.2);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetLabelSize(0.035);
   st_stack_24->GetZaxis()->SetTitleSize(0.035);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,34992.28);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,29207.45);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,20486.89);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,18762.52);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,15334.73);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,17295.63);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,16084.46);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,21790.71);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,21237.07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,23870.57);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,31045.17);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,34198.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,32581.28);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,52183.39);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,35584.21);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,37150.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,29104.48);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,25405.72);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,16830.93);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,11762.09);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,11844.81);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,22828.04);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,7964.012);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,6164.662);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,5454.711);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,3756.668);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,5821.532);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(30,3754.213);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(31,3611.328);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,3066.254);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,2192.536);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,1854.005);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,1720.113);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,1614.896);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,1743.365);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,1617.439);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,2364.76);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,2532.997);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,2025.309);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,3294.884);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,3086.94);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,2769.388);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,15141.39);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,3117.977);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,2622.152);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,2221.001);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,2675.074);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,2008.389);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,1166.142);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,2293.697);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,14848.77);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,1216.451);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,1821.547);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,982.2638);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,734.0808);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,1854.321);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(30,893.3809);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(31,858.9449);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(30262);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,0.1018896);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,102.2576);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,124.8575);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,110.1277);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,118.1363);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,113.4841);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,103.4896);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,120.7998);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,124.6728);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,128.3234);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,146.541);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,144.074);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,164.0552);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,181.7766);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,197.1384);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,174.9123);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,155.6517);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,133.7258);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,122.6012);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,103.0752);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,85.94337);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,70.85231);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,54.92642);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,51.3771);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,40.48787);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,31.52307);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,28.42922);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,20.05012);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(30,16.57441);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(31,14.71849);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,0.07224915);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,4.1615);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,4.511656);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,4.133417);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,4.406409);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,4.292453);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,3.955921);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,4.459325);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,4.599102);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,4.616962);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,4.941498);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,4.774835);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,5.155192);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,5.443519);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,5.713306);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,5.225826);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,4.877077);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,4.456493);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,4.353388);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,3.943884);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,3.722052);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,3.34221);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,2.808916);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,2.819132);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,2.556087);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,2.177356);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,2.175743);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,1.787233);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(30,1.580619);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(31,1.577838);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(36361);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(2,1.842745);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(3,1651.546);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(4,2332.512);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(5,2347.656);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(6,2436.486);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(7,2384.143);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(8,2338.163);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(9,2324.311);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(10,2391.17);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(11,2551.204);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(12,2735.467);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(13,2965.959);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(14,3188.05);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(15,3422.615);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(16,3544.437);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(17,3353.622);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(18,3089.674);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(19,2731.09);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(20,2362.576);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(21,1989.53);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(22,1640.601);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(23,1339.815);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(24,1086.597);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(25,872.9925);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(26,718.4258);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(27,588.6329);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(28,483.5806);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(29,389.2381);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(30,258.4173);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(31,222.117);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(2,0.3377884);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(3,10.05956);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(4,12.00849);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(5,12.09339);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(6,12.33219);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(7,12.1872);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(8,12.05877);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(9,12.01969);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(10,12.1766);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(11,12.59159);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(12,13.03409);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(13,13.58068);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(14,14.09742);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(15,14.62413);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(16,14.89356);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(17,14.48756);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(18,13.90842);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(19,13.0686);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(20,12.14306);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(21,11.13616);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(22,10.10565);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(23,9.115232);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(24,8.206661);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(25,7.351419);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(26,6.661262);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(27,6.03478);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(28,5.463823);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(29,4.885827);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(30,3.986276);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(31,3.68779);
   VbbHcc_tags_H_dR_all_stack_3->SetEntries(965144);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(2,0.066575);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(3,317.2708);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(4,413.1038);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(5,360.2851);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(6,341.4108);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(7,284.2714);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(8,251.8949);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(9,269.4834);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(10,263.0937);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(11,295.6146);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(12,355.1392);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(13,374.0174);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(14,413.9057);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(15,463.4591);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(16,500.5927);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(17,477.1918);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(18,444.9132);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(19,376.0229);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(20,311.7889);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(21,267.3157);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(22,185.3329);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(23,155.4675);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(24,120.5043);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(25,106.2127);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(26,93.67948);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(27,67.3835);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(28,63.40315);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(29,49.04118);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(30,34.88343);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(31,25.10208);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(2,0.066575);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(3,11.51309);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(4,11.10383);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(5,12.07507);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(6,14.66927);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(7,12.78549);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(8,9.897879);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(9,12.50805);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(10,12.78084);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(11,11.78043);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(12,15.59836);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(13,13.07025);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(14,14.84365);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(15,15.52521);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(16,16.71925);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(17,15.17776);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(18,15.3643);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(19,14.81382);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(20,12.30497);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(21,13.62396);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(22,9.205235);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(23,9.043581);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(24,7.397072);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(25,8.716593);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(26,7.036972);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(27,5.426414);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(28,4.642221);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(29,3.193918);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(30,3.894465);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(31,2.307884);
   VbbHcc_tags_H_dR_all_stack_4->SetEntries(50664);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(3,38.93325);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(4,37.08236);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(5,32.00398);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(6,30.04778);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(7,27.06527);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(8,30.7365);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(9,33.69879);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(10,24.94716);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(11,33.3065);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(12,36.89161);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(13,34.71199);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(14,43.61876);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(15,42.30272);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(16,37.06985);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(17,42.65993);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(18,40.00491);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(19,42.66905);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(20,32.0655);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(21,18.70259);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(22,17.71363);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(23,16.69586);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(24,10.35566);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(25,14.0467);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(26,4.980023);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(27,10.42299);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(28,15.29928);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(29,5.338991);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(30,4.095294);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(31,3.035821);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(3,6.836137);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(4,4.709753);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(5,3.977051);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(6,10.89403);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(7,3.310279);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(8,7.592891);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(9,7.594734);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(10,3.331314);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(11,4.876392);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(12,4.639599);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(13,3.845991);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(14,5.709369);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(15,4.155216);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(16,4.28441);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(17,4.525906);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(18,4.522407);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(19,4.8506);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(20,3.858341);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(21,1.967214);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(22,3.273766);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(23,3.039244);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(24,1.669154);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(25,3.38294);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(26,0.9288374);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(27,2.958408);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(28,6.670053);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(29,1.479351);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(30,0.7763432);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(31,1.236526);
   VbbHcc_tags_H_dR_all_stack_5->SetEntries(8033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(3,0.6306118);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(4,0.7673486);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(5,0.9017179);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(13,0.586412);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(16,0.2687386);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(18,0.586412);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(3,0.4459099);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(4,0.5511446);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(5,0.5672878);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(9,0.1343693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(12,0.1343693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(13,0.4715906);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(15,0.1900269);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(16,0.1900269);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(18,0.4715906);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(20,0.1343693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(24,0.3153059);
   VbbHcc_tags_H_dR_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(3,1.284964);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(4,1.203583);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(5,1.203583);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(7,0.3271759);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(12,0.3271759);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(13,0.5611013);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(16,0.2181173);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(17,0.4362346);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(18,0.6701599);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(19,0.5452932);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(20,0.2181173);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(21,0.2181173);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(24,0.4243645);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(26,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(27,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(28,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(30,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(3,0.5198061);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(4,0.5927356);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(5,0.5927356);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(7,0.1888951);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(9,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(10,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(12,0.1888951);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(13,0.4650122);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(15,0.1542322);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(16,0.1542322);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(17,0.2181173);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(18,0.4776297);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(19,0.2438625);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(20,0.1542322);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(21,0.1542322);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(24,0.3336339);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(26,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(27,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(28,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(30,0.1090586);
   VbbHcc_tags_H_dR_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(3,9.422654);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(4,8.534318);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(5,10.47405);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(6,5.627911);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(7,4.15865);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(8,2.850163);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(9,2.110523);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(10,3.461369);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(11,3.0772);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(12,4.15865);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(13,3.941631);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(14,7.44285);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(15,11.36444);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(16,15.26394);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(17,10.72956);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(18,13.74823);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(19,9.179446);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(20,5.420911);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(21,5.768873);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(22,3.051011);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(23,1.298469);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(24,2.084334);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(26,1.587901);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(27,1.334676);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(28,2.67937);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(29,0.53264);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(30,1.019054);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(31,0.2532256);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(3,1.572858);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(4,1.48822);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(5,1.659015);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(6,1.201945);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(7,1.041537);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(8,0.8609634);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(9,0.7475529);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(10,0.9619257);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(11,0.8896247);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(12,1.041537);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(13,1.019607);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(14,1.384362);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(15,1.716423);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(16,2.007765);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(17,1.679132);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(18,1.891828);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(19,1.553941);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(20,1.185092);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(21,1.232635);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(22,0.8817499);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(23,0.5818655);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(24,0.7381641);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(25,0.4839599);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(26,0.6493175);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(27,0.5979047);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(28,0.8485008);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(29,0.3770883);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(30,0.5103871);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(31,0.2532256);
   VbbHcc_tags_H_dR_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(2,0.003659729);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(3,5.996605);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(4,10.78906);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(5,10.43574);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(6,8.283075);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(7,5.442699);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(8,3.612878);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(9,2.999697);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(10,3.121375);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(11,3.736005);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(12,5.127747);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(13,6.964541);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(14,8.861072);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(15,11.00799);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(16,12.13606);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(17,11.73649);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(18,9.891192);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(19,7.349839);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(20,5.176448);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(21,3.684993);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(22,2.537368);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(23,1.618282);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(24,1.151638);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(25,1.058906);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(26,1.073042);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(27,1.081658);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(28,1.259501);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(29,0.9702951);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(30,0.5976075);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(31,0.3112812);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(2,0.002666932);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(3,0.1058414);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(4,0.1419226);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(5,0.1385092);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(6,0.1232442);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(7,0.09916973);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(8,0.08039874);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(9,0.07328594);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(10,0.07499494);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(11,0.08219287);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(12,0.0965797);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(13,0.1134062);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(14,0.1277986);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(15,0.1422438);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(16,0.1494754);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(17,0.146888);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(18,0.1347059);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(19,0.1158933);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(20,0.09739592);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(21,0.08155762);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(22,0.06792207);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(23,0.05416773);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(24,0.04528451);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(25,0.04358188);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(26,0.04400662);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(27,0.0446765);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(28,0.04829201);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(29,0.04239329);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(30,0.03328341);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(31,0.02380876);
   VbbHcc_tags_H_dR_all_stack_9->SetEntries(84585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(3,2.034061);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(4,3.940822);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(5,4.518463);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(6,4.263863);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(7,3.304323);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(8,2.573375);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(9,2.125772);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(10,2.024479);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(11,2.206532);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(12,2.674667);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(13,3.270102);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(14,3.731393);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(15,4.110556);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(16,4.319985);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(17,4.2447);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(18,3.857325);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(19,2.952537);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(20,2.517253);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(21,1.862959);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(22,1.346915);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(23,0.9773349);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(24,0.8842554);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(25,0.7131533);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(26,0.7199974);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(27,0.6666136);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(28,0.5256255);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(29,0.4010632);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(30,0.2696568);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(31,0.1574139);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(3,0.03121014);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(4,0.04344173);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(5,0.04651672);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(6,0.04518719);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(7,0.0397791);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(8,0.0351047);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(9,0.03190598);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(10,0.03113654);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(11,0.0325064);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(12,0.03578892);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(13,0.03957258);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(14,0.04227165);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(15,0.0443674);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(16,0.0454836);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(17,0.04508553);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(18,0.04297905);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(19,0.03760204);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(20,0.0347198);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(21,0.02986863);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(22,0.02539708);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(23,0.02163393);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(24,0.02057797);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(25,0.01848014);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(26,0.0185686);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(27,0.01786696);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(28,0.01586543);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(29,0.01385862);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(30,0.01136369);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(31,0.008682309);
   VbbHcc_tags_H_dR_all_stack_10->SetEntries(147270);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(3,0.01909084);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(4,0.03900609);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(5,0.03018634);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(6,0.03589262);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(7,0.03423159);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(8,0.01156804);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(9,0.02293356);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(10,0.01615331);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(11,0.01226355);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(12,0.01087253);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(13,0.008171272);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(14,0.01090628);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(15,0.008866782);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(16,0.01637629);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(17,0.0190438);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(18,0.01410053);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(19,0.01931382);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(20,0.004315259);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(21,0.008866782);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(22,0.01202728);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(23,0.01044703);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(24,0.01569407);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(25,0.007712026);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(26,0.006131775);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(29,0.007712026);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(30,0.004551524);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(3,0.006422463);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(4,0.008977959);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(5,0.007969657);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(6,0.008880129);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(7,0.008265901);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(8,0.004798839);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(9,0.007103805);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(10,0.006178519);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(11,0.005070578);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(12,0.00451076);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(13,0.004201636);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(14,0.005013383);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(15,0.004509506);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(16,0.006332025);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(17,0.006164471);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(18,0.00590893);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(19,0.006570273);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(20,0.003158712);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(21,0.004509506);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(22,0.005032895);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(23,0.004778372);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(24,0.005989401);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(25,0.003918236);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(26,0.00358544);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(27,0.001580251);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(28,0.001580251);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(29,0.003918236);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(30,0.003218413);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_H_dR_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(3,0.004749128);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(4,0.01006279);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(5,0.01912362);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(6,0.01603439);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(7,0.01654227);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(8,0.009833308);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(9,0.008357574);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(10,0.007366553);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(11,0.01038595);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(12,0.007308607);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(13,0.008622452);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(14,0.005902374);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(15,0.007747322);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(16,0.007274165);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(17,0.003988879);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(18,0.0102939);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(19,0.006144086);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(20,0.004149814);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(21,0.003192898);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(22,0.003815715);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(23,0.003965376);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(24,0.002651867);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(25,0.002801527);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(26,0.002144268);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(27,0.004899125);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(28,0.001844611);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(29,0.001371791);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(30,0.000622817);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(31,0.0009800828);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(3,0.001169923);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(4,0.001728428);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(5,0.002366371);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(6,0.002141445);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(7,0.002188143);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(8,0.001681097);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(9,0.001528668);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(10,0.00142153);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(11,0.001739819);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(12,0.001436032);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(13,0.001580207);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(14,0.001288375);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(15,0.001448482);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(16,0.001432947);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(17,0.001060537);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(18,0.001726347);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(19,0.001338336);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(20,0.001090473);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(21,0.0009804019);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(22,0.001044264);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(23,0.001083987);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(24,0.0008129438);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(25,0.000863375);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(26,0.0007792731);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(27,0.001172167);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(28,0.0007193555);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(29,0.000627238);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(30,0.0003595835);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(31,0.0005068917);
   VbbHcc_tags_H_dR_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_all__47 = new TH1D("VbbHcc_tags_H_dR_all__47","",30,0,6);
   VbbHcc_tags_H_dR_all__47->SetBinContent(2,22);
   VbbHcc_tags_H_dR_all__47->SetBinContent(3,22936);
   VbbHcc_tags_H_dR_all__47->SetBinContent(4,24165);
   VbbHcc_tags_H_dR_all__47->SetBinContent(5,18382);
   VbbHcc_tags_H_dR_all__47->SetBinContent(6,17296);
   VbbHcc_tags_H_dR_all__47->SetBinContent(7,16618);
   VbbHcc_tags_H_dR_all__47->SetBinContent(8,16524);
   VbbHcc_tags_H_dR_all__47->SetBinContent(9,16911);
   VbbHcc_tags_H_dR_all__47->SetBinContent(10,17612);
   VbbHcc_tags_H_dR_all__47->SetBinContent(11,19161);
   VbbHcc_tags_H_dR_all__47->SetBinContent(12,20859);
   VbbHcc_tags_H_dR_all__47->SetBinContent(13,23026);
   VbbHcc_tags_H_dR_all__47->SetBinContent(14,26002);
   VbbHcc_tags_H_dR_all__47->SetBinContent(15,28054);
   VbbHcc_tags_H_dR_all__47->SetBinContent(16,30146);
   VbbHcc_tags_H_dR_all__47->SetBinContent(17,28785);
   VbbHcc_tags_H_dR_all__47->SetBinContent(18,26622);
   VbbHcc_tags_H_dR_all__47->SetBinContent(19,24244);
   VbbHcc_tags_H_dR_all__47->SetBinContent(20,20831);
   VbbHcc_tags_H_dR_all__47->SetBinContent(21,17546);
   VbbHcc_tags_H_dR_all__47->SetBinContent(22,13868);
   VbbHcc_tags_H_dR_all__47->SetBinContent(23,11217);
   VbbHcc_tags_H_dR_all__47->SetBinContent(24,8902);
   VbbHcc_tags_H_dR_all__47->SetBinContent(25,7098);
   VbbHcc_tags_H_dR_all__47->SetBinContent(26,5611);
   VbbHcc_tags_H_dR_all__47->SetBinContent(27,4734);
   VbbHcc_tags_H_dR_all__47->SetBinContent(28,3919);
   VbbHcc_tags_H_dR_all__47->SetBinContent(29,3580);
   VbbHcc_tags_H_dR_all__47->SetBinContent(30,2544);
   VbbHcc_tags_H_dR_all__47->SetBinContent(31,2096);
   VbbHcc_tags_H_dR_all__47->SetEntries(479340);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all__47->SetLineColor(ci);
   VbbHcc_tags_H_dR_all__47->SetLineWidth(2);
   VbbHcc_tags_H_dR_all__47->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_all__47->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fx1047[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fy1047[30] = {
   0,
   2.01487,
   37121.68,
   32140.29,
   23364.54,
   21706.96,
   18156.98,
   20028.97,
   18840.26,
   24603.34,
   24254.57,
   27157.05,
   34579.27,
   38028.1,
   36718.42,
   56494.86,
   39659.77,
   40909.12,
   32408.04,
   28248.23,
   19221.1,
   13698.63,
   13431.55,
   24105.3,
   9011.262,
   7025.733,
   6155.872,
   4351.957,
   6287.113,
   4070.184};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fex1047[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fey1047[30] = {
   0,
   0.3517958,
   3066.303,
   2192.608,
   1854.093,
   1720.26,
   1615.002,
   1743.456,
   1617.556,
   2364.833,
   2533.065,
   2025.422,
   3294.944,
   3087.018,
   2769.479,
   15141.41,
   3118.056,
   2622.243,
   2221.099,
   2675.137,
   2008.471,
   1166.233,
   2293.738,
   14848.78,
   1216.512,
   1821.575,
   982.3044,
   734.1498,
   1854.332,
   893.4002};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_all_fx1047,Graph_from_VbbHcc_tags_H_dR_all_fy1047,Graph_from_VbbHcc_tags_H_dR_all_fex1047,Graph_from_VbbHcc_tags_H_dR_all_fey1047);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_all1047 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_all1047","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMaximum(78799.9);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_all1047);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_all","MC unc. (stat.)","fl");

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
   H_dR_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__48 = new TH1D("data_mc_ratio__48","",30,0,6);
   data_mc_ratio__48->SetBinContent(2,10.91882);
   data_mc_ratio__48->SetBinContent(3,0.6178599);
   data_mc_ratio__48->SetBinContent(4,0.7518602);
   data_mc_ratio__48->SetBinContent(5,0.7867477);
   data_mc_ratio__48->SetBinContent(6,0.796795);
   data_mc_ratio__48->SetBinContent(7,0.9152405);
   data_mc_ratio__48->SetBinContent(8,0.8250051);
   data_mc_ratio__48->SetBinContent(9,0.8975988);
   data_mc_ratio__48->SetBinContent(10,0.7158378);
   data_mc_ratio__48->SetBinContent(11,0.7899956);
   data_mc_ratio__48->SetBinContent(12,0.7680878);
   data_mc_ratio__48->SetBinContent(13,0.6658902);
   data_mc_ratio__48->SetBinContent(14,0.6837576);
   data_mc_ratio__48->SetBinContent(15,0.7640308);
   data_mc_ratio__48->SetBinContent(16,0.5336061);
   data_mc_ratio__48->SetBinContent(17,0.7257985);
   data_mc_ratio__48->SetBinContent(18,0.6507595);
   data_mc_ratio__48->SetBinContent(19,0.748086);
   data_mc_ratio__48->SetBinContent(20,0.7374267);
   data_mc_ratio__48->SetBinContent(21,0.9128509);
   data_mc_ratio__48->SetBinContent(22,1.012364);
   data_mc_ratio__48->SetBinContent(23,0.8351236);
   data_mc_ratio__48->SetBinContent(24,0.3692963);
   data_mc_ratio__48->SetBinContent(25,0.7876811);
   data_mc_ratio__48->SetBinContent(26,0.7986355);
   data_mc_ratio__48->SetBinContent(27,0.7690218);
   data_mc_ratio__48->SetBinContent(28,0.9005144);
   data_mc_ratio__48->SetBinContent(29,0.5694187);
   data_mc_ratio__48->SetBinContent(30,0.6250332);
   data_mc_ratio__48->SetBinContent(31,0.5406206);
   data_mc_ratio__48->SetBinError(2,2.3279);
   data_mc_ratio__48->SetBinError(3,0.004079728);
   data_mc_ratio__48->SetBinError(4,0.004836639);
   data_mc_ratio__48->SetBinError(5,0.00580282);
   data_mc_ratio__48->SetBinError(6,0.006058621);
   data_mc_ratio__48->SetBinError(7,0.007099796);
   data_mc_ratio__48->SetBinError(8,0.00641799);
   data_mc_ratio__48->SetBinError(9,0.006902361);
   data_mc_ratio__48->SetBinError(10,0.005393992);
   data_mc_ratio__48->SetBinError(11,0.005707101);
   data_mc_ratio__48->SetBinError(12,0.005318194);
   data_mc_ratio__48->SetBinError(13,0.00438827);
   data_mc_ratio__48->SetBinError(14,0.004240322);
   data_mc_ratio__48->SetBinError(15,0.004561561);
   data_mc_ratio__48->SetBinError(16,0.003073307);
   data_mc_ratio__48->SetBinError(17,0.004277923);
   data_mc_ratio__48->SetBinError(18,0.003988414);
   data_mc_ratio__48->SetBinError(19,0.004804513);
   data_mc_ratio__48->SetBinError(20,0.005109328);
   data_mc_ratio__48->SetBinError(21,0.006891452);
   data_mc_ratio__48->SetBinError(22,0.008596659);
   data_mc_ratio__48->SetBinError(23,0.007885194);
   data_mc_ratio__48->SetBinError(24,0.003914094);
   data_mc_ratio__48->SetBinError(25,0.009349371);
   data_mc_ratio__48->SetBinError(26,0.01066175);
   data_mc_ratio__48->SetBinError(27,0.01117698);
   data_mc_ratio__48->SetBinError(28,0.01438477);
   data_mc_ratio__48->SetBinError(29,0.009516784);
   data_mc_ratio__48->SetBinError(30,0.01239209);
   data_mc_ratio__48->SetBinError(31,0.1203556);
   data_mc_ratio__48->SetMinimum(0.4);
   data_mc_ratio__48->SetMaximum(1.6);
   data_mc_ratio__48->SetEntries(108.3965);
   data_mc_ratio__48->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__48->SetLineColor(ci);
   data_mc_ratio__48->SetLineWidth(2);
   data_mc_ratio__48->SetMarkerStyle(20);
   data_mc_ratio__48->SetMarkerSize(1.2);
   data_mc_ratio__48->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__48->GetXaxis()->SetRange(1,31);
   data_mc_ratio__48->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__48->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__48->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__48->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__48->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__48->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1048[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1048[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1048[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1048[30] = {
   0,
   0.1745998,
   0.0826014,
   0.06821992,
   0.079355,
   0.07924922,
   0.08894664,
   0.08704672,
   0.08585632,
   0.09611836,
   0.1044366,
   0.07458182,
   0.09528668,
   0.08117729,
   0.07542479,
   0.2680139,
   0.07862012,
   0.06409923,
   0.06853543,
   0.09470103,
   0.104493,
   0.08513499,
   0.1707724,
   0.6159962,
   0.1349991,
   0.2592718,
   0.1595719,
   0.1686942,
   0.2949416,
   0.2194987};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1048,Graph_from_mc_statistical_error_fy1048,Graph_from_mc_statistical_error_fex1048,Graph_from_mc_statistical_error_fey1048);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1048 = new TH1F("Graph_Graph_from_mc_statistical_error1048","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1048->SetMinimum(0.2608045);
   Graph_Graph_from_mc_statistical_error1048->SetMaximum(1.739195);
   Graph_Graph_from_mc_statistical_error1048->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1048->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1048);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
