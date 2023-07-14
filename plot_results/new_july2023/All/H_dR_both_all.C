void H_dR_both_all()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Fri Jul 14 13:38:46 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(0,0,1,1);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-1860.029,6.525,1858469);
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
   st->SetMaximum(1592796);
   
   TH1F *st_stack_216 = new TH1F("st_stack_216","",30,0,6);
   st_stack_216->SetMinimum(0.3);
   st_stack_216->SetMaximum(1672436);
   st_stack_216->SetDirectory(0);
   st_stack_216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_216->SetLineColor(ci);
   st_stack_216->GetXaxis()->SetRange(1,31);
   st_stack_216->GetXaxis()->SetLabelFont(42);
   st_stack_216->GetXaxis()->SetLabelSize(0.035);
   st_stack_216->GetXaxis()->SetTitleSize(0.035);
   st_stack_216->GetXaxis()->SetTitleFont(42);
   st_stack_216->GetYaxis()->SetTitle("Events/0.2");
   st_stack_216->GetYaxis()->SetLabelFont(42);
   st_stack_216->GetYaxis()->SetLabelSize(0.05);
   st_stack_216->GetYaxis()->SetTitleSize(0.057);
   st_stack_216->GetYaxis()->SetTitleOffset(1.2);
   st_stack_216->GetYaxis()->SetTitleFont(42);
   st_stack_216->GetZaxis()->SetLabelFont(42);
   st_stack_216->GetZaxis()->SetLabelSize(0.035);
   st_stack_216->GetZaxis()->SetTitleSize(0.035);
   st_stack_216->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_216);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,163.1471);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,326559);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,312729.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,245642.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,224098.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,229933.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,246156.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,262910.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,290992.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,345239.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,374734.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,407107.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,458828.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,537467.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,577045.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,355162.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,291472.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,213722.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,162881);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,122876.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,128615.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,83001.22);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,55549.94);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,29995.45);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,16018.28);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,6717.874);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(28,1420.778);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(29,15.35134);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,56.4596);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,7813.072);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,7741.565);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,7117.586);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,6757.775);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,7121.74);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,7485.132);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,16449.77);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,8644.603);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,26693.07);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,24026.34);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,10120.08);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,10079.48);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,11771.74);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,21374.99);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,8370.16);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,8674.284);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,7172.435);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,5860.334);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,5492.573);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,23955.11);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,11290.99);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,3869.121);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,2183.362);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,1561.548);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,1062.39);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(28,292.2715);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(29,7.194589);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(513857);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(2,2.194493);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,2847.497);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,3750.124);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,3497.504);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,3223.089);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,2894.018);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,2791.293);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,2819.538);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,3084.329);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,3520.174);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,4071.62);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,4759.555);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,5516.072);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,6221.792);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,6481.335);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,4022.209);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,2765.387);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,1997.602);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,1427.172);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,1010.157);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,719.9252);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,480.0794);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,318.0178);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,171.9245);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,92.98276);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,40.90496);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,10.77897);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(29,0.7179988);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(2,0.7005231);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,26.40218);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,29.39362);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,27.55284);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,26.00993);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,27.33868);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,25.30203);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,24.05658);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,25.22454);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,27.14338);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,29.14584);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,31.27297);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,33.37906);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,35.30132);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,35.83739);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,29.96866);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,21.53503);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,18.40921);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,14.7453);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,11.91844);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,9.819631);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,7.807438);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,6.65181);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,4.39847);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,3.198825);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,2.145532);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,1.020209);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(29,0.3249443);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(853526);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_3 = new TH1D("VbbHcc_both_H_dR_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(2,28.94998);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(3,33762.67);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(4,57197.01);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(5,63879.35);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(6,64160.58);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(7,58470.76);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(8,54379.24);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(9,54722.76);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(10,59309.45);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(11,67656.83);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(12,78842.33);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(13,92552);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(14,107804.2);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(15,122649.3);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(16,125800.4);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(17,72400.27);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(18,45778.76);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(19,30334.89);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(20,20333.3);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(21,13597.86);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(22,8807.683);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(23,5581.372);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(24,3386.016);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(25,1810.518);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(26,884.7783);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(27,354.5422);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(28,90.60894);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(29,6.085632);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(2,1.47013);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(3,50.68118);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(4,65.30471);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(5,68.98346);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(6,69.14588);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(7,65.92898);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(8,63.5711);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(9,64.05133);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(10,67.23595);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(11,71.11173);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(12,76.9993);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(13,83.6071);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(14,90.90847);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(15,96.82852);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(16,98.17547);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(17,74.24704);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(18,58.95876);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(19,47.78288);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(20,38.71194);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(21,31.45873);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(22,25.2081);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(23,20.15643);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(24,15.72723);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(25,11.11315);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(26,7.679096);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(27,4.839195);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(28,2.427853);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(29,0.6132764);
   VbbHcc_both_H_dR_all_stack_3->SetEntries(1.887335e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_4 = new TH1D("VbbHcc_both_H_dR_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(2,2.171764);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(3,2306.567);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(4,2631.759);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(5,2362.34);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(6,2330.696);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(7,2212.451);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(8,2203.439);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(9,2329.665);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(10,2509.067);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(11,2649.521);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(12,3105.983);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(13,3580.086);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(14,4111.076);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(15,4621.163);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(16,4865.214);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(17,2923.025);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(18,2035.067);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(19,1443.358);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(20,1091.828);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(21,774.2028);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(22,540.7383);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(23,370.7783);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(24,221.6766);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(25,120.1859);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(26,62.88829);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(27,27.61921);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(28,4.612475);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(29,0.08053437);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(2,0.573586);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(3,31.19191);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(4,33.63913);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(5,34.19524);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(6,38.51718);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(7,36.87511);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(8,36.74352);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(9,39.34888);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(10,40.51481);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(11,37.28562);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(12,42.17512);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(13,46.09771);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(14,47.76706);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(15,47.79967);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(16,51.25801);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(17,37.13369);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(18,31.54153);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(19,26.43902);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(20,24.28924);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(21,19.6663);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(22,20.42955);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(23,13.29535);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(24,8.041233);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(25,6.767164);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(26,5.208936);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(27,2.572551);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(28,0.8519455);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(29,0.06106238);
   VbbHcc_both_H_dR_all_stack_4->SetEntries(365766);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_5 = new TH1D("VbbHcc_both_H_dR_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(2,0.8461593);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(3,1421.635);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(4,1786.014);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(5,1598.899);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(6,1517.804);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(7,1267.258);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(8,1309.337);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(9,1282.807);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(10,1365.945);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(11,1477.168);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(12,1602.058);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(13,1805.343);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(14,2023.119);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(15,2283.701);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(16,2448.662);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(17,1449.919);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(18,955.5836);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(19,726.6579);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(20,545.8075);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(21,399.7716);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(22,281.409);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(23,212.0908);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(24,149.3407);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(25,85.79491);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(26,53.35172);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(27,26.09719);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(28,3.570428);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(29,0.3346682);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(2,0.3131608);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(3,28.18238);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(4,43.00787);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(5,49.51467);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(6,58.35916);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(7,42.78266);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(8,50.05161);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(9,42.83046);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(10,44.18121);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(11,49.63325);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(12,48.82168);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(13,49.679);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(14,52.30275);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(15,56.96689);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(16,60.88301);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(17,49.57572);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(18,32.07339);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(19,28.77979);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(20,26.88326);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(21,16.94518);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(22,18.16702);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(23,15.84743);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(24,19.41091);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(25,11.60739);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(26,11.07208);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(27,8.699594);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(28,1.283147);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(29,0.1685858);
   VbbHcc_both_H_dR_all_stack_5->SetEntries(204720);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_6 = new TH1D("VbbHcc_both_H_dR_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(3,10.34864);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(4,10.76817);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(5,8.634153);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(6,7.179609);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(7,8.718465);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(8,6.56318);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(9,6.103693);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(10,7.876366);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(11,7.407911);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(12,7.898273);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(13,11.55003);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(14,13.99411);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(15,15.34114);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(16,16.63284);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(17,6.93617);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(18,4.590148);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(19,4.42365);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(20,1.158047);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(21,1.357859);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(22,0.7628591);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(23,0.7724233);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(24,0.1414632);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(25,0.2651306);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(26,0.4655697);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(27,0.09016585);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(3,1.437846);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(4,1.382506);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(5,1.355345);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(6,1.135787);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(7,1.348394);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(8,1.140114);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(9,1.049973);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(10,1.135032);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(11,1.139958);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(12,1.262049);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(13,1.536039);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(14,1.769553);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(15,1.76683);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(16,1.811657);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(17,1.192498);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(18,0.8501566);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(19,0.9175143);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(20,0.5166549);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(21,0.4681454);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(22,0.3748398);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(23,0.398482);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(24,0.1015329);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(25,0.1532598);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(26,0.322093);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(27,0.09016585);
   VbbHcc_both_H_dR_all_stack_6->SetEntries(1131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_7 = new TH1D("VbbHcc_both_H_dR_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(3,20.05393);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(4,22.92497);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(5,19.49117);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(6,13.96052);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(7,12.74293);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(8,10.27109);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(9,7.417373);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(10,10.05045);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(11,11.76526);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(12,13.35208);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(13,19.16643);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(14,19.75093);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(15,22.05533);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(16,24.07875);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(17,11.51143);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(18,7.620377);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(19,5.61801);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(20,3.52835);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(21,1.737801);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(22,1.461147);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(23,1.271809);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(24,0.8523323);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(25,0.3876042);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(26,0.3338043);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(3,1.62407);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(4,1.624484);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(5,1.586747);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(6,1.296857);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(7,1.4224);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(8,1.221527);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(9,1.047284);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(10,1.156228);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(11,1.231301);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(12,1.370066);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(13,1.665672);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(14,1.844615);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(15,1.855533);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(16,1.901633);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(17,1.293553);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(18,0.9330666);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(19,0.9333198);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(20,0.6484697);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(21,0.4699709);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(22,0.4207476);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(23,0.4294264);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(24,0.2372499);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(25,0.1586002);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(26,0.301472);
   VbbHcc_both_H_dR_all_stack_7->SetEntries(2911);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_8 = new TH1D("VbbHcc_both_H_dR_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(3,24.432);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(4,37.14833);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(5,37.02222);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(6,24.66256);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(7,17.22295);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(8,16.41148);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(9,10.68902);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(10,14.66746);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(11,18.76595);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(12,21.05732);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(13,22.52644);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(14,25.71656);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(15,34.0452);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(16,34.33568);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(17,19.05443);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(18,12.19231);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(19,8.157236);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(20,3.799405);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(21,4.067101);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(22,1.454333);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(23,1.226018);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(24,0.728321);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(25,0.3715491);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(27,0.1974535);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(3,2.293435);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(4,2.852681);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(5,2.827592);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(6,2.277156);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(7,1.915495);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(8,1.887429);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(9,1.522901);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(10,1.76572);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(11,2.002337);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(12,2.148112);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(13,2.171631);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(14,2.331);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(15,2.692296);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(16,2.857727);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(17,2.001341);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(18,1.610363);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(19,1.31953);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(20,0.8873732);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(21,0.9415785);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(22,0.551793);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(23,0.501504);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(24,0.3662524);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(25,0.262725);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(27,0.1974535);
   VbbHcc_both_H_dR_all_stack_8->SetEntries(1897);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_9 = new TH1D("VbbHcc_both_H_dR_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(2,0.02245978);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(3,18.56473);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(4,26.56439);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(5,23.93384);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(6,17.51069);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(7,12.00701);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(8,9.923334);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(9,9.539199);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(10,10.03622);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(11,11.71645);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(12,13.8524);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(13,16.87063);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(14,20.24837);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(15,24.1055);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(16,24.36892);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(17,11.0131);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(18,6.024083);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(19,3.66683);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(20,2.603348);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(21,1.832497);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(22,1.219455);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(23,0.7846709);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(24,0.4851097);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(25,0.2565891);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(26,0.1303188);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(27,0.03983212);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(28,0.01822152);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(2,0.006819092);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(3,0.20348);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(4,0.2441428);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(5,0.2324864);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(6,0.1905946);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(7,0.153741);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(8,0.1425819);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(9,0.1723557);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(10,0.1465263);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(11,0.1631481);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(12,0.1770871);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(13,0.2170871);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(14,0.2057244);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(15,0.2259977);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(16,0.2287085);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(17,0.1548815);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(18,0.1105727);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(19,0.09368931);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(20,0.07747655);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(21,0.06097479);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(22,0.04903496);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(23,0.04369846);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(24,0.03203287);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(25,0.02235481);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(26,0.01555716);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(27,0.007911532);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(28,0.005879107);
   VbbHcc_both_H_dR_all_stack_9->SetEntries(149443);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_10 = new TH1D("VbbHcc_both_H_dR_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(2,0.001653235);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(3,9.504522);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(4,15.48713);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(5,16.02734);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(6,14.51515);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(7,10.56714);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(8,7.92169);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(9,7.526458);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(10,7.93291);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(11,9.269473);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(12,10.69664);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(13,12.66388);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(14,14.8379);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(15,16.53065);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(16,16.77433);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(17,9.054312);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(18,5.827719);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(19,3.891722);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(20,2.714008);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(21,1.955763);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(22,1.223217);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(23,0.8163465);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(24,0.5567263);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(25,0.2718017);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(26,0.1707875);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(27,0.06974118);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(28,0.01528539);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(2,0.0009778577);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(3,0.06978444);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(4,0.08914634);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(5,0.09080764);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(6,0.08644144);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(7,0.07367875);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(8,0.06367022);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(9,0.06200001);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(10,0.06371067);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(11,0.06882853);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(12,0.07389475);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(13,0.08046592);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(14,0.08707486);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(15,0.09193543);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(16,0.09261729);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(17,0.06799557);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(18,0.0543381);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(19,0.04439535);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(20,0.03699718);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(21,0.03127935);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(22,0.02465315);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(23,0.02010957);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(24,0.01660272);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(25,0.01145708);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(26,0.009041839);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(27,0.005748809);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(28,0.002638129);
   VbbHcc_both_H_dR_all_stack_10->SetEntries(411525);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_11 = new TH1D("VbbHcc_both_H_dR_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(3,0.2077166);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(4,0.5312828);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(5,0.7131587);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(6,0.8656757);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(7,0.6728082);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(8,0.5165946);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(9,0.34588);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(10,0.2812262);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(11,0.3125224);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(12,0.3134093);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(13,0.3282879);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(14,0.427111);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(15,0.4309766);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(16,0.4666169);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(17,0.2019111);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(18,0.1110986);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(19,0.05632519);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(20,0.02405272);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(21,0.01700123);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(22,0.01364217);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(23,0.01300156);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(24,0.00680394);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(25,0.003283518);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(26,0.002891781);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(3,0.02353855);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(4,0.04182455);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(5,0.0430574);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(6,0.05068561);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(7,0.04131613);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(8,0.03696316);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(9,0.03031725);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(10,0.02723426);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(11,0.02806743);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(12,0.02871871);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(13,0.02939429);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(14,0.0377168);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(15,0.03341954);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(16,0.03497977);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(17,0.02292155);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(18,0.01685175);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(19,0.01239712);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(20,0.007822782);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(21,0.006151533);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(22,0.005790226);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(23,0.006046773);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(24,0.003956629);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(25,0.002619314);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(26,0.002891781);
   VbbHcc_both_H_dR_all_stack_11->SetEntries(2972);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_12 = new TH1D("VbbHcc_both_H_dR_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(3,0.08407043);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(4,0.1846075);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(5,0.2917776);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(6,0.3869103);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(7,0.3773901);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(8,0.2803523);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(9,0.1887355);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(10,0.1712174);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(11,0.1537098);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(12,0.1598542);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(13,0.1703935);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(14,0.189373);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(15,0.2068278);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(16,0.1919826);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(17,0.1077553);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(18,0.05920004);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(19,0.04047437);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(20,0.02459816);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(21,0.01948825);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(22,0.009438469);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(23,0.008284407);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(24,0.002365609);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(25,0.00366025);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(26,0.0019094);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(27,0.0003574024);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(3,0.005221302);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(4,0.007996659);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(5,0.009781651);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(6,0.01138356);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(7,0.01127027);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(8,0.009574469);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(9,0.007913206);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(10,0.00748481);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(11,0.007127602);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(12,0.007245934);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(13,0.007500884);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(14,0.007891015);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(15,0.00828319);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(16,0.007947168);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(17,0.006940377);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(18,0.004415203);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(19,0.003628275);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(20,0.002799313);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(21,0.002556442);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(22,0.001726962);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(23,0.001677421);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(24,0.0008361992);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(25,0.001099167);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(26,0.00085697);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(27,0.0003574024);
   VbbHcc_both_H_dR_all_stack_12->SetEntries(10870);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_all__431 = new TH1D("VbbHcc_both_H_dR_all__431","",30,0,6);
   VbbHcc_both_H_dR_all__431->SetBinContent(2,224);
   VbbHcc_both_H_dR_all__431->SetBinContent(3,228230);
   VbbHcc_both_H_dR_all__431->SetBinContent(4,260606);
   VbbHcc_both_H_dR_all__431->SetBinContent(5,214038);
   VbbHcc_both_H_dR_all__431->SetBinContent(6,206872);
   VbbHcc_both_H_dR_all__431->SetBinContent(7,205578);
   VbbHcc_both_H_dR_all__431->SetBinContent(8,212192);
   VbbHcc_both_H_dR_all__431->SetBinContent(9,226401);
   VbbHcc_both_H_dR_all__431->SetBinContent(10,246062);
   VbbHcc_both_H_dR_all__431->SetBinContent(11,274390);
   VbbHcc_both_H_dR_all__431->SetBinContent(12,310568);
   VbbHcc_both_H_dR_all__431->SetBinContent(13,354382);
   VbbHcc_both_H_dR_all__431->SetBinContent(14,405334);
   VbbHcc_both_H_dR_all__431->SetBinContent(15,457546);
   VbbHcc_both_H_dR_all__431->SetBinContent(16,480985);
   VbbHcc_both_H_dR_all__431->SetBinContent(17,323266);
   VbbHcc_both_H_dR_all__431->SetBinContent(18,239734);
   VbbHcc_both_H_dR_all__431->SetBinContent(19,185661);
   VbbHcc_both_H_dR_all__431->SetBinContent(20,143266);
   VbbHcc_both_H_dR_all__431->SetBinContent(21,110555);
   VbbHcc_both_H_dR_all__431->SetBinContent(22,82755);
   VbbHcc_both_H_dR_all__431->SetBinContent(23,60789);
   VbbHcc_both_H_dR_all__431->SetBinContent(24,40889);
   VbbHcc_both_H_dR_all__431->SetBinContent(25,24825);
   VbbHcc_both_H_dR_all__431->SetBinContent(26,13156);
   VbbHcc_both_H_dR_all__431->SetBinContent(27,6002);
   VbbHcc_both_H_dR_all__431->SetBinContent(28,1764);
   VbbHcc_both_H_dR_all__431->SetBinContent(29,122);
   VbbHcc_both_H_dR_all__431->SetEntries(5316192);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all__431->SetLineColor(ci);
   VbbHcc_both_H_dR_all__431->SetLineWidth(2);
   VbbHcc_both_H_dR_all__431->SetMarkerStyle(20);
   VbbHcc_both_H_dR_all__431->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_all__431->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all__431->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__431->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__431->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__431->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__431->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__431->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__431->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__431->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all__431->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__431->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__431->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__431->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__431->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__431->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_all_fx1431[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_all_fy1431[30] = {
   0,
   197.3336,
   366980.6,
   378207.9,
   317087.1,
   295409.4,
   294840.1,
   306892,
   324106.7,
   357312.6,
   420602.9,
   462423.5,
   509888,
   578378.5,
   673355.7,
   716758.4,
   436016.2,
   343044.1,
   248250.9,
   186292.9,
   138669.9,
   138971.1,
   89650.44,
   59627.77,
   32185.43,
   17113.39,
   7167.435,
   1530.382,
   22.57018,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_all_fex1431[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_all_fey1431[30] = {
   0,
   56.48686,
   7813.395,
   7742.089,
   7118.229,
   6758.541,
   7122.322,
   7485.703,
   16450.01,
   8645.109,
   26693.25,
   24026.57,
   10120.7,
   10080.19,
   11772.43,
   21375.39,
   8370.773,
   8674.628,
   7172.724,
   5860.592,
   5492.737,
   23955.14,
   11291.03,
   3869.215,
   2183.436,
   1561.618,
   1062.442,
   292.2874,
   7.230211,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_all_fx1431,Graph_from_VbbHcc_both_H_dR_all_fy1431,Graph_from_VbbHcc_both_H_dR_all_fex1431,Graph_from_VbbHcc_both_H_dR_all_fey1431);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_all1431 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_all1431","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetMaximum(811947.2);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_all1431);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_all","MC unc. (stat.)","fl");

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
   H_dR_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__432 = new TH1D("data_mc_ratio__432","",30,0,6);
   data_mc_ratio__432->SetBinContent(2,1.135134);
   data_mc_ratio__432->SetBinContent(3,0.621913);
   data_mc_ratio__432->SetBinContent(4,0.6890549);
   data_mc_ratio__432->SetBinContent(5,0.6750134);
   data_mc_ratio__432->SetBinContent(6,0.7002893);
   data_mc_ratio__432->SetBinContent(7,0.6972524);
   data_mc_ratio__432->SetBinContent(8,0.6914224);
   data_mc_ratio__432->SetBinContent(9,0.6985386);
   data_mc_ratio__432->SetBinContent(10,0.6886464);
   data_mc_ratio__432->SetBinContent(11,0.6523731);
   data_mc_ratio__432->SetBinContent(12,0.6716094);
   data_mc_ratio__432->SetBinContent(13,0.6950193);
   data_mc_ratio__432->SetBinContent(14,0.700811);
   data_mc_ratio__432->SetBinContent(15,0.6795012);
   data_mc_ratio__432->SetBinContent(16,0.671056);
   data_mc_ratio__432->SetBinContent(17,0.7414082);
   data_mc_ratio__432->SetBinContent(18,0.6988432);
   data_mc_ratio__432->SetBinContent(19,0.7478764);
   data_mc_ratio__432->SetBinContent(20,0.7690362);
   data_mc_ratio__432->SetBinContent(21,0.7972531);
   data_mc_ratio__432->SetBinContent(22,0.5954836);
   data_mc_ratio__432->SetBinContent(23,0.678067);
   data_mc_ratio__432->SetBinContent(24,0.6857376);
   data_mc_ratio__432->SetBinContent(25,0.7713117);
   data_mc_ratio__432->SetBinContent(26,0.7687549);
   data_mc_ratio__432->SetBinContent(27,0.8373986);
   data_mc_ratio__432->SetBinContent(28,1.152653);
   data_mc_ratio__432->SetBinContent(29,5.405363);
   data_mc_ratio__432->SetBinError(2,0.0758443);
   data_mc_ratio__432->SetBinError(3,0.001301797);
   data_mc_ratio__432->SetBinError(4,0.001349776);
   data_mc_ratio__432->SetBinError(5,0.001459039);
   data_mc_ratio__432->SetBinError(6,0.001539666);
   data_mc_ratio__432->SetBinError(7,0.001537807);
   data_mc_ratio__432->SetBinError(8,0.001500994);
   data_mc_ratio__432->SetBinError(9,0.001468085);
   data_mc_ratio__432->SetBinError(10,0.00138827);
   data_mc_ratio__432->SetBinError(11,0.001245409);
   data_mc_ratio__432->SetBinError(12,0.001205143);
   data_mc_ratio__432->SetBinError(13,0.001167511);
   data_mc_ratio__432->SetBinError(14,0.001100764);
   data_mc_ratio__432->SetBinError(15,0.001004553);
   data_mc_ratio__432->SetBinError(16,0.0009675936);
   data_mc_ratio__432->SetBinError(17,0.001303999);
   data_mc_ratio__432->SetBinError(18,0.001427299);
   data_mc_ratio__432->SetBinError(19,0.001735679);
   data_mc_ratio__432->SetBinError(20,0.002031773);
   data_mc_ratio__432->SetBinError(21,0.002397767);
   data_mc_ratio__432->SetBinError(22,0.002070011);
   data_mc_ratio__432->SetBinError(23,0.002750173);
   data_mc_ratio__432->SetBinError(24,0.00339121);
   data_mc_ratio__432->SetBinError(25,0.004895367);
   data_mc_ratio__432->SetBinError(26,0.006702333);
   data_mc_ratio__432->SetBinError(27,0.01080897);
   data_mc_ratio__432->SetBinError(28,0.02744413);
   data_mc_ratio__432->SetBinError(29,0.4893786);
   data_mc_ratio__432->SetMinimum(0.4);
   data_mc_ratio__432->SetMaximum(1.6);
   data_mc_ratio__432->SetEntries(185.7341);
   data_mc_ratio__432->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__432->SetLineColor(ci);
   data_mc_ratio__432->SetLineWidth(2);
   data_mc_ratio__432->SetMarkerStyle(20);
   data_mc_ratio__432->SetMarkerSize(1.2);
   data_mc_ratio__432->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__432->GetXaxis()->SetRange(1,31);
   data_mc_ratio__432->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__432->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__432->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__432->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__432->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__432->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__432->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__432->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__432->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__432->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__432->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__432->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__432->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__432->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__432->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__432->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__432->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1432[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1432[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1432[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1432[30] = {
   0,
   0.2862506,
   0.02129103,
   0.02047046,
   0.02244882,
   0.02287856,
   0.02415655,
   0.02439198,
   0.05075494,
   0.02419481,
   0.06346426,
   0.05195793,
   0.01984887,
   0.01742837,
   0.01748323,
   0.02982232,
   0.01919831,
   0.02528721,
   0.02889304,
   0.03145902,
   0.03961016,
   0.172375,
   0.125945,
   0.06488949,
   0.06783927,
   0.09125124,
   0.1482318,
   0.1909899,
   0.3203436,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1432,Graph_from_mc_statistical_error_fy1432,Graph_from_mc_statistical_error_fex1432,Graph_from_mc_statistical_error_fey1432);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1432 = new TH1F("Graph_Graph_from_mc_statistical_error1432","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1432->SetMinimum(0.6155877);
   Graph_Graph_from_mc_statistical_error1432->SetMaximum(1.384412);
   Graph_Graph_from_mc_statistical_error1432->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1432->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1432->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1432);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}
