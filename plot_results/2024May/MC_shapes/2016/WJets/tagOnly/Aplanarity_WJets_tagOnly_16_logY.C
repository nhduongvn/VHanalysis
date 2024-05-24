#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagOnly_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagOnly_16/Aplanarity_WJets_tagOnly_16
//=========  (Thu May 23 20:48:42 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagOnly_16 = new TCanvas("Aplanarity_WJets_tagOnly_16", "Aplanarity_WJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagOnly_16->SetHighLightColor(2);
   Aplanarity_WJets_tagOnly_16->Range(-0.2,-4.988292,1.133333,5.245386);
   Aplanarity_WJets_tagOnly_16->SetFillColor(0);
   Aplanarity_WJets_tagOnly_16->SetFillStyle(4000);
   Aplanarity_WJets_tagOnly_16->SetBorderMode(0);
   Aplanarity_WJets_tagOnly_16->SetBorderSize(2);
   Aplanarity_WJets_tagOnly_16->SetLogy();
   Aplanarity_WJets_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_WJets_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_WJets_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1180 = new TH1D("VH_tagOnly_Aplanarity__1180","",50,0,1);
   VH_tagOnly_Aplanarity__1180->SetBinContent(1,8799.723);
   VH_tagOnly_Aplanarity__1180->SetBinContent(2,928.6712);
   VH_tagOnly_Aplanarity__1180->SetBinContent(3,262.2287);
   VH_tagOnly_Aplanarity__1180->SetBinContent(4,86.2511);
   VH_tagOnly_Aplanarity__1180->SetBinContent(5,29.00994);
   VH_tagOnly_Aplanarity__1180->SetBinContent(6,25.39478);
   VH_tagOnly_Aplanarity__1180->SetBinContent(7,21.92218);
   VH_tagOnly_Aplanarity__1180->SetBinContent(8,5.185014);
   VH_tagOnly_Aplanarity__1180->SetBinContent(9,2.242176);
   VH_tagOnly_Aplanarity__1180->SetBinContent(10,2.859935);
   VH_tagOnly_Aplanarity__1180->SetBinContent(11,0.8783151);
   VH_tagOnly_Aplanarity__1180->SetBinContent(12,1.242777);
   VH_tagOnly_Aplanarity__1180->SetBinContent(13,0.4085634);
   VH_tagOnly_Aplanarity__1180->SetBinContent(14,0.0002168231);
   VH_tagOnly_Aplanarity__1180->SetBinContent(15,0.1683859);
   VH_tagOnly_Aplanarity__1180->SetBinContent(20,0.1187145);
   VH_tagOnly_Aplanarity__1180->SetBinError(1,88.86118);
   VH_tagOnly_Aplanarity__1180->SetBinError(2,31.57783);
   VH_tagOnly_Aplanarity__1180->SetBinError(3,20.08597);
   VH_tagOnly_Aplanarity__1180->SetBinError(4,10.98317);
   VH_tagOnly_Aplanarity__1180->SetBinError(5,3.600347);
   VH_tagOnly_Aplanarity__1180->SetBinError(6,6.569492);
   VH_tagOnly_Aplanarity__1180->SetBinError(7,8.401952);
   VH_tagOnly_Aplanarity__1180->SetBinError(8,1.281614);
   VH_tagOnly_Aplanarity__1180->SetBinError(9,0.6117671);
   VH_tagOnly_Aplanarity__1180->SetBinError(10,1.504003);
   VH_tagOnly_Aplanarity__1180->SetBinError(11,0.2703185);
   VH_tagOnly_Aplanarity__1180->SetBinError(12,0.539585);
   VH_tagOnly_Aplanarity__1180->SetBinError(13,0.1913917);
   VH_tagOnly_Aplanarity__1180->SetBinError(14,0.0002168231);
   VH_tagOnly_Aplanarity__1180->SetBinError(15,0.1683859);
   VH_tagOnly_Aplanarity__1180->SetBinError(20,0.09043222);
   VH_tagOnly_Aplanarity__1180->SetEntries(110079);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1180->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1180->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1180->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1180->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1180->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1180->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1180->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1180->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1180->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1180->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1180->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1180->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1180->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1180->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1180->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1180->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagOnly_16->Modified();
   Aplanarity_WJets_tagOnly_16->cd();
   Aplanarity_WJets_tagOnly_16->SetSelected(Aplanarity_WJets_tagOnly_16);
}
