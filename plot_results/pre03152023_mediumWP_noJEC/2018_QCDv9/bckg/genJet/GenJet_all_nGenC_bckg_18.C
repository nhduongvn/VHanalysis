#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenC_bckg_18()
{
//=========Macro generated from canvas: GenJet_all_nGenC_bckg_18/GenJet_all_nGenC_bckg_18
//=========  (Thu Mar  9 15:52:36 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenC_bckg_18 = new TCanvas("GenJet_all_nGenC_bckg_18", "GenJet_all_nGenC_bckg_18",0,0,600,600);
   GenJet_all_nGenC_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenC_bckg_18->Range(-4.867058,-2.987007e+11,22.93266,2.190472e+12);
   GenJet_all_nGenC_bckg_18->SetFillColor(0);
   GenJet_all_nGenC_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenC_bckg_18->SetBorderMode(0);
   GenJet_all_nGenC_bckg_18->SetBorderSize(2);
   GenJet_all_nGenC_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenC_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenC_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenC_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenC_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.941555e+12);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",20,-0.5,19.5);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(1.941555e+12);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Event/1.0");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *GenJet_all_nGenC_stack_1 = new TH1D("GenJet_all_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_1->SetBinContent(1,1.61147e+12);
   GenJet_all_nGenC_stack_1->SetBinContent(2,3.120908e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(3,1.039804e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(4,1.491913e+10);
   GenJet_all_nGenC_stack_1->SetBinContent(5,2.365038e+09);
   GenJet_all_nGenC_stack_1->SetBinContent(6,2.858765e+08);
   GenJet_all_nGenC_stack_1->SetBinContent(7,3.298216e+07);
   GenJet_all_nGenC_stack_1->SetBinContent(8,3951911);
   GenJet_all_nGenC_stack_1->SetBinContent(9,532825.8);
   GenJet_all_nGenC_stack_1->SetBinContent(10,22580.92);
   GenJet_all_nGenC_stack_1->SetBinContent(11,548.4199);
   GenJet_all_nGenC_stack_1->SetBinContent(12,0.6848008);
   GenJet_all_nGenC_stack_1->SetBinError(1,2.134884e+08);
   GenJet_all_nGenC_stack_1->SetBinError(2,9.343306e+07);
   GenJet_all_nGenC_stack_1->SetBinError(3,5.346408e+07);
   GenJet_all_nGenC_stack_1->SetBinError(4,2.012635e+07);
   GenJet_all_nGenC_stack_1->SetBinError(5,7976798);
   GenJet_all_nGenC_stack_1->SetBinError(6,2773924);
   GenJet_all_nGenC_stack_1->SetBinError(7,829515.6);
   GenJet_all_nGenC_stack_1->SetBinError(8,278314.9);
   GenJet_all_nGenC_stack_1->SetBinError(9,105562.1);
   GenJet_all_nGenC_stack_1->SetBinError(10,6863.049);
   GenJet_all_nGenC_stack_1->SetBinError(11,430.6591);
   GenJet_all_nGenC_stack_1->SetBinError(12,0.6848008);
   GenJet_all_nGenC_stack_1->SetEntries(3.050092e+08);

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
   GenJet_all_nGenC_stack_2->SetBinContent(1,2.079769e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(2,2.229689e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(3,8472374);
   GenJet_all_nGenC_stack_2->SetBinContent(4,1748531);
   GenJet_all_nGenC_stack_2->SetBinContent(5,338062.1);
   GenJet_all_nGenC_stack_2->SetBinContent(6,55091.91);
   GenJet_all_nGenC_stack_2->SetBinContent(7,8498.448);
   GenJet_all_nGenC_stack_2->SetBinContent(8,1240.029);
   GenJet_all_nGenC_stack_2->SetBinContent(9,168.0555);
   GenJet_all_nGenC_stack_2->SetBinContent(10,20.84212);
   GenJet_all_nGenC_stack_2->SetBinContent(11,3.011438);
   GenJet_all_nGenC_stack_2->SetBinContent(12,0.4538889);
   GenJet_all_nGenC_stack_2->SetBinError(1,1211.178);
   GenJet_all_nGenC_stack_2->SetBinError(2,1335.976);
   GenJet_all_nGenC_stack_2->SetBinError(3,865.4322);
   GenJet_all_nGenC_stack_2->SetBinError(4,392.8386);
   GenJet_all_nGenC_stack_2->SetBinError(5,174.1159);
   GenJet_all_nGenC_stack_2->SetBinError(6,70.40719);
   GenJet_all_nGenC_stack_2->SetBinError(7,27.64086);
   GenJet_all_nGenC_stack_2->SetBinError(8,10.29606);
   GenJet_all_nGenC_stack_2->SetBinError(9,3.858478);
   GenJet_all_nGenC_stack_2->SetBinError(10,1.291464);
   GenJet_all_nGenC_stack_2->SetBinError(11,0.4936581);
   GenJet_all_nGenC_stack_2->SetBinError(12,0.2040117);
   GenJet_all_nGenC_stack_2->SetEntries(8.848938e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenC_bckg_18->Modified();
   GenJet_all_nGenC_bckg_18->cd();
   GenJet_all_nGenC_bckg_18->SetSelected(GenJet_all_nGenC_bckg_18);
}
