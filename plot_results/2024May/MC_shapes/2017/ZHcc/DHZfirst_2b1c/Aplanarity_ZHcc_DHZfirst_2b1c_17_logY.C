#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_DHZfirst_2b1c_17/Aplanarity_ZHcc_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_ZHcc_DHZfirst_2b1c_17", "Aplanarity_ZHcc_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->Range(-0.2,-4.678191,1.133333,0.8021516);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetLogy();
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4052 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4052","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinContent(1,0.9474763);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinContent(2,0.06085469);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinContent(3,0.007644565);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinContent(4,0.003157919);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinContent(5,0.0001482086);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinContent(7,0.0001815984);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinError(1,0.03227834);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinError(2,0.006941357);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinError(3,0.002197112);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinError(4,0.002053644);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinError(5,0.0001482086);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetBinError(7,0.0001815984);
   VH_DHZfirst_2b1c_Aplanarity__4052->SetEntries(2407);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4052->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4052->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4052->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4052->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4052->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_DHZfirst_2b1c_17->Modified();
   Aplanarity_ZHcc_DHZfirst_2b1c_17->cd();
   Aplanarity_ZHcc_DHZfirst_2b1c_17->SetSelected(Aplanarity_ZHcc_DHZfirst_2b1c_17);
}
