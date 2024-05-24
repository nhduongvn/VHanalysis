#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_QCD_tagFirst_16_logY()
{
//=========Macro generated from canvas: Z_dR_QCD_tagFirst_16/Z_dR_QCD_tagFirst_16
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_QCD_tagFirst_16 = new TCanvas("Z_dR_QCD_tagFirst_16", "Z_dR_QCD_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_QCD_tagFirst_16->SetHighLightColor(2);
   Z_dR_QCD_tagFirst_16->Range(-1.2,1.094218,6.8,6.097957);
   Z_dR_QCD_tagFirst_16->SetFillColor(0);
   Z_dR_QCD_tagFirst_16->SetFillStyle(4000);
   Z_dR_QCD_tagFirst_16->SetBorderMode(0);
   Z_dR_QCD_tagFirst_16->SetBorderSize(2);
   Z_dR_QCD_tagFirst_16->SetLogy();
   Z_dR_QCD_tagFirst_16->SetLeftMargin(0.15);
   Z_dR_QCD_tagFirst_16->SetFrameFillStyle(1000);
   Z_dR_QCD_tagFirst_16->SetFrameBorderMode(0);
   Z_dR_QCD_tagFirst_16->SetFrameFillStyle(1000);
   Z_dR_QCD_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__127 = new TH1D("VH_tagFirst_Z_dR__127","",30,0,6);
   VH_tagFirst_Z_dR__127->SetBinContent(2,78.63611);
   VH_tagFirst_Z_dR__127->SetBinContent(3,195257.2);
   VH_tagFirst_Z_dR__127->SetBinContent(4,208945.9);
   VH_tagFirst_Z_dR__127->SetBinContent(5,165272.2);
   VH_tagFirst_Z_dR__127->SetBinContent(6,129595.4);
   VH_tagFirst_Z_dR__127->SetBinContent(7,102941);
   VH_tagFirst_Z_dR__127->SetBinContent(8,87725.51);
   VH_tagFirst_Z_dR__127->SetBinContent(9,92267.94);
   VH_tagFirst_Z_dR__127->SetBinContent(10,92164.64);
   VH_tagFirst_Z_dR__127->SetBinContent(11,80505.47);
   VH_tagFirst_Z_dR__127->SetBinContent(12,77311.16);
   VH_tagFirst_Z_dR__127->SetBinContent(13,81157.55);
   VH_tagFirst_Z_dR__127->SetBinContent(14,88538.27);
   VH_tagFirst_Z_dR__127->SetBinContent(15,94401.02);
   VH_tagFirst_Z_dR__127->SetBinContent(16,98733.49);
   VH_tagFirst_Z_dR__127->SetBinContent(17,87078.13);
   VH_tagFirst_Z_dR__127->SetBinContent(18,102442.8);
   VH_tagFirst_Z_dR__127->SetBinContent(19,76467.25);
   VH_tagFirst_Z_dR__127->SetBinContent(20,68428.73);
   VH_tagFirst_Z_dR__127->SetBinContent(21,52147.78);
   VH_tagFirst_Z_dR__127->SetBinContent(22,49872.45);
   VH_tagFirst_Z_dR__127->SetBinContent(23,38124.98);
   VH_tagFirst_Z_dR__127->SetBinContent(24,37863);
   VH_tagFirst_Z_dR__127->SetBinContent(25,27085.26);
   VH_tagFirst_Z_dR__127->SetBinContent(26,23620.54);
   VH_tagFirst_Z_dR__127->SetBinContent(27,23991.29);
   VH_tagFirst_Z_dR__127->SetBinContent(28,22471.37);
   VH_tagFirst_Z_dR__127->SetBinContent(29,27392.26);
   VH_tagFirst_Z_dR__127->SetBinContent(30,16245.69);
   VH_tagFirst_Z_dR__127->SetBinContent(31,9320.536);
   VH_tagFirst_Z_dR__127->SetBinError(2,34.25604);
   VH_tagFirst_Z_dR__127->SetBinError(3,4893.815);
   VH_tagFirst_Z_dR__127->SetBinError(4,6020.615);
   VH_tagFirst_Z_dR__127->SetBinError(5,16905.91);
   VH_tagFirst_Z_dR__127->SetBinError(6,5632.081);
   VH_tagFirst_Z_dR__127->SetBinError(7,4377.278);
   VH_tagFirst_Z_dR__127->SetBinError(8,3461.312);
   VH_tagFirst_Z_dR__127->SetBinError(9,4794.379);
   VH_tagFirst_Z_dR__127->SetBinError(10,4961.231);
   VH_tagFirst_Z_dR__127->SetBinError(11,4373.303);
   VH_tagFirst_Z_dR__127->SetBinError(12,4286.007);
   VH_tagFirst_Z_dR__127->SetBinError(13,4249.764);
   VH_tagFirst_Z_dR__127->SetBinError(14,4216.357);
   VH_tagFirst_Z_dR__127->SetBinError(15,4804.369);
   VH_tagFirst_Z_dR__127->SetBinError(16,4007.227);
   VH_tagFirst_Z_dR__127->SetBinError(17,4544.54);
   VH_tagFirst_Z_dR__127->SetBinError(18,21801.19);
   VH_tagFirst_Z_dR__127->SetBinError(19,4064.827);
   VH_tagFirst_Z_dR__127->SetBinError(20,4017.076);
   VH_tagFirst_Z_dR__127->SetBinError(21,3152.668);
   VH_tagFirst_Z_dR__127->SetBinError(22,3411.331);
   VH_tagFirst_Z_dR__127->SetBinError(23,2622.256);
   VH_tagFirst_Z_dR__127->SetBinError(24,3335.761);
   VH_tagFirst_Z_dR__127->SetBinError(25,1928.762);
   VH_tagFirst_Z_dR__127->SetBinError(26,2201.141);
   VH_tagFirst_Z_dR__127->SetBinError(27,2210.763);
   VH_tagFirst_Z_dR__127->SetBinError(28,2018.296);
   VH_tagFirst_Z_dR__127->SetBinError(29,2915.902);
   VH_tagFirst_Z_dR__127->SetBinError(30,1930.685);
   VH_tagFirst_Z_dR__127->SetBinError(31,1077.04);
   VH_tagFirst_Z_dR__127->SetEntries(184957);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__127->SetLineColor(ci);
   VH_tagFirst_Z_dR__127->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__127->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__127->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__127->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__127->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__127->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__127->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__127->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__127->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__127->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__127->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__127->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__127->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__127->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__127->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_QCD_tagFirst_16->Modified();
   Z_dR_QCD_tagFirst_16->cd();
   Z_dR_QCD_tagFirst_16->SetSelected(Z_dR_QCD_tagFirst_16);
}
