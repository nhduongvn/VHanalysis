#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZHcc_tagFirst_16()
{
//=========Macro generated from canvas: nC_medium_ZHcc_tagFirst_16/nC_medium_ZHcc_tagFirst_16
//=========  (Fri May 24 12:43:15 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZHcc_tagFirst_16 = new TCanvas("nC_medium_ZHcc_tagFirst_16", "nC_medium_ZHcc_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZHcc_tagFirst_16->SetHighLightColor(2);
   nC_medium_ZHcc_tagFirst_16->Range(-2.5,-69.74711,10.83333,627.724);
   nC_medium_ZHcc_tagFirst_16->SetFillColor(0);
   nC_medium_ZHcc_tagFirst_16->SetFillStyle(4000);
   nC_medium_ZHcc_tagFirst_16->SetBorderMode(0);
   nC_medium_ZHcc_tagFirst_16->SetBorderSize(2);
   nC_medium_ZHcc_tagFirst_16->SetLeftMargin(0.15);
   nC_medium_ZHcc_tagFirst_16->SetFrameFillStyle(1000);
   nC_medium_ZHcc_tagFirst_16->SetFrameBorderMode(0);
   nC_medium_ZHcc_tagFirst_16->SetFrameFillStyle(1000);
   nC_medium_ZHcc_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__4471 = new TH1D("Jets_cut_nC_medium__4471","",10,-0.5,9.5);
   Jets_cut_nC_medium__4471->SetBinContent(1,531.4065);
   Jets_cut_nC_medium__4471->SetBinContent(2,393.5345);
   Jets_cut_nC_medium__4471->SetBinContent(3,144.1936);
   Jets_cut_nC_medium__4471->SetBinContent(4,29.07727);
   Jets_cut_nC_medium__4471->SetBinContent(5,4.592066);
   Jets_cut_nC_medium__4471->SetBinContent(6,0.4476748);
   Jets_cut_nC_medium__4471->SetBinContent(7,0.03310078);
   Jets_cut_nC_medium__4471->SetBinContent(8,0.001393759);
   Jets_cut_nC_medium__4471->SetBinContent(9,0.0003672524);
   Jets_cut_nC_medium__4471->SetBinError(1,2.371177);
   Jets_cut_nC_medium__4471->SetBinError(2,1.801598);
   Jets_cut_nC_medium__4471->SetBinError(3,0.8806588);
   Jets_cut_nC_medium__4471->SetBinError(4,0.2541827);
   Jets_cut_nC_medium__4471->SetBinError(5,0.08384441);
   Jets_cut_nC_medium__4471->SetBinError(6,0.0271789);
   Jets_cut_nC_medium__4471->SetBinError(7,0.007150985);
   Jets_cut_nC_medium__4471->SetBinError(8,0.0007050971);
   Jets_cut_nC_medium__4471->SetBinError(9,0.0003672524);
   Jets_cut_nC_medium__4471->SetEntries(498137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__4471->SetLineColor(ci);
   Jets_cut_nC_medium__4471->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__4471->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__4471->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4471->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4471->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4471->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__4471->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4471->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__4471->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__4471->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__4471->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4471->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4471->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4471->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4471->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZHcc_tagFirst_16->Modified();
   nC_medium_ZHcc_tagFirst_16->cd();
   nC_medium_ZHcc_tagFirst_16->SetSelected(nC_medium_ZHcc_tagFirst_16);
}
