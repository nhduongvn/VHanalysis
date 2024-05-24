#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagOnly_2b1c_16/Aplanarity_ZJets_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagOnly_2b1c_16 = new TCanvas("Aplanarity_ZJets_tagOnly_2b1c_16", "Aplanarity_ZJets_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZJets_tagOnly_2b1c_16->Range(-0.2,-2.383055,1.133333,5.805139);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetFillColor(0);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetBorderMode(0);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetBorderSize(2);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetLogy();
   Aplanarity_ZJets_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3343 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3343","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(1,51141.17);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(2,6008.818);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(3,1392.189);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(4,415.9331);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(5,153.2484);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(6,65.77351);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(7,41.95416);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(8,19.03191);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(9,8.877665);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(10,11.93211);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(11,4.615069);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(12,3.213518);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(13,1.825571);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(14,1.599795);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(15,0.6890027);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(16,0.9477036);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(17,0.05454994);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(18,0.0862457);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinContent(20,0.2519069);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(1,156.8453);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(2,63.22176);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(3,30.63665);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(4,16.13287);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(5,9.236188);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(6,3.903131);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(7,4.701733);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(8,1.568843);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(9,1.04902);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(10,3.183883);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(11,0.8013057);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(12,0.641039);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(13,0.4326143);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(14,0.4768114);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(15,0.2550854);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(16,0.4018407);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(17,0.05454994);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(18,0.0862457);
   VH_tagOnly_2b1c_Aplanarity__3343->SetBinError(20,0.2519069);
   VH_tagOnly_2b1c_Aplanarity__3343->SetEntries(498402);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3343->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3343->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3343->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3343->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3343->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3343->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3343->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3343->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3343->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3343->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3343->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3343->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3343->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3343->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3343->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3343->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagOnly_2b1c_16->Modified();
   Aplanarity_ZJets_tagOnly_2b1c_16->cd();
   Aplanarity_ZJets_tagOnly_2b1c_16->SetSelected(Aplanarity_ZJets_tagOnly_2b1c_16);
}
