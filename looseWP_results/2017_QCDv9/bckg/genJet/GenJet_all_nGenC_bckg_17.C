#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenC_bckg_17()
{
//=========Macro generated from canvas: GenJet_all_nGenC_bckg_17/GenJet_all_nGenC_bckg_17
//=========  (Fri Mar 10 12:49:28 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenC_bckg_17 = new TCanvas("GenJet_all_nGenC_bckg_17", "GenJet_all_nGenC_bckg_17",0,0,600,600);
   GenJet_all_nGenC_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenC_bckg_17->Range(-4.867058,-2.059594e+11,22.93266,1.510369e+12);
   GenJet_all_nGenC_bckg_17->SetFillColor(0);
   GenJet_all_nGenC_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenC_bckg_17->SetBorderMode(0);
   GenJet_all_nGenC_bckg_17->SetBorderSize(2);
   GenJet_all_nGenC_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenC_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenC_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenC_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenC_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.338736e+12);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",20,-0.5,19.5);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(1.338736e+12);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Event/1.0");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *GenJet_all_nGenC_stack_1 = new TH1D("GenJet_all_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_1->SetBinContent(1,1.111137e+12);
   GenJet_all_nGenC_stack_1->SetBinContent(2,2.151926e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(3,7.165252e+10);
   GenJet_all_nGenC_stack_1->SetBinContent(4,1.030938e+10);
   GenJet_all_nGenC_stack_1->SetBinContent(5,1.624729e+09);
   GenJet_all_nGenC_stack_1->SetBinContent(6,2.0034e+08);
   GenJet_all_nGenC_stack_1->SetBinContent(7,2.4619e+07);
   GenJet_all_nGenC_stack_1->SetBinContent(8,2737481);
   GenJet_all_nGenC_stack_1->SetBinContent(9,310100.7);
   GenJet_all_nGenC_stack_1->SetBinContent(10,11463.79);
   GenJet_all_nGenC_stack_1->SetBinContent(11,958.7248);
   GenJet_all_nGenC_stack_1->SetBinContent(12,0.4762869);
   GenJet_all_nGenC_stack_1->SetBinError(1,1.337505e+08);
   GenJet_all_nGenC_stack_1->SetBinError(2,5.848999e+07);
   GenJet_all_nGenC_stack_1->SetBinError(3,3.347085e+07);
   GenJet_all_nGenC_stack_1->SetBinError(4,1.254559e+07);
   GenJet_all_nGenC_stack_1->SetBinError(5,4901853);
   GenJet_all_nGenC_stack_1->SetBinError(6,1693490);
   GenJet_all_nGenC_stack_1->SetBinError(7,583185.1);
   GenJet_all_nGenC_stack_1->SetBinError(8,191506);
   GenJet_all_nGenC_stack_1->SetBinError(9,63132.02);
   GenJet_all_nGenC_stack_1->SetBinError(10,3345.374);
   GenJet_all_nGenC_stack_1->SetBinError(11,500.7261);
   GenJet_all_nGenC_stack_1->SetBinError(12,0.4762869);
   GenJet_all_nGenC_stack_1->SetEntries(3.028331e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenC_stack_1->SetFillColor(ci);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenC_stack_1,"");
   
   TH1D *GenJet_all_nGenC_stack_2 = new TH1D("GenJet_all_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_2->SetBinContent(1,1.403361e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(2,1.506193e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(3,5724890);
   GenJet_all_nGenC_stack_2->SetBinContent(4,1178902);
   GenJet_all_nGenC_stack_2->SetBinContent(5,227170.5);
   GenJet_all_nGenC_stack_2->SetBinContent(6,36992.82);
   GenJet_all_nGenC_stack_2->SetBinContent(7,5677.147);
   GenJet_all_nGenC_stack_2->SetBinContent(8,825.5103);
   GenJet_all_nGenC_stack_2->SetBinContent(9,112.6252);
   GenJet_all_nGenC_stack_2->SetBinContent(10,13.30433);
   GenJet_all_nGenC_stack_2->SetBinContent(11,1.764164);
   GenJet_all_nGenC_stack_2->SetBinContent(12,0.2265733);
   GenJet_all_nGenC_stack_2->SetBinError(1,904.4009);
   GenJet_all_nGenC_stack_2->SetBinError(2,1007.047);
   GenJet_all_nGenC_stack_2->SetBinError(3,656.3993);
   GenJet_all_nGenC_stack_2->SetBinError(4,297.7294);
   GenJet_all_nGenC_stack_2->SetBinError(5,131.7407);
   GenJet_all_nGenC_stack_2->SetBinError(6,53.22483);
   GenJet_all_nGenC_stack_2->SetBinError(7,20.8897);
   GenJet_all_nGenC_stack_2->SetBinError(8,7.965697);
   GenJet_all_nGenC_stack_2->SetBinError(9,2.952364);
   GenJet_all_nGenC_stack_2->SetBinError(10,1.012717);
   GenJet_all_nGenC_stack_2->SetBinError(11,0.3679253);
   GenJet_all_nGenC_stack_2->SetBinError(12,0.1320993);
   GenJet_all_nGenC_stack_2->SetEntries(6.292104e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenC_stack_2->SetFillColor(ci);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenC_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_all_nGenC_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   GenJet_all_nGenC_bckg_17->Modified();
   GenJet_all_nGenC_bckg_17->cd();
   GenJet_all_nGenC_bckg_17->SetSelected(GenJet_all_nGenC_bckg_17);
}
