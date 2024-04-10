#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_cjet2_tagFirst_18_logY()
{
//=========Macro generated from canvas: pt_cjet2_tagFirst_18/pt_cjet2_tagFirst_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_cjet2_tagFirst_18 = new TCanvas("pt_cjet2_tagFirst_18", "pt_cjet2_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_cjet2_tagFirst_18->SetHighLightColor(2);
   pt_cjet2_tagFirst_18->Range(-400,-6.595463e+07,2266.667,5.935917e+08);
   pt_cjet2_tagFirst_18->SetFillColor(0);
   pt_cjet2_tagFirst_18->SetFillStyle(4000);
   pt_cjet2_tagFirst_18->SetBorderMode(0);
   pt_cjet2_tagFirst_18->SetBorderSize(2);
   pt_cjet2_tagFirst_18->SetLeftMargin(0.15);
   pt_cjet2_tagFirst_18->SetFrameFillStyle(1000);
   pt_cjet2_tagFirst_18->SetFrameBorderMode(0);
   pt_cjet2_tagFirst_18->SetFrameFillStyle(1000);
   pt_cjet2_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_cjet2__97 = new TH1D("Jets_cut_pt_cjet2__97","",500,0,2000);
   Jets_cut_pt_cjet2__97->SetBinContent(12,5.025115e+08);
   Jets_cut_pt_cjet2__97->SetBinContent(13,3.812508e+08);
   Jets_cut_pt_cjet2__97->SetBinContent(14,1.690227e+08);
   Jets_cut_pt_cjet2__97->SetBinContent(15,5.641658e+07);
   Jets_cut_pt_cjet2__97->SetBinContent(16,2.743012e+07);
   Jets_cut_pt_cjet2__97->SetBinContent(17,5173920);
   Jets_cut_pt_cjet2__97->SetBinContent(18,4604957);
   Jets_cut_pt_cjet2__97->SetBinContent(19,1.164929e+07);
   Jets_cut_pt_cjet2__97->SetBinContent(20,6244383);
   Jets_cut_pt_cjet2__97->SetBinContent(21,2308048);
   Jets_cut_pt_cjet2__97->SetBinError(12,4.143389e+07);
   Jets_cut_pt_cjet2__97->SetBinError(13,3.062754e+07);
   Jets_cut_pt_cjet2__97->SetBinError(14,1.818399e+07);
   Jets_cut_pt_cjet2__97->SetBinError(15,9002873);
   Jets_cut_pt_cjet2__97->SetBinError(16,6958898);
   Jets_cut_pt_cjet2__97->SetBinError(17,3525468);
   Jets_cut_pt_cjet2__97->SetBinError(18,2739441);
   Jets_cut_pt_cjet2__97->SetBinError(19,4964058);
   Jets_cut_pt_cjet2__97->SetBinError(20,3789309);
   Jets_cut_pt_cjet2__97->SetBinError(21,2308048);
   Jets_cut_pt_cjet2__97->SetEntries(699);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_cjet2__97->SetLineColor(ci);
   Jets_cut_pt_cjet2__97->GetXaxis()->SetTitle("p_{T} (subsubleading c-jet) [GeV]");
   Jets_cut_pt_cjet2__97->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_cjet2__97->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet2__97->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_cjet2__97->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet2__97->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_cjet2__97->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet2__97->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_cjet2__97->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_cjet2__97->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_cjet2__97->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet2__97->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet2__97->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_cjet2__97->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet2__97->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_cjet2_tagFirst_18->Modified();
   pt_cjet2_tagFirst_18->cd();
   pt_cjet2_tagFirst_18->SetSelected(pt_cjet2_tagFirst_18);
}
