#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagOnly_16()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagOnly_16/Sphericity_ZHcc_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagOnly_16 = new TCanvas("Sphericity_ZHcc_tagOnly_16", "Sphericity_ZHcc_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagOnly_16->SetHighLightColor(2);
   Sphericity_ZHcc_tagOnly_16->Range(-0.2,-0.1118313,1.133333,1.006481);
   Sphericity_ZHcc_tagOnly_16->SetFillColor(0);
   Sphericity_ZHcc_tagOnly_16->SetFillStyle(4000);
   Sphericity_ZHcc_tagOnly_16->SetBorderMode(0);
   Sphericity_ZHcc_tagOnly_16->SetBorderSize(2);
   Sphericity_ZHcc_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1141 = new TH1D("VH_tagOnly_Sphericity__1141","",25,0,1);
   VH_tagOnly_Sphericity__1141->SetBinContent(1,0.8520478);
   VH_tagOnly_Sphericity__1141->SetBinContent(2,0.7413748);
   VH_tagOnly_Sphericity__1141->SetBinContent(3,0.3939502);
   VH_tagOnly_Sphericity__1141->SetBinContent(4,0.2533084);
   VH_tagOnly_Sphericity__1141->SetBinContent(5,0.1529731);
   VH_tagOnly_Sphericity__1141->SetBinContent(6,0.1094918);
   VH_tagOnly_Sphericity__1141->SetBinContent(7,0.03992604);
   VH_tagOnly_Sphericity__1141->SetBinContent(8,0.0239871);
   VH_tagOnly_Sphericity__1141->SetBinContent(9,0.01406715);
   VH_tagOnly_Sphericity__1141->SetBinContent(10,0.004757846);
   VH_tagOnly_Sphericity__1141->SetBinContent(11,0.007162931);
   VH_tagOnly_Sphericity__1141->SetBinContent(12,0.007214269);
   VH_tagOnly_Sphericity__1141->SetBinContent(13,0.006660923);
   VH_tagOnly_Sphericity__1141->SetBinContent(14,0.006003055);
   VH_tagOnly_Sphericity__1141->SetBinContent(15,0.00201504);
   VH_tagOnly_Sphericity__1141->SetBinContent(16,0.0008829348);
   VH_tagOnly_Sphericity__1141->SetBinContent(17,0.000865385);
   VH_tagOnly_Sphericity__1141->SetBinContent(18,0.0004514806);
   VH_tagOnly_Sphericity__1141->SetBinContent(20,0.0001434371);
   VH_tagOnly_Sphericity__1141->SetBinError(1,0.03562133);
   VH_tagOnly_Sphericity__1141->SetBinError(2,0.03253982);
   VH_tagOnly_Sphericity__1141->SetBinError(3,0.02411751);
   VH_tagOnly_Sphericity__1141->SetBinError(4,0.01921831);
   VH_tagOnly_Sphericity__1141->SetBinError(5,0.01551056);
   VH_tagOnly_Sphericity__1141->SetBinError(6,0.01342016);
   VH_tagOnly_Sphericity__1141->SetBinError(7,0.008142309);
   VH_tagOnly_Sphericity__1141->SetBinError(8,0.0058452);
   VH_tagOnly_Sphericity__1141->SetBinError(9,0.004971532);
   VH_tagOnly_Sphericity__1141->SetBinError(10,0.002329238);
   VH_tagOnly_Sphericity__1141->SetBinError(11,0.003004157);
   VH_tagOnly_Sphericity__1141->SetBinError(12,0.002881786);
   VH_tagOnly_Sphericity__1141->SetBinError(13,0.003448071);
   VH_tagOnly_Sphericity__1141->SetBinError(14,0.002928813);
   VH_tagOnly_Sphericity__1141->SetBinError(15,0.0008465274);
   VH_tagOnly_Sphericity__1141->SetBinError(16,0.0005159464);
   VH_tagOnly_Sphericity__1141->SetBinError(17,0.0005055334);
   VH_tagOnly_Sphericity__1141->SetBinError(18,0.0003249433);
   VH_tagOnly_Sphericity__1141->SetBinError(20,0.0001434371);
   VH_tagOnly_Sphericity__1141->SetEntries(3969);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1141->SetLineColor(ci);
   VH_tagOnly_Sphericity__1141->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1141->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1141->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1141->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1141->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1141->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1141->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1141->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1141->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1141->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1141->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1141->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1141->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1141->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1141->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagOnly_16->Modified();
   Sphericity_ZHcc_tagOnly_16->cd();
   Sphericity_ZHcc_tagOnly_16->SetSelected(Sphericity_ZHcc_tagOnly_16);
}
