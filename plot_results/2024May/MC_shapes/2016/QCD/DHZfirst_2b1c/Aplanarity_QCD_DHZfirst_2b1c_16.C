#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_QCD_DHZfirst_2b1c_16/Aplanarity_QCD_DHZfirst_2b1c_16
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_QCD_DHZfirst_2b1c_16", "Aplanarity_QCD_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_QCD_DHZfirst_2b1c_16->Range(-0.2,-211327.8,1.133333,1901950);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4057 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4057","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(1,1610116);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(2,199103.1);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(3,58306.92);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(4,9770.271);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(5,1121.602);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(6,431.1543);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(7,50.82993);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(8,17.59661);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(9,6.578973);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(13,20.07859);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinContent(15,2.14949);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(1,32575.24);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(2,8033.563);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(3,15070.81);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(4,2140.646);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(5,463.3609);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(6,271.3605);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(7,26.38673);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(8,15.85268);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(9,6.578973);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(13,20.07859);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetBinError(15,2.14949);
   VH_DHZfirst_2b1c_Aplanarity__4057->SetEntries(91493);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4057->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4057->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4057->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4057->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4057->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_DHZfirst_2b1c_16->Modified();
   Aplanarity_QCD_DHZfirst_2b1c_16->cd();
   Aplanarity_QCD_DHZfirst_2b1c_16->SetSelected(Aplanarity_QCD_DHZfirst_2b1c_16);
}
