#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_SingleTop_tagFirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_SingleTop_tagFirst_17/CutFlow_SingleTop_tagFirst_17
//=========  (Mon Apr 22 15:12:11 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_SingleTop_tagFirst_17 = new TCanvas("CutFlow_SingleTop_tagFirst_17", "CutFlow_SingleTop_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_SingleTop_tagFirst_17->SetHighLightColor(2);
   CutFlow_SingleTop_tagFirst_17->Range(-1.2,3.463049,6.8,7.729892);
   CutFlow_SingleTop_tagFirst_17->SetFillColor(0);
   CutFlow_SingleTop_tagFirst_17->SetFillStyle(4000);
   CutFlow_SingleTop_tagFirst_17->SetBorderMode(0);
   CutFlow_SingleTop_tagFirst_17->SetBorderSize(2);
   CutFlow_SingleTop_tagFirst_17->SetLogy();
   CutFlow_SingleTop_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__20 = new TH1D("CutFlow_evt_tagFirst__20","",5,0,5);
   CutFlow_evt_tagFirst__20->SetBinContent(1,1.060862e+07);
   CutFlow_evt_tagFirst__20->SetBinContent(2,1.037981e+07);
   CutFlow_evt_tagFirst__20->SetBinContent(3,896560.2);
   CutFlow_evt_tagFirst__20->SetBinContent(4,63058.37);
   CutFlow_evt_tagFirst__20->SetBinContent(5,15515.42);
   CutFlow_evt_tagFirst__20->SetBinError(1,1006.912);
   CutFlow_evt_tagFirst__20->SetBinError(2,989.1527);
   CutFlow_evt_tagFirst__20->SetBinError(3,367.1691);
   CutFlow_evt_tagFirst__20->SetBinError(4,96.32186);
   CutFlow_evt_tagFirst__20->SetBinError(5,49.02299);
   CutFlow_evt_tagFirst__20->SetEntries(4.081256e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__20->SetLineColor(ci);
   CutFlow_evt_tagFirst__20->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__20->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__20->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__20->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__20->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__20->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__20->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__20->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__20->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__20->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__20->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__20->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__20->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__20->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__20->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__20->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__20->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__20->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__20->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__20->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_SingleTop_tagFirst_17->Modified();
   CutFlow_SingleTop_tagFirst_17->cd();
   CutFlow_SingleTop_tagFirst_17->SetSelected(CutFlow_SingleTop_tagFirst_17);
}
