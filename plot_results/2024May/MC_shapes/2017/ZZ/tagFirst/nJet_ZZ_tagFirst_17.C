#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZZ_tagFirst_17()
{
//=========Macro generated from canvas: nJet_ZZ_tagFirst_17/nJet_ZZ_tagFirst_17
//=========  (Fri May 24 12:33:24 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZZ_tagFirst_17 = new TCanvas("nJet_ZZ_tagFirst_17", "nJet_ZZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZZ_tagFirst_17->SetHighLightColor(2);
   nJet_ZZ_tagFirst_17->Range(-3.3,-34579.72,15.36667,311217.5);
   nJet_ZZ_tagFirst_17->SetFillColor(0);
   nJet_ZZ_tagFirst_17->SetFillStyle(4000);
   nJet_ZZ_tagFirst_17->SetBorderMode(0);
   nJet_ZZ_tagFirst_17->SetBorderSize(2);
   nJet_ZZ_tagFirst_17->SetLeftMargin(0.15);
   nJet_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   nJet_ZZ_tagFirst_17->SetFrameBorderMode(0);
   nJet_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   nJet_ZZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__4349 = new TH1D("Jets_cut_nJet__4349","",14,-0.5,13.5);
   Jets_cut_nJet__4349->SetBinContent(1,263464.5);
   Jets_cut_nJet__4349->SetBinContent(2,188316.1);
   Jets_cut_nJet__4349->SetBinContent(3,114639.3);
   Jets_cut_nJet__4349->SetBinContent(4,39024.42);
   Jets_cut_nJet__4349->SetBinContent(5,12064.01);
   Jets_cut_nJet__4349->SetBinContent(6,2770.711);
   Jets_cut_nJet__4349->SetBinContent(7,514.2299);
   Jets_cut_nJet__4349->SetBinContent(8,93.0117);
   Jets_cut_nJet__4349->SetBinContent(9,16.09086);
   Jets_cut_nJet__4349->SetBinContent(10,1.095613);
   Jets_cut_nJet__4349->SetBinContent(11,0.2010149);
   Jets_cut_nJet__4349->SetBinError(1,263.6134);
   Jets_cut_nJet__4349->SetBinError(2,221.7621);
   Jets_cut_nJet__4349->SetBinError(3,169.356);
   Jets_cut_nJet__4349->SetBinError(4,94.83036);
   Jets_cut_nJet__4349->SetBinError(5,54.60518);
   Jets_cut_nJet__4349->SetBinError(6,28.09066);
   Jets_cut_nJet__4349->SetBinError(7,12.57341);
   Jets_cut_nJet__4349->SetBinError(8,5.67812);
   Jets_cut_nJet__4349->SetBinError(9,2.460684);
   Jets_cut_nJet__4349->SetBinError(10,0.6679953);
   Jets_cut_nJet__4349->SetBinError(11,0.2010149);
   Jets_cut_nJet__4349->SetEntries(2706000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__4349->SetLineColor(ci);
   Jets_cut_nJet__4349->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__4349->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__4349->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__4349->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4349->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__4349->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__4349->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__4349->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__4349->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__4349->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__4349->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__4349->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__4349->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4349->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__4349->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZZ_tagFirst_17->Modified();
   nJet_ZZ_tagFirst_17->cd();
   nJet_ZZ_tagFirst_17->SetSelected(nJet_ZZ_tagFirst_17);
}
