#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WZ_DHZfirst_18()
{
//=========Macro generated from canvas: nJet_WZ_DHZfirst_18/nJet_WZ_DHZfirst_18
//=========  (Fri May 24 12:33:56 2024) by ROOT version 6.28/10
   TCanvas *nJet_WZ_DHZfirst_18 = new TCanvas("nJet_WZ_DHZfirst_18", "nJet_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WZ_DHZfirst_18->SetHighLightColor(2);
   nJet_WZ_DHZfirst_18->Range(-3.3,-167200.1,15.36667,1504801);
   nJet_WZ_DHZfirst_18->SetFillColor(0);
   nJet_WZ_DHZfirst_18->SetFillStyle(4000);
   nJet_WZ_DHZfirst_18->SetBorderMode(0);
   nJet_WZ_DHZfirst_18->SetBorderSize(2);
   nJet_WZ_DHZfirst_18->SetLeftMargin(0.15);
   nJet_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_WZ_DHZfirst_18->SetFrameBorderMode(0);
   nJet_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5907 = new TH1D("Jets_cut_nJet__5907","",14,-0.5,13.5);
   Jets_cut_nJet__5907->SetBinContent(1,1273905);
   Jets_cut_nJet__5907->SetBinContent(2,861953.6);
   Jets_cut_nJet__5907->SetBinContent(3,479934.7);
   Jets_cut_nJet__5907->SetBinContent(4,203632.5);
   Jets_cut_nJet__5907->SetBinContent(5,78761.18);
   Jets_cut_nJet__5907->SetBinContent(6,19531.52);
   Jets_cut_nJet__5907->SetBinContent(7,3799.57);
   Jets_cut_nJet__5907->SetBinContent(8,612.9142);
   Jets_cut_nJet__5907->SetBinContent(9,105.5041);
   Jets_cut_nJet__5907->SetBinContent(10,13.27915);
   Jets_cut_nJet__5907->SetBinContent(11,0.3789109);
   Jets_cut_nJet__5907->SetBinError(1,807.6781);
   Jets_cut_nJet__5907->SetBinError(2,660.4373);
   Jets_cut_nJet__5907->SetBinError(3,486.7765);
   Jets_cut_nJet__5907->SetBinError(4,335.1786);
   Jets_cut_nJet__5907->SetBinError(5,232.5897);
   Jets_cut_nJet__5907->SetBinError(6,129.6555);
   Jets_cut_nJet__5907->SetBinError(7,56.03262);
   Jets_cut_nJet__5907->SetBinError(8,22.51444);
   Jets_cut_nJet__5907->SetBinError(9,10.61769);
   Jets_cut_nJet__5907->SetBinError(10,3.479356);
   Jets_cut_nJet__5907->SetBinError(11,0.3789109);
   Jets_cut_nJet__5907->SetEntries(7940000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5907->SetLineColor(ci);
   Jets_cut_nJet__5907->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5907->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5907->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5907->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5907->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5907->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5907->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5907->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5907->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5907->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5907->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5907->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5907->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5907->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5907->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WZ_DHZfirst_18->Modified();
   nJet_WZ_DHZfirst_18->cd();
   nJet_WZ_DHZfirst_18->SetSelected(nJet_WZ_DHZfirst_18);
}
