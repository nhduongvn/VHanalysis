#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_tagFirst_18()
{
//=========Macro generated from canvas: nJet_tagFirst_18/nJet_tagFirst_18
//=========  (Thu Apr 11 14:04:10 2024) by ROOT version 6.28/10
   TCanvas *nJet_tagFirst_18 = new TCanvas("nJet_tagFirst_18", "nJet_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_tagFirst_18->SetHighLightColor(2);
   nJet_tagFirst_18->Range(-3.3,-1.413594e+11,15.36667,1.272235e+12);
   nJet_tagFirst_18->SetFillColor(0);
   nJet_tagFirst_18->SetFillStyle(4000);
   nJet_tagFirst_18->SetBorderMode(0);
   nJet_tagFirst_18->SetBorderSize(2);
   nJet_tagFirst_18->SetLeftMargin(0.15);
   nJet_tagFirst_18->SetFrameFillStyle(1000);
   nJet_tagFirst_18->SetFrameBorderMode(0);
   nJet_tagFirst_18->SetFrameFillStyle(1000);
   nJet_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__121 = new TH1D("Jets_cut_nJet__121","",14,-0.5,13.5);
   Jets_cut_nJet__121->SetBinContent(1,1.077024e+12);
   Jets_cut_nJet__121->SetBinContent(2,5.681712e+11);
   Jets_cut_nJet__121->SetBinContent(3,3.017127e+11);
   Jets_cut_nJet__121->SetBinContent(4,2.332929e+10);
   Jets_cut_nJet__121->SetBinContent(5,4.186406e+09);
   Jets_cut_nJet__121->SetBinContent(6,6.403624e+08);
   Jets_cut_nJet__121->SetBinContent(7,9.619973e+07);
   Jets_cut_nJet__121->SetBinContent(8,1.313924e+07);
   Jets_cut_nJet__121->SetBinContent(9,2042533);
   Jets_cut_nJet__121->SetBinContent(10,471190);
   Jets_cut_nJet__121->SetBinContent(11,44843.64);
   Jets_cut_nJet__121->SetBinContent(12,8208.847);
   Jets_cut_nJet__121->SetBinContent(13,823.4709);
   Jets_cut_nJet__121->SetBinError(1,1.643509e+09);
   Jets_cut_nJet__121->SetBinError(2,1.160556e+09);
   Jets_cut_nJet__121->SetBinError(3,7.870194e+08);
   Jets_cut_nJet__121->SetBinError(4,1.073487e+08);
   Jets_cut_nJet__121->SetBinError(5,2.945662e+07);
   Jets_cut_nJet__121->SetBinError(6,1.103771e+07);
   Jets_cut_nJet__121->SetBinError(7,2750687);
   Jets_cut_nJet__121->SetBinError(8,532706.5);
   Jets_cut_nJet__121->SetBinError(9,218315.5);
   Jets_cut_nJet__121->SetBinError(10,93165.95);
   Jets_cut_nJet__121->SetBinError(11,6871.475);
   Jets_cut_nJet__121->SetBinError(12,2835.445);
   Jets_cut_nJet__121->SetBinError(13,823.4709);
   Jets_cut_nJet__121->SetEntries(3876893);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__121->SetLineColor(ci);
   Jets_cut_nJet__121->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__121->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__121->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__121->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__121->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__121->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__121->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__121->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__121->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__121->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__121->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__121->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__121->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__121->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__121->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_tagFirst_18->Modified();
   nJet_tagFirst_18->cd();
   nJet_tagFirst_18->SetSelected(nJet_tagFirst_18);
}
