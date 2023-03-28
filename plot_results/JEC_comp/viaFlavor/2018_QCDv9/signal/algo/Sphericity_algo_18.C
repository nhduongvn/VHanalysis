#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2183529,-0.05344948,1.171633,0.3919628);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15709);
   Sphericity_algo_18->SetRightMargin(0.1234783);
   Sphericity_algo_18->SetBottomMargin(0.12);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.3474216);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",25,0,1);
   st_stack_155->SetMinimum(0);
   st_stack_155->SetMaximum(0.3474216);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetTitle("Sphericity");
   st_stack_155->GetXaxis()->SetRange(1,25);
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetTitleOffset(1);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Event/0.04");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetTitleSize(0.037);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetTitleOffset(1);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.01133474);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.09691004);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.1766398);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.2234661);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.1758229);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.04914116);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.03249619);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.005316496);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.01454263);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.01500971);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.005833544);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.01084171);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,0.007854916);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.004906205);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,0.002499098);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,0.004553505);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.005311934);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.01573747);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.02240305);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.02528896);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.04407415);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01165185);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.01025318);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.003783207);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.006200471);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.006143094);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.004160638);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.005490309);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,0.004590846);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.003469231);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,0.002499098);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,0.003226214);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(321);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.009070439);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.04887961);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.05686954);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.06489384);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.04921863);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.0220045);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.008389114);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.004476587);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.003385064);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.004074633);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.002254364);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.004802896);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.0006705712);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.001139503);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.001018545);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.000320559);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.0006395724);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.0006503366);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.0003603593);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.001781284);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.00426689);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.004482461);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.00478059);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.005197279);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.002766821);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.001744919);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.001259895);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.001036103);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.001195583);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.0008614686);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.001371594);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.0006705712);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.0005609859);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.0005517445);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.000320559);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.0004524363);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.00045986);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.0003603593);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(830);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
