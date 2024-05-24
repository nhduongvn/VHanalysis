#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_WZ_DHZfirst_17/Sphericity_WZ_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_DHZfirst_17 = new TCanvas("Sphericity_WZ_DHZfirst_17", "Sphericity_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_DHZfirst_17->SetHighLightColor(2);
   Sphericity_WZ_DHZfirst_17->Range(-0.2,-1.124309,1.133333,10.11878);
   Sphericity_WZ_DHZfirst_17->SetFillColor(0);
   Sphericity_WZ_DHZfirst_17->SetFillStyle(4000);
   Sphericity_WZ_DHZfirst_17->SetBorderMode(0);
   Sphericity_WZ_DHZfirst_17->SetBorderSize(2);
   Sphericity_WZ_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1886 = new TH1D("VH_DHZfirst_Sphericity__1886","",25,0,1);
   VH_DHZfirst_Sphericity__1886->SetBinContent(1,8.251946);
   VH_DHZfirst_Sphericity__1886->SetBinContent(2,8.566165);
   VH_DHZfirst_Sphericity__1886->SetBinContent(3,3.612789);
   VH_DHZfirst_Sphericity__1886->SetBinContent(4,2.353878);
   VH_DHZfirst_Sphericity__1886->SetBinContent(5,2.221117);
   VH_DHZfirst_Sphericity__1886->SetBinContent(6,1.411721);
   VH_DHZfirst_Sphericity__1886->SetBinContent(7,0.3440001);
   VH_DHZfirst_Sphericity__1886->SetBinError(1,1.968364);
   VH_DHZfirst_Sphericity__1886->SetBinError(2,1.577992);
   VH_DHZfirst_Sphericity__1886->SetBinError(3,1.134682);
   VH_DHZfirst_Sphericity__1886->SetBinError(4,0.9621069);
   VH_DHZfirst_Sphericity__1886->SetBinError(5,0.7516288);
   VH_DHZfirst_Sphericity__1886->SetBinError(6,0.6322535);
   VH_DHZfirst_Sphericity__1886->SetBinError(7,0.3440001);
   VH_DHZfirst_Sphericity__1886->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1886->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1886->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1886->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1886->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1886->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1886->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1886->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1886->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1886->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1886->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1886->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1886->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1886->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1886->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1886->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1886->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_DHZfirst_17->Modified();
   Sphericity_WZ_DHZfirst_17->cd();
   Sphericity_WZ_DHZfirst_17->SetSelected(Sphericity_WZ_DHZfirst_17);
}
