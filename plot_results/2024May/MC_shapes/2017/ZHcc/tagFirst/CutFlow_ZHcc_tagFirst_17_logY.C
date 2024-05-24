#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHcc_tagFirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_ZHcc_tagFirst_17/CutFlow_ZHcc_tagFirst_17
//=========  (Thu May 23 15:31:42 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHcc_tagFirst_17 = new TCanvas("CutFlow_ZHcc_tagFirst_17", "CutFlow_ZHcc_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHcc_tagFirst_17->SetHighLightColor(2);
   CutFlow_ZHcc_tagFirst_17->Range(-1.2,-0.3362542,6.8,3.53841);
   CutFlow_ZHcc_tagFirst_17->SetFillColor(0);
   CutFlow_ZHcc_tagFirst_17->SetFillStyle(4000);
   CutFlow_ZHcc_tagFirst_17->SetBorderMode(0);
   CutFlow_ZHcc_tagFirst_17->SetBorderSize(2);
   CutFlow_ZHcc_tagFirst_17->SetLogy();
   CutFlow_ZHcc_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__2 = new TH1D("CutFlow_evt_tagFirst__2","",5,0,5);
   CutFlow_evt_tagFirst__2->SetBinContent(1,747.1275);
   CutFlow_evt_tagFirst__2->SetBinContent(2,746.2666);
   CutFlow_evt_tagFirst__2->SetBinContent(3,120.6981);
   CutFlow_evt_tagFirst__2->SetBinContent(4,7.441002);
   CutFlow_evt_tagFirst__2->SetBinContent(5,2.25031);
   CutFlow_evt_tagFirst__2->SetBinError(1,0.9370403);
   CutFlow_evt_tagFirst__2->SetBinError(2,0.936557);
   CutFlow_evt_tagFirst__2->SetBinError(3,0.3457938);
   CutFlow_evt_tagFirst__2->SetBinError(4,0.08318519);
   CutFlow_evt_tagFirst__2->SetBinError(5,0.04559057);
   CutFlow_evt_tagFirst__2->SetEntries(2265860);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__2->SetLineColor(ci);
   CutFlow_evt_tagFirst__2->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__2->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__2->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__2->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__2->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__2->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__2->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__2->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__2->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__2->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__2->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__2->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__2->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__2->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__2->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__2->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__2->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__2->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__2->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__2->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHcc_tagFirst_17->Modified();
   CutFlow_ZHcc_tagFirst_17->cd();
   CutFlow_ZHcc_tagFirst_17->SetSelected(CutFlow_ZHcc_tagFirst_17);
}
