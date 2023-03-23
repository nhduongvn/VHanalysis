#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Mar 23 11:25:12 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-0.2965991,1.171633,2.17506);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.927894);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0);
   st_stack_61->SetMaximum(1.927894);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Aplanarity");
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Event/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1.125829);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,0.349671);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.09419455);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.04037466);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.01586411);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.01418661);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.002417997);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.002804771);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.05747274);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.03227793);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.01659265);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.01068467);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.006597101);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.006345013);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.002417997);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.002804771);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(584);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.4743234);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.136311);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.04282434);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.02691425);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.009979517);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.003082147);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.002684523);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.003284008);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.001516987);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.0003705224);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.0003880459);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.0003753755);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.01340137);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.007146369);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.004018345);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.003170508);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.001964988);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.001090839);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.00101915);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.001078851);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.0007585318);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.0003705224);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.0003880459);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0003753755);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(1906);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
