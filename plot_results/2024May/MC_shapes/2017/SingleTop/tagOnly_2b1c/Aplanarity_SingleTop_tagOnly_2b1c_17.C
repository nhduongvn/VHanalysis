#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagOnly_2b1c_17/Aplanarity_SingleTop_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagOnly_2b1c_17 = new TCanvas("Aplanarity_SingleTop_tagOnly_2b1c_17", "Aplanarity_SingleTop_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_SingleTop_tagOnly_2b1c_17->Range(-0.2,-4251.781,1.133333,38266.03);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3350 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3350","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(0,0.02927078);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(1,32394.52);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(2,4515.481);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(3,1141.356);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(4,360.3772);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(5,142.8653);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(6,65.83908);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(7,42.27489);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(8,23.75502);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(9,10.73198);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(10,7.428093);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(11,5.63804);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(12,3.72733);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(13,3.496882);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(14,1.381251);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(15,0.3830897);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(16,0.2510941);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(17,0.4946338);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(18,0.521713);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinContent(19,0.1874799);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(0,0.02927078);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(1,78.20512);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(2,28.92547);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(3,14.74107);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(4,8.476454);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(5,5.160901);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(6,3.573995);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(7,3.244629);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(8,1.974984);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(9,1.314369);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(10,1.158125);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(11,1.179912);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(12,0.9133147);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(13,1.150776);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(14,0.5196861);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(15,0.2383154);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(16,0.1239818);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(17,0.2984638);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(18,0.4094651);
   VH_tagOnly_2b1c_Aplanarity__3350->SetBinError(19,0.1874799);
   VH_tagOnly_2b1c_Aplanarity__3350->SetEntries(531050);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3350->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3350->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3350->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3350->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3350->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3350->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3350->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3350->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3350->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3350->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3350->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3350->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3350->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3350->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3350->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3350->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagOnly_2b1c_17->Modified();
   Aplanarity_SingleTop_tagOnly_2b1c_17->cd();
   Aplanarity_SingleTop_tagOnly_2b1c_17->SetSelected(Aplanarity_SingleTop_tagOnly_2b1c_17);
}
