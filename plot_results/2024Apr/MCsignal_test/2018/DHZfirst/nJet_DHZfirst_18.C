#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_DHZfirst_18()
{
//=========Macro generated from canvas: nJet_DHZfirst_18/nJet_DHZfirst_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *nJet_DHZfirst_18 = new TCanvas("nJet_DHZfirst_18", "nJet_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_DHZfirst_18->SetHighLightColor(2);
   nJet_DHZfirst_18->Range(-3.3,-1.407579e+11,15.36667,1.266821e+12);
   nJet_DHZfirst_18->SetFillColor(0);
   nJet_DHZfirst_18->SetFillStyle(4000);
   nJet_DHZfirst_18->SetBorderMode(0);
   nJet_DHZfirst_18->SetBorderSize(2);
   nJet_DHZfirst_18->SetLeftMargin(0.15);
   nJet_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_DHZfirst_18->SetFrameBorderMode(0);
   nJet_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__125 = new TH1D("Jets_cut_nJet__125","",14,-0.5,13.5);
   Jets_cut_nJet__125->SetBinContent(1,1.072441e+12);
   Jets_cut_nJet__125->SetBinContent(2,5.420709e+11);
   Jets_cut_nJet__125->SetBinContent(3,2.488503e+11);
   Jets_cut_nJet__125->SetBinContent(4,4.639899e+09);
   Jets_cut_nJet__125->SetBinContent(5,2.164648e+08);
   Jets_cut_nJet__125->SetBinContent(6,1.282637e+07);
   Jets_cut_nJet__125->SetBinError(1,1.643382e+09);
   Jets_cut_nJet__125->SetBinError(2,1.159532e+09);
   Jets_cut_nJet__125->SetBinError(3,7.840061e+08);
   Jets_cut_nJet__125->SetBinError(4,9.915359e+07);
   Jets_cut_nJet__125->SetBinError(5,2.220169e+07);
   Jets_cut_nJet__125->SetBinError(6,8285251);
   Jets_cut_nJet__125->SetEntries(1009181);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__125->SetLineColor(ci);
   Jets_cut_nJet__125->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__125->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__125->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__125->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__125->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__125->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__125->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__125->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__125->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__125->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__125->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__125->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__125->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__125->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__125->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_DHZfirst_18->Modified();
   nJet_DHZfirst_18->cd();
   nJet_DHZfirst_18->SetSelected(nJet_DHZfirst_18);
}
