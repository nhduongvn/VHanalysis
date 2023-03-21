#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Mon Mar 20 11:50:05 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-1.881402,1.171633,13.79695);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(12.22911);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0);
   st_stack_255->SetMaximum(12.22911);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetTitle("Aplanarity");
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetTitleOffset(1);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Event/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetTitleSize(0.037);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetTitleOffset(1);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,7.114527);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.7858225);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.1452267);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.0256846);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.01805617);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.007110234);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.008683538);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.005801782);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.002133138);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.1526047);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.04611445);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.02025464);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.008313942);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.006898116);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.0041962);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.005033042);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.004149312);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.002133138);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,3.035635);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.3520773);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.08235511);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.02501629);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.009700144);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.00408691);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.001514172);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.002347479);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.0009703004);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.0009549037);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.0001447381);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.0006439316);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.0008829417);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.0003156401);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.03443246);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.01155181);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.005478906);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.002924578);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.001858249);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.001258532);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.0007173557);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.0009144646);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.0005630576);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.0005550761);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.0001447381);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.0004556166);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.0005203854);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.0003156401);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
