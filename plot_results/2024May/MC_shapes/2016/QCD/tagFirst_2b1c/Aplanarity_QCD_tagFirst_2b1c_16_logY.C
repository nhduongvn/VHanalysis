#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagFirst_2b1c_16/Aplanarity_QCD_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagFirst_2b1c_16 = new TCanvas("Aplanarity_QCD_tagFirst_2b1c_16", "Aplanarity_QCD_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagFirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_QCD_tagFirst_2b1c_16->Range(-0.2,-0.4374839,1.133333,7.925839);
   Aplanarity_QCD_tagFirst_2b1c_16->SetFillColor(0);
   Aplanarity_QCD_tagFirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_QCD_tagFirst_2b1c_16->SetBorderMode(0);
   Aplanarity_QCD_tagFirst_2b1c_16->SetBorderSize(2);
   Aplanarity_QCD_tagFirst_2b1c_16->SetLogy();
   Aplanarity_QCD_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_QCD_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_QCD_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2617 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2617","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(1,6485717);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(2,949913.9);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(3,234805.1);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(4,70206.97);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(5,25275.69);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(6,9832.275);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(7,5596.343);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(8,3401.69);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(9,2380.755);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(10,783.9182);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(11,587.5744);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(12,673.9387);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(13,450.5787);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(14,156.4985);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(15,82.96653);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(16,60.78722);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(17,20.20818);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(18,138.6947);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(19,22.29992);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinContent(20,5.01047);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(1,67074.07);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(2,29066.54);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(3,7994.218);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(4,4510.104);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(5,2345.872);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(6,1069.046);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(7,789.1218);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(8,585.8474);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(9,536.4498);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(10,187.9246);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(11,211.754);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(12,314.0485);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(13,212.931);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(14,49.27521);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(15,31.81038);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(16,29.27055);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(17,10.5452);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(18,138.6947);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(19,22.29992);
   VH_tagFirst_2b1c_Aplanarity__2617->SetBinError(20,5.01047);
   VH_tagFirst_2b1c_Aplanarity__2617->SetEntries(500989);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2617->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2617->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2617->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2617->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2617->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2617->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2617->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2617->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2617->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2617->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2617->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2617->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2617->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2617->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2617->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2617->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagFirst_2b1c_16->Modified();
   Aplanarity_QCD_tagFirst_2b1c_16->cd();
   Aplanarity_QCD_tagFirst_2b1c_16->SetSelected(Aplanarity_QCD_tagFirst_2b1c_16);
}
