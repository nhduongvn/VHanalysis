#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WW_DHZfirst_2b1c_16/Aplanarity_WW_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_WW_DHZfirst_2b1c_16", "Aplanarity_WW_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_WW_DHZfirst_2b1c_16->Range(-0.2,-1.510023,1.133333,2.114673);
   Aplanarity_WW_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_WW_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_WW_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_WW_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_WW_DHZfirst_2b1c_16->SetLogy();
   Aplanarity_WW_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WW_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WW_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4072 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4072","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinContent(1,29.8301);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinContent(2,3.497431);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinContent(3,0.4285683);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinContent(4,0.1665804);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinContent(6,0.142389);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinError(1,1.839246);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinError(2,0.6241189);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinError(3,0.2176939);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinError(4,0.1195847);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetBinError(6,0.142389);
   VH_DHZfirst_2b1c_Aplanarity__4072->SetEntries(314);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4072->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4072->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4072->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4072->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4072->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_DHZfirst_2b1c_16->Modified();
   Aplanarity_WW_DHZfirst_2b1c_16->cd();
   Aplanarity_WW_DHZfirst_2b1c_16->SetSelected(Aplanarity_WW_DHZfirst_2b1c_16);
}
