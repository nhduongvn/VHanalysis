#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_TT_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: nJet_TT_DHZfirst_2b1c_16/nJet_TT_DHZfirst_2b1c_16
//=========  (Fri May 24 12:44:34 2024) by ROOT version 6.28/10
   TCanvas *nJet_TT_DHZfirst_2b1c_16 = new TCanvas("nJet_TT_DHZfirst_2b1c_16", "nJet_TT_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_TT_DHZfirst_2b1c_16->SetHighLightColor(2);
   nJet_TT_DHZfirst_2b1c_16->Range(-3.3,0.3115471,15.36667,7.835224);
   nJet_TT_DHZfirst_2b1c_16->SetFillColor(0);
   nJet_TT_DHZfirst_2b1c_16->SetFillStyle(4000);
   nJet_TT_DHZfirst_2b1c_16->SetBorderMode(0);
   nJet_TT_DHZfirst_2b1c_16->SetBorderSize(2);
   nJet_TT_DHZfirst_2b1c_16->SetLogy();
   nJet_TT_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   nJet_TT_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_TT_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   nJet_TT_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_TT_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__8236 = new TH1D("Jets_cut_nJet__8236","",14,-0.5,13.5);
   Jets_cut_nJet__8236->SetBinContent(1,2307954);
   Jets_cut_nJet__8236->SetBinContent(2,4893510);
   Jets_cut_nJet__8236->SetBinContent(3,6387160);
   Jets_cut_nJet__8236->SetBinContent(4,6142259);
   Jets_cut_nJet__8236->SetBinContent(5,4361556);
   Jets_cut_nJet__8236->SetBinContent(6,2145182);
   Jets_cut_nJet__8236->SetBinContent(7,797333.4);
   Jets_cut_nJet__8236->SetBinContent(8,239096);
   Jets_cut_nJet__8236->SetBinContent(9,62377.58);
   Jets_cut_nJet__8236->SetBinContent(10,14678.74);
   Jets_cut_nJet__8236->SetBinContent(11,3189.011);
   Jets_cut_nJet__8236->SetBinContent(12,640.8559);
   Jets_cut_nJet__8236->SetBinContent(13,127.9767);
   Jets_cut_nJet__8236->SetBinContent(14,23.17101);
   Jets_cut_nJet__8236->SetBinContent(15,3.019393);
   Jets_cut_nJet__8236->SetBinError(1,709.5711);
   Jets_cut_nJet__8236->SetBinError(2,909.7125);
   Jets_cut_nJet__8236->SetBinError(3,771.4974);
   Jets_cut_nJet__8236->SetBinError(4,568.4473);
   Jets_cut_nJet__8236->SetBinError(5,491.9536);
   Jets_cut_nJet__8236->SetBinError(6,363.8669);
   Jets_cut_nJet__8236->SetBinError(7,230.3953);
   Jets_cut_nJet__8236->SetBinError(8,129.4512);
   Jets_cut_nJet__8236->SetBinError(9,67.51224);
   Jets_cut_nJet__8236->SetBinError(10,33.39259);
   Jets_cut_nJet__8236->SetBinError(11,15.84896);
   Jets_cut_nJet__8236->SetBinError(12,7.233223);
   Jets_cut_nJet__8236->SetBinError(13,3.317183);
   Jets_cut_nJet__8236->SetBinError(14,1.476267);
   Jets_cut_nJet__8236->SetBinError(15,0.5440421);
   Jets_cut_nJet__8236->SetEntries(5.10768e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__8236->SetLineColor(ci);
   Jets_cut_nJet__8236->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__8236->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__8236->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__8236->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__8236->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__8236->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__8236->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__8236->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__8236->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__8236->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__8236->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__8236->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__8236->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__8236->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__8236->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_TT_DHZfirst_2b1c_16->Modified();
   nJet_TT_DHZfirst_2b1c_16->cd();
   nJet_TT_DHZfirst_2b1c_16->SetSelected(nJet_TT_DHZfirst_2b1c_16);
}
