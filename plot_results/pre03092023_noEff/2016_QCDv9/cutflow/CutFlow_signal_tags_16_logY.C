#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_tags_16_logY()
{
//=========Macro generated from canvas: CutFlow_signal_tags_16/CutFlow_signal_tags_16
//=========  (Thu Feb 16 12:44:09 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_tags_16 = new TCanvas("CutFlow_signal_tags_16", "CutFlow_signal_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_tags_16->SetHighLightColor(2);
   CutFlow_signal_tags_16->Range(-1,0.07360939,5.666667,3.481067);
   CutFlow_signal_tags_16->SetFillColor(0);
   CutFlow_signal_tags_16->SetBorderMode(0);
   CutFlow_signal_tags_16->SetBorderSize(2);
   CutFlow_signal_tags_16->SetLogy();
   CutFlow_signal_tags_16->SetLeftMargin(0.15);
   CutFlow_signal_tags_16->SetFrameBorderMode(0);
   CutFlow_signal_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__1 = new TH1D("VbbHcc_tags_CutFlow__1","",5,0,5);
   VbbHcc_tags_CutFlow__1->SetBinContent(1,729.0745);
   VbbHcc_tags_CutFlow__1->SetBinContent(2,728.4357);
   VbbHcc_tags_CutFlow__1->SetBinContent(3,120.2642);
   VbbHcc_tags_CutFlow__1->SetBinContent(4,15.43508);
   VbbHcc_tags_CutFlow__1->SetBinContent(5,5.192603);
   VbbHcc_tags_CutFlow__1->SetBinError(1,1.376893);
   VbbHcc_tags_CutFlow__1->SetBinError(2,1.376354);
   VbbHcc_tags_CutFlow__1->SetBinError(3,0.504486);
   VbbHcc_tags_CutFlow__1->SetBinError(4,0.1787052);
   VbbHcc_tags_CutFlow__1->SetBinError(5,0.1033438);
   VbbHcc_tags_CutFlow__1->SetEntries(1144527);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__1->SetLineColor(ci);
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__1->GetYaxis()->SetTitle("Events");
   VbbHcc_tags_CutFlow__1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__1->Draw("HIST");
   CutFlow_signal_tags_16->Modified();
   CutFlow_signal_tags_16->cd();
   CutFlow_signal_tags_16->SetSelected(CutFlow_signal_tags_16);
}
