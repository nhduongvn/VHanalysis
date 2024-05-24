#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_WW_DHZfirst_2b1c_18/Aplanarity_WW_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:08 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_WW_DHZfirst_2b1c_18", "Aplanarity_WW_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_WW_DHZfirst_2b1c_18->Range(-0.2,-3.786261,1.133333,34.07634);
   Aplanarity_WW_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_WW_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_WW_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_WW_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_WW_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4074 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4074","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4074->SetBinContent(1,28.8477);
   VH_DHZfirst_2b1c_Aplanarity__4074->SetBinContent(2,2.576206);
   VH_DHZfirst_2b1c_Aplanarity__4074->SetBinContent(3,2.5769);
   VH_DHZfirst_2b1c_Aplanarity__4074->SetBinError(1,5.314666);
   VH_DHZfirst_2b1c_Aplanarity__4074->SetBinError(2,1.164041);
   VH_DHZfirst_2b1c_Aplanarity__4074->SetBinError(3,2.18403);
   VH_DHZfirst_2b1c_Aplanarity__4074->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4074->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4074->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4074->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4074->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4074->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_DHZfirst_2b1c_18->Modified();
   Aplanarity_WW_DHZfirst_2b1c_18->cd();
   Aplanarity_WW_DHZfirst_2b1c_18->SetSelected(Aplanarity_WW_DHZfirst_2b1c_18);
}
