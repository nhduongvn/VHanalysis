#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_SingleTop_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: nC_medium_SingleTop_tagOnly_2b1c_16/nC_medium_SingleTop_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_SingleTop_tagOnly_2b1c_16 = new TCanvas("nC_medium_SingleTop_tagOnly_2b1c_16", "nC_medium_SingleTop_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetHighLightColor(2);
   nC_medium_SingleTop_tagOnly_2b1c_16->Range(-2.5,-1785803,10.83333,1.607223e+07);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetFillColor(0);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetFillStyle(4000);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetBorderMode(0);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetBorderSize(2);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetLeftMargin(0.15);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetFrameBorderMode(0);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nC_medium_SingleTop_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7609 = new TH1D("Jets_cut_nC_medium__7609","",10,-0.5,9.5);
   Jets_cut_nC_medium__7609->SetBinContent(1,1.360612e+07);
   Jets_cut_nC_medium__7609->SetBinContent(2,4956255);
   Jets_cut_nC_medium__7609->SetBinContent(3,875181);
   Jets_cut_nC_medium__7609->SetBinContent(4,110909.1);
   Jets_cut_nC_medium__7609->SetBinContent(5,13308.17);
   Jets_cut_nC_medium__7609->SetBinContent(6,1332.425);
   Jets_cut_nC_medium__7609->SetBinContent(7,117.5914);
   Jets_cut_nC_medium__7609->SetBinContent(8,6.516949);
   Jets_cut_nC_medium__7609->SetBinContent(9,0.8334085);
   Jets_cut_nC_medium__7609->SetBinContent(10,0.03622833);
   Jets_cut_nC_medium__7609->SetBinError(1,2073.235);
   Jets_cut_nC_medium__7609->SetBinError(2,1177.487);
   Jets_cut_nC_medium__7609->SetBinError(3,423.0052);
   Jets_cut_nC_medium__7609->SetBinError(4,126.3787);
   Jets_cut_nC_medium__7609->SetBinError(5,46.54898);
   Jets_cut_nC_medium__7609->SetBinError(6,15.8382);
   Jets_cut_nC_medium__7609->SetBinError(7,4.953567);
   Jets_cut_nC_medium__7609->SetBinError(8,1.103935);
   Jets_cut_nC_medium__7609->SetBinError(9,0.4580738);
   Jets_cut_nC_medium__7609->SetBinError(10,0.03622833);
   Jets_cut_nC_medium__7609->SetEntries(1.89034e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7609->SetLineColor(ci);
   Jets_cut_nC_medium__7609->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7609->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7609->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7609->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7609->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7609->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7609->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7609->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7609->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7609->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7609->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7609->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7609->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7609->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7609->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_SingleTop_tagOnly_2b1c_16->Modified();
   nC_medium_SingleTop_tagOnly_2b1c_16->cd();
   nC_medium_SingleTop_tagOnly_2b1c_16->SetSelected(nC_medium_SingleTop_tagOnly_2b1c_16);
}
