#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,-0.4699126,1.171633,3.446026);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15709);
   Aplanarity_tags_17->SetRightMargin(0.1234783);
   Aplanarity_tags_17->SetBottomMargin(0.12);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.054432);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0);
   st_stack_62->SetMaximum(3.054432);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("Aplanarity");
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Event/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1.796219);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,0.5773548);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.2299213);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.1237055);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.06598735);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.03148479);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.01491943);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.01856085);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.007312888);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.01143753);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.00434013);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.002008212);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.05836625);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.03281116);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.02089054);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.01507343);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.01119793);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.007889218);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.005282479);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.005941207);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.003667294);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.004716699);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.002571471);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.002008212);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(1686);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.7389596);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.2481962);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.09553979);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.05041026);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.02584379);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.01291232);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.007602193);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.006280205);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.003136279);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.002247104);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.002220056);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.001340313);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.001159337);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.0003100168);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.01328647);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.007719523);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.004781396);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.003485079);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.002529913);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.001750943);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.001312149);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.001244121);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.0008966187);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.0007498369);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.0007488369);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.0005628555);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.0005585634);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.0003100168);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(5229);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
