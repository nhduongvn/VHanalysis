#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagOnly_2b1c_18/Aplanarity_WJets_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagOnly_2b1c_18 = new TCanvas("Aplanarity_WJets_tagOnly_2b1c_18", "Aplanarity_WJets_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_WJets_tagOnly_2b1c_18->Range(-0.2,-3611.179,1.133333,32500.61);
   Aplanarity_WJets_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_WJets_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_WJets_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_WJets_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_WJets_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WJets_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WJets_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3342 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3342","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(1,27513.74);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(2,3016.035);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(3,727.7723);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(4,250.1947);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(5,108.079);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(6,76.52506);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(7,29.64394);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(8,16.31423);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(9,3.142395);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(10,6.539532);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(11,1.053558);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(12,3.491903);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(13,0.1142568);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(14,0.1500469);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(15,0.03080756);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(16,0.4105738);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(17,0.2821414);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinContent(18,2.31318);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(1,301.5291);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(2,139.8336);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(3,49.15228);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(4,30.0909);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(5,20.55574);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(6,19.67951);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(7,5.815459);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(8,6.230667);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(9,1.058994);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(10,3.189119);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(11,0.4560255);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(12,1.847282);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(13,0.1142568);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(14,0.1289603);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(15,0.03080756);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(16,0.4105738);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(17,0.1996721);
   VH_tagOnly_2b1c_Aplanarity__3342->SetBinError(18,2.31318);
   VH_tagOnly_2b1c_Aplanarity__3342->SetEntries(93281);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3342->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3342->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3342->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3342->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3342->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3342->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3342->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3342->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3342->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3342->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3342->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3342->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3342->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3342->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3342->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3342->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagOnly_2b1c_18->Modified();
   Aplanarity_WJets_tagOnly_2b1c_18->cd();
   Aplanarity_WJets_tagOnly_2b1c_18->SetSelected(Aplanarity_WJets_tagOnly_2b1c_18);
}
