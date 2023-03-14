#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenL_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenL_bckg_16/GenJet_cuts_nGenL_bckg_16
//=========  (Fri Mar 10 12:49:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenL_bckg_16 = new TCanvas("GenJet_cuts_nGenL_bckg_16", "GenJet_cuts_nGenL_bckg_16",0,0,600,600);
   GenJet_cuts_nGenL_bckg_16->SetHighLightColor(2);
   GenJet_cuts_nGenL_bckg_16->Range(-4.867058,-2.915729,22.93266,14.32261);
   GenJet_cuts_nGenL_bckg_16->SetFillColor(0);
   GenJet_cuts_nGenL_bckg_16->SetFillStyle(4000);
   GenJet_cuts_nGenL_bckg_16->SetBorderMode(0);
   GenJet_cuts_nGenL_bckg_16->SetBorderSize(2);
   GenJet_cuts_nGenL_bckg_16->SetLogy();
   GenJet_cuts_nGenL_bckg_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenL_bckg_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenL_bckg_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenL_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenL_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.16311e+12);
   
   TH1F *st_stack_80 = new TH1F("st_stack_80","",20,-0.5,19.5);
   st_stack_80->SetMinimum(0.1421907);
   st_stack_80->SetMaximum(3.96984e+12);
   st_stack_80->SetDirectory(0);
   st_stack_80->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_80->SetLineColor(ci);
   st_stack_80->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_80->GetXaxis()->SetLabelFont(42);
   st_stack_80->GetXaxis()->SetTitleOffset(1);
   st_stack_80->GetXaxis()->SetTitleFont(42);
   st_stack_80->GetYaxis()->SetTitle("Event/1.0");
   st_stack_80->GetYaxis()->SetLabelFont(42);
   st_stack_80->GetYaxis()->SetTitleSize(0.037);
   st_stack_80->GetYaxis()->SetTitleFont(42);
   st_stack_80->GetZaxis()->SetLabelFont(42);
   st_stack_80->GetZaxis()->SetTitleOffset(1);
   st_stack_80->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_80);
   
   
   TH1D *GenJet_cuts_nGenL_stack_1 = new TH1D("GenJet_cuts_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(1,9.653739e+11);
   GenJet_cuts_nGenL_stack_1->SetBinContent(2,1.711908e+11);
   GenJet_cuts_nGenL_stack_1->SetBinContent(3,1.565424e+10);
   GenJet_cuts_nGenL_stack_1->SetBinContent(4,3.482857e+08);
   GenJet_cuts_nGenL_stack_1->SetBinContent(5,1.260124e+07);
   GenJet_cuts_nGenL_stack_1->SetBinContent(6,422762.7);
   GenJet_cuts_nGenL_stack_1->SetBinContent(7,15571.08);
   GenJet_cuts_nGenL_stack_1->SetBinContent(8,576.0536);
   GenJet_cuts_nGenL_stack_1->SetBinContent(9,52.33527);
   GenJet_cuts_nGenL_stack_1->SetBinContent(11,0.213208);
   GenJet_cuts_nGenL_stack_1->SetBinError(1,1.429731e+08);
   GenJet_cuts_nGenL_stack_1->SetBinError(2,5.779456e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(3,1.623625e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(4,1192884);
   GenJet_cuts_nGenL_stack_1->SetBinError(5,128054.6);
   GenJet_cuts_nGenL_stack_1->SetBinError(6,10283.91);
   GenJet_cuts_nGenL_stack_1->SetBinError(7,1251.054);
   GenJet_cuts_nGenL_stack_1->SetBinError(8,81.35804);
   GenJet_cuts_nGenL_stack_1->SetBinError(9,26.50152);
   GenJet_cuts_nGenL_stack_1->SetBinError(11,0.213208);
   GenJet_cuts_nGenL_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenL_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_1,"");
   
   TH1D *GenJet_cuts_nGenL_stack_2 = new TH1D("GenJet_cuts_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_2->SetBinContent(1,7627462);
   GenJet_cuts_nGenL_stack_2->SetBinContent(2,1.25878e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(3,7349332);
   GenJet_cuts_nGenL_stack_2->SetBinContent(4,1963069);
   GenJet_cuts_nGenL_stack_2->SetBinContent(5,305166.5);
   GenJet_cuts_nGenL_stack_2->SetBinContent(6,31270.59);
   GenJet_cuts_nGenL_stack_2->SetBinContent(7,2759.444);
   GenJet_cuts_nGenL_stack_2->SetBinContent(8,209.6725);
   GenJet_cuts_nGenL_stack_2->SetBinContent(9,15.32837);
   GenJet_cuts_nGenL_stack_2->SetBinContent(10,0.8710337);
   GenJet_cuts_nGenL_stack_2->SetBinError(1,668.8119);
   GenJet_cuts_nGenL_stack_2->SetBinError(2,879.1043);
   GenJet_cuts_nGenL_stack_2->SetBinError(3,688.1932);
   GenJet_cuts_nGenL_stack_2->SetBinError(4,364.0569);
   GenJet_cuts_nGenL_stack_2->SetBinError(5,145.8389);
   GenJet_cuts_nGenL_stack_2->SetBinError(6,46.73691);
   GenJet_cuts_nGenL_stack_2->SetBinError(7,13.92559);
   GenJet_cuts_nGenL_stack_2->SetBinError(8,3.841773);
   GenJet_cuts_nGenL_stack_2->SetBinError(9,1.03417);
   GenJet_cuts_nGenL_stack_2->SetBinError(10,0.2453269);
   GenJet_cuts_nGenL_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenL_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenL_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenL_bckg_16->Modified();
   GenJet_cuts_nGenL_bckg_16->cd();
   GenJet_cuts_nGenL_bckg_16->SetSelected(GenJet_cuts_nGenL_bckg_16);
}
