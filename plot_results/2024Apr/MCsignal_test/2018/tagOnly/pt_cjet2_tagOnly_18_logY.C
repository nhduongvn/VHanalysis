#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_cjet2_tagOnly_18_logY()
{
//=========Macro generated from canvas: pt_cjet2_tagOnly_18/pt_cjet2_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_cjet2_tagOnly_18 = new TCanvas("pt_cjet2_tagOnly_18", "pt_cjet2_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_cjet2_tagOnly_18->SetHighLightColor(2);
   pt_cjet2_tagOnly_18->Range(-400,-6.595463e+07,2266.667,5.935917e+08);
   pt_cjet2_tagOnly_18->SetFillColor(0);
   pt_cjet2_tagOnly_18->SetFillStyle(4000);
   pt_cjet2_tagOnly_18->SetBorderMode(0);
   pt_cjet2_tagOnly_18->SetBorderSize(2);
   pt_cjet2_tagOnly_18->SetLeftMargin(0.15);
   pt_cjet2_tagOnly_18->SetFrameFillStyle(1000);
   pt_cjet2_tagOnly_18->SetFrameBorderMode(0);
   pt_cjet2_tagOnly_18->SetFrameFillStyle(1000);
   pt_cjet2_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_cjet2__123 = new TH1D("Jets_cut_pt_cjet2__123","",500,0,2000);
   Jets_cut_pt_cjet2__123->SetBinContent(12,5.025115e+08);
   Jets_cut_pt_cjet2__123->SetBinContent(13,3.812508e+08);
   Jets_cut_pt_cjet2__123->SetBinContent(14,1.690227e+08);
   Jets_cut_pt_cjet2__123->SetBinContent(15,5.641658e+07);
   Jets_cut_pt_cjet2__123->SetBinContent(16,2.743012e+07);
   Jets_cut_pt_cjet2__123->SetBinContent(17,5173920);
   Jets_cut_pt_cjet2__123->SetBinContent(18,4604957);
   Jets_cut_pt_cjet2__123->SetBinContent(19,1.164929e+07);
   Jets_cut_pt_cjet2__123->SetBinContent(20,6244383);
   Jets_cut_pt_cjet2__123->SetBinContent(21,2308048);
   Jets_cut_pt_cjet2__123->SetBinError(12,4.143389e+07);
   Jets_cut_pt_cjet2__123->SetBinError(13,3.062754e+07);
   Jets_cut_pt_cjet2__123->SetBinError(14,1.818399e+07);
   Jets_cut_pt_cjet2__123->SetBinError(15,9002873);
   Jets_cut_pt_cjet2__123->SetBinError(16,6958898);
   Jets_cut_pt_cjet2__123->SetBinError(17,3525468);
   Jets_cut_pt_cjet2__123->SetBinError(18,2739441);
   Jets_cut_pt_cjet2__123->SetBinError(19,4964058);
   Jets_cut_pt_cjet2__123->SetBinError(20,3789309);
   Jets_cut_pt_cjet2__123->SetBinError(21,2308048);
   Jets_cut_pt_cjet2__123->SetEntries(699);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_cjet2__123->SetLineColor(ci);
   Jets_cut_pt_cjet2__123->GetXaxis()->SetTitle("p_{T} (subsubleading c-jet) [GeV]");
   Jets_cut_pt_cjet2__123->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_cjet2__123->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet2__123->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_cjet2__123->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet2__123->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_cjet2__123->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet2__123->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_cjet2__123->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_cjet2__123->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_cjet2__123->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet2__123->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet2__123->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_cjet2__123->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet2__123->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_cjet2_tagOnly_18->Modified();
   pt_cjet2_tagOnly_18->cd();
   pt_cjet2_tagOnly_18->SetSelected(pt_cjet2_tagOnly_18);
}
