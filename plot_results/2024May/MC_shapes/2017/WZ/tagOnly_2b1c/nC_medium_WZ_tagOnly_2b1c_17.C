#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WZ_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nC_medium_WZ_tagOnly_2b1c_17/nC_medium_WZ_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WZ_tagOnly_2b1c_17 = new TCanvas("nC_medium_WZ_tagOnly_2b1c_17", "nC_medium_WZ_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WZ_tagOnly_2b1c_17->SetHighLightColor(2);
   nC_medium_WZ_tagOnly_2b1c_17->Range(-2.5,-173899.1,10.83333,1565092);
   nC_medium_WZ_tagOnly_2b1c_17->SetFillColor(0);
   nC_medium_WZ_tagOnly_2b1c_17->SetFillStyle(4000);
   nC_medium_WZ_tagOnly_2b1c_17->SetBorderMode(0);
   nC_medium_WZ_tagOnly_2b1c_17->SetBorderSize(2);
   nC_medium_WZ_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nC_medium_WZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nC_medium_WZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nC_medium_WZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nC_medium_WZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7616 = new TH1D("Jets_cut_nC_medium__7616","",10,-0.5,9.5);
   Jets_cut_nC_medium__7616->SetBinContent(1,1324945);
   Jets_cut_nC_medium__7616->SetBinContent(2,359670.5);
   Jets_cut_nC_medium__7616->SetBinContent(3,64306.43);
   Jets_cut_nC_medium__7616->SetBinContent(4,8240.519);
   Jets_cut_nC_medium__7616->SetBinContent(5,834.8055);
   Jets_cut_nC_medium__7616->SetBinContent(6,55.04168);
   Jets_cut_nC_medium__7616->SetBinContent(7,2.782959);
   Jets_cut_nC_medium__7616->SetBinContent(9,1.202802);
   Jets_cut_nC_medium__7616->SetBinError(1,575.888);
   Jets_cut_nC_medium__7616->SetBinError(2,296.7053);
   Jets_cut_nC_medium__7616->SetBinError(3,124.406);
   Jets_cut_nC_medium__7616->SetBinError(4,45.44782);
   Jets_cut_nC_medium__7616->SetBinError(5,15.47551);
   Jets_cut_nC_medium__7616->SetBinError(6,4.150177);
   Jets_cut_nC_medium__7616->SetBinError(7,0.9837076);
   Jets_cut_nC_medium__7616->SetBinError(9,1.202802);
   Jets_cut_nC_medium__7616->SetEntries(7889000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7616->SetLineColor(ci);
   Jets_cut_nC_medium__7616->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7616->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7616->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7616->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7616->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7616->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7616->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7616->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7616->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7616->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7616->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7616->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7616->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7616->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7616->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WZ_tagOnly_2b1c_17->Modified();
   nC_medium_WZ_tagOnly_2b1c_17->cd();
   nC_medium_WZ_tagOnly_2b1c_17->SetSelected(nC_medium_WZ_tagOnly_2b1c_17);
}
