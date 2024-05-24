#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WW_tagFirst_2b1c_16/Aplanarity_WW_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagFirst_2b1c_16 = new TCanvas("Aplanarity_WW_tagFirst_2b1c_16", "Aplanarity_WW_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagFirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_WW_tagFirst_2b1c_16->Range(-0.2,-1.663451,1.133333,3.052825);
   Aplanarity_WW_tagFirst_2b1c_16->SetFillColor(0);
   Aplanarity_WW_tagFirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_WW_tagFirst_2b1c_16->SetBorderMode(0);
   Aplanarity_WW_tagFirst_2b1c_16->SetBorderSize(2);
   Aplanarity_WW_tagFirst_2b1c_16->SetLogy();
   Aplanarity_WW_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WW_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WW_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2632 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2632","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinContent(1,201.2094);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinContent(2,22.95615);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinContent(3,6.458426);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinContent(4,1.924202);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinContent(5,1.231779);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinContent(6,0.4695769);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinContent(7,0.3696004);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinContent(9,0.1285898);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinError(1,4.820761);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinError(2,1.601662);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinError(3,0.8321213);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinError(4,0.4638183);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinError(5,0.3792601);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinError(6,0.2142399);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinError(7,0.1897757);
   VH_tagFirst_2b1c_Aplanarity__2632->SetBinError(9,0.1285898);
   VH_tagFirst_2b1c_Aplanarity__2632->SetEntries(2141);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2632->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2632->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2632->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2632->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2632->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2632->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2632->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2632->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2632->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2632->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2632->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2632->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2632->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2632->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2632->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2632->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagFirst_2b1c_16->Modified();
   Aplanarity_WW_tagFirst_2b1c_16->cd();
   Aplanarity_WW_tagFirst_2b1c_16->SetSelected(Aplanarity_WW_tagFirst_2b1c_16);
}
