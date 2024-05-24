#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZHcc_DHZfirst_2b1c_16/Sphericity_ZHcc_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:24 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_DHZfirst_2b1c_16 = new TCanvas("Sphericity_ZHcc_DHZfirst_2b1c_16", "Sphericity_ZHcc_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_ZHcc_DHZfirst_2b1c_16->Range(-0.2,-4.35347,1.133333,0.4535871);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetLogy();
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4021 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4021","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(1,0.4958296);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(2,0.4121506);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(3,0.2245543);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(4,0.1727645);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(5,0.1142011);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(6,0.05949185);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(7,0.01514457);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(8,0.001698309);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(9,0.0008845559);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(10,0.0006539816);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinContent(13,0.0002680809);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(1,0.02736983);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(2,0.02407737);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(3,0.01798279);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(4,0.01636688);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(5,0.01404741);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(6,0.01021328);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(7,0.004447509);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(8,0.0007027695);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(9,0.0005119459);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(10,0.0004716123);
   VH_DHZfirst_2b1c_Sphericity__4021->SetBinError(13,0.0002680809);
   VH_DHZfirst_2b1c_Sphericity__4021->SetEntries(2172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4021->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4021->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4021->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4021->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4021->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4021->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4021->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4021->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4021->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4021->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4021->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4021->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4021->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4021->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4021->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4021->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_DHZfirst_2b1c_16->Modified();
   Sphericity_ZHcc_DHZfirst_2b1c_16->cd();
   Sphericity_ZHcc_DHZfirst_2b1c_16->SetSelected(Sphericity_ZHcc_DHZfirst_2b1c_16);
}
