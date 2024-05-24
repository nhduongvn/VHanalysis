#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_WW_DHZfirst_2b1c_17/Aplanarity_WW_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_WW_DHZfirst_2b1c_17", "Aplanarity_WW_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_WW_DHZfirst_2b1c_17->Range(-0.2,-1.220328,1.133333,1.856967);
   Aplanarity_WW_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_WW_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_WW_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_WW_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_WW_DHZfirst_2b1c_17->SetLogy();
   Aplanarity_WW_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4073 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4073","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4073->SetBinContent(1,18.69341);
   VH_DHZfirst_2b1c_Aplanarity__4073->SetBinContent(2,2.038778);
   VH_DHZfirst_2b1c_Aplanarity__4073->SetBinContent(3,0.2445861);
   VH_DHZfirst_2b1c_Aplanarity__4073->SetBinError(1,2.424249);
   VH_DHZfirst_2b1c_Aplanarity__4073->SetBinError(2,0.7412392);
   VH_DHZfirst_2b1c_Aplanarity__4073->SetBinError(3,0.2445861);
   VH_DHZfirst_2b1c_Aplanarity__4073->SetEntries(80);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4073->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4073->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4073->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4073->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4073->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_DHZfirst_2b1c_17->Modified();
   Aplanarity_WW_DHZfirst_2b1c_17->cd();
   Aplanarity_WW_DHZfirst_2b1c_17->SetSelected(Aplanarity_WW_DHZfirst_2b1c_17);
}
