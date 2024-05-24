#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_tagFirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_ZHbb_tagFirst_18/CutFlow_ZHbb_tagFirst_18
//=========  (Thu May 23 15:31:42 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_tagFirst_18 = new TCanvas("CutFlow_ZHbb_tagFirst_18", "CutFlow_ZHbb_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_tagFirst_18->SetHighLightColor(2);
   CutFlow_ZHbb_tagFirst_18->Range(-1.2,1.563166,6.8,5.010392);
   CutFlow_ZHbb_tagFirst_18->SetFillColor(0);
   CutFlow_ZHbb_tagFirst_18->SetFillStyle(4000);
   CutFlow_ZHbb_tagFirst_18->SetBorderMode(0);
   CutFlow_ZHbb_tagFirst_18->SetBorderSize(2);
   CutFlow_ZHbb_tagFirst_18->SetLogy();
   CutFlow_ZHbb_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__6 = new TH1D("CutFlow_evt_tagFirst__6","",5,0,5);
   CutFlow_evt_tagFirst__6->SetBinContent(1,24441.09);
   CutFlow_evt_tagFirst__6->SetBinContent(2,24393.05);
   CutFlow_evt_tagFirst__6->SetBinContent(3,3668.176);
   CutFlow_evt_tagFirst__6->SetBinContent(4,795.1078);
   CutFlow_evt_tagFirst__6->SetBinContent(5,161.7777);
   CutFlow_evt_tagFirst__6->SetBinError(1,6.922378);
   CutFlow_evt_tagFirst__6->SetBinError(2,6.916404);
   CutFlow_evt_tagFirst__6->SetBinError(3,2.488204);
   CutFlow_evt_tagFirst__6->SetBinError(4,0.9919419);
   CutFlow_evt_tagFirst__6->SetBinError(5,0.4709111);
   CutFlow_evt_tagFirst__6->SetEntries(3.382443e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__6->SetLineColor(ci);
   CutFlow_evt_tagFirst__6->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__6->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__6->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__6->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__6->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__6->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__6->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__6->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__6->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__6->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__6->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__6->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__6->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__6->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__6->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__6->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__6->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__6->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__6->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__6->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_tagFirst_18->Modified();
   CutFlow_ZHbb_tagFirst_18->cd();
   CutFlow_ZHbb_tagFirst_18->SetSelected(CutFlow_ZHbb_tagFirst_18);
}
