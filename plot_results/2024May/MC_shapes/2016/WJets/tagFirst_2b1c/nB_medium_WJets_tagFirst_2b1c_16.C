#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WJets_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: nB_medium_WJets_tagFirst_2b1c_16/nB_medium_WJets_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:02 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WJets_tagFirst_2b1c_16 = new TCanvas("nB_medium_WJets_tagFirst_2b1c_16", "nB_medium_WJets_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WJets_tagFirst_2b1c_16->SetHighLightColor(2);
   nB_medium_WJets_tagFirst_2b1c_16->Range(-2.5,-3.17347e+07,10.83333,2.856123e+08);
   nB_medium_WJets_tagFirst_2b1c_16->SetFillColor(0);
   nB_medium_WJets_tagFirst_2b1c_16->SetFillStyle(4000);
   nB_medium_WJets_tagFirst_2b1c_16->SetBorderMode(0);
   nB_medium_WJets_tagFirst_2b1c_16->SetBorderSize(2);
   nB_medium_WJets_tagFirst_2b1c_16->SetLeftMargin(0.15);
   nB_medium_WJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_WJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   nB_medium_WJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_WJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6790 = new TH1D("Jets_cut_nB_medium__6790","",10,-0.5,9.5);
   Jets_cut_nB_medium__6790->SetBinContent(1,2.417882e+08);
   Jets_cut_nB_medium__6790->SetBinContent(2,1.143774e+07);
   Jets_cut_nB_medium__6790->SetBinContent(3,359395.9);
   Jets_cut_nB_medium__6790->SetBinContent(4,8943.375);
   Jets_cut_nB_medium__6790->SetBinContent(5,243.9339);
   Jets_cut_nB_medium__6790->SetBinContent(6,7.116335);
   Jets_cut_nB_medium__6790->SetBinContent(7,0.3774229);
   Jets_cut_nB_medium__6790->SetBinError(1,46756.97);
   Jets_cut_nB_medium__6790->SetBinError(2,9946.276);
   Jets_cut_nB_medium__6790->SetBinError(3,1416.399);
   Jets_cut_nB_medium__6790->SetBinError(4,127.9011);
   Jets_cut_nB_medium__6790->SetBinError(5,11.23481);
   Jets_cut_nB_medium__6790->SetBinError(6,1.154294);
   Jets_cut_nB_medium__6790->SetBinError(7,0.2031059);
   Jets_cut_nB_medium__6790->SetEntries(1.506675e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6790->SetLineColor(ci);
   Jets_cut_nB_medium__6790->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6790->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6790->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6790->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6790->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6790->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6790->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6790->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6790->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6790->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6790->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6790->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6790->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6790->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6790->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WJets_tagFirst_2b1c_16->Modified();
   nB_medium_WJets_tagFirst_2b1c_16->cd();
   nB_medium_WJets_tagFirst_2b1c_16->SetSelected(nB_medium_WJets_tagFirst_2b1c_16);
}
