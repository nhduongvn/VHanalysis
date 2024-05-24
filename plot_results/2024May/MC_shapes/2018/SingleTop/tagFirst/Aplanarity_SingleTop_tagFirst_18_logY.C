#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagFirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagFirst_18/Aplanarity_SingleTop_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagFirst_18 = new TCanvas("Aplanarity_SingleTop_tagFirst_18", "Aplanarity_SingleTop_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagFirst_18->SetHighLightColor(2);
   Aplanarity_SingleTop_tagFirst_18->Range(-0.2,-1.896037,1.133333,5.51548);
   Aplanarity_SingleTop_tagFirst_18->SetFillColor(0);
   Aplanarity_SingleTop_tagFirst_18->SetFillStyle(4000);
   Aplanarity_SingleTop_tagFirst_18->SetBorderMode(0);
   Aplanarity_SingleTop_tagFirst_18->SetBorderSize(2);
   Aplanarity_SingleTop_tagFirst_18->SetLogy();
   Aplanarity_SingleTop_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__471 = new TH1D("VH_tagFirst_Aplanarity__471","",50,0,1);
   VH_tagFirst_Aplanarity__471->SetBinContent(1,31389.14);
   VH_tagFirst_Aplanarity__471->SetBinContent(2,4184.739);
   VH_tagFirst_Aplanarity__471->SetBinContent(3,1083.271);
   VH_tagFirst_Aplanarity__471->SetBinContent(4,410.2587);
   VH_tagFirst_Aplanarity__471->SetBinContent(5,165.2138);
   VH_tagFirst_Aplanarity__471->SetBinContent(6,73.78777);
   VH_tagFirst_Aplanarity__471->SetBinContent(7,46.90927);
   VH_tagFirst_Aplanarity__471->SetBinContent(8,31.76429);
   VH_tagFirst_Aplanarity__471->SetBinContent(9,13.49019);
   VH_tagFirst_Aplanarity__471->SetBinContent(10,5.540138);
   VH_tagFirst_Aplanarity__471->SetBinContent(11,3.454071);
   VH_tagFirst_Aplanarity__471->SetBinContent(12,4.18334);
   VH_tagFirst_Aplanarity__471->SetBinContent(13,2.60444);
   VH_tagFirst_Aplanarity__471->SetBinContent(14,1.555253);
   VH_tagFirst_Aplanarity__471->SetBinContent(15,0.5021663);
   VH_tagFirst_Aplanarity__471->SetBinContent(16,0.4570763);
   VH_tagFirst_Aplanarity__471->SetBinContent(17,0.6066017);
   VH_tagFirst_Aplanarity__471->SetBinContent(18,0.1400055);
   VH_tagFirst_Aplanarity__471->SetBinError(1,121.0597);
   VH_tagFirst_Aplanarity__471->SetBinError(2,42.8686);
   VH_tagFirst_Aplanarity__471->SetBinError(3,22.30151);
   VH_tagFirst_Aplanarity__471->SetBinError(4,13.13511);
   VH_tagFirst_Aplanarity__471->SetBinError(5,8.750551);
   VH_tagFirst_Aplanarity__471->SetBinError(6,5.310357);
   VH_tagFirst_Aplanarity__471->SetBinError(7,7.840543);
   VH_tagFirst_Aplanarity__471->SetBinError(8,4.655918);
   VH_tagFirst_Aplanarity__471->SetBinError(9,2.275773);
   VH_tagFirst_Aplanarity__471->SetBinError(10,1.028858);
   VH_tagFirst_Aplanarity__471->SetBinError(11,0.9585308);
   VH_tagFirst_Aplanarity__471->SetBinError(12,1.317746);
   VH_tagFirst_Aplanarity__471->SetBinError(13,0.8826849);
   VH_tagFirst_Aplanarity__471->SetBinError(14,0.6744158);
   VH_tagFirst_Aplanarity__471->SetBinError(15,0.3440735);
   VH_tagFirst_Aplanarity__471->SetBinError(16,0.32166);
   VH_tagFirst_Aplanarity__471->SetBinError(17,0.3534786);
   VH_tagFirst_Aplanarity__471->SetBinError(18,0.09080051);
   VH_tagFirst_Aplanarity__471->SetEntries(244394);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__471->SetLineColor(ci);
   VH_tagFirst_Aplanarity__471->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__471->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__471->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__471->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__471->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__471->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__471->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__471->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__471->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__471->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__471->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__471->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__471->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__471->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__471->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagFirst_18->Modified();
   Aplanarity_SingleTop_tagFirst_18->cd();
   Aplanarity_SingleTop_tagFirst_18->SetSelected(Aplanarity_SingleTop_tagFirst_18);
}
