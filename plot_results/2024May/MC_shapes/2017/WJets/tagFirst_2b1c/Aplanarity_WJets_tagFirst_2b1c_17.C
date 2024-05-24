#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagFirst_2b1c_17/Aplanarity_WJets_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagFirst_2b1c_17 = new TCanvas("Aplanarity_WJets_tagFirst_2b1c_17", "Aplanarity_WJets_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_WJets_tagFirst_2b1c_17->Range(-0.2,-1501.871,1.133333,13516.84);
   Aplanarity_WJets_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_WJets_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_WJets_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_WJets_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_WJets_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2621 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2621","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(1,11442.83);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(2,1308.336);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(3,307.7728);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(4,121.8109);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(5,50.76712);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(6,27.81457);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(7,20.57579);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(8,10.69985);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(9,3.449671);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(10,2.910472);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(11,1.25051);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(12,0.9656674);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(13,0.2516373);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(14,0.440381);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(15,0.1094519);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinContent(18,0.2801733);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(1,114.7617);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(2,43.26941);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(3,19.77059);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(4,12.78653);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(5,6.369043);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(6,5.761122);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(7,9.029551);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(8,3.174435);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(9,0.6576998);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(10,1.185691);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(11,0.3447892);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(12,0.3938211);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(13,0.1381383);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(14,0.3115227);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(15,0.06561658);
   VH_tagFirst_2b1c_Aplanarity__2621->SetBinError(18,0.2801733);
   VH_tagFirst_2b1c_Aplanarity__2621->SetEntries(88892);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2621->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2621->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2621->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2621->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2621->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2621->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2621->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2621->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2621->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2621->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2621->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2621->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2621->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2621->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2621->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2621->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagFirst_2b1c_17->Modified();
   Aplanarity_WJets_tagFirst_2b1c_17->cd();
   Aplanarity_WJets_tagFirst_2b1c_17->SetSelected(Aplanarity_WJets_tagFirst_2b1c_17);
}
