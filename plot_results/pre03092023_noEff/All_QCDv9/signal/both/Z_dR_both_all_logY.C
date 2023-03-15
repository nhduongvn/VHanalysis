#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-3.10366,7.029799,0.7424942);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLogy();
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(14.16236);
   st_stack_148->SetMaximum(2.279706);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Event/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,1.127356);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,1.685013);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,1.691497);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,1.486162);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,1.051113);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,0.7458808);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,0.5749476);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,0.4528257);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,0.4113048);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,0.4887966);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,0.50048);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,0.5749367);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,0.7409354);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,0.6517785);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,0.2673621);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,0.1105587);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,0.05330427);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,0.0278899);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,0.01922784);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,0.01626401);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,0.006405872);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,0.003409068);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,0.001650786);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,0.04664916);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,0.05467498);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,0.05781866);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,0.05934906);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,0.04305043);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,0.03618833);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,0.03175567);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,0.03113084);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,0.02655073);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,0.02941122);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,0.03032462);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,0.03171412);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,0.0365124);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,0.03427576);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,0.02161039);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,0.01373175);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,0.009229364);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,0.00680382);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,0.005953998);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,0.008547907);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,0.003378024);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,0.002429022);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,0.001650786);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.0003691081);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,0.4006305);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,0.8301831);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,0.8919187);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,0.7318727);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,0.4724971);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,0.266876);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,0.1800976);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,0.1552561);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,0.1570905);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,0.1753135);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,0.2039941);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,0.2256261);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,0.2505371);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,0.2575931);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,0.1148221);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,0.04908065);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,0.03114483);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,0.02004009);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,0.008307162);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,0.007547754);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,0.003382631);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,0.001748658);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,0.0009389352);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,0.0001287611);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,0.0004885185);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.0002832501);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,0.009985277);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,0.01387487);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,0.01435222);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,0.01359662);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,0.0102889);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,0.007861271);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,0.006389004);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,0.005877254);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,0.005973144);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,0.006278989);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,0.006829905);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,0.007261916);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,0.007552168);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,0.008208321);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,0.005683772);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,0.003258288);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,0.002659329);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,0.002110108);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,0.001331472);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,0.00127308);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,0.0008273863);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,0.0006193645);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,0.000489547);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,0.0001287611);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,0.0003462551);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
