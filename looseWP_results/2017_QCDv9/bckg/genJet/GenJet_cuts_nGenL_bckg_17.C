#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenL_bckg_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenL_bckg_17/GenJet_cuts_nGenL_bckg_17
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenL_bckg_17 = new TCanvas("GenJet_cuts_nGenL_bckg_17", "GenJet_cuts_nGenL_bckg_17",0,0,600,600);
   GenJet_cuts_nGenL_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenL_bckg_17->Range(-4.867058,-2.192137e+11,22.93266,1.607567e+12);
   GenJet_cuts_nGenL_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenL_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenL_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenL_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenL_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenL_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenL_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenL_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenL_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.424889e+12);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",20,-0.5,19.5);
   st_stack_82->SetMinimum(0);
   st_stack_82->SetMaximum(1.424889e+12);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetTitleOffset(1);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Event/1.0");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *GenJet_cuts_nGenL_stack_1 = new TH1D("GenJet_cuts_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(1,1.182649e+12);
   GenJet_cuts_nGenL_stack_1->SetBinContent(2,2.082063e+11);
   GenJet_cuts_nGenL_stack_1->SetBinContent(3,1.886704e+10);
   GenJet_cuts_nGenL_stack_1->SetBinContent(4,4.065898e+08);
   GenJet_cuts_nGenL_stack_1->SetBinContent(5,1.464466e+07);
   GenJet_cuts_nGenL_stack_1->SetBinContent(6,479344.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(7,19292.79);
   GenJet_cuts_nGenL_stack_1->SetBinContent(8,997.6517);
   GenJet_cuts_nGenL_stack_1->SetBinContent(9,51.04393);
   GenJet_cuts_nGenL_stack_1->SetBinContent(11,0.1978914);
   GenJet_cuts_nGenL_stack_1->SetBinError(1,1.387075e+08);
   GenJet_cuts_nGenL_stack_1->SetBinError(2,5.593004e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(3,1.568215e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(4,1162480);
   GenJet_cuts_nGenL_stack_1->SetBinError(5,126501.7);
   GenJet_cuts_nGenL_stack_1->SetBinError(6,10637);
   GenJet_cuts_nGenL_stack_1->SetBinError(7,1453.389);
   GenJet_cuts_nGenL_stack_1->SetBinError(8,327.0018);
   GenJet_cuts_nGenL_stack_1->SetBinError(9,22.64471);
   GenJet_cuts_nGenL_stack_1->SetBinError(11,0.1978914);
   GenJet_cuts_nGenL_stack_1->SetEntries(3.028331e+08);

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
   GenJet_cuts_nGenL_stack_2->SetBinContent(1,9241499);
   GenJet_cuts_nGenL_stack_2->SetBinContent(2,1.529416e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(3,8938416);
   GenJet_cuts_nGenL_stack_2->SetBinContent(4,2385075);
   GenJet_cuts_nGenL_stack_2->SetBinContent(5,369516.3);
   GenJet_cuts_nGenL_stack_2->SetBinContent(6,37843.41);
   GenJet_cuts_nGenL_stack_2->SetBinContent(7,3331.656);
   GenJet_cuts_nGenL_stack_2->SetBinContent(8,257.0559);
   GenJet_cuts_nGenL_stack_2->SetBinContent(9,18.28161);
   GenJet_cuts_nGenL_stack_2->SetBinContent(10,1.265597);
   GenJet_cuts_nGenL_stack_2->SetBinContent(11,0.1591828);
   GenJet_cuts_nGenL_stack_2->SetBinContent(12,0.0387494);
   GenJet_cuts_nGenL_stack_2->SetBinError(1,751.1481);
   GenJet_cuts_nGenL_stack_2->SetBinError(2,994.7106);
   GenJet_cuts_nGenL_stack_2->SetBinError(3,783.6664);
   GenJet_cuts_nGenL_stack_2->SetBinError(4,416.4424);
   GenJet_cuts_nGenL_stack_2->SetBinError(5,167.0896);
   GenJet_cuts_nGenL_stack_2->SetBinError(6,53.50928);
   GenJet_cuts_nGenL_stack_2->SetBinError(7,15.91904);
   GenJet_cuts_nGenL_stack_2->SetBinError(8,4.440604);
   GenJet_cuts_nGenL_stack_2->SetBinError(9,1.190624);
   GenJet_cuts_nGenL_stack_2->SetBinError(10,0.3134103);
   GenJet_cuts_nGenL_stack_2->SetBinError(11,0.112586);
   GenJet_cuts_nGenL_stack_2->SetBinError(12,0.0387494);
   GenJet_cuts_nGenL_stack_2->SetEntries(6.292104e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenL_bckg_17->Modified();
   GenJet_cuts_nGenL_bckg_17->cd();
   GenJet_cuts_nGenL_bckg_17->SetSelected(GenJet_cuts_nGenL_bckg_17);
}
