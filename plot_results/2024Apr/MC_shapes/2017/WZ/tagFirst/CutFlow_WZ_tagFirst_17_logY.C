#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WZ_tagFirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_WZ_tagFirst_17/CutFlow_WZ_tagFirst_17
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WZ_tagFirst_17 = new TCanvas("CutFlow_WZ_tagFirst_17", "CutFlow_WZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WZ_tagFirst_17->SetHighLightColor(2);
   CutFlow_WZ_tagFirst_17->Range(-1.2,1.247217,6.8,7.101228);
   CutFlow_WZ_tagFirst_17->SetFillColor(0);
   CutFlow_WZ_tagFirst_17->SetFillStyle(4000);
   CutFlow_WZ_tagFirst_17->SetBorderMode(0);
   CutFlow_WZ_tagFirst_17->SetBorderSize(2);
   CutFlow_WZ_tagFirst_17->SetLogy();
   CutFlow_WZ_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_WZ_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_WZ_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_WZ_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_WZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__26 = new TH1D("CutFlow_evt_tagFirst__26","",5,0,5);
   CutFlow_evt_tagFirst__26->SetBinContent(1,1730925);
   CutFlow_evt_tagFirst__26->SetBinContent(2,1689960);
   CutFlow_evt_tagFirst__26->SetBinContent(3,43623.08);
   CutFlow_evt_tagFirst__26->SetBinContent(4,806.3315);
   CutFlow_evt_tagFirst__26->SetBinContent(5,136.0342);
   CutFlow_evt_tagFirst__26->SetBinError(1,616.2647);
   CutFlow_evt_tagFirst__26->SetBinError(2,608.9286);
   CutFlow_evt_tagFirst__26->SetBinError(3,97.83322);
   CutFlow_evt_tagFirst__26->SetBinError(4,13.30102);
   CutFlow_evt_tagFirst__26->SetBinError(5,5.463263);
   CutFlow_evt_tagFirst__26->SetEntries(1.579441e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__26->SetLineColor(ci);
   CutFlow_evt_tagFirst__26->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__26->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__26->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__26->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__26->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__26->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__26->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__26->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__26->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__26->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__26->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__26->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__26->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__26->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__26->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__26->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__26->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__26->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__26->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__26->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WZ_tagFirst_17->Modified();
   CutFlow_WZ_tagFirst_17->cd();
   CutFlow_WZ_tagFirst_17->SetSelected(CutFlow_WZ_tagFirst_17);
}
