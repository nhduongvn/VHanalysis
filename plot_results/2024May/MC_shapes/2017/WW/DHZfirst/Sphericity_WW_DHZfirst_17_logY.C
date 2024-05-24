#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Sphericity_WW_DHZfirst_17/Sphericity_WW_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_DHZfirst_17 = new TCanvas("Sphericity_WW_DHZfirst_17", "Sphericity_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_DHZfirst_17->SetHighLightColor(2);
   Sphericity_WW_DHZfirst_17->Range(-0.2,-1.188317,1.133333,0.7553102);
   Sphericity_WW_DHZfirst_17->SetFillColor(0);
   Sphericity_WW_DHZfirst_17->SetFillStyle(4000);
   Sphericity_WW_DHZfirst_17->SetBorderMode(0);
   Sphericity_WW_DHZfirst_17->SetBorderSize(2);
   Sphericity_WW_DHZfirst_17->SetLogy();
   Sphericity_WW_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1883 = new TH1D("VH_DHZfirst_Sphericity__1883","",25,0,1);
   VH_DHZfirst_Sphericity__1883->SetBinContent(1,1.916184);
   VH_DHZfirst_Sphericity__1883->SetBinContent(2,1.92043);
   VH_DHZfirst_Sphericity__1883->SetBinContent(3,0.2028034);
   VH_DHZfirst_Sphericity__1883->SetBinError(1,0.760186);
   VH_DHZfirst_Sphericity__1883->SetBinError(2,0.8404064);
   VH_DHZfirst_Sphericity__1883->SetBinError(3,0.2028034);
   VH_DHZfirst_Sphericity__1883->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1883->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1883->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1883->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1883->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1883->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1883->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1883->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1883->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1883->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1883->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1883->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1883->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1883->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1883->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1883->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1883->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_DHZfirst_17->Modified();
   Sphericity_WW_DHZfirst_17->cd();
   Sphericity_WW_DHZfirst_17->SetSelected(Sphericity_WW_DHZfirst_17);
}
