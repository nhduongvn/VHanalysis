#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_ljet2_tagOnly_18_logY()
{
//=========Macro generated from canvas: pt_ljet2_tagOnly_18/pt_ljet2_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_ljet2_tagOnly_18 = new TCanvas("pt_ljet2_tagOnly_18", "pt_ljet2_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_ljet2_tagOnly_18->SetHighLightColor(2);
   pt_ljet2_tagOnly_18->Range(-400,-1.964773e+08,2266.667,1.768296e+09);
   pt_ljet2_tagOnly_18->SetFillColor(0);
   pt_ljet2_tagOnly_18->SetFillStyle(4000);
   pt_ljet2_tagOnly_18->SetBorderMode(0);
   pt_ljet2_tagOnly_18->SetBorderSize(2);
   pt_ljet2_tagOnly_18->SetLeftMargin(0.15);
   pt_ljet2_tagOnly_18->SetFrameFillStyle(1000);
   pt_ljet2_tagOnly_18->SetFrameBorderMode(0);
   pt_ljet2_tagOnly_18->SetFrameFillStyle(1000);
   pt_ljet2_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_ljet2__113 = new TH1D("Jets_cut_pt_ljet2__113","",500,0,2000);
   Jets_cut_pt_ljet2__113->SetBinContent(12,1.49697e+09);
   Jets_cut_pt_ljet2__113->SetBinContent(13,1.031174e+09);
   Jets_cut_pt_ljet2__113->SetBinContent(14,4.111983e+08);
   Jets_cut_pt_ljet2__113->SetBinContent(15,2.173602e+08);
   Jets_cut_pt_ljet2__113->SetBinContent(16,7.457527e+07);
   Jets_cut_pt_ljet2__113->SetBinContent(17,3.982017e+07);
   Jets_cut_pt_ljet2__113->SetBinContent(18,2.050909e+07);
   Jets_cut_pt_ljet2__113->SetBinContent(19,2.112931e+07);
   Jets_cut_pt_ljet2__113->SetBinContent(20,4.296894e+07);
   Jets_cut_pt_ljet2__113->SetBinContent(21,1.143177e+07);
   Jets_cut_pt_ljet2__113->SetBinContent(22,1877240);
   Jets_cut_pt_ljet2__113->SetBinContent(23,6295847);
   Jets_cut_pt_ljet2__113->SetBinContent(24,1281903);
   Jets_cut_pt_ljet2__113->SetBinContent(26,1657846);
   Jets_cut_pt_ljet2__113->SetBinContent(27,2082465);
   Jets_cut_pt_ljet2__113->SetBinContent(29,4422224);
   Jets_cut_pt_ljet2__113->SetBinContent(30,1086970);
   Jets_cut_pt_ljet2__113->SetBinContent(31,1869483);
   Jets_cut_pt_ljet2__113->SetBinContent(38,1865945);
   Jets_cut_pt_ljet2__113->SetBinError(12,5.336425e+07);
   Jets_cut_pt_ljet2__113->SetBinError(13,4.350203e+07);
   Jets_cut_pt_ljet2__113->SetBinError(14,2.518889e+07);
   Jets_cut_pt_ljet2__113->SetBinError(15,1.950962e+07);
   Jets_cut_pt_ljet2__113->SetBinError(16,1.430938e+07);
   Jets_cut_pt_ljet2__113->SetBinError(17,9292397);
   Jets_cut_pt_ljet2__113->SetBinError(18,6574312);
   Jets_cut_pt_ljet2__113->SetBinError(19,7630292);
   Jets_cut_pt_ljet2__113->SetBinError(20,1.195467e+07);
   Jets_cut_pt_ljet2__113->SetBinError(21,5312695);
   Jets_cut_pt_ljet2__113->SetBinError(22,1877240);
   Jets_cut_pt_ljet2__113->SetBinError(23,3662755);
   Jets_cut_pt_ljet2__113->SetBinError(24,1281903);
   Jets_cut_pt_ljet2__113->SetBinError(26,1657846);
   Jets_cut_pt_ljet2__113->SetBinError(27,2082465);
   Jets_cut_pt_ljet2__113->SetBinError(29,4422224);
   Jets_cut_pt_ljet2__113->SetBinError(30,1086970);
   Jets_cut_pt_ljet2__113->SetBinError(31,1869483);
   Jets_cut_pt_ljet2__113->SetBinError(38,1865945);
   Jets_cut_pt_ljet2__113->SetEntries(2491);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_ljet2__113->SetLineColor(ci);
   Jets_cut_pt_ljet2__113->GetXaxis()->SetTitle("p_{T} (subsubleading l-jet) [GeV]");
   Jets_cut_pt_ljet2__113->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_ljet2__113->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_ljet2__113->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_ljet2__113->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_ljet2__113->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_ljet2__113->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_ljet2__113->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_ljet2__113->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_ljet2__113->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_ljet2__113->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_ljet2__113->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_ljet2__113->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_ljet2__113->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_ljet2__113->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_ljet2_tagOnly_18->Modified();
   pt_ljet2_tagOnly_18->cd();
   pt_ljet2_tagOnly_18->SetSelected(pt_ljet2_tagOnly_18);
}
