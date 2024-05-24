#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZHcc_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: nC_medium_ZHcc_tagOnly_2b1c_18/nC_medium_ZHcc_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZHcc_tagOnly_2b1c_18 = new TCanvas("nC_medium_ZHcc_tagOnly_2b1c_18", "nC_medium_ZHcc_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetHighLightColor(2);
   nC_medium_ZHcc_tagOnly_2b1c_18->Range(-2.5,-58.30298,10.83333,524.7267);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetFillColor(0);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetFillStyle(4000);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetBorderMode(0);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetBorderSize(2);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetLeftMargin(0.15);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetFrameBorderMode(0);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_ZHcc_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7593 = new TH1D("Jets_cut_nC_medium__7593","",10,-0.5,9.5);
   Jets_cut_nC_medium__7593->SetBinContent(1,361.0998);
   Jets_cut_nC_medium__7593->SetBinContent(2,444.2131);
   Jets_cut_nC_medium__7593->SetBinContent(3,264.7597);
   Jets_cut_nC_medium__7593->SetBinContent(4,83.26489);
   Jets_cut_nC_medium__7593->SetBinContent(5,15.95235);
   Jets_cut_nC_medium__7593->SetBinContent(6,1.817733);
   Jets_cut_nC_medium__7593->SetBinContent(7,0.1979983);
   Jets_cut_nC_medium__7593->SetBinContent(8,0.03467055);
   Jets_cut_nC_medium__7593->SetBinError(1,0.9551688);
   Jets_cut_nC_medium__7593->SetBinError(2,1.005377);
   Jets_cut_nC_medium__7593->SetBinError(3,0.8077445);
   Jets_cut_nC_medium__7593->SetBinError(4,0.4766653);
   Jets_cut_nC_medium__7593->SetBinError(5,0.2431893);
   Jets_cut_nC_medium__7593->SetBinError(6,0.08658735);
   Jets_cut_nC_medium__7593->SetBinError(7,0.03245732);
   Jets_cut_nC_medium__7593->SetBinError(8,0.01646105);
   Jets_cut_nC_medium__7593->SetEntries(993601);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7593->SetLineColor(ci);
   Jets_cut_nC_medium__7593->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7593->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7593->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7593->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7593->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7593->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7593->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7593->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7593->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7593->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7593->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7593->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7593->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7593->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7593->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZHcc_tagOnly_2b1c_18->Modified();
   nC_medium_ZHcc_tagOnly_2b1c_18->cd();
   nC_medium_ZHcc_tagOnly_2b1c_18->SetSelected(nC_medium_ZHcc_tagOnly_2b1c_18);
}
