#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_WW_tagOnly_2b1c_16/Sphericity_WW_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagOnly_2b1c_16 = new TCanvas("Sphericity_WW_tagOnly_2b1c_16", "Sphericity_WW_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_WW_tagOnly_2b1c_16->Range(-0.2,-11.03227,1.133333,99.29044);
   Sphericity_WW_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_WW_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_WW_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_WW_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_WW_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WW_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WW_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3322 = new TH1D("VH_tagOnly_2b1c_Sphericity__3322","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(1,84.0554);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(2,70.55306);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(3,38.58852);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(4,24.0891);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(5,16.11349);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(6,8.247765);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(7,3.905675);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(8,1.769826);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(9,1.29317);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(10,0.8449316);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(11,0.4602096);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(12,0.8198477);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(13,0.1890611);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(14,0.2527046);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(16,0.09760838);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(18,0.1350121);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinContent(19,0.09931191);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(1,3.124969);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(2,2.820581);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(3,2.100205);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(4,1.668401);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(5,1.389972);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(6,0.987546);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(7,0.6660462);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(8,0.4607878);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(9,0.3804836);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(10,0.3311722);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(11,0.2333698);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(12,0.2982432);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(13,0.1339085);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(14,0.1791132);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(16,0.09760838);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(18,0.1350121);
   VH_tagOnly_2b1c_Sphericity__3322->SetBinError(19,0.09931191);
   VH_tagOnly_2b1c_Sphericity__3322->SetEntries(2285);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3322->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3322->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3322->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3322->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3322->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3322->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3322->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3322->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3322->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3322->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3322->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3322->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3322->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3322->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3322->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3322->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagOnly_2b1c_16->Modified();
   Sphericity_WW_tagOnly_2b1c_16->cd();
   Sphericity_WW_tagOnly_2b1c_16->SetSelected(Sphericity_WW_tagOnly_2b1c_16);
}
