#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_DHZfirst_2b1c_17/Aplanarity_SingleTop_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_SingleTop_DHZfirst_2b1c_17", "Aplanarity_SingleTop_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->Range(-0.2,-2.685449,1.133333,4.715925);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetLogy();
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4070 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4070","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(1,4991.585);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(2,693.349);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(3,159.4294);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(4,37.51964);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(5,11.90042);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(6,4.587026);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(7,1.437046);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(8,1.091449);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(9,0.241007);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(10,0.270091);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(11,0.06533938);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(13,0.2745353);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(16,0.02268393);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinContent(18,0.04348543);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(1,30.09951);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(2,11.02993);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(3,5.628251);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(4,2.630905);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(5,1.4935);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(6,1.051685);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(7,0.5147411);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(8,0.4802992);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(9,0.1075876);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(10,0.1123937);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(11,0.05399663);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(13,0.2345487);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(16,0.02268393);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetBinError(18,0.04348543);
   VH_DHZfirst_2b1c_Aplanarity__4070->SetEntries(83173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4070->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4070->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4070->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4070->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4070->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_DHZfirst_2b1c_17->Modified();
   Aplanarity_SingleTop_DHZfirst_2b1c_17->cd();
   Aplanarity_SingleTop_DHZfirst_2b1c_17->SetSelected(Aplanarity_SingleTop_DHZfirst_2b1c_17);
}
