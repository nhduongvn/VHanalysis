#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium()
{
//=========Macro generated from canvas: nC_medium/nC_medium
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *nC_medium = new TCanvas("nC_medium", "nC_medium",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium->SetHighLightColor(2);
   nC_medium->Range(-2.5,-23418.88,10.83333,210769.9);
   nC_medium->SetFillColor(0);
   nC_medium->SetFillStyle(4000);
   nC_medium->SetBorderMode(0);
   nC_medium->SetBorderSize(2);
   nC_medium->SetLeftMargin(0.15);
   nC_medium->SetFrameFillStyle(1000);
   nC_medium->SetFrameBorderMode(0);
   nC_medium->SetFrameFillStyle(1000);
   nC_medium->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__30 = new TH1D("Jets_cut_nC_medium__30","",10,-0.5,9.5);
   Jets_cut_nC_medium__30->SetBinContent(1,157044);
   Jets_cut_nC_medium__30->SetBinContent(2,178429.6);
   Jets_cut_nC_medium__30->SetBinContent(3,99418.75);
   Jets_cut_nC_medium__30->SetBinContent(4,28985.22);
   Jets_cut_nC_medium__30->SetBinContent(5,5207.245);
   Jets_cut_nC_medium__30->SetBinContent(6,574.29);
   Jets_cut_nC_medium__30->SetBinContent(7,63.69931);
   Jets_cut_nC_medium__30->SetBinContent(8,13.85281);
   Jets_cut_nC_medium__30->SetBinError(1,445.0804);
   Jets_cut_nC_medium__30->SetBinError(2,464.8236);
   Jets_cut_nC_medium__30->SetBinError(3,371.4008);
   Jets_cut_nC_medium__30->SetBinError(4,217.5437);
   Jets_cut_nC_medium__30->SetBinError(5,110.9186);
   Jets_cut_nC_medium__30->SetBinError(6,39.16645);
   Jets_cut_nC_medium__30->SetBinError(7,14.72564);
   Jets_cut_nC_medium__30->SetBinError(8,7.472987);
   Jets_cut_nC_medium__30->SetEntries(499433);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__30->SetLineColor(ci);
   Jets_cut_nC_medium__30->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__30->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__30->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__30->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__30->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__30->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__30->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__30->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__30->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__30->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__30->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__30->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__30->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__30->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__30->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium->Modified();
   nC_medium->cd();
   nC_medium->SetSelected(nC_medium);
}
