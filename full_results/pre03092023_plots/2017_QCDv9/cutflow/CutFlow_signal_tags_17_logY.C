#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_tags_17_logY()
{
//=========Macro generated from canvas: CutFlow_signal_tags_17/CutFlow_signal_tags_17
//=========  (Thu Feb 16 12:44:09 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_tags_17 = new TCanvas("CutFlow_signal_tags_17", "CutFlow_signal_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_tags_17->SetHighLightColor(2);
   CutFlow_signal_tags_17->Range(-1,0.25496,5.666667,3.531713);
   CutFlow_signal_tags_17->SetFillColor(0);
   CutFlow_signal_tags_17->SetBorderMode(0);
   CutFlow_signal_tags_17->SetBorderSize(2);
   CutFlow_signal_tags_17->SetLogy();
   CutFlow_signal_tags_17->SetLeftMargin(0.15);
   CutFlow_signal_tags_17->SetFrameBorderMode(0);
   CutFlow_signal_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__7 = new TH1D("VbbHcc_tags_CutFlow__7","",5,0,5);
   VbbHcc_tags_CutFlow__7->SetBinContent(1,844.2846);
   VbbHcc_tags_CutFlow__7->SetBinContent(2,843.2789);
   VbbHcc_tags_CutFlow__7->SetBinContent(3,140.6181);
   VbbHcc_tags_CutFlow__7->SetBinContent(4,21.61578);
   VbbHcc_tags_CutFlow__7->SetBinContent(5,7.650068);
   VbbHcc_tags_CutFlow__7->SetBinError(1,1.126508);
   VbbHcc_tags_CutFlow__7->SetBinError(2,1.125928);
   VbbHcc_tags_CutFlow__7->SetBinError(3,0.4148543);
   VbbHcc_tags_CutFlow__7->SetBinError(4,0.1612303);
   VbbHcc_tags_CutFlow__7->SetBinError(5,0.09569297);
   VbbHcc_tags_CutFlow__7->SetEntries(2297894);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__7->SetLineColor(ci);
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__7->GetYaxis()->SetTitle("Events");
   VbbHcc_tags_CutFlow__7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__7->Draw("HIST");
   CutFlow_signal_tags_17->Modified();
   CutFlow_signal_tags_17->cd();
   CutFlow_signal_tags_17->SetSelected(CutFlow_signal_tags_17);
}
