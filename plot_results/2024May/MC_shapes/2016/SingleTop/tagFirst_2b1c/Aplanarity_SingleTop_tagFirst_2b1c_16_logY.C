#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagFirst_2b1c_16/Aplanarity_SingleTop_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagFirst_2b1c_16 = new TCanvas("Aplanarity_SingleTop_tagFirst_2b1c_16", "Aplanarity_SingleTop_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_SingleTop_tagFirst_2b1c_16->Range(-0.2,-2.158735,1.133333,5.750511);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetFillColor(0);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetBorderMode(0);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetBorderSize(2);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetLogy();
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2629 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2629","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(1,48088.13);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(2,6986.834);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(3,1801.333);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(4,601.3611);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(5,237.3373);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(6,120.1902);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(7,63.85168);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(8,34.79556);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(9,23.92874);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(10,14.06689);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(11,8.295927);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(12,5.77341);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(13,3.367732);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(14,2.433819);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(15,1.59608);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(16,0.7706706);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(17,0.1106258);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(18,1.031695);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(19,0.08574707);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinContent(20,0.3759491);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(1,77.99324);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(2,29.28989);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(3,15.11879);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(4,8.785021);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(5,5.590208);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(6,4.094178);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(7,2.989467);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(8,2.134856);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(9,1.944927);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(10,1.360589);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(11,1.051022);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(12,0.8927193);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(13,0.6119979);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(14,0.532651);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(15,0.516102);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(16,0.3258619);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(17,0.06493686);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(18,0.4899935);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(19,0.05220868);
   VH_tagFirst_2b1c_Aplanarity__2629->SetBinError(20,0.3071843);
   VH_tagFirst_2b1c_Aplanarity__2629->SetEntries(1010893);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2629->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2629->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2629->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2629->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2629->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2629->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2629->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2629->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2629->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2629->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2629->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2629->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2629->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2629->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2629->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2629->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagFirst_2b1c_16->Modified();
   Aplanarity_SingleTop_tagFirst_2b1c_16->cd();
   Aplanarity_SingleTop_tagFirst_2b1c_16->SetSelected(Aplanarity_SingleTop_tagFirst_2b1c_16);
}
