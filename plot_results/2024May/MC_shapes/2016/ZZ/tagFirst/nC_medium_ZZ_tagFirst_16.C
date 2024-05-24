#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZZ_tagFirst_16()
{
//=========Macro generated from canvas: nC_medium_ZZ_tagFirst_16/nC_medium_ZZ_tagFirst_16
//=========  (Fri May 24 12:43:15 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZZ_tagFirst_16 = new TCanvas("nC_medium_ZZ_tagFirst_16", "nC_medium_ZZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZZ_tagFirst_16->SetHighLightColor(2);
   nC_medium_ZZ_tagFirst_16->Range(-2.5,-158545.2,10.83333,1426906);
   nC_medium_ZZ_tagFirst_16->SetFillColor(0);
   nC_medium_ZZ_tagFirst_16->SetFillStyle(4000);
   nC_medium_ZZ_tagFirst_16->SetBorderMode(0);
   nC_medium_ZZ_tagFirst_16->SetBorderSize(2);
   nC_medium_ZZ_tagFirst_16->SetLeftMargin(0.15);
   nC_medium_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   nC_medium_ZZ_tagFirst_16->SetFrameBorderMode(0);
   nC_medium_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   nC_medium_ZZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__4498 = new TH1D("Jets_cut_nC_medium__4498","",10,-0.5,9.5);
   Jets_cut_nC_medium__4498->SetBinContent(1,1207963);
   Jets_cut_nC_medium__4498->SetBinContent(2,288565.3);
   Jets_cut_nC_medium__4498->SetBinContent(3,34556.42);
   Jets_cut_nC_medium__4498->SetBinContent(4,2448.851);
   Jets_cut_nC_medium__4498->SetBinContent(5,213.3634);
   Jets_cut_nC_medium__4498->SetBinContent(6,12.10382);
   Jets_cut_nC_medium__4498->SetBinContent(7,0.3040671);
   Jets_cut_nC_medium__4498->SetBinError(1,1145.197);
   Jets_cut_nC_medium__4498->SetBinError(2,553.0045);
   Jets_cut_nC_medium__4498->SetBinError(3,169.0375);
   Jets_cut_nC_medium__4498->SetBinError(4,28.64407);
   Jets_cut_nC_medium__4498->SetBinError(5,6.729705);
   Jets_cut_nC_medium__4498->SetBinError(6,1.680027);
   Jets_cut_nC_medium__4498->SetBinError(7,0.2483133);
   Jets_cut_nC_medium__4498->SetEntries(2433000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__4498->SetLineColor(ci);
   Jets_cut_nC_medium__4498->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__4498->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__4498->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4498->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4498->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4498->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__4498->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4498->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__4498->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__4498->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__4498->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4498->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4498->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4498->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4498->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZZ_tagFirst_16->Modified();
   nC_medium_ZZ_tagFirst_16->cd();
   nC_medium_ZZ_tagFirst_16->SetSelected(nC_medium_ZZ_tagFirst_16);
}
