#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagOnly_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagOnly_2b1c_17/Aplanarity_ZJets_tagOnly_2b1c_17
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagOnly_2b1c_17 = new TCanvas("Aplanarity_ZJets_tagOnly_2b1c_17", "Aplanarity_ZJets_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZJets_tagOnly_2b1c_17->Range(-0.2,-1.791248,1.133333,5.456189);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetLogy();
   Aplanarity_ZJets_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3344 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3344","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(1,28437.81);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(2,3186.072);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(3,758.5286);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(4,238.7194);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(5,93.42404);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(6,43.50855);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(7,20.27688);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(8,12.79217);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(9,7.92916);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(10,5.163026);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(11,4.575619);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(12,1.887177);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(13,0.9540451);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(14,0.5046627);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(15,0.6624928);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(16,0.4355512);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinContent(17,0.1716034);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(1,123.624);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(2,47.6661);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(3,24.83882);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(4,10.99132);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(5,5.227176);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(6,4.626353);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(7,2.265813);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(8,2.656665);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(9,1.41938);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(10,0.8375027);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(11,1.150443);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(12,0.4799793);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(13,0.3756333);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(14,0.2125511);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(15,0.2911978);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(16,0.2417722);
   VH_tagOnly_2b1c_Aplanarity__3344->SetBinError(17,0.09948488);
   VH_tagOnly_2b1c_Aplanarity__3344->SetEntries(237121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3344->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3344->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3344->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3344->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3344->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3344->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3344->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3344->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3344->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3344->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3344->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3344->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3344->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3344->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3344->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3344->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagOnly_2b1c_17->Modified();
   Aplanarity_ZJets_tagOnly_2b1c_17->cd();
   Aplanarity_ZJets_tagOnly_2b1c_17->SetSelected(Aplanarity_ZJets_tagOnly_2b1c_17);
}
