#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_tags_18_logY()
{
//=========Macro generated from canvas: CutFlow_signal_tags_18/CutFlow_signal_tags_18
//=========  (Fri Mar 10 12:16:36 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_tags_18 = new TCanvas("CutFlow_signal_tags_18", "CutFlow_signal_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_tags_18->SetHighLightColor(2);
   CutFlow_signal_tags_18->Range(-1.4,1.381075,7.933333,3.581807);
   CutFlow_signal_tags_18->SetFillColor(0);
   CutFlow_signal_tags_18->SetBorderMode(0);
   CutFlow_signal_tags_18->SetBorderSize(2);
   CutFlow_signal_tags_18->SetLogy();
   CutFlow_signal_tags_18->SetLeftMargin(0.15);
   CutFlow_signal_tags_18->SetFrameBorderMode(0);
   CutFlow_signal_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__13 = new TH1D("VbbHcc_tags_CutFlow__13","",7,0,7);
   VbbHcc_tags_CutFlow__13->SetBinContent(1,1213.904);
   VbbHcc_tags_CutFlow__13->SetBinContent(2,1212.577);
   VbbHcc_tags_CutFlow__13->SetBinContent(3,201.2428);
   VbbHcc_tags_CutFlow__13->SetBinContent(4,166.652);
   VbbHcc_tags_CutFlow__13->SetBinContent(5,93.30161);
   VbbHcc_tags_CutFlow__13->SetBinContent(6,92.40615);
   VbbHcc_tags_CutFlow__13->SetBinContent(7,79.83216);
   VbbHcc_tags_CutFlow__13->SetBinError(1,1.622031);
   VbbHcc_tags_CutFlow__13->SetBinError(2,1.621236);
   VbbHcc_tags_CutFlow__13->SetBinError(3,0.5950591);
   VbbHcc_tags_CutFlow__13->SetBinError(4,0.5417951);
   VbbHcc_tags_CutFlow__13->SetBinError(5,0.4047665);
   VbbHcc_tags_CutFlow__13->SetBinError(6,0.4028327);
   VbbHcc_tags_CutFlow__13->SetBinError(7,0.374061);
   VbbHcc_tags_CutFlow__13->SetEntries(2778778);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__13->SetLineColor(ci);
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetRange(1,7);
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__13->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__13->GetYaxis()->SetTitle("Events");
   VbbHcc_tags_CutFlow__13->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__13->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__13->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__13->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__13->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__13->Draw("HIST");
   CutFlow_signal_tags_18->Modified();
   CutFlow_signal_tags_18->cd();
   CutFlow_signal_tags_18->SetSelected(CutFlow_signal_tags_18);
}
