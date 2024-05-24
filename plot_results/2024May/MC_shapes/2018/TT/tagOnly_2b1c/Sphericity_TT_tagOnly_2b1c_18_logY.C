#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_TT_tagOnly_2b1c_18/Sphericity_TT_tagOnly_2b1c_18
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagOnly_2b1c_18 = new TCanvas("Sphericity_TT_tagOnly_2b1c_18", "Sphericity_TT_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagOnly_2b1c_18->SetHighLightColor(2);
   Sphericity_TT_tagOnly_2b1c_18->Range(-0.2,-2.509776,1.133333,6.852022);
   Sphericity_TT_tagOnly_2b1c_18->SetFillColor(0);
   Sphericity_TT_tagOnly_2b1c_18->SetFillStyle(4000);
   Sphericity_TT_tagOnly_2b1c_18->SetBorderMode(0);
   Sphericity_TT_tagOnly_2b1c_18->SetBorderSize(2);
   Sphericity_TT_tagOnly_2b1c_18->SetLogy();
   Sphericity_TT_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Sphericity_TT_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Sphericity_TT_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3318 = new TH1D("VH_tagOnly_2b1c_Sphericity__3318","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(1,434803.8);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(2,379244.3);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(3,211611.2);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(4,121060);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(5,69095.29);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(6,38406.52);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(7,21547.28);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(8,12731.05);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(9,8235.507);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(10,5601.932);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(11,3949.436);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(12,2886.966);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(13,2141.306);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(14,1617.296);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(15,1241.909);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(16,938.9292);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(17,655.6705);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(18,443.9795);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(19,248.7447);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(20,105.2245);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(21,29.64017);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(22,12.01066);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(23,2.512043);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinContent(24,0.05338685);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(1,272.8342);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(2,254.0376);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(3,189.2681);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(4,144.9284);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(5,109.9511);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(6,80.48498);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(7,60.44918);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(8,47.7448);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(9,39.67327);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(10,31.16323);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(11,26.70228);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(12,24.4886);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(13,19.1846);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(14,16.23797);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(15,15.6247);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(16,15.07997);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(17,11.14389);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(18,8.661874);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(19,6.365433);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(20,4.847261);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(21,2.149925);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(22,1.420628);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(23,0.885545);
   VH_tagOnly_2b1c_Sphericity__3318->SetBinError(24,0.05338685);
   VH_tagOnly_2b1c_Sphericity__3318->SetEntries(1.212845e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3318->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3318->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3318->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3318->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3318->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3318->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3318->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3318->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3318->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3318->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3318->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3318->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3318->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3318->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3318->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3318->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagOnly_2b1c_18->Modified();
   Sphericity_TT_tagOnly_2b1c_18->cd();
   Sphericity_TT_tagOnly_2b1c_18->SetSelected(Sphericity_TT_tagOnly_2b1c_18);
}
