#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_all_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_all/Aplanarity_seljet_all
//=========  (Tue Feb 14 16:02:06 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_all = new TCanvas("Aplanarity_seljet_all", "Aplanarity_seljet_all",0,0,600,600);
   Aplanarity_seljet_all->SetHighLightColor(2);
   Aplanarity_seljet_all->Range(-0.2183529,-1.789994,1.171633,14.571);
   Aplanarity_seljet_all->SetFillColor(0);
   Aplanarity_seljet_all->SetFillStyle(4000);
   Aplanarity_seljet_all->SetBorderMode(0);
   Aplanarity_seljet_all->SetBorderSize(2);
   Aplanarity_seljet_all->SetLogy();
   Aplanarity_seljet_all->SetLeftMargin(0.15709);
   Aplanarity_seljet_all->SetRightMargin(0.1234783);
   Aplanarity_seljet_all->SetBottomMargin(0.12);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.621415e+12);
   
   TH1F *st_stack_320 = new TH1F("st_stack_320","",50,0,1);
   st_stack_320->SetMinimum(1.490476);
   st_stack_320->SetMaximum(8.607958e+12);
   st_stack_320->SetDirectory(0);
   st_stack_320->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_320->SetLineColor(ci);
   st_stack_320->GetXaxis()->SetTitle("Aplanarity");
   st_stack_320->GetXaxis()->SetRange(1,50);
   st_stack_320->GetXaxis()->SetLabelFont(42);
   st_stack_320->GetXaxis()->SetTitleOffset(1);
   st_stack_320->GetXaxis()->SetTitleFont(42);
   st_stack_320->GetYaxis()->SetTitle("Events/0.02");
   st_stack_320->GetYaxis()->SetLabelFont(42);
   st_stack_320->GetYaxis()->SetTitleSize(0.037);
   st_stack_320->GetYaxis()->SetTitleFont(42);
   st_stack_320->GetZaxis()->SetLabelFont(42);
   st_stack_320->GetZaxis()->SetTitleOffset(1);
   st_stack_320->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_320);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(0,2073.897);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(1,2.61935e+10);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(2,1.275021e+10);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(3,6.621759e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(4,3.738483e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(5,2.241277e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(6,1.402819e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(7,9.030032e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(8,5.924199e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(9,3.923353e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(10,2.636754e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(11,1.768014e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(12,1.155345e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(13,7.795456e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(14,5.173594e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(15,3.137621e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(16,1.937511e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(17,1.263342e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(18,6188449);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(19,3469025);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(20,1669420);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(21,776626.9);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(22,219992.5);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(23,131143.5);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(24,7832.904);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(25,42.64568);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(0,771.1413);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(1,1.394675e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(2,1.044367e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(3,7691395);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(4,5884178);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(5,4503755);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(6,3645810);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(7,2873471);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(8,2330685);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(9,1945149);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(10,1547386);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(11,1276141);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(12,1020692);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(13,890062.1);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(14,712403.4);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(15,540077.8);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(16,415220.6);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(17,364532.1);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(18,219226.8);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(19,170932.5);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(20,118206.4);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(21,79271.01);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(22,38174.16);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(23,46762.18);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(24,3504.798);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(25,42.64568);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetEntries(2.02983e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(0,4.337237);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(1,2.064874e+07);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(2,1.598122e+07);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(3,1.082303e+07);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(4,7424676);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(5,5205058);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(6,3708113);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(7,2669847);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(8,1930847);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(9,1397756);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(10,1007839);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(11,721743.2);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(12,511085.8);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(13,356631.8);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(14,244064.9);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(15,162778.3);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(16,105409.7);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(17,65591.39);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(18,38646.95);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(19,21356.47);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(20,10770.25);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(21,4788.14);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(22,1757.992);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(23,482.1847);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(24,71.19778);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(25,2.244969);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(0,0.5630224);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(1,1291.102);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(2,1141.855);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(3,940.6231);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(4,780.1457);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(5,653.3457);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(6,551.7937);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(7,468.1831);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(8,398.2254);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(9,339.1621);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(10,287.4999);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(11,243.5985);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(12,205.8713);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(13,171.0853);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(14,141.7274);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(15,115.9415);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(16,93.1845);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(17,73.34814);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(18,56.34826);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(19,42.03063);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(20,29.65077);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(21,19.71726);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(22,11.96454);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(23,7.131861);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(24,2.338319);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(25,0.4082003);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetEntries(1.051192e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_all->Modified();
   Aplanarity_seljet_all->cd();
   Aplanarity_seljet_all->SetSelected(Aplanarity_seljet_all);
}
