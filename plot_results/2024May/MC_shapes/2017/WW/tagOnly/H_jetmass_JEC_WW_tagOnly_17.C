#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_WW_tagOnly_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_WW_tagOnly_17/H_jetmass_JEC_WW_tagOnly_17
//=========  (Fri May 24 12:42:23 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_WW_tagOnly_17 = new TCanvas("H_jetmass_JEC_WW_tagOnly_17", "H_jetmass_JEC_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_WW_tagOnly_17->SetHighLightColor(2);
   H_jetmass_JEC_WW_tagOnly_17->Range(-60,-1.589022,340,14.3012);
   H_jetmass_JEC_WW_tagOnly_17->SetFillColor(0);
   H_jetmass_JEC_WW_tagOnly_17->SetFillStyle(4000);
   H_jetmass_JEC_WW_tagOnly_17->SetBorderMode(0);
   H_jetmass_JEC_WW_tagOnly_17->SetBorderSize(2);
   H_jetmass_JEC_WW_tagOnly_17->SetLeftMargin(0.15);
   H_jetmass_JEC_WW_tagOnly_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_tagOnly_17->SetFrameBorderMode(0);
   H_jetmass_JEC_WW_tagOnly_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_jetmass_JEC__1313 = new TH1D("VH_tagOnly_H_jetmass_JEC__1313","",150,0,300);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(3,0.3466615);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(4,6.845936);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(5,12.10683);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(6,7.634127);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(7,9.533607);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(8,5.808335);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(9,3.28245);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(10,3.336261);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(11,0.9523091);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(12,1.505984);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(13,0.5713996);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(14,1.409822);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(15,0.557875);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(16,0.7464834);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(17,0.1901637);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(18,0.9996013);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(19,0.7878062);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(21,0.5239543);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(23,0.3745624);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(24,0.07791458);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(28,0.2776511);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinContent(33,0.4199524);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(3,0.3466615);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(4,1.712394);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(5,1.997257);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(6,1.813932);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(7,1.865329);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(8,1.367575);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(9,0.9333484);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(10,1.122973);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(11,0.4894531);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(12,0.7133042);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(13,0.5713996);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(14,0.6663437);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(15,0.3957202);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(16,0.4346703);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(17,0.1901637);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(18,0.9996013);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(19,0.4625601);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(21,0.3800238);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(23,0.3745624);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(24,0.07791458);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(28,0.2776511);
   VH_tagOnly_H_jetmass_JEC__1313->SetBinError(33,0.4199524);
   VH_tagOnly_H_jetmass_JEC__1313->SetEntries(198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_jetmass_JEC__1313->SetLineColor(ci);
   VH_tagOnly_H_jetmass_JEC__1313->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_tagOnly_H_jetmass_JEC__1313->GetXaxis()->SetRange(1,150);
   VH_tagOnly_H_jetmass_JEC__1313->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__1313->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_JEC__1313->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__1313->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_H_jetmass_JEC__1313->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__1313->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_jetmass_JEC__1313->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_jetmass_JEC__1313->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_jetmass_JEC__1313->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__1313->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__1313->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_JEC__1313->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__1313->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_WW_tagOnly_17->Modified();
   H_jetmass_JEC_WW_tagOnly_17->cd();
   H_jetmass_JEC_WW_tagOnly_17->SetSelected(H_jetmass_JEC_WW_tagOnly_17);
}
