#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZHcc_DHZfirst_16/Sphericity_ZHcc_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_DHZfirst_16 = new TCanvas("Sphericity_ZHcc_DHZfirst_16", "Sphericity_ZHcc_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_DHZfirst_16->SetHighLightColor(2);
   Sphericity_ZHcc_DHZfirst_16->Range(-0.2,-3.910791,1.133333,-0.05948582);
   Sphericity_ZHcc_DHZfirst_16->SetFillColor(0);
   Sphericity_ZHcc_DHZfirst_16->SetFillStyle(4000);
   Sphericity_ZHcc_DHZfirst_16->SetBorderMode(0);
   Sphericity_ZHcc_DHZfirst_16->SetBorderSize(2);
   Sphericity_ZHcc_DHZfirst_16->SetLogy();
   Sphericity_ZHcc_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_ZHcc_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_ZHcc_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1861 = new TH1D("VH_DHZfirst_Sphericity__1861","",25,0,1);
   VH_DHZfirst_Sphericity__1861->SetBinContent(1,0.1895984);
   VH_DHZfirst_Sphericity__1861->SetBinContent(2,0.1631499);
   VH_DHZfirst_Sphericity__1861->SetBinContent(3,0.0801874);
   VH_DHZfirst_Sphericity__1861->SetBinContent(4,0.0678053);
   VH_DHZfirst_Sphericity__1861->SetBinContent(5,0.04741923);
   VH_DHZfirst_Sphericity__1861->SetBinContent(6,0.03061973);
   VH_DHZfirst_Sphericity__1861->SetBinContent(7,0.004632149);
   VH_DHZfirst_Sphericity__1861->SetBinContent(8,0.0005961694);
   VH_DHZfirst_Sphericity__1861->SetBinError(1,0.01716154);
   VH_DHZfirst_Sphericity__1861->SetBinError(2,0.01511801);
   VH_DHZfirst_Sphericity__1861->SetBinError(3,0.01083405);
   VH_DHZfirst_Sphericity__1861->SetBinError(4,0.01011325);
   VH_DHZfirst_Sphericity__1861->SetBinError(5,0.009197546);
   VH_DHZfirst_Sphericity__1861->SetBinError(6,0.007345236);
   VH_DHZfirst_Sphericity__1861->SetBinError(7,0.002456179);
   VH_DHZfirst_Sphericity__1861->SetBinError(8,0.0004245717);
   VH_DHZfirst_Sphericity__1861->SetEntries(813);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1861->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1861->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1861->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1861->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1861->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1861->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1861->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1861->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1861->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1861->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1861->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1861->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1861->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1861->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1861->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1861->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_DHZfirst_16->Modified();
   Sphericity_ZHcc_DHZfirst_16->cd();
   Sphericity_ZHcc_DHZfirst_16->SetSelected(Sphericity_ZHcc_DHZfirst_16);
}
