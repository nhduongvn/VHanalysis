#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_all_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_all/Aplanarity_seljet_all
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_all = new TCanvas("Aplanarity_seljet_all", "Aplanarity_seljet_all",0,0,600,600);
   Aplanarity_seljet_all->SetHighLightColor(2);
   Aplanarity_seljet_all->Range(-0.2183529,-0.0002460848,1.171633,4.887623);
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
   st->SetMaximum(15303.75);
   
   TH1F *st_stack_320 = new TH1F("st_stack_320","",50,0,1);
   st_stack_320->SetMinimum(3.857431);
   st_stack_320->SetMaximum(25051.62);
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
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(1,110.4083);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(2,80.99941);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(3,54.29349);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(4,35.64203);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(5,25.13487);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(6,17.96478);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(7,13.14445);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(8,9.334615);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(9,6.929098);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(10,4.995608);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(11,3.473638);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(12,2.56903);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(13,1.797454);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(14,1.215632);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(15,0.8173002);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(16,0.6369112);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(17,0.3473773);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(18,0.1690178);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(19,0.1295324);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(20,0.05436147);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(21,0.01470556);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(22,0.01022476);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(1,0.5507203);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(2,0.4703892);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(3,0.3938955);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(4,0.3095079);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(5,0.2575521);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(6,0.2179561);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(7,0.1898233);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(8,0.1564491);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(9,0.1732673);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(10,0.1129619);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(11,0.09443399);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(12,0.08208463);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(13,0.07832121);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(14,0.05531717);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(15,0.04526151);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(16,0.03993287);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(17,0.02944396);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(18,0.02143428);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(19,0.01828061);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(20,0.01182711);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(21,0.005901306);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(22,0.004484126);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetEntries(163245);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(1,42.62916);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(2,32.31217);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(3,21.42202);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(4,14.41147);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(5,9.70522);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(6,6.759846);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(7,4.631225);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(8,3.245349);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(9,2.254384);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(10,1.530685);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(11,1.086596);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(12,0.7337798);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(13,0.4755146);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(14,0.2858971);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(15,0.1961974);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(16,0.1053758);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(17,0.06586554);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(18,0.03533608);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(19,0.02124307);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(20,0.009199581);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(21,0.003754208);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(22,0.001635684);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(23,0.0001893235);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(24,0.0001574125);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(1,0.1204622);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(2,0.1053468);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(3,0.08709739);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(4,0.06997302);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(5,0.05757832);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(6,0.0475898);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(7,0.03927628);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(8,0.03335026);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(9,0.02795763);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(10,0.02280424);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(11,0.02025428);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(12,0.02177093);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(13,0.0126048);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(14,0.009659798);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(15,0.008058342);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(16,0.005895394);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(17,0.005305809);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(18,0.003373461);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(19,0.002559625);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(20,0.00173551);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(21,0.001072119);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(22,0.0007495007);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(23,0.0001893235);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(24,0.0001574125);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetEntries(467662);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_1","ZHcc","F");

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
   Aplanarity_seljet_all->Modified();
   Aplanarity_seljet_all->cd();
   Aplanarity_seljet_all->SetSelected(Aplanarity_seljet_all);
}
