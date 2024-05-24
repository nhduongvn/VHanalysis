#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_QCD_DHZfirst_2b1c_18/Sphericity_QCD_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_DHZfirst_2b1c_18 = new TCanvas("Sphericity_QCD_DHZfirst_2b1c_18", "Sphericity_QCD_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_DHZfirst_2b1c_18->SetHighLightColor(2);
   Sphericity_QCD_DHZfirst_2b1c_18->Range(-0.2,-78038.51,1.133333,702346.5);
   Sphericity_QCD_DHZfirst_2b1c_18->SetFillColor(0);
   Sphericity_QCD_DHZfirst_2b1c_18->SetFillStyle(4000);
   Sphericity_QCD_DHZfirst_2b1c_18->SetBorderMode(0);
   Sphericity_QCD_DHZfirst_2b1c_18->SetBorderSize(2);
   Sphericity_QCD_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_QCD_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_QCD_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4029 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4029","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(1,594579.1);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(2,542158.1);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(3,285313.4);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(4,164546.5);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(5,73526.79);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(6,31887.03);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(7,12908.65);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(8,1651.382);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(9,984.8149);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(10,324.8493);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(11,251.4677);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(12,1187.388);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(13,38.12395);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(14,48.34842);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(15,114.2711);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(16,21.6851);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(17,582.6513);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinContent(18,12.16667);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(1,18733.68);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(2,17325.2);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(3,11169.53);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(4,8443.865);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(5,5194.449);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(6,3736.275);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(7,5037.884);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(8,521.2106);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(9,451.2537);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(10,100.6335);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(11,121.8478);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(12,1068.1);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(13,20.04713);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(14,28.18505);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(15,80.84148);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(16,21.6851);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(17,574.6284);
   VH_DHZfirst_2b1c_Sphericity__4029->SetBinError(18,12.16667);
   VH_DHZfirst_2b1c_Sphericity__4029->SetEntries(45796);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4029->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4029->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4029->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4029->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4029->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4029->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4029->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4029->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4029->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4029->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4029->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4029->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4029->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4029->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4029->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4029->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_DHZfirst_2b1c_18->Modified();
   Sphericity_QCD_DHZfirst_2b1c_18->cd();
   Sphericity_QCD_DHZfirst_2b1c_18->SetSelected(Sphericity_QCD_DHZfirst_2b1c_18);
}
