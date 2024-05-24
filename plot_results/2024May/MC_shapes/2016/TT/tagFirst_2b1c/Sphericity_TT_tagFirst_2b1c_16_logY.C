#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_TT_tagFirst_2b1c_16/Sphericity_TT_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagFirst_2b1c_16 = new TCanvas("Sphericity_TT_tagFirst_2b1c_16", "Sphericity_TT_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_TT_tagFirst_2b1c_16->Range(-0.2,-1.50545,1.133333,6.535108);
   Sphericity_TT_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_TT_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_TT_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_TT_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_TT_tagFirst_2b1c_16->SetLogy();
   Sphericity_TT_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_TT_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_TT_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_TT_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_TT_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2596 = new TH1D("VH_tagFirst_2b1c_Sphericity__2596","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(1,284121.2);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(2,261611);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(3,143203.3);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(4,80385.48);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(5,45489.54);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(6,25467.91);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(7,14297.58);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(8,8537.378);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(9,5477.192);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(10,3716.996);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(11,2635.73);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(12,1910.158);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(13,1419.105);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(14,1062.757);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(15,818.5712);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(16,600.2753);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(17,435.6578);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(18,285.6591);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(19,162.7806);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(20,68.28701);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(21,26.23475);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(22,7.101854);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(23,1.501799);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinContent(24,0.3977732);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(1,132.8624);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(2,126.6039);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(3,93.89657);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(4,70.63182);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(5,53.31587);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(6,39.94311);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(7,29.91634);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(8,23.11752);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(9,18.55124);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(10,15.30993);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(11,12.9032);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(12,11.01636);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(13,9.517467);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(14,8.254858);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(15,7.231232);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(16,6.210756);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(17,5.285963);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(18,4.274926);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(19,3.211206);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(20,2.078471);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(21,1.286664);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(22,0.6813988);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(23,0.3029548);
   VH_tagFirst_2b1c_Sphericity__2596->SetBinError(24,0.1531146);
   VH_tagFirst_2b1c_Sphericity__2596->SetEntries(1.57112e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2596->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2596->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2596->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2596->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2596->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2596->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2596->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2596->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2596->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2596->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2596->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2596->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2596->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2596->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2596->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2596->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagFirst_2b1c_16->Modified();
   Sphericity_TT_tagFirst_2b1c_16->cd();
   Sphericity_TT_tagFirst_2b1c_16->SetSelected(Sphericity_TT_tagFirst_2b1c_16);
}
