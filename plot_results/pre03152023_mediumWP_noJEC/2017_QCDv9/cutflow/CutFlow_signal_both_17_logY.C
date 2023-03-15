#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_both_17_logY()
{
//=========Macro generated from canvas: CutFlow_signal_both_17/CutFlow_signal_both_17
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_both_17 = new TCanvas("CutFlow_signal_both_17", "CutFlow_signal_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_both_17->SetHighLightColor(2);
   CutFlow_signal_both_17->Range(-0.8,0.2651131,4.533333,3.530585);
   CutFlow_signal_both_17->SetFillColor(0);
   CutFlow_signal_both_17->SetBorderMode(0);
   CutFlow_signal_both_17->SetBorderSize(2);
   CutFlow_signal_both_17->SetLogy();
   CutFlow_signal_both_17->SetLeftMargin(0.15);
   CutFlow_signal_both_17->SetFrameBorderMode(0);
   CutFlow_signal_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_CutFlow__11 = new TH1D("VbbHcc_both_CutFlow__11","",4,0,4);
   VbbHcc_both_CutFlow__11->SetBinContent(1,844.2846);
   VbbHcc_both_CutFlow__11->SetBinContent(2,843.2789);
   VbbHcc_both_CutFlow__11->SetBinContent(3,140.6181);
   VbbHcc_both_CutFlow__11->SetBinContent(4,7.810706);
   VbbHcc_both_CutFlow__11->SetBinError(1,1.126508);
   VbbHcc_both_CutFlow__11->SetBinError(2,1.125928);
   VbbHcc_both_CutFlow__11->SetBinError(3,0.4148543);
   VbbHcc_both_CutFlow__11->SetBinError(4,0.09659963);
   VbbHcc_both_CutFlow__11->SetEntries(2257834);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_both_CutFlow__11->SetLineColor(ci);
   VbbHcc_both_CutFlow__11->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_both_CutFlow__11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow__11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow__11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow__11->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow__11->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow__11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__11->GetYaxis()->SetTitle("Events");
   VbbHcc_both_CutFlow__11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__11->Draw("HIST");
   CutFlow_signal_both_17->Modified();
   CutFlow_signal_both_17->cd();
   CutFlow_signal_both_17->SetSelected(CutFlow_signal_both_17);
}
