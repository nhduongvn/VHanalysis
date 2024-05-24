#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagOnly_17/Sphericity_ZHcc_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagOnly_17 = new TCanvas("Sphericity_ZHcc_tagOnly_17", "Sphericity_ZHcc_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagOnly_17->SetHighLightColor(2);
   Sphericity_ZHcc_tagOnly_17->Range(-0.2,-0.09343555,1.133333,0.8409199);
   Sphericity_ZHcc_tagOnly_17->SetFillColor(0);
   Sphericity_ZHcc_tagOnly_17->SetFillStyle(4000);
   Sphericity_ZHcc_tagOnly_17->SetBorderMode(0);
   Sphericity_ZHcc_tagOnly_17->SetBorderSize(2);
   Sphericity_ZHcc_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1142 = new TH1D("VH_tagOnly_Sphericity__1142","",25,0,1);
   VH_tagOnly_Sphericity__1142->SetBinContent(1,0.7118898);
   VH_tagOnly_Sphericity__1142->SetBinContent(2,0.555182);
   VH_tagOnly_Sphericity__1142->SetBinContent(3,0.333338);
   VH_tagOnly_Sphericity__1142->SetBinContent(4,0.1975169);
   VH_tagOnly_Sphericity__1142->SetBinContent(5,0.1759402);
   VH_tagOnly_Sphericity__1142->SetBinContent(6,0.07244905);
   VH_tagOnly_Sphericity__1142->SetBinContent(7,0.02561279);
   VH_tagOnly_Sphericity__1142->SetBinContent(8,0.01646218);
   VH_tagOnly_Sphericity__1142->SetBinContent(9,0.01398675);
   VH_tagOnly_Sphericity__1142->SetBinContent(10,0.01356764);
   VH_tagOnly_Sphericity__1142->SetBinContent(11,0.01068535);
   VH_tagOnly_Sphericity__1142->SetBinContent(12,0.007461035);
   VH_tagOnly_Sphericity__1142->SetBinContent(13,0.002712979);
   VH_tagOnly_Sphericity__1142->SetBinContent(14,0.001762714);
   VH_tagOnly_Sphericity__1142->SetBinContent(15,0.003077927);
   VH_tagOnly_Sphericity__1142->SetBinContent(16,0.001691288);
   VH_tagOnly_Sphericity__1142->SetBinContent(17,0.00035949);
   VH_tagOnly_Sphericity__1142->SetBinContent(19,0.0003996589);
   VH_tagOnly_Sphericity__1142->SetBinError(1,0.02755633);
   VH_tagOnly_Sphericity__1142->SetBinError(2,0.02496205);
   VH_tagOnly_Sphericity__1142->SetBinError(3,0.01896189);
   VH_tagOnly_Sphericity__1142->SetBinError(4,0.01420743);
   VH_tagOnly_Sphericity__1142->SetBinError(5,0.01603279);
   VH_tagOnly_Sphericity__1142->SetBinError(6,0.008715365);
   VH_tagOnly_Sphericity__1142->SetBinError(7,0.005034206);
   VH_tagOnly_Sphericity__1142->SetBinError(8,0.003681044);
   VH_tagOnly_Sphericity__1142->SetBinError(9,0.003768707);
   VH_tagOnly_Sphericity__1142->SetBinError(10,0.003717689);
   VH_tagOnly_Sphericity__1142->SetBinError(11,0.003556583);
   VH_tagOnly_Sphericity__1142->SetBinError(12,0.002620824);
   VH_tagOnly_Sphericity__1142->SetBinError(13,0.001074493);
   VH_tagOnly_Sphericity__1142->SetBinError(14,0.0005525339);
   VH_tagOnly_Sphericity__1142->SetBinError(15,0.001466134);
   VH_tagOnly_Sphericity__1142->SetBinError(16,0.001128165);
   VH_tagOnly_Sphericity__1142->SetBinError(17,0.0002553456);
   VH_tagOnly_Sphericity__1142->SetBinError(19,0.0002834197);
   VH_tagOnly_Sphericity__1142->SetEntries(5132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1142->SetLineColor(ci);
   VH_tagOnly_Sphericity__1142->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1142->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1142->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1142->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1142->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1142->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1142->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1142->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1142->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1142->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1142->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1142->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1142->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1142->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1142->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagOnly_17->Modified();
   Sphericity_ZHcc_tagOnly_17->cd();
   Sphericity_ZHcc_tagOnly_17->SetSelected(Sphericity_ZHcc_tagOnly_17);
}
