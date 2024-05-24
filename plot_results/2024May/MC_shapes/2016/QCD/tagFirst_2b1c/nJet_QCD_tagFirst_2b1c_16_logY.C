#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_QCD_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: nJet_QCD_tagFirst_2b1c_16/nJet_QCD_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:00 2024) by ROOT version 6.28/10
   TCanvas *nJet_QCD_tagFirst_2b1c_16 = new TCanvas("nJet_QCD_tagFirst_2b1c_16", "nJet_QCD_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_QCD_tagFirst_2b1c_16->SetHighLightColor(2);
   nJet_QCD_tagFirst_2b1c_16->Range(-3.3,-0.108549,15.36667,13.99415);
   nJet_QCD_tagFirst_2b1c_16->SetFillColor(0);
   nJet_QCD_tagFirst_2b1c_16->SetFillStyle(4000);
   nJet_QCD_tagFirst_2b1c_16->SetBorderMode(0);
   nJet_QCD_tagFirst_2b1c_16->SetBorderSize(2);
   nJet_QCD_tagFirst_2b1c_16->SetLogy();
   nJet_QCD_tagFirst_2b1c_16->SetLeftMargin(0.15);
   nJet_QCD_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_QCD_tagFirst_2b1c_16->SetFrameBorderMode(0);
   nJet_QCD_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_QCD_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__6667 = new TH1D("Jets_cut_nJet__6667","",14,-0.5,13.5);
   Jets_cut_nJet__6667->SetBinContent(1,2.024564e+12);
   Jets_cut_nJet__6667->SetBinContent(2,1.230209e+12);
   Jets_cut_nJet__6667->SetBinContent(3,6.094466e+11);
   Jets_cut_nJet__6667->SetBinContent(4,1.469034e+10);
   Jets_cut_nJet__6667->SetBinContent(5,1.45925e+09);
   Jets_cut_nJet__6667->SetBinContent(6,1.958222e+08);
   Jets_cut_nJet__6667->SetBinContent(7,2.898235e+07);
   Jets_cut_nJet__6667->SetBinContent(8,4386247);
   Jets_cut_nJet__6667->SetBinContent(9,664405);
   Jets_cut_nJet__6667->SetBinContent(10,103691);
   Jets_cut_nJet__6667->SetBinContent(11,15797.9);
   Jets_cut_nJet__6667->SetBinContent(12,2270.055);
   Jets_cut_nJet__6667->SetBinContent(13,331.2308);
   Jets_cut_nJet__6667->SetBinContent(14,40.06369);
   Jets_cut_nJet__6667->SetBinContent(15,10.11402);
   Jets_cut_nJet__6667->SetBinError(1,4.616854e+08);
   Jets_cut_nJet__6667->SetBinError(2,3.671677e+08);
   Jets_cut_nJet__6667->SetBinError(3,2.540666e+08);
   Jets_cut_nJet__6667->SetBinError(4,2.344418e+07);
   Jets_cut_nJet__6667->SetBinError(5,1484665);
   Jets_cut_nJet__6667->SetBinError(6,333985.7);
   Jets_cut_nJet__6667->SetBinError(7,111834.6);
   Jets_cut_nJet__6667->SetBinError(8,38484.84);
   Jets_cut_nJet__6667->SetBinError(9,5088.976);
   Jets_cut_nJet__6667->SetBinError(10,1299.594);
   Jets_cut_nJet__6667->SetBinError(11,352.0476);
   Jets_cut_nJet__6667->SetBinError(12,90.11466);
   Jets_cut_nJet__6667->SetBinError(13,28.80657);
   Jets_cut_nJet__6667->SetBinError(14,8.206689);
   Jets_cut_nJet__6667->SetBinError(15,5.157207);
   Jets_cut_nJet__6667->SetEntries(2.468814e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__6667->SetLineColor(ci);
   Jets_cut_nJet__6667->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__6667->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__6667->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__6667->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6667->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__6667->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__6667->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__6667->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__6667->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__6667->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__6667->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__6667->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__6667->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6667->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__6667->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_QCD_tagFirst_2b1c_16->Modified();
   nJet_QCD_tagFirst_2b1c_16->cd();
   nJet_QCD_tagFirst_2b1c_16->SetSelected(nJet_QCD_tagFirst_2b1c_16);
}
