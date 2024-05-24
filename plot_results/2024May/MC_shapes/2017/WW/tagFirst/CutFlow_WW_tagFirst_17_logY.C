#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WW_tagFirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_WW_tagFirst_17/CutFlow_WW_tagFirst_17
//=========  (Thu May 23 15:31:42 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WW_tagFirst_17 = new TCanvas("CutFlow_WW_tagFirst_17", "CutFlow_WW_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WW_tagFirst_17->SetHighLightColor(2);
   CutFlow_WW_tagFirst_17->Range(-1.2,0.7713607,6.8,7.600134);
   CutFlow_WW_tagFirst_17->SetFillColor(0);
   CutFlow_WW_tagFirst_17->SetFillStyle(4000);
   CutFlow_WW_tagFirst_17->SetBorderMode(0);
   CutFlow_WW_tagFirst_17->SetBorderSize(2);
   CutFlow_WW_tagFirst_17->SetLogy();
   CutFlow_WW_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_WW_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_WW_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_WW_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_WW_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__23 = new TH1D("CutFlow_evt_tagFirst__23","",5,0,5);
   CutFlow_evt_tagFirst__23->SetBinContent(1,4362225);
   CutFlow_evt_tagFirst__23->SetBinContent(2,4291043);
   CutFlow_evt_tagFirst__23->SetBinContent(3,87272.12);
   CutFlow_evt_tagFirst__23->SetBinContent(4,608.8253);
   CutFlow_evt_tagFirst__23->SetBinContent(5,56.92042);
   CutFlow_evt_tagFirst__23->SetBinError(1,1103.248);
   CutFlow_evt_tagFirst__23->SetBinError(2,1094.209);
   CutFlow_evt_tagFirst__23->SetBinError(3,156.0475);
   CutFlow_evt_tagFirst__23->SetBinError(4,13.03363);
   CutFlow_evt_tagFirst__23->SetBinError(5,3.985227);
   CutFlow_evt_tagFirst__23->SetEntries(3.132805e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__23->SetLineColor(ci);
   CutFlow_evt_tagFirst__23->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__23->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__23->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__23->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__23->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__23->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__23->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__23->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__23->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__23->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__23->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__23->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__23->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__23->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__23->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__23->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__23->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__23->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__23->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__23->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WW_tagFirst_17->Modified();
   CutFlow_WW_tagFirst_17->cd();
   CutFlow_WW_tagFirst_17->SetSelected(CutFlow_WW_tagFirst_17);
}
