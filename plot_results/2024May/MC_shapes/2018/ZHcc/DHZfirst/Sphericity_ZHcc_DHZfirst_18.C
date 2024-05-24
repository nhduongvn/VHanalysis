#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_ZHcc_DHZfirst_18/Sphericity_ZHcc_DHZfirst_18
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_DHZfirst_18 = new TCanvas("Sphericity_ZHcc_DHZfirst_18", "Sphericity_ZHcc_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_DHZfirst_18->SetHighLightColor(2);
   Sphericity_ZHcc_DHZfirst_18->Range(-0.2,-0.03649616,1.133333,0.3284654);
   Sphericity_ZHcc_DHZfirst_18->SetFillColor(0);
   Sphericity_ZHcc_DHZfirst_18->SetFillStyle(4000);
   Sphericity_ZHcc_DHZfirst_18->SetBorderMode(0);
   Sphericity_ZHcc_DHZfirst_18->SetBorderSize(2);
   Sphericity_ZHcc_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1863 = new TH1D("VH_DHZfirst_Sphericity__1863","",25,0,1);
   VH_DHZfirst_Sphericity__1863->SetBinContent(1,0.278066);
   VH_DHZfirst_Sphericity__1863->SetBinContent(2,0.2652845);
   VH_DHZfirst_Sphericity__1863->SetBinContent(3,0.09570753);
   VH_DHZfirst_Sphericity__1863->SetBinContent(4,0.1028577);
   VH_DHZfirst_Sphericity__1863->SetBinContent(5,0.06903215);
   VH_DHZfirst_Sphericity__1863->SetBinContent(6,0.03022101);
   VH_DHZfirst_Sphericity__1863->SetBinContent(7,0.01232209);
   VH_DHZfirst_Sphericity__1863->SetBinContent(8,0.0003284004);
   VH_DHZfirst_Sphericity__1863->SetBinContent(10,0.0007395573);
   VH_DHZfirst_Sphericity__1863->SetBinError(1,0.02455659);
   VH_DHZfirst_Sphericity__1863->SetBinError(2,0.0260021);
   VH_DHZfirst_Sphericity__1863->SetBinError(3,0.01351354);
   VH_DHZfirst_Sphericity__1863->SetBinError(4,0.01571005);
   VH_DHZfirst_Sphericity__1863->SetBinError(5,0.01337996);
   VH_DHZfirst_Sphericity__1863->SetBinError(6,0.007845087);
   VH_DHZfirst_Sphericity__1863->SetBinError(7,0.009874101);
   VH_DHZfirst_Sphericity__1863->SetBinError(8,0.0003284004);
   VH_DHZfirst_Sphericity__1863->SetBinError(10,0.000527557);
   VH_DHZfirst_Sphericity__1863->SetEntries(830);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1863->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1863->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1863->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1863->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1863->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1863->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1863->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1863->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1863->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1863->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1863->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1863->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1863->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1863->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1863->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1863->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_DHZfirst_18->Modified();
   Sphericity_ZHcc_DHZfirst_18->cd();
   Sphericity_ZHcc_DHZfirst_18->SetSelected(Sphericity_ZHcc_DHZfirst_18);
}
