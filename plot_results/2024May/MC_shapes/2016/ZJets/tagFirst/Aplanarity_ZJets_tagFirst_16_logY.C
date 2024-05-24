#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagFirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagFirst_16/Aplanarity_ZJets_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagFirst_16 = new TCanvas("Aplanarity_ZJets_tagFirst_16", "Aplanarity_ZJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagFirst_16->SetHighLightColor(2);
   Aplanarity_ZJets_tagFirst_16->Range(-0.2,-1.829236,1.133333,5.168752);
   Aplanarity_ZJets_tagFirst_16->SetFillColor(0);
   Aplanarity_ZJets_tagFirst_16->SetFillStyle(4000);
   Aplanarity_ZJets_tagFirst_16->SetBorderMode(0);
   Aplanarity_ZJets_tagFirst_16->SetBorderSize(2);
   Aplanarity_ZJets_tagFirst_16->SetLogy();
   Aplanarity_ZJets_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__463 = new TH1D("VH_tagFirst_Aplanarity__463","",50,0,1);
   VH_tagFirst_Aplanarity__463->SetBinContent(1,15538.32);
   VH_tagFirst_Aplanarity__463->SetBinContent(2,1779.166);
   VH_tagFirst_Aplanarity__463->SetBinContent(3,460.5569);
   VH_tagFirst_Aplanarity__463->SetBinContent(4,147.6601);
   VH_tagFirst_Aplanarity__463->SetBinContent(5,58.56509);
   VH_tagFirst_Aplanarity__463->SetBinContent(6,26.61651);
   VH_tagFirst_Aplanarity__463->SetBinContent(7,16.50016);
   VH_tagFirst_Aplanarity__463->SetBinContent(8,8.661201);
   VH_tagFirst_Aplanarity__463->SetBinContent(9,3.373931);
   VH_tagFirst_Aplanarity__463->SetBinContent(10,8.077334);
   VH_tagFirst_Aplanarity__463->SetBinContent(11,2.109385);
   VH_tagFirst_Aplanarity__463->SetBinContent(12,1.712567);
   VH_tagFirst_Aplanarity__463->SetBinContent(13,0.6730252);
   VH_tagFirst_Aplanarity__463->SetBinContent(14,0.7635971);
   VH_tagFirst_Aplanarity__463->SetBinContent(15,0.1484544);
   VH_tagFirst_Aplanarity__463->SetBinContent(16,0.3193688);
   VH_tagFirst_Aplanarity__463->SetBinError(1,77.79424);
   VH_tagFirst_Aplanarity__463->SetBinError(2,30.83271);
   VH_tagFirst_Aplanarity__463->SetBinError(3,15.97579);
   VH_tagFirst_Aplanarity__463->SetBinError(4,8.997933);
   VH_tagFirst_Aplanarity__463->SetBinError(5,5.097577);
   VH_tagFirst_Aplanarity__463->SetBinError(6,2.526253);
   VH_tagFirst_Aplanarity__463->SetBinError(7,1.493713);
   VH_tagFirst_Aplanarity__463->SetBinError(8,1.038277);
   VH_tagFirst_Aplanarity__463->SetBinError(9,0.5516468);
   VH_tagFirst_Aplanarity__463->SetBinError(10,3.106046);
   VH_tagFirst_Aplanarity__463->SetBinError(11,0.4961649);
   VH_tagFirst_Aplanarity__463->SetBinError(12,0.4626165);
   VH_tagFirst_Aplanarity__463->SetBinError(13,0.2162553);
   VH_tagFirst_Aplanarity__463->SetBinError(14,0.3451599);
   VH_tagFirst_Aplanarity__463->SetBinError(15,0.1072434);
   VH_tagFirst_Aplanarity__463->SetBinError(16,0.2608187);
   VH_tagFirst_Aplanarity__463->SetEntries(170056);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__463->SetLineColor(ci);
   VH_tagFirst_Aplanarity__463->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__463->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__463->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__463->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__463->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__463->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__463->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__463->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__463->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__463->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__463->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__463->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__463->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__463->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__463->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagFirst_16->Modified();
   Aplanarity_ZJets_tagFirst_16->cd();
   Aplanarity_ZJets_tagFirst_16->SetSelected(Aplanarity_ZJets_tagFirst_16);
}
