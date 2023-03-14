#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_tags_17_logY()
{
//=========Macro generated from canvas: CutFlow_signal_tags_17/CutFlow_signal_tags_17
//=========  (Fri Mar 10 12:16:35 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_tags_17 = new TCanvas("CutFlow_signal_tags_17", "CutFlow_signal_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_tags_17->SetHighLightColor(2);
   CutFlow_signal_tags_17->Range(-1.4,1.241964,7.933333,3.422046);
   CutFlow_signal_tags_17->SetFillColor(0);
   CutFlow_signal_tags_17->SetBorderMode(0);
   CutFlow_signal_tags_17->SetBorderSize(2);
   CutFlow_signal_tags_17->SetLogy();
   CutFlow_signal_tags_17->SetLeftMargin(0.15);
   CutFlow_signal_tags_17->SetFrameBorderMode(0);
   CutFlow_signal_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__7 = new TH1D("VbbHcc_tags_CutFlow__7","",7,0,7);
   VbbHcc_tags_CutFlow__7->SetBinContent(1,844.2846);
   VbbHcc_tags_CutFlow__7->SetBinContent(2,843.2789);
   VbbHcc_tags_CutFlow__7->SetBinContent(3,140.6181);
   VbbHcc_tags_CutFlow__7->SetBinContent(4,117.7343);
   VbbHcc_tags_CutFlow__7->SetBinContent(5,67.51799);
   VbbHcc_tags_CutFlow__7->SetBinContent(6,66.91314);
   VbbHcc_tags_CutFlow__7->SetBinContent(7,57.67695);
   VbbHcc_tags_CutFlow__7->SetBinError(1,1.126508);
   VbbHcc_tags_CutFlow__7->SetBinError(2,1.125928);
   VbbHcc_tags_CutFlow__7->SetBinError(3,0.4148543);
   VbbHcc_tags_CutFlow__7->SetBinError(4,0.3795781);
   VbbHcc_tags_CutFlow__7->SetBinError(5,0.2870827);
   VbbHcc_tags_CutFlow__7->SetBinError(6,0.285806);
   VbbHcc_tags_CutFlow__7->SetBinError(7,0.2650661);
   VbbHcc_tags_CutFlow__7->SetEntries(2804948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__7->SetLineColor(ci);
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_tags_CutFlow__7->GetXaxis()->SetRange(1,7);
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
