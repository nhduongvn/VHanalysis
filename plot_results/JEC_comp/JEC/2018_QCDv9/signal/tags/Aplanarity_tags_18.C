#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Mon Mar 20 11:49:40 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,-1.844916,1.171633,13.52938);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(11.99195);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0);
   st_stack_63->SetMaximum(11.99195);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Event/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,6.979785);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,0.7711685);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.1358544);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.0256846);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.01805617);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.007110234);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.008683538);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.005801782);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.002133138);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.1514379);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.0456396);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.01969642);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.008313942);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.006898116);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.0041962);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.005033042);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.004149312);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.002133138);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(3172);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,2.973534);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.3449233);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.08008463);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.02331443);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.008736798);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.00408691);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.001514172);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.001927563);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.001390216);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.0009549037);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.0001447381);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.0006439316);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.0008829417);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.0003156401);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.03411244);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01144292);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.005411269);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.002825629);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.001773056);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.001258532);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.0007173557);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.0008123524);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.000702398);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.0005550761);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.0001447381);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.0004556166);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.0005203854);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.0003156401);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(10130);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
