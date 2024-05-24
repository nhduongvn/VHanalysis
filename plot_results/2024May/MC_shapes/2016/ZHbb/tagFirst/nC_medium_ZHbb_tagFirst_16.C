#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZHbb_tagFirst_16()
{
//=========Macro generated from canvas: nC_medium_ZHbb_tagFirst_16/nC_medium_ZHbb_tagFirst_16
//=========  (Fri May 24 12:43:15 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZHbb_tagFirst_16 = new TCanvas("nC_medium_ZHbb_tagFirst_16", "nC_medium_ZHbb_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZHbb_tagFirst_16->SetHighLightColor(2);
   nC_medium_ZHbb_tagFirst_16->Range(-2.5,-2198.422,10.83333,19785.79);
   nC_medium_ZHbb_tagFirst_16->SetFillColor(0);
   nC_medium_ZHbb_tagFirst_16->SetFillStyle(4000);
   nC_medium_ZHbb_tagFirst_16->SetBorderMode(0);
   nC_medium_ZHbb_tagFirst_16->SetBorderSize(2);
   nC_medium_ZHbb_tagFirst_16->SetLeftMargin(0.15);
   nC_medium_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   nC_medium_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   nC_medium_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   nC_medium_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__4474 = new TH1D("Jets_cut_nC_medium__4474","",10,-0.5,9.5);
   Jets_cut_nC_medium__4474->SetBinContent(1,16749.88);
   Jets_cut_nC_medium__4474->SetBinContent(2,6757.868);
   Jets_cut_nC_medium__4474->SetBinContent(3,1520.659);
   Jets_cut_nC_medium__4474->SetBinContent(4,230.7976);
   Jets_cut_nC_medium__4474->SetBinContent(5,28.94932);
   Jets_cut_nC_medium__4474->SetBinContent(6,2.99719);
   Jets_cut_nC_medium__4474->SetBinContent(7,0.2495875);
   Jets_cut_nC_medium__4474->SetBinContent(8,0.02362503);
   Jets_cut_nC_medium__4474->SetBinContent(9,0.0006885548);
   Jets_cut_nC_medium__4474->SetBinError(1,9.57203);
   Jets_cut_nC_medium__4474->SetBinError(2,5.348808);
   Jets_cut_nC_medium__4474->SetBinError(3,1.987765);
   Jets_cut_nC_medium__4474->SetBinError(4,0.5118614);
   Jets_cut_nC_medium__4474->SetBinError(5,0.1606367);
   Jets_cut_nC_medium__4474->SetBinError(6,0.05316888);
   Jets_cut_nC_medium__4474->SetBinError(7,0.0159476);
   Jets_cut_nC_medium__4474->SetBinError(8,0.005017679);
   Jets_cut_nC_medium__4474->SetBinError(9,0.0004011145);
   Jets_cut_nC_medium__4474->SetEntries(1.487403e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__4474->SetLineColor(ci);
   Jets_cut_nC_medium__4474->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__4474->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__4474->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4474->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4474->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4474->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__4474->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4474->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__4474->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__4474->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__4474->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4474->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4474->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4474->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4474->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZHbb_tagFirst_16->Modified();
   nC_medium_ZHbb_tagFirst_16->cd();
   nC_medium_ZHbb_tagFirst_16->SetSelected(nC_medium_ZHbb_tagFirst_16);
}
