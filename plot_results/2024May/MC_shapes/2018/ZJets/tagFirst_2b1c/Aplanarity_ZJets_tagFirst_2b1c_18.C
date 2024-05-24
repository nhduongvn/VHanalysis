#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagFirst_2b1c_18/Aplanarity_ZJets_tagFirst_2b1c_18
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagFirst_2b1c_18 = new TCanvas("Aplanarity_ZJets_tagFirst_2b1c_18", "Aplanarity_ZJets_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZJets_tagFirst_2b1c_18->Range(-0.2,-6305.373,1.133333,56748.35);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2625 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2625","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(1,48040.93);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(2,5373.662);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(3,1311.357);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(4,438.865);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(5,169.3535);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(6,82.74703);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(7,53.15363);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(8,27.13842);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(9,17.6433);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(10,10.19548);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(11,7.433861);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(12,9.664664);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(13,2.126987);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(14,0.9831457);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(15,0.7006854);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(16,0.5279843);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(17,0.9734695);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(18,1.523737);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinContent(19,0.2806584);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(1,224.1037);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(2,76.27106);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(3,33.05276);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(4,18.41396);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(5,9.560255);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(6,6.095203);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(7,13.7683);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(8,3.526257);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(9,2.560622);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(10,2.064617);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(11,1.738255);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(12,2.62258);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(13,0.5851132);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(14,0.4744783);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(15,0.3662196);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(16,0.2800723);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(17,0.9527153);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(18,1.373786);
   VH_tagFirst_2b1c_Aplanarity__2625->SetBinError(19,0.1988437);
   VH_tagFirst_2b1c_Aplanarity__2625->SetEntries(206013);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2625->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2625->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2625->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2625->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2625->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2625->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2625->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2625->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2625->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2625->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2625->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2625->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2625->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2625->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2625->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2625->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagFirst_2b1c_18->Modified();
   Aplanarity_ZJets_tagFirst_2b1c_18->cd();
   Aplanarity_ZJets_tagFirst_2b1c_18->SetSelected(Aplanarity_ZJets_tagFirst_2b1c_18);
}
