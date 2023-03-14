#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenC_bckg_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenC_bckg_17/GenJet_cuts_nGenC_bckg_17
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenC_bckg_17 = new TCanvas("GenJet_cuts_nGenC_bckg_17", "GenJet_cuts_nGenC_bckg_17",0,0,600,600);
   GenJet_cuts_nGenC_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenC_bckg_17->Range(-4.867058,-2.472374e+11,22.93266,1.813075e+12);
   GenJet_cuts_nGenC_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenC_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenC_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenC_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenC_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenC_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenC_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenC_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenC_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.607043e+12);
   
   TH1F *st_stack_94 = new TH1F("st_stack_94","",20,-0.5,19.5);
   st_stack_94->SetMinimum(0);
   st_stack_94->SetMaximum(1.607043e+12);
   st_stack_94->SetDirectory(0);
   st_stack_94->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_94->SetLineColor(ci);
   st_stack_94->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_94->GetXaxis()->SetLabelFont(42);
   st_stack_94->GetXaxis()->SetTitleOffset(1);
   st_stack_94->GetXaxis()->SetTitleFont(42);
   st_stack_94->GetYaxis()->SetTitle("Event/1.0");
   st_stack_94->GetYaxis()->SetLabelFont(42);
   st_stack_94->GetYaxis()->SetTitleSize(0.037);
   st_stack_94->GetYaxis()->SetTitleFont(42);
   st_stack_94->GetZaxis()->SetLabelFont(42);
   st_stack_94->GetZaxis()->SetTitleOffset(1);
   st_stack_94->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_94);
   
   
   TH1D *GenJet_cuts_nGenC_stack_1 = new TH1D("GenJet_cuts_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_1->SetBinContent(1,1.333822e+12);
   GenJet_cuts_nGenC_stack_1->SetBinContent(2,7.261929e+10);
   GenJet_cuts_nGenC_stack_1->SetBinContent(3,3.64093e+09);
   GenJet_cuts_nGenC_stack_1->SetBinContent(4,5.933878e+07);
   GenJet_cuts_nGenC_stack_1->SetBinContent(5,2009870);
   GenJet_cuts_nGenC_stack_1->SetBinContent(6,57906.56);
   GenJet_cuts_nGenC_stack_1->SetBinContent(7,1713.497);
   GenJet_cuts_nGenC_stack_1->SetBinContent(8,68.35732);
   GenJet_cuts_nGenC_stack_1->SetBinContent(9,0.4707361);
   GenJet_cuts_nGenC_stack_1->SetBinError(1,1.466785e+08);
   GenJet_cuts_nGenC_stack_1->SetBinError(2,3.253237e+07);
   GenJet_cuts_nGenC_stack_1->SetBinError(3,6492641);
   GenJet_cuts_nGenC_stack_1->SetBinError(4,380684);
   GenJet_cuts_nGenC_stack_1->SetBinError(5,37818.02);
   GenJet_cuts_nGenC_stack_1->SetBinError(6,4027.839);
   GenJet_cuts_nGenC_stack_1->SetBinError(7,445.971);
   GenJet_cuts_nGenC_stack_1->SetBinError(8,37.95636);
   GenJet_cuts_nGenC_stack_1->SetBinError(9,0.4707361);
   GenJet_cuts_nGenC_stack_1->SetEntries(3.028331e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenC_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_1,"");
   
   TH1D *GenJet_cuts_nGenC_stack_2 = new TH1D("GenJet_cuts_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_2->SetBinContent(1,2.372019e+07);
   GenJet_cuts_nGenC_stack_2->SetBinContent(2,1.08603e+07);
   GenJet_cuts_nGenC_stack_2->SetBinContent(3,1595275);
   GenJet_cuts_nGenC_stack_2->SetBinContent(4,88900.09);
   GenJet_cuts_nGenC_stack_2->SetBinContent(5,5184.758);
   GenJet_cuts_nGenC_stack_2->SetBinContent(6,262.9514);
   GenJet_cuts_nGenC_stack_2->SetBinContent(7,12.77812);
   GenJet_cuts_nGenC_stack_2->SetBinContent(8,0.6077826);
   GenJet_cuts_nGenC_stack_2->SetBinContent(9,0.05061506);
   GenJet_cuts_nGenC_stack_2->SetBinError(1,1213.306);
   GenJet_cuts_nGenC_stack_2->SetBinError(2,875.8205);
   GenJet_cuts_nGenC_stack_2->SetBinError(3,354.5637);
   GenJet_cuts_nGenC_stack_2->SetBinError(4,83.4774);
   GenJet_cuts_nGenC_stack_2->SetBinError(5,20.19531);
   GenJet_cuts_nGenC_stack_2->SetBinError(6,4.536991);
   GenJet_cuts_nGenC_stack_2->SetBinError(7,0.9855274);
   GenJet_cuts_nGenC_stack_2->SetBinError(8,0.2146351);
   GenJet_cuts_nGenC_stack_2->SetBinError(9,0.05061506);
   GenJet_cuts_nGenC_stack_2->SetEntries(6.292104e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenC_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenC_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenC_stack_1","QCD","F");

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
   GenJet_cuts_nGenC_bckg_17->Modified();
   GenJet_cuts_nGenC_bckg_17->cd();
   GenJet_cuts_nGenC_bckg_17->SetSelected(GenJet_cuts_nGenC_bckg_17);
}
