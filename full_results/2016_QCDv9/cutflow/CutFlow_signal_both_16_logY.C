#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_both_16_logY()
{
//=========Macro generated from canvas: CutFlow_signal_both_16/CutFlow_signal_both_16
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_both_16 = new TCanvas("CutFlow_signal_both_16", "CutFlow_signal_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_both_16->SetHighLightColor(2);
   CutFlow_signal_both_16->Range(-0.8,0.08243977,4.533333,3.480085);
   CutFlow_signal_both_16->SetFillColor(0);
   CutFlow_signal_both_16->SetBorderMode(0);
   CutFlow_signal_both_16->SetBorderSize(2);
   CutFlow_signal_both_16->SetLogy();
   CutFlow_signal_both_16->SetLeftMargin(0.15);
   CutFlow_signal_both_16->SetFrameBorderMode(0);
   CutFlow_signal_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_CutFlow__5 = new TH1D("VbbHcc_both_CutFlow__5","",4,0,4);
   VbbHcc_both_CutFlow__5->SetBinContent(1,729.0745);
   VbbHcc_both_CutFlow__5->SetBinContent(2,728.4357);
   VbbHcc_both_CutFlow__5->SetBinContent(3,120.2642);
   VbbHcc_both_CutFlow__5->SetBinContent(4,5.287305);
   VbbHcc_both_CutFlow__5->SetBinError(1,1.376893);
   VbbHcc_both_CutFlow__5->SetBinError(2,1.376354);
   VbbHcc_both_CutFlow__5->SetBinError(3,0.504486);
   VbbHcc_both_CutFlow__5->SetBinError(4,0.1042274);
   VbbHcc_both_CutFlow__5->SetEntries(1127679);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_both_CutFlow__5->SetLineColor(ci);
   VbbHcc_both_CutFlow__5->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_both_CutFlow__5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow__5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow__5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow__5->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow__5->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow__5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__5->GetYaxis()->SetTitle("Events");
   VbbHcc_both_CutFlow__5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__5->Draw("HIST");
   CutFlow_signal_both_16->Modified();
   CutFlow_signal_both_16->cd();
   CutFlow_signal_both_16->SetSelected(CutFlow_signal_both_16);
}
