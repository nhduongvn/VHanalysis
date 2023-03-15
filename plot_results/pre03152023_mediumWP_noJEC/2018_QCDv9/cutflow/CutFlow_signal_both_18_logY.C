#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_both_18_logY()
{
//=========Macro generated from canvas: CutFlow_signal_both_18/CutFlow_signal_both_18
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_both_18 = new TCanvas("CutFlow_signal_both_18", "CutFlow_signal_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_both_18->SetHighLightColor(2);
   CutFlow_signal_both_18->Range(-0.8,0.3778736,4.533333,3.693273);
   CutFlow_signal_both_18->SetFillColor(0);
   CutFlow_signal_both_18->SetBorderMode(0);
   CutFlow_signal_both_18->SetBorderSize(2);
   CutFlow_signal_both_18->SetLogy();
   CutFlow_signal_both_18->SetLeftMargin(0.15);
   CutFlow_signal_both_18->SetFrameBorderMode(0);
   CutFlow_signal_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_CutFlow__17 = new TH1D("VbbHcc_both_CutFlow__17","",4,0,4);
   VbbHcc_both_CutFlow__17->SetBinContent(1,1213.904);
   VbbHcc_both_CutFlow__17->SetBinContent(2,1212.577);
   VbbHcc_both_CutFlow__17->SetBinContent(3,201.2428);
   VbbHcc_both_CutFlow__17->SetBinContent(4,10.24339);
   VbbHcc_both_CutFlow__17->SetBinError(1,1.622031);
   VbbHcc_both_CutFlow__17->SetBinError(2,1.621236);
   VbbHcc_both_CutFlow__17->SetBinError(3,0.5950591);
   VbbHcc_both_CutFlow__17->SetBinError(4,0.1329614);
   VbbHcc_both_CutFlow__17->SetEntries(2250857);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_both_CutFlow__17->SetLineColor(ci);
   VbbHcc_both_CutFlow__17->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_both_CutFlow__17->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow__17->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow__17->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow__17->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow__17->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow__17->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__17->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__17->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__17->GetYaxis()->SetTitle("Events");
   VbbHcc_both_CutFlow__17->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__17->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__17->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__17->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__17->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__17->Draw("HIST");
   CutFlow_signal_both_18->Modified();
   CutFlow_signal_both_18->cd();
   CutFlow_signal_both_18->SetSelected(CutFlow_signal_both_18);
}
