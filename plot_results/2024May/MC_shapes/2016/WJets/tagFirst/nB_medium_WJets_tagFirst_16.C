#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WJets_tagFirst_16()
{
//=========Macro generated from canvas: nB_medium_WJets_tagFirst_16/nB_medium_WJets_tagFirst_16
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WJets_tagFirst_16 = new TCanvas("nB_medium_WJets_tagFirst_16", "nB_medium_WJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WJets_tagFirst_16->SetHighLightColor(2);
   nB_medium_WJets_tagFirst_16->Range(-2.5,-3.17347e+07,10.83333,2.856123e+08);
   nB_medium_WJets_tagFirst_16->SetFillColor(0);
   nB_medium_WJets_tagFirst_16->SetFillStyle(4000);
   nB_medium_WJets_tagFirst_16->SetBorderMode(0);
   nB_medium_WJets_tagFirst_16->SetBorderSize(2);
   nB_medium_WJets_tagFirst_16->SetLeftMargin(0.15);
   nB_medium_WJets_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_WJets_tagFirst_16->SetFrameBorderMode(0);
   nB_medium_WJets_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_WJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4450 = new TH1D("Jets_cut_nB_medium__4450","",10,-0.5,9.5);
   Jets_cut_nB_medium__4450->SetBinContent(1,2.417882e+08);
   Jets_cut_nB_medium__4450->SetBinContent(2,1.143774e+07);
   Jets_cut_nB_medium__4450->SetBinContent(3,359395.9);
   Jets_cut_nB_medium__4450->SetBinContent(4,8943.375);
   Jets_cut_nB_medium__4450->SetBinContent(5,243.9339);
   Jets_cut_nB_medium__4450->SetBinContent(6,7.116335);
   Jets_cut_nB_medium__4450->SetBinContent(7,0.3774229);
   Jets_cut_nB_medium__4450->SetBinError(1,46756.97);
   Jets_cut_nB_medium__4450->SetBinError(2,9946.276);
   Jets_cut_nB_medium__4450->SetBinError(3,1416.399);
   Jets_cut_nB_medium__4450->SetBinError(4,127.9011);
   Jets_cut_nB_medium__4450->SetBinError(5,11.23481);
   Jets_cut_nB_medium__4450->SetBinError(6,1.154294);
   Jets_cut_nB_medium__4450->SetBinError(7,0.2031059);
   Jets_cut_nB_medium__4450->SetEntries(1.506675e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4450->SetLineColor(ci);
   Jets_cut_nB_medium__4450->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4450->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4450->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4450->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4450->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4450->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4450->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4450->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4450->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4450->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4450->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4450->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4450->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4450->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4450->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WJets_tagFirst_16->Modified();
   nB_medium_WJets_tagFirst_16->cd();
   nB_medium_WJets_tagFirst_16->SetSelected(nB_medium_WJets_tagFirst_16);
}
