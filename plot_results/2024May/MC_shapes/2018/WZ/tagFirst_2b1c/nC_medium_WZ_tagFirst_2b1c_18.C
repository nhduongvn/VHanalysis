#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WZ_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: nC_medium_WZ_tagFirst_2b1c_18/nC_medium_WZ_tagFirst_2b1c_18
//=========  (Fri May 24 12:44:03 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WZ_tagFirst_2b1c_18 = new TCanvas("nC_medium_WZ_tagFirst_2b1c_18", "nC_medium_WZ_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WZ_tagFirst_2b1c_18->SetHighLightColor(2);
   nC_medium_WZ_tagFirst_2b1c_18->Range(-2.5,-280203.7,10.83333,2521833);
   nC_medium_WZ_tagFirst_2b1c_18->SetFillColor(0);
   nC_medium_WZ_tagFirst_2b1c_18->SetFillStyle(4000);
   nC_medium_WZ_tagFirst_2b1c_18->SetBorderMode(0);
   nC_medium_WZ_tagFirst_2b1c_18->SetBorderSize(2);
   nC_medium_WZ_tagFirst_2b1c_18->SetLeftMargin(0.15);
   nC_medium_WZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_WZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   nC_medium_WZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_WZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__6837 = new TH1D("Jets_cut_nC_medium__6837","",10,-0.5,9.5);
   Jets_cut_nC_medium__6837->SetBinContent(1,2134885);
   Jets_cut_nC_medium__6837->SetBinContent(2,629376.7);
   Jets_cut_nC_medium__6837->SetBinContent(3,134146.2);
   Jets_cut_nC_medium__6837->SetBinContent(4,21029.41);
   Jets_cut_nC_medium__6837->SetBinContent(5,2602.208);
   Jets_cut_nC_medium__6837->SetBinContent(6,195.9622);
   Jets_cut_nC_medium__6837->SetBinContent(7,14.41984);
   Jets_cut_nC_medium__6837->SetBinError(1,1023.697);
   Jets_cut_nC_medium__6837->SetBinError(2,589.4545);
   Jets_cut_nC_medium__6837->SetBinError(3,306.7627);
   Jets_cut_nC_medium__6837->SetBinError(4,137.4969);
   Jets_cut_nC_medium__6837->SetBinError(5,60.81128);
   Jets_cut_nC_medium__6837->SetBinError(6,18.76925);
   Jets_cut_nC_medium__6837->SetBinError(7,5.15447);
   Jets_cut_nC_medium__6837->SetEntries(7940000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__6837->SetLineColor(ci);
   Jets_cut_nC_medium__6837->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__6837->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__6837->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6837->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6837->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6837->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__6837->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6837->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__6837->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__6837->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__6837->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6837->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6837->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6837->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6837->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WZ_tagFirst_2b1c_18->Modified();
   nC_medium_WZ_tagFirst_2b1c_18->cd();
   nC_medium_WZ_tagFirst_2b1c_18->SetSelected(nC_medium_WZ_tagFirst_2b1c_18);
}
